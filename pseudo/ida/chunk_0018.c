//======================================================================
// sub_549B10
// entry 00549b10  size 226  status ok
//======================================================================

int __thiscall sub_549B10(_DWORD *this)
{
  int result; // eax
  int *v2; // eax
  int v3; // edx
  int v4; // eax
  _BYTE v6[8]; // [esp+14h] [ebp-14h] BYREF
  int v7; // [esp+1Ch] [ebp-Ch]
  int v8; // [esp+20h] [ebp-8h]
  int v9; // [esp+24h] [ebp-4h]

  if ( !(unsigned __int8)sub_549910(this) )
    sub_5E9F20((char)"CanAffordDoubleBet()", "..\\Casino\\videoblackjackstate.cpp", 703);
  v9 = *(this + 2);
  if ( *(this + 1) >= v9 )
    return sub_5D0A20(*(this + 1) - v9);
  if ( *(this + 1) )
  {
    v9 -= *(this + 1);
    sub_5D0A20(0);
  }
  v2 = (int *)sub_5D0C30(v6, v9);
  v3 = *v2;
  v4 = v2[1];
  v7 = v3;
  v8 = v4;
  result = sub_5D0D60(v9);
  if ( (_BYTE)result )
    return sub_5D1420(-v7, -v8);
  return result;
}


//======================================================================
// sub_549C00
// entry 00549c00  size 193  status ok
//======================================================================

int __thiscall sub_549C00(int this)
{
  _DWORD *v2; // [esp+4h] [ebp-1Ch]
  _DWORD *v4; // [esp+Ch] [ebp-14h]

  sub_549B10((_DWORD *)this);
  sub_545340(dword_793408);
  sub_5452A0(dword_793408);
  *(_DWORD *)(this + 88) = *(_DWORD *)(this + 84);
  *(_BYTE *)(this + 36) = 1;
  sub_545B40((_DWORD **)dword_793408, 1);
  v4 = operator new(0x28u);
  if ( v4 )
    v2 = sub_546EB0(v4);
  else
    v2 = 0;
  return sub_5FC420(v2);
}


//======================================================================
// sub_549CD0
// entry 00549cd0  size 132  status ok
//======================================================================

int __cdecl sub_549CD0()
{
  _DWORD *v1; // [esp+4h] [ebp-1Ch]
  _DWORD *v2; // [esp+Ch] [ebp-14h]

  v2 = operator new(0x24u);
  if ( v2 )
    v1 = sub_546BD0(v2);
  else
    v1 = 0;
  return sub_5FC420(v1);
}


//======================================================================
// sub_549D60
// entry 00549d60  size 141  status ok
//======================================================================

int __thiscall sub_549D60(_DWORD *this)
{
  _DWORD *v2; // [esp+4h] [ebp-1Ch]
  _DWORD *v3; // [esp+Ch] [ebp-14h]

  *(this + 8) = 0;
  v3 = operator new(0x24u);
  if ( v3 )
    v2 = sub_546DA0(v3);
  else
    v2 = 0;
  return sub_5FC420(v2);
}


//======================================================================
// sub_549DF0
// entry 00549df0  size 36  status ok
//======================================================================

bool __stdcall sub_549DF0(__int16 a1)
{
  return sub_641280(a1) == 14;
}


//======================================================================
// sub_549E20
// entry 00549e20  size 82  status ok
//======================================================================

int __stdcall sub_549E20(__int16 a1)
{
  int v2; // [esp+Ch] [ebp-4h]

  v2 = sub_641280(a1);
  if ( v2 >= 11 )
  {
    if ( v2 <= 13 )
    {
      return 10;
    }
    else if ( v2 == 14 )
    {
      return 11;
    }
  }
  return v2;
}


//======================================================================
// sub_549E80
// entry 00549e80  size 248  status ok
//======================================================================

int __thiscall sub_549E80(_WORD *this, int a2, char a3)
{
  int v5; // [esp+8h] [ebp-14h]
  int v6; // [esp+10h] [ebp-Ch]
  int i; // [esp+14h] [ebp-8h]
  int j; // [esp+14h] [ebp-8h]
  int v9; // [esp+18h] [ebp-4h]

  v9 = 0;
  v6 = 0;
  for ( i = a3 == 0; i < 6; ++i )
  {
    if ( *(this + 6 * a2 + i + 20) )
    {
      v5 = sub_641280(*(this + 6 * a2 + i + 20));
      if ( v5 >= 11 )
      {
        if ( v5 <= 13 )
        {
          v5 = 10;
        }
        else if ( v5 == 14 )
        {
          v5 = 11;
          ++v6;
        }
      }
      v9 += v5;
    }
  }
  if ( v9 > 21 )
  {
    for ( j = 0; j < v6; ++j )
    {
      v9 -= 10;
      if ( v9 <= 21 )
        break;
    }
  }
  return v9;
}


//======================================================================
// sub_549FA0
// entry 00549fa0  size 171  status ok
//======================================================================

int __thiscall sub_549FA0(_WORD *this, int a2)
{
  int v4; // [esp+8h] [ebp-10h]
  int i; // [esp+10h] [ebp-8h]
  int v6; // [esp+14h] [ebp-4h]

  v6 = 0;
  for ( i = 0; i < 6; ++i )
  {
    if ( *(this + 6 * a2 + i + 20) )
    {
      v4 = sub_641280(*(this + 6 * a2 + i + 20));
      if ( v4 >= 11 )
      {
        if ( v4 <= 13 )
        {
          v4 = 10;
        }
        else if ( v4 == 14 )
        {
          v4 = 1;
        }
      }
      v6 += v4;
    }
  }
  return v6;
}


//======================================================================
// sub_54A050
// entry 0054a050  size 99  status ok
//======================================================================

bool __thiscall sub_54A050(_WORD *this, int a2)
{
  int v4; // [esp+8h] [ebp-4h]

  if ( sub_548F80(this, a2) != 2 )
    return 0;
  v4 = sub_641280(*(this + 6 * a2 + 20));
  return v4 == sub_641280(*(this + 6 * a2 + 21));
}


//======================================================================
// sub_54A0C0
// entry 0054a0c0  size 71  status ok
//======================================================================

int __thiscall sub_54A0C0(_WORD *this, int a2, int a3)
{
  int v5; // [esp+8h] [ebp-4h]

  v5 = sub_641280(*(this + 6 * a2 + a3 + 20));
  if ( v5 <= 10 )
    return v5;
  else
    return 10;
}


//======================================================================
// sub_54A110
// entry 0054a110  size 79  status ok
//======================================================================

int __stdcall sub_54A110(int a1)
{
  int result; // eax

  switch ( a1 )
  {
    case 1:
      result = 3217207;
      break;
    case 2:
      result = 3217204;
      break;
    case 4:
      result = 3217206;
      break;
    case 6:
      result = 3217208;
      break;
    default:
      result = 3217205;
      break;
  }
  return result;
}


//======================================================================
// sub_54A180
// entry 0054a180  size 385  status ok
//======================================================================

int __thiscall sub_54A180(int this, int a2)
{
  int v3; // esi

  if ( a2 != 1 && a2 != 2 )
    sub_5E9F20(
      (char)"whichHand==VB_PLAYER_HAND1 || whichHand==VB_PLAYER_HAND2",
      "..\\Casino\\videoblackjackstate.cpp",
      895);
  if ( a2 == 2 && !*(_BYTE *)(this + 36) )
    return 0;
  if ( (unsigned __int8)sub_54A740(a2) )
    return 5;
  if ( (unsigned __int8)sub_54A6C0(0) && (unsigned __int8)sub_54A6C0(a2) )
    return 4;
  if ( (unsigned __int8)sub_54A6C0(a2) )
    return 1;
  if ( (unsigned __int8)sub_54A740(0) )
  {
    if ( (unsigned __int8)sub_54A920(a2) )
      return 6;
    else
      return 2;
  }
  else if ( (unsigned __int8)sub_54A7A0(a2) )
  {
    return 2;
  }
  else if ( (unsigned __int8)sub_54A920(a2) )
  {
    return 6;
  }
  else if ( (unsigned __int8)sub_54A7E0(a2) )
  {
    return 4;
  }
  else
  {
    if ( sub_549E80((_WORD *)this, a2, 1) > 21 )
      return 3;
    v3 = sub_549E80((_WORD *)this, a2, 1);
    if ( v3 <= sub_549E80((_WORD *)this, 0, 1) )
      return 3;
    else
      return 2;
  }
}


//======================================================================
// sub_54A310
// entry 0054a310  size 164  status ok
//======================================================================

int __thiscall sub_54A310(_WORD *this)
{
  int v2; // esi
  int v3; // esi

  if ( (unsigned __int8)sub_54A740(0) )
    return 5;
  if ( (unsigned __int8)sub_54A740(1) )
    return 2;
  if ( (unsigned __int8)sub_54A920(0) )
    return 6;
  v2 = sub_549E80(this, 1, 1);
  if ( v2 == sub_549E80(this, 0, 1) )
    return 4;
  v3 = sub_549E80(this, 1, 1);
  if ( v3 >= sub_549E80(this, 0, 1) )
    return 3;
  else
    return 2;
}


//======================================================================
// sub_54A3C0
// entry 0054a3c0  size 179  status ok
//======================================================================

int __thiscall sub_54A3C0(_DWORD *this)
{
  int v3; // [esp+10h] [ebp-Ch]
  int v4; // [esp+18h] [ebp-4h]

  v4 = sub_54A610(this);
  sub_5D0A20(v4 + *(this + 1));
  *(this + 2) = 0;
  sub_5452A0(dword_793408);
  v3 = *(this + 1);
  if ( v3 * sub_5D0AA0(this) > 100000000 )
  {
    sub_5D13E0(this);
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
  }
  sub_544D20(dword_793408);
  return sub_5451D0((_DWORD **)dword_793408);
}


//======================================================================
// sub_54A480
// entry 0054a480  size 100  status ok
//======================================================================

int sub_54A480()
{
  int *v0; // eax
  int v1; // edx
  _BYTE v3[8]; // [esp+4h] [ebp-18h] BYREF
  int v4; // [esp+Ch] [ebp-10h]
  int v5; // [esp+10h] [ebp-Ch]
  int v6; // [esp+14h] [ebp-8h]
  int v7; // [esp+18h] [ebp-4h]

  v0 = (int *)sub_5D0C30(v3, 1);
  v1 = v0[1];
  v4 = *v0;
  v5 = v1;
  if ( v4 % 2 )
    v7 = 50;
  else
    v7 = 0;
  v6 = v4 / 2;
  return sub_5D1420(v4 / 2, v7);
}


//======================================================================
// sub_54A4F0
// entry 0054a4f0  size 275  status ok
//======================================================================

int __thiscall sub_54A4F0(int this, int a2)
{
  int *v3; // eax
  int v4; // edx
  bool v5; // [esp+0h] [ebp-30h]
  int v7; // [esp+8h] [ebp-28h] BYREF
  int v8; // [esp+10h] [ebp-20h]
  int v9; // [esp+14h] [ebp-1Ch]
  bool v10; // [esp+1Bh] [ebp-15h]
  int v11; // [esp+1Ch] [ebp-14h]
  int v12; // [esp+20h] [ebp-10h]
  int v13; // [esp+24h] [ebp-Ch]
  double v14; // [esp+28h] [ebp-8h]

  v11 = sub_54A180(this, a2);
  v13 = 0;
  v12 = 0;
  v14 = sub_54A660(v11);
  v10 = 0;
  v12 = *(_DWORD *)(this + 4 * a2 + 80);
  if ( v11 == 4 )
    return v12;
  v5 = v11 == 5 || v11 == 3;
  v10 = v5;
  if ( !v5 )
  {
    v13 = v12 + (int)((double)v12 * v14);
    if ( 1.5 == v14 )
    {
      if ( v12 % 2 )
        sub_54A480();
    }
  }
  if ( a2 == 1 && (unsigned __int8)sub_54A6C0(0) )
  {
    if ( *(_BYTE *)(this + 37) )
    {
      v13 = v12;
      v3 = sub_548EF0((_DWORD *)this, &v7);
      v4 = v3[1];
      v8 = *v3;
      v9 = v4;
      sub_5D1420(v8, v4);
    }
  }
  return v13;
}


//======================================================================
// sub_54A610
// entry 0054a610  size 70  status ok
//======================================================================

int __thiscall sub_54A610(_BYTE *this)
{
  int v3; // [esp+4h] [ebp-8h]
  int v4; // [esp+8h] [ebp-4h]

  v3 = 0;
  v4 = sub_54A4F0((int)this, 1);
  if ( *(this + 36) )
    v3 = sub_54A4F0((int)this, 2);
  return v3 + v4;
}


//======================================================================
// sub_54A660
// entry 0054a660  size 68  status ok
//======================================================================

double __stdcall sub_54A660(int a1)
{
  double result; // st7

  switch ( a1 )
  {
    case 1:
      result = 1.5;
      break;
    case 2:
    case 4:
      result = 1.0;
      break;
    case 6:
      result = 2.0;
      break;
    default:
      result = 0.0;
      break;
  }
  return result;
}


//======================================================================
// sub_54A6C0
// entry 0054a6c0  size 124  status ok
//======================================================================

char __thiscall sub_54A6C0(int this, int a2)
{
  bool v3; // [esp+0h] [ebp-Ch]

  v3 = sub_549E80((_WORD *)this, a2, 1) == 21 && sub_548F80((_WORD *)this, a2) == 2;
  if ( a2 == 1 || a2 == 2 )
  {
    if ( v3 && !*(_BYTE *)(this + 36) )
      return 1;
  }
  else if ( v3 )
  {
    return 1;
  }
  return 0;
}


//======================================================================
// sub_54A740
// entry 0054a740  size 38  status ok
//======================================================================

bool __thiscall sub_54A740(_WORD *this, int a2)
{
  return sub_549E80(this, a2, 1) > 21;
}


//======================================================================
// sub_54A770
// entry 0054a770  size 37  status ok
//======================================================================

bool __thiscall sub_54A770(_WORD *this, int a2)
{
  return sub_549E80(this, a2, 1) == 21;
}


//======================================================================
// sub_54A7A0
// entry 0054a7a0  size 57  status ok
//======================================================================

bool __thiscall sub_54A7A0(_WORD *this, int a2)
{
  return !sub_54A770(this, 0) && sub_548F80(this, a2) == 6;
}


//======================================================================
// sub_54A7E0
// entry 0054a7e0  size 61  status ok
//======================================================================

bool __thiscall sub_54A7E0(_WORD *this, int a2)
{
  int v4; // [esp+4h] [ebp-8h]

  v4 = sub_549E80(this, a2, 1);
  return v4 == sub_549E80(this, 0, 1);
}


//======================================================================
// sub_54A830
// entry 0054a830  size 85  status ok
//======================================================================

bool __thiscall sub_54A830(_DWORD *this)
{
  int v1; // esi
  bool v5; // [esp+Fh] [ebp-5h]
  int v6; // [esp+10h] [ebp-4h]

  v6 = *(this + 1);
  v1 = sub_5D1470(this);
  v5 = v1 >= sub_5D0AA0(this);
  return v6 || v5;
}


//======================================================================
// sub_54A890
// entry 0054a890  size 31  status ok
//======================================================================

BOOL __thiscall sub_54A890(_DWORD *this)
{
  return *(this + 1) > 0;
}


//======================================================================
// sub_54A8B0
// entry 0054a8b0  size 100  status ok
//======================================================================

bool __thiscall sub_54A8B0(_DWORD *this)
{
  int v1; // esi
  bool v5; // [esp+Fh] [ebp-9h]
  int v6; // [esp+10h] [ebp-8h]
  int v7; // [esp+14h] [ebp-4h]

  v6 = *(this + 1);
  v7 = *(this + 2);
  v1 = sub_5D1470(this);
  v5 = v1 >= sub_5D0AA0(this);
  return !v6 && !v7 && !v5;
}


//======================================================================
// sub_54A920
// entry 0054a920  size 110  status ok
//======================================================================

bool __stdcall sub_54A920(int a1)
{
  if ( *(_DWORD *)(dword_7947E0 + 20244) != 1 )
    return 0;
  if ( (unsigned __int8)sub_54A990(a1) )
    return 1;
  if ( (unsigned __int8)sub_54A9D0(a1) )
    return 1;
  return (unsigned __int8)sub_54AA50(a1) != 0;
}


//======================================================================
// sub_54A990
// entry 0054a990  size 59  status ok
//======================================================================

bool __thiscall sub_54A990(_WORD *this, int a2)
{
  return sub_54A770(this, a2) && sub_548F80(this, a2) == 5;
}


//======================================================================
// sub_54A9D0
// entry 0054a9d0  size 124  status ok
//======================================================================

bool __thiscall sub_54A9D0(_WORD *this, int a2)
{
  if ( sub_548F80(this, a2) != 3 )
    return 0;
  return sub_641280(*(this + 6 * a2 + 20)) == 7
      && sub_641280(*(this + 6 * a2 + 21)) == 7
      && sub_641280(*(this + 6 * a2 + 22)) == 7;
}


//======================================================================
// sub_54AA50
// entry 0054aa50  size 454  status ok
//======================================================================

bool __thiscall sub_54AA50(_WORD *this, int a2)
{
  int v3; // esi
  int v4; // esi
  bool v5; // [esp+4h] [ebp-28h]
  bool v6; // [esp+8h] [ebp-24h]
  bool v7; // [esp+Ch] [ebp-20h]
  __int16 v10; // [esp+1Ch] [ebp-10h]
  __int16 v11; // [esp+20h] [ebp-Ch]
  __int16 v12; // [esp+28h] [ebp-4h]

  if ( sub_548F80(this, a2) != 3 )
    return 0;
  v10 = *(this + 6 * a2 + 20);
  v12 = *(this + 6 * a2 + 21);
  v11 = *(this + 6 * a2 + 22);
  v3 = sub_641290(v10);
  if ( v3 != sub_641290(v12) )
    return 0;
  v4 = sub_641290(v12);
  if ( v4 != sub_641290(v11) )
    return 0;
  v7 = sub_641280(v10) == 6 || sub_641280(v12) == 6 || sub_641280(v11) == 6;
  v6 = sub_641280(v10) == 7 || sub_641280(v12) == 7 || sub_641280(v11) == 7;
  v5 = sub_641280(v10) == 8 || sub_641280(v12) == 8 || sub_641280(v11) == 8;
  return v7 && v6 && v5;
}


//======================================================================
// sub_54AC20
// entry 0054ac20  size 86  status ok
//======================================================================

int __thiscall sub_54AC20(int this)
{
  if ( sub_54A740((_WORD *)this, *(_DWORD *)(this + 32)) )
    return sub_57AE30(dword_793578);
  sub_57AB80(6, &unk_73D790);
  sub_54AC80(dword_793404, this);
  return sub_54AD80(dword_793404);
}


//======================================================================
// sub_54AC80
// entry 0054ac80  size 254  status ok
//======================================================================

int __thiscall sub_54AC80(_DWORD *this)
{
  const char *v1; // eax
  const char *v2; // eax
  const char *v3; // eax
  const char *v4; // eax
  const char *v5; // eax
  char *v6; // eax
  char Destination[1028]; // [esp+4h] [ebp-408h] BYREF

  v1 = (const char *)sub_630F40("SID_VBLACKJACK_CHOOSEACTION");
  strcpy(Destination, v1);
  v2 = (const char *)sub_630F40("SID_VBLACKJACK_INSTRUCTIONS_HIT");
  strcat(Destination, v2);
  v3 = (const char *)sub_630F40("SID_VBLACKJACK_INSTRUCTIONS_STAND");
  strcat(Destination, v3);
  if ( sub_5497A0(this) )
  {
    v4 = (const char *)sub_630F40("SID_VBLACKJACK_INSTRUCTIONS_DOUBLEDOWN");
    strcat(Destination, v4);
  }
  if ( sub_549AD0(this) )
  {
    v5 = (const char *)sub_630F40("SID_VBLACKJACK_INSTRUCTIONS_SPLIT");
    strcat(Destination, v5);
  }
  v6 = (char *)sub_630F40("SID_SHELL_PLAY");
  return sub_57BE80(0, v6, Destination);
}


//======================================================================
// sub_54AD80
// entry 0054ad80  size 1112  status ok
//======================================================================

int __thiscall sub_54AD80(int this)
{
  const char *v1; // eax
  const char *v2; // eax
  const char *v3; // eax
  const char *v4; // eax
  const char *v5; // eax
  const char *v6; // eax
  const char *v7; // eax
  const char *v8; // eax
  const char *v9; // eax
  const char *v10; // eax
  int *v11; // eax
  int v12; // edx
  const char *v13; // eax
  const char *v14; // eax
  char *v15; // eax
  int v17; // [esp-18h] [ebp-680h]
  int v18; // [esp+0h] [ebp-668h]
  _BYTE v20[8]; // [esp+8h] [ebp-660h] BYREF
  char Destination[16]; // [esp+10h] [ebp-658h] BYREF
  char v22[512]; // [esp+20h] [ebp-648h] BYREF
  int v23; // [esp+220h] [ebp-448h]
  int v24; // [esp+224h] [ebp-444h]
  char Source[1028]; // [esp+228h] [ebp-440h] BYREF
  char Buffer[8]; // [esp+62Ch] [ebp-3Ch] BYREF
  __int16 v27; // [esp+634h] [ebp-34h]
  char v28; // [esp+63Bh] [ebp-2Dh]
  int v29; // [esp+63Ch] [ebp-2Ch] BYREF
  char v30[16]; // [esp+640h] [ebp-28h] BYREF
  char v31[16]; // [esp+650h] [ebp-18h] BYREF
  __int16 v32; // [esp+664h] [ebp-4h]

  v32 = sub_549E80((_WORD *)this, *(_DWORD *)(this + 32), 1);
  v28 = sub_549FA0((_WORD *)this, *(_DWORD *)(this + 32)) != v32;
  if ( (__int16)sub_641280(*(_WORD *)(this + 42)) == 14 )
    v27 = 11;
  else
    v27 = sub_54A0C0((_WORD *)this, 0, 1);
  if ( v32 >= 20 || v32 == 10 || v32 == 11 )
  {
    v1 = (const char *)sub_630F40("SID_VBLACKJACK_VERYSTRONG");
    strcpy(Destination, v1);
  }
  else if ( v32 >= 18 || v32 == 8 || v32 == 9 || v32 >= 12 && v32 <= 19 && v28 )
  {
    v2 = (const char *)sub_630F40("SID_VBLACKJACK_STRONG");
    strcpy(Destination, v2);
  }
  else if ( v32 == 17 || v32 == 12 || v32 == 7 )
  {
    v3 = (const char *)sub_630F40("SID_VBLACKJACK_NEUTRAL");
    strcpy(Destination, v3);
  }
  else if ( v32 > 6 )
  {
    if ( v32 < 13 || v32 > 16 )
    {
      sub_5E9F20((char)"false", "..\\Casino\\videoblackjackstate.cpp", 1296);
    }
    else
    {
      v5 = (const char *)sub_630F40("SID_VBLACKJACK_VERYWEAK");
      strcpy(Destination, v5);
    }
  }
  else
  {
    v4 = (const char *)sub_630F40("SID_VBLACKJACK_WEAK");
    strcpy(Destination, v4);
  }
  if ( v27 < 10 )
  {
    switch ( v27 )
    {
      case 8:
      case 9:
        v7 = (const char *)sub_630F40("SID_VBLACKJACK_STRONG");
        strcpy(v31, v7);
        break;
      case 7:
      case 2:
        v8 = (const char *)sub_630F40("SID_VBLACKJACK_NEUTRAL");
        strcpy(v31, v8);
        break;
      case 4:
      case 3:
        v9 = (const char *)sub_630F40("SID_VBLACKJACK_WEAK");
        strcpy(v31, v9);
        break;
      case 5:
      case 6:
        v10 = (const char *)sub_630F40("SID_VBLACKJACK_VERYWEAK");
        strcpy(v31, v10);
        break;
      default:
        sub_5E9F20((char)"false", "..\\Casino\\videoblackjackstate.cpp", 1309);
        break;
    }
  }
  else
  {
    v6 = (const char *)sub_630F40("SID_VBLACKJACK_VERYSTRONG");
    strcpy(v31, v6);
  }
  sub_54C000(v30, (int)&v29);
  sub_54B1E0(v22, v32, v27, v28);
  v11 = (int *)sub_54C170(v20, v29, v32, v27);
  v12 = v11[1];
  v23 = *v11;
  v23 += 39;
  v24 = v12 + 60;
  if ( v27 == 11 )
  {
    v13 = (const char *)sub_630F40("SID_VBLACKJACK_A");
    strcpy(Buffer, v13);
  }
  else
  {
    sprintf(Buffer, off_6B4E68, v27);
  }
  if ( v28 )
    v18 = sub_630F40("SID_VBLACKJACK_SOFT");
  else
    v18 = sub_630F40("SID_VBLACKJACK_HARD");
  v17 = v32;
  v14 = (const char *)sub_630F40("SID_VBLACKJACK_HANDSUMMARY_FORMAT");
  sprintf(Source, v14, v18, v17, Destination, Buffer, v31, v30, v22);
  v15 = (char *)sub_630F40("SID_VBLACKJACK_STRATEGY");
  sub_57BE80(1, v15, Source);
  return sub_57C0B0(1, v29, 5019, v23, v24);
}


//======================================================================
// sub_54B1E0
// entry 0054b1e0  size 3537  status ok
//======================================================================

char *__thiscall sub_54B1E0(_DWORD *this, char *Destination, __int16 a3, __int16 a4, char a5)
{
  const char *v5; // eax
  const char *v6; // eax
  char *result; // eax
  const char *v8; // eax
  const char *v9; // eax
  const char *v10; // eax
  const char *v11; // eax
  const char *v12; // eax
  const char *v13; // eax
  const char *v14; // eax
  const char *v15; // eax
  const char *v16; // eax
  const char *v17; // eax
  const char *v18; // eax
  const char *v19; // eax
  const char *v20; // eax
  const char *v21; // eax
  const char *v22; // eax
  const char *v23; // eax
  const char *v24; // eax
  const char *v25; // eax
  const char *v26; // eax
  const char *v27; // eax
  const char *v28; // eax
  const char *v29; // eax
  const char *v30; // eax
  const char *v31; // eax
  const char *v32; // eax
  const char *v33; // eax
  const char *v34; // eax
  const char *v35; // eax
  const char *v36; // eax
  const char *v37; // eax
  const char *v38; // eax
  const char *v39; // eax
  const char *v40; // eax
  const char *v41; // eax
  const char *v42; // eax
  const char *v43; // eax
  const char *v44; // eax
  const char *v45; // eax
  const char *v46; // eax
  const char *v47; // eax
  const char *v48; // eax
  bool v50; // [esp+9h] [ebp-3h]
  bool v51; // [esp+Bh] [ebp-1h]

  v50 = sub_549AD0(this);
  v51 = sub_5497A0(this);
  switch ( a3 )
  {
    case 4:
      if ( !v50 )
        goto LABEL_101;
      if ( a4 >= 8 )
        v5 = (const char *)sub_630F40("SID_VBLACKJACK_ACTION4_DEALERSTRONG");
      else
        v5 = (const char *)sub_630F40("SID_VBLACKJACK_ACTION4_DEALERWEAK");
      goto LABEL_159;
    case 5:
    case 7:
      goto LABEL_101;
    case 6:
      if ( !v50 )
        goto LABEL_101;
      if ( a4 >= 8 )
        v5 = (const char *)sub_630F40("SID_VBLACKJACK_ACTION6_DEALERSTRONG");
      else
        v5 = (const char *)sub_630F40("SID_VBLACKJACK_ACTION6_DEALERWEAK");
      goto LABEL_159;
    case 8:
      if ( !v50 )
        goto LABEL_101;
      if ( a4 <= 4 )
      {
        v6 = (const char *)sub_630F40("SID_VBLACKJACK_ACTION8_DEALERWEAK");
        return strcpy(Destination, v6);
      }
      if ( a4 > 6 )
        v5 = (const char *)sub_630F40("SID_VBLACKJACK_ACTION8_DEALERSTRONG");
      else
        v5 = (const char *)sub_630F40("SID_VBLACKJACK_ACTION8_DEALERVERYWEAK");
      goto LABEL_159;
    case 9:
      if ( !v51 || a4 < 3 || a4 > 6 )
        goto LABEL_101;
      v8 = (const char *)sub_630F40("SID_VBLACKJACK_ACTION9_DEALERWEAK");
      return strcpy(Destination, v8);
    case 10:
      if ( v50 )
      {
        if ( a4 > 9 )
          v5 = (const char *)sub_630F40("SID_VBLACKJACK_ACTION10_DEALERSTRONG");
        else
          v5 = (const char *)sub_630F40("SID_VBLACKJACK_ACTION10_DOUBLE");
      }
      else
      {
        if ( !v51 )
          goto LABEL_101;
        if ( a4 > 9 )
          v5 = (const char *)sub_630F40("SID_VBLACKJACK_ACTION10_DEALERVERYSTRONG");
        else
          v5 = (const char *)sub_630F40("SID_VBLACKJACK_ACTION10_STRONGHAND");
      }
      goto LABEL_159;
    case 11:
      if ( !v51 )
        goto LABEL_101;
      if ( a4 > 10 )
        v5 = (const char *)sub_630F40("SID_VBLACKJACK_ACTION11_DEALERSTRONG");
      else
        v5 = (const char *)sub_630F40("SID_VBLACKJACK_ACTION11_STRONGHAND");
      goto LABEL_159;
    case 12:
      if ( !a5 )
      {
        if ( v50 )
        {
          if ( a4 > 6 )
          {
            if ( a4 > 10 )
            {
              v11 = (const char *)sub_630F40("SID_VBLACKJACK_ACTION12_DEALERVERYSTRONG_DONTSPLIT");
              return strcpy(Destination, v11);
            }
            else
            {
              v10 = (const char *)sub_630F40("SID_VBLACKJACK_ACTION12_DEALERSTRONG_DONTSPLIT_FORMAT");
              return (char *)sprintf(Destination, v10, a4 + 10);
            }
          }
          else
          {
            v9 = (const char *)sub_630F40("SID_VBLACKJACK_ACTION12_DEALERWEAK");
            return strcpy(Destination, v9);
          }
        }
        else if ( a4 > 3 )
        {
          if ( a4 > 6 )
          {
            if ( a4 > 10 )
            {
              v15 = (const char *)sub_630F40("SID_VBLACKJACK_ACTION12_DEALERVERYSTRONG");
              return strcpy(Destination, v15);
            }
            else
            {
              v14 = (const char *)sub_630F40("SID_VBLACKJACK_ACTION12_DEALERSTRONG_FORMAT");
              return (char *)sprintf(Destination, v14, a4 + 10);
            }
          }
          else
          {
            v13 = (const char *)sub_630F40("SID_VBLACKJACK_ACTION12_DEALERWEAK_FORMAT");
            return (char *)sprintf(Destination, v13, a4 + 10);
          }
        }
        else
        {
          v12 = (const char *)sub_630F40("SID_VBLACKJACK_ACTION12_DEALERSTRONG_TAKEHIT_TRUECOUNTHIGH");
          return strcpy(Destination, v12);
        }
      }
      if ( !v50 )
        goto LABEL_107;
      v5 = (const char *)sub_630F40("SID_VBLACKJACK_ACTION12_SPLITACES");
      goto LABEL_159;
    case 13:
      if ( !a5 )
      {
        if ( a4 > 3 )
        {
          if ( a4 > 6 )
          {
            if ( a4 > 10 )
            {
              v20 = (const char *)sub_630F40("SID_VBLACKJACK_DEALERVERYSTRONG");
              return strcpy(Destination, v20);
            }
            else
            {
              v19 = (const char *)sub_630F40("SID_VBLACKJACK_DEALERSTRONG_FORMAT");
              return (char *)sprintf(Destination, v19, a4 + 10);
            }
          }
          else
          {
            v18 = (const char *)sub_630F40("SID_VBLACKJACK_ACTION13_DEALERWEAK_FORMAT");
            return (char *)sprintf(Destination, v18, a4 + 10);
          }
        }
        else
        {
          v17 = (const char *)sub_630F40("SID_VBLACKJACK_ACTION13_DEALERWEAK_TRUECOUNTLOW_FORMAT");
          return (char *)sprintf(Destination, v17, a4 + 10);
        }
      }
      if ( v51 && a4 == 5 || a4 == 6 )
      {
        v16 = (const char *)sub_630F40("SID_VBLACKJACK_ACTION13_DEALERWEAK_DOUBLEORHIT");
        return strcpy(Destination, v16);
      }
      goto LABEL_101;
    case 14:
      if ( !a5 )
      {
        if ( v50 )
        {
          if ( a4 > 7 )
          {
            if ( a4 > 10 )
            {
              v24 = (const char *)sub_630F40("SID_VBLACKJACK_ACTION14_DEALERVERYSTRONG_DONTSPLIT7");
              return strcpy(Destination, v24);
            }
            else
            {
              v23 = (const char *)sub_630F40("SID_VBLACKJACK_ACTION14_DEALERSTRONG_DONTSPLIT7_FORMAT");
              return (char *)sprintf(Destination, v23, a4 + 10);
            }
          }
          else
          {
            v22 = (const char *)sub_630F40("SID_VBLACKJACK_ACTION14_DEALERWEAK_SPLIT7");
            return strcpy(Destination, v22);
          }
        }
        else if ( a4 > 6 )
        {
          if ( a4 > 10 )
          {
            v27 = (const char *)sub_630F40("SID_VBLACKJACK_ACTION14_DEALERVERYSTRONG_HIT");
            return strcpy(Destination, v27);
          }
          else
          {
            v26 = (const char *)sub_630F40("SID_VBLACKJACK_ACTION14_DEALERSTRONG_HIT_FORMAT");
            return (char *)sprintf(Destination, v26, a4 + 10);
          }
        }
        else
        {
          v25 = (const char *)sub_630F40("SID_VBLACKJACK_ACTION14_DEALERWEAK_DONTHIT_FORMAT");
          return (char *)sprintf(Destination, v25, a4 + 10);
        }
      }
      if ( v51 && a4 == 5 || a4 == 6 )
      {
        v21 = (const char *)sub_630F40("SID_VBLACKJACK_ACTION14_DEALERWEAK_DOUBLEORHIT");
        return strcpy(Destination, v21);
      }
      goto LABEL_101;
    case 15:
      if ( !a5 )
      {
        if ( a4 > 6 )
        {
          if ( a4 > 10 )
          {
            v30 = (const char *)sub_630F40("SID_VBLACKJACK_ACTION15_DEALERVERYSTRONG_HIT");
            return strcpy(Destination, v30);
          }
          else
          {
            v29 = (const char *)sub_630F40("SID_VBLACKJACK_ACTION15_DEALERSTRONG_HIT_FORMAT");
            return (char *)sprintf(Destination, v29, a4 + 10);
          }
        }
        else
        {
          v28 = (const char *)sub_630F40("SID_VBLACKJACK_ACTION15_DEALERWEAK_DONTHIT_FORMAT");
          return (char *)sprintf(Destination, v28, a4 + 10);
        }
      }
      if ( a4 <= 3 )
        goto LABEL_101;
      if ( a4 <= 6 )
      {
        if ( !v51 )
          goto LABEL_107;
        v5 = (const char *)sub_630F40("SID_VBLACKJACK_ACTION15_DEALERVERYWEAK_DOUBLEORHIT");
        goto LABEL_159;
      }
      if ( !v51 )
        goto LABEL_107;
      goto LABEL_92;
    case 16:
      if ( !a5 )
      {
        if ( v50 )
        {
          v32 = (const char *)sub_630F40("SID_VBLACKJACK_ACTION16_AVOIDHAND");
          return strcpy(Destination, v32);
        }
        else if ( a4 > 6 )
        {
          if ( a4 >= 10 )
          {
            if ( a4 == 10 )
            {
              v35 = (const char *)sub_630F40("SID_VBLACKJACK_ACTION16_DEALERVERYSTRONG_MORE");
              return (char *)sprintf(Destination, v35, a4 + 10);
            }
            else
            {
              v36 = (const char *)sub_630F40("SID_VBLACKJACK_ACTION16_DEALERVERYSTRONG_HIT");
              return strcpy(Destination, v36);
            }
          }
          else
          {
            v34 = (const char *)sub_630F40("SID_VBLACKJACK_ACTION16_DEALERSTRONG_HIT_FORMAT");
            return (char *)sprintf(Destination, v34, a4 + 10);
          }
        }
        else
        {
          v33 = (const char *)sub_630F40("SID_VBLACKJACK_ACTION16_DEALERWEAK_DONTHIT_FORMAT");
          return (char *)sprintf(Destination, v33, a4 + 10);
        }
      }
      if ( a4 <= 3 )
      {
LABEL_101:
        v31 = (const char *)sub_630F40("SID_VBLACKJACK_NORISKOFBUSTING");
        return strcpy(Destination, v31);
      }
      if ( a4 > 6 )
      {
        if ( v51 )
        {
LABEL_92:
          v5 = (const char *)sub_630F40("SID_VBLACKJACK_NORISKOFBUSTING_DONTDOUBLE");
          goto LABEL_159;
        }
      }
      else if ( v51 )
      {
        v5 = (const char *)sub_630F40("SID_VBLACKJACK_ACTION16_DEALERVERYWEAK_DOUBLEORHIT");
        goto LABEL_159;
      }
LABEL_107:
      v5 = (const char *)sub_630F40("SID_VBLACKJACK_NORISKOFBUSTING");
      goto LABEL_159;
    case 17:
      if ( !a5 )
        goto LABEL_125;
      if ( a4 == 2 )
      {
        v37 = (const char *)sub_630F40("SID_VBLACKJACK_ACTION17_HIT");
        return strcpy(Destination, v37);
      }
      if ( a4 > 6 )
      {
        v38 = (const char *)sub_630F40("SID_VBLACKJACK_ACTION17_DEALERSTRONG");
        return strcpy(Destination, v38);
      }
      if ( v51 )
        v5 = (const char *)sub_630F40("SID_VBLACKJACK_ACTION17_DEALERWEAK_DOUBLEORHIT");
      else
        v5 = (const char *)sub_630F40("SID_VBLACKJACK_ACTION17_HIT");
      goto LABEL_159;
    case 18:
      if ( !a5 )
      {
        if ( !v50 )
        {
LABEL_125:
          v39 = (const char *)sub_630F40("SID_VBLACKJACK_GOODHAND_STAND");
          return strcpy(Destination, v39);
        }
        if ( a4 <= 6 )
        {
          v44 = (const char *)sub_630F40("SID_VBLACKJACK_ACTION18_DEALERWEAK_SPLIT");
          return strcpy(Destination, v44);
        }
        switch ( a4 )
        {
          case 7:
            v45 = (const char *)sub_630F40("SID_VBLACKJACK_ACTION18_DEALERWEAK_DONTSPLIT");
            return strcpy(Destination, v45);
          case 8:
            v46 = (const char *)sub_630F40("SID_VBLACKJACK_ACTION18_SPLIT9SFOR10S_ELSEPUSH");
            return strcpy(Destination, v46);
          case 9:
            v5 = (const char *)sub_630F40("SID_VBLACKJACK_ACTION18_SPLIT9SFOR10S_ELSELOSS");
            break;
          default:
            v5 = (const char *)sub_630F40("SID_VBLACKJACK_ACTION18_DEALERVERYSTONG_STAND");
            break;
        }
        goto LABEL_159;
      }
      if ( a4 == 2 )
      {
        v40 = (const char *)sub_630F40("SID_VBLACKJACK_ACTION18_DONTHIT");
        return strcpy(Destination, v40);
      }
      if ( a4 <= 6 )
      {
        if ( v51 )
          v5 = (const char *)sub_630F40("SID_VBLACKJACK_ACTION18_DEALERWEAK_DOUBLEORSTAND");
        else
          v5 = (const char *)sub_630F40("SID_VBLACKJACK_ACTION18_DEALERWEAK_DONTHIT");
        goto LABEL_159;
      }
      if ( a4 > 8 )
      {
        if ( a4 > 10 )
        {
          v43 = (const char *)sub_630F40("SID_VBLACKJACK_ACTION18_ONEHIT");
          result = strcpy(Destination, v43);
        }
        else
        {
          v42 = (const char *)sub_630F40("SID_VBLACKJACK_ACTION18_ONEHIT_FORMAT");
          result = (char *)sprintf(Destination, v42, a4 + 10);
        }
      }
      else
      {
        if ( v51 )
          v41 = (const char *)sub_630F40("SID_VBLACKJACK_ACTION18_SOFT_DONTDOUBLE_FORMAT");
        else
          v41 = (const char *)sub_630F40("SID_VBLACKJACK_ACTION18_SOFT_FORMAT");
        result = (char *)sprintf(Destination, v41, a4 + 10);
      }
      break;
    case 19:
      if ( !a5 )
        goto LABEL_160;
      v5 = (const char *)sub_630F40("SID_VBLACKJACK_ACTION19_DONTHIT");
      goto LABEL_159;
    case 20:
      if ( a5 )
      {
        v47 = (const char *)sub_630F40("SID_VBLACKJACK_ACTION20_DONTHIT");
        result = strcpy(Destination, v47);
      }
      else
      {
        if ( v50 )
          v5 = (const char *)sub_630F40("SID_VBLACKJACK_ACTION20_DONTSPLIT");
        else
LABEL_160:
          v5 = (const char *)sub_630F40("SID_VBLACKJACK_GOODHAND_STAND");
LABEL_159:
        result = strcpy(Destination, v5);
      }
      break;
    case 21:
      v48 = (const char *)sub_630F40("SID_VBLACKJACK_ACTION21");
      return strcpy(Destination, v48);
    default:
      return (char *)sub_5E9F20((char)"false", "..\\Casino\\videoblackjackstate.cpp", 1611);
  }
  return result;
}


//======================================================================
// sub_54C000
// entry 0054c000  size 346  status ok
//======================================================================

char *__thiscall sub_54C000(int this, char *Destination, char *a3)
{
  const char *v3; // eax
  char *result; // eax
  const char *v5; // eax
  const char *v6; // eax
  const char *v7; // eax
  bool v9; // [esp+Bh] [ebp-5h]
  int v10; // [esp+Ch] [ebp-4h]

  v10 = sub_549E80((_WORD *)this, *(_DWORD *)(this + 32), 1);
  v9 = sub_549FA0((_WORD *)this, *(_DWORD *)(this + 32)) != v10;
  switch ( sub_542A00((void *)dword_79340C, *(void **)(this + 32)) )
  {
    case 1:
      v5 = (const char *)sub_630F40("SID_VIDEOBLACKJACK_HIT");
      result = strcpy(Destination, v5);
      if ( v9 )
      {
        *(_DWORD *)a3 = 5045;
        result = a3;
      }
      else
      {
        *(_DWORD *)a3 = 5044;
      }
      break;
    case 2:
      v3 = (const char *)sub_630F40("SID_VIDEOBLACKJACK_STAND");
      result = strcpy(Destination, v3);
      if ( v9 )
      {
        *(_DWORD *)a3 = 5045;
      }
      else
      {
        *(_DWORD *)a3 = 5044;
        result = a3;
      }
      break;
    case 3:
      v6 = (const char *)sub_630F40("SID_VIDEOBLACKJACK_DOUBLEDOWN");
      strcpy(Destination, v6);
      result = (char *)v9;
      if ( v9 )
        *(_DWORD *)a3 = 5043;
      else
        *(_DWORD *)a3 = 5048;
      break;
    case 4:
      v7 = (const char *)sub_630F40("SID_VIDEOBLACKJACK_SPLIT");
      result = strcpy(Destination, v7);
      *(_DWORD *)a3 = 5046;
      break;
    default:
      result = (char *)sub_5E9F20((char)"false", "..\\Casino\\videoblackjackstate.cpp", 1649);
      break;
  }
  return result;
}


//======================================================================
// sub_54C170
// entry 0054c170  size 556  status ok
//======================================================================

_DWORD *__stdcall sub_54C170(_DWORD *a1, int a2, __int16 a3, __int16 a4)
{
  __int16 v5; // [esp+Ch] [ebp-Ch]

  v5 = 0;
  switch ( a2 )
  {
    case 5043:
      if ( a3 < 19 )
      {
        if ( a3 < 17 )
        {
          if ( a3 < 15 )
          {
            if ( a3 < 13 )
              sub_5E9F20((char)"false", "..\\Casino\\videoblackjackstate.cpp", 1670);
            else
              v5 = 3;
          }
          else
          {
            v5 = 2;
          }
        }
        else
        {
          v5 = 1;
        }
      }
      else
      {
        v5 = 0;
      }
      break;
    case 5044:
      if ( a3 < 17 )
      {
        if ( a3 < 13 )
        {
          if ( a3 == 12 )
          {
            v5 = 2;
          }
          else if ( a3 < 4 )
          {
            sub_5E9F20((char)"false", "..\\Casino\\videoblackjackstate.cpp", 1709);
          }
          else
          {
            v5 = 3;
          }
        }
        else
        {
          v5 = 1;
        }
      }
      else
      {
        v5 = 0;
      }
      break;
    case 5045:
      if ( a3 < 19 )
      {
        if ( a3 == 18 )
        {
          v5 = 1;
        }
        else if ( a3 < 12 )
        {
          sub_5E9F20((char)"false", "..\\Casino\\videoblackjackstate.cpp", 1697);
        }
        else
        {
          v5 = 2;
        }
      }
      else
      {
        v5 = 0;
      }
      break;
    case 5046:
      v5 = 10 - a3 / 2 + 1;
      break;
    case 5048:
      switch ( a3 )
      {
        case 12:
          v5 = 0;
          break;
        case 11:
          v5 = 1;
          break;
        case 10:
          v5 = 2;
          break;
        case 9:
          v5 = 3;
          break;
        case 8:
          v5 = 4;
          break;
        default:
          sub_5E9F20((char)"false", "..\\Casino\\videoblackjackstate.cpp", 1684);
          break;
      }
      break;
    default:
      sub_5E9F20((char)"false", "..\\Casino\\videoblackjackstate.cpp", 1712);
      break;
  }
  *a1 = 14 * (__int16)(a4 - 2);
  a1[1] = 18 * v5;
  return a1;
}


//======================================================================
// sub_54C3F0
// entry 0054c3f0  size 99  status ok
//======================================================================

int __thiscall sub_54C3F0(int this)
{
  int i; // [esp+4h] [ebp-4h]

  ATL::CCRTHeap::CCRTHeap((ATL::CCRTHeap *)this);
  *(_DWORD *)this = &VideoPokerAI::`vftable';
  *(_BYTE *)(this + 25) = 0;
  *(_DWORD *)(this + 16) = -1;
  for ( i = 0; i < 5; ++i )
  {
    *(_WORD *)(this + 2 * i + 4) = 0;
    *(_BYTE *)(i + this + 20) = -1;
  }
  return this;
}


//======================================================================
// sub_54C460
// entry 0054c460  size 169  status ok
//======================================================================

int __thiscall sub_54C460(_WORD *this, int a2, int a3)
{
  int result; // eax
  int i; // [esp+10h] [ebp-4h]

  for ( i = 0; i < 5; ++i )
    *(this + i + 2) = *(_WORD *)(a3 + 2 * i);
  switch ( *(_DWORD *)(dword_7947E0 + 20244) )
  {
    case 0:
    case 1:
      result = sub_54D050(this);
      break;
    case 2:
      result = sub_54D090(this);
      break;
    case 3:
    case 4:
      result = sub_54D1C0(this);
      break;
    case 5:
    case 6:
    case 7:
      result = sub_54D200(this);
      break;
    case 8:
    case 9:
      result = sub_54D360(this);
      break;
    case 0xA:
      result = sub_54D520(this);
      break;
    default:
      result = -1;
      break;
  }
  return result;
}


//======================================================================
// sub_54C540
// entry 0054c540  size 73  status ok
//======================================================================

int __thiscall sub_54C540(_WORD *this)
{
  int v2; // [esp+4h] [ebp-8h]
  int i; // [esp+8h] [ebp-4h]

  v2 = 0;
  for ( i = 0; i < 5; ++i )
  {
    if ( *(this + i + 2) )
      ++v2;
  }
  return v2;
}


//======================================================================
// sub_54C590
// entry 0054c590  size 143  status ok
//======================================================================

int __stdcall sub_54C590(__int16 a1)
{
  int v2; // [esp+14h] [ebp-4h]

  v2 = sub_641280(a1);
  if ( v2 == 15 )
    return 20;
  if ( v2 == 2
    && (*(_DWORD *)(dword_7947E0 + 20244) == 5
     || *(_DWORD *)(dword_7947E0 + 20244) == 6
     || *(_DWORD *)(dword_7947E0 + 20244) == 7
     || *(_DWORD *)(dword_7947E0 + 20244) == 10) )
  {
    return 20;
  }
  return v2;
}


//======================================================================
// sub_54C620
// entry 0054c620  size 68  status ok
//======================================================================

bool __thiscall sub_54C620(__int16 *this)
{
  return (unsigned __int8)sub_54C670(this) && sub_641280(*(this + 2)) == 10;
}


//======================================================================
// sub_54C670
// entry 0054c670  size 62  status ok
//======================================================================

bool __thiscall sub_54C670(void *this)
{
  return (unsigned __int8)sub_54C780(this) && (unsigned __int8)sub_54C710(this);
}


//======================================================================
// sub_54C6B0
// entry 0054c6b0  size 29  status ok
//======================================================================

bool __thiscall sub_54C6B0(void *this)
{
  return sub_54CE10(this, this) == 4;
}


//======================================================================
// sub_54C6D0
// entry 0054c6d0  size 57  status ok
//======================================================================

bool __thiscall sub_54C6D0(void *this)
{
  return sub_54CE10(this) == 3 && sub_54C8A0(this);
}


//======================================================================
// sub_54C710
// entry 0054c710  size 100  status ok
//======================================================================

char __thiscall sub_54C710(__int16 *this)
{
  int v3; // [esp+4h] [ebp-8h]
  int i; // [esp+8h] [ebp-4h]

  v3 = sub_641290(*(this + 2));
  for ( i = 1; i < sub_54C540(this); ++i )
  {
    if ( sub_641290(*(this + i + 2)) != v3 )
      return 0;
  }
  return 1;
}


//======================================================================
// sub_54C780
// entry 0054c780  size 146  status ok
//======================================================================

char __thiscall sub_54C780(__int16 *this)
{
  int v3; // [esp+4h] [ebp-8h]
  int i; // [esp+8h] [ebp-4h]

  v3 = sub_641280(*(this + 2));
  for ( i = 1; i < sub_54C540(this); ++i )
  {
    if ( sub_641280(*(this + i + 2)) != ++v3 && (i != 4 || v3 != 6 || sub_641280(*(this + 6)) != 14) )
      return 0;
  }
  return 1;
}


//======================================================================
// sub_54C820
// entry 0054c820  size 29  status ok
//======================================================================

bool __thiscall sub_54C820(void *this)
{
  return sub_54CE10(this) == 3;
}


//======================================================================
// sub_54C840
// entry 0054c840  size 81  status ok
//======================================================================

BOOL sub_54C840()
{
  int v1; // [esp+4h] [ebp-8h]
  int i; // [esp+8h] [ebp-4h]

  v1 = 0;
  for ( i = 2; i < 15; ++i )
  {
    if ( sub_54CF20(i) == 2 )
      ++v1;
  }
  return v1 == 2;
}


//======================================================================
// sub_54C8A0
// entry 0054c8a0  size 63  status ok
//======================================================================

int sub_54C8A0()
{
  int i; // [esp+4h] [ebp-4h]

  for ( i = 2; i < 15; ++i )
  {
    if ( sub_54CF20(i) == 2 )
      return i;
  }
  return 0;
}


//======================================================================
// sub_54C8E0
// entry 0054c8e0  size 129  status ok
//======================================================================

int __thiscall sub_54C8E0(_WORD *this)
{
  int i; // eax
  int v2; // eax
  int v5; // [esp+4h] [ebp-4h]

  v5 = 0;
  for ( i = sub_54C540(this); v5 < i; i = sub_54C540(this) )
  {
    if ( sub_54C590(*(this + v5 + 2)) != 20 )
    {
      v2 = sub_641280(*(this + v5 + 2));
      if ( sub_54CF20(v2) == 2 )
        return sub_641280(*(this + v5 + 2));
    }
    ++v5;
  }
  return 0;
}


//======================================================================
// sub_54C970
// entry 0054c970  size 31  status ok
//======================================================================

bool sub_54C970()
{
  return sub_54CF20(2) == 4;
}


//======================================================================
// sub_54C990
// entry 0054c990  size 123  status ok
//======================================================================

bool __thiscall sub_54C990(_WORD *this)
{
  int i; // [esp+4h] [ebp-4h]

  if ( (unsigned __int8)sub_54CAA0(this) )
  {
    for ( i = 0; i < sub_54C540(this); ++i )
    {
      if ( sub_54C590(*(this + i + 2)) != 20 )
        return sub_641280(*(this + i + 2)) >= 10;
    }
  }
  return 0;
}


//======================================================================
// sub_54CA10
// entry 0054ca10  size 139  status ok
//======================================================================

bool __thiscall sub_54CA10(_WORD *this)
{
  if ( !sub_54CEC0(this) )
    return 0;
  if ( sub_54CEC0(this) >= 4 )
    return 1;
  if ( sub_54CEC0(this) == 3 && sub_54C8E0(this) )
    return 1;
  if ( sub_54CEC0(this) == 2 && sub_54C820(this) )
    return 1;
  return sub_54CEC0(this) == 1 && sub_54C6B0(this);
}


//======================================================================
// sub_54CAA0
// entry 0054caa0  size 62  status ok
//======================================================================

bool __thiscall sub_54CAA0(void *this)
{
  return (unsigned __int8)sub_54CBF0(this) && (unsigned __int8)sub_54CCB0(this);
}


//======================================================================
// sub_54CAE0
// entry 0054cae0  size 199  status ok
//======================================================================

bool __thiscall sub_54CAE0(_WORD *this)
{
  int v2; // eax
  int i; // [esp+4h] [ebp-4h]

  if ( !sub_54CEC0(this) )
    return 0;
  if ( sub_54CEC0(this) >= 3 )
    return 1;
  if ( sub_54CEC0(this) != 2 )
    return sub_54CEC0(this) == 1 && sub_54C820(this);
  for ( i = 0; i < sub_54C540(this); ++i )
  {
    if ( sub_54C590(*(this + i + 2)) != 20 )
    {
      v2 = sub_641280(*(this + i + 2));
      if ( sub_54CF20(v2) == 2 )
        return 1;
    }
  }
  return 0;
}


//======================================================================
// sub_54CBB0
// entry 0054cbb0  size 61  status ok
//======================================================================

bool __thiscall sub_54CBB0(void *this)
{
  if ( !sub_54CEC0(this) )
    return 0;
  return sub_54CEC0(this) == 1 && sub_54C840();
}


//======================================================================
// sub_54CBF0
// entry 0054cbf0  size 187  status ok
//======================================================================

char __thiscall sub_54CBF0(_WORD *this)
{
  int v3; // [esp+4h] [ebp-8h]
  int i; // [esp+8h] [ebp-4h]

  v3 = -2;
  if ( !sub_54CEC0(this) )
    return 0;
  for ( i = 0; i < sub_54C540(this); ++i )
  {
    if ( v3 == -2 )
    {
      if ( sub_54C590(*(this + i + 2)) != 20 )
        v3 = sub_641290(*(this + i + 2));
    }
    else if ( sub_54C590(*(this + i + 2)) != 20 && sub_641290(*(this + i + 2)) != v3 )
    {
      return 0;
    }
  }
  return 1;
}


//======================================================================
// sub_54CCB0
// entry 0054ccb0  size 262  status ok
//======================================================================

bool __thiscall sub_54CCB0(_WORD *this)
{
  int v2; // eax
  int v3; // eax
  int v4; // eax
  int v5; // [esp+0h] [ebp-24h]
  _WORD *v6; // [esp+4h] [ebp-20h]
  _DWORD v7[4]; // [esp+8h] [ebp-1Ch] BYREF
  int v8; // [esp+18h] [ebp-Ch]
  int i; // [esp+1Ch] [ebp-8h]
  int v10; // [esp+20h] [ebp-4h]

  v6 = this;
  memset(v7, 0, sizeof(v7));
  v8 = sub_54CEC0(this);
  v10 = 0;
  if ( !v8 )
    return 0;
  if ( v8 >= 4 )
    return 1;
  for ( i = 0; ; ++i )
  {
    v2 = sub_54C540(v6);
    if ( i >= v2 )
      break;
    if ( sub_54C590(v6[i + 2]) != 20 )
    {
      v3 = sub_641280(v6[i + 2]);
      if ( (int)sub_54CF20(v3) > 1 )
        return 0;
      v4 = sub_54C590(v6[i + 2]);
      v7[v10++] = v4;
    }
  }
  return v7[v10 - 1] == 14 && *(&v5 + v10) <= 5 || v7[0] + 4 >= v7[v10 - 1];
}


//======================================================================
// sub_54CDC0
// entry 0054cdc0  size 68  status ok
//======================================================================

bool __thiscall sub_54CDC0(void *this)
{
  int v2; // [esp+4h] [ebp-4h]

  v2 = sub_54CEC0(this);
  if ( !v2 )
    return 0;
  if ( sub_54C8A0() && v2 == 1 )
    return 1;
  return v2 == 2;
}


//======================================================================
// sub_54CE10
// entry 0054ce10  size 176  status ok
//======================================================================

int __thiscall sub_54CE10(__int16 *this)
{
  int v3; // [esp+4h] [ebp-10h]
  int v4; // [esp+8h] [ebp-Ch]
  int v5; // [esp+Ch] [ebp-8h]
  int i; // [esp+10h] [ebp-4h]

  v4 = 1;
  v5 = 1;
  v3 = sub_641280(*(this + 2));
  for ( i = 1; i < sub_54C540(this); ++i )
  {
    if ( sub_641280(*(this + i + 2)) == v3 )
    {
      ++v4;
    }
    else
    {
      if ( v4 > v5 )
        v5 = v4;
      v4 = 1;
      v3 = sub_641280(*(this + i + 2));
    }
  }
  if ( v4 > v5 )
    return v4;
  return v5;
}


//======================================================================
// sub_54CEC0
// entry 0054cec0  size 90  status ok
//======================================================================

int __thiscall sub_54CEC0(_WORD *this)
{
  int i; // eax
  int v4; // [esp+4h] [ebp-8h]
  int v5; // [esp+8h] [ebp-4h]

  v4 = 0;
  v5 = 0;
  for ( i = sub_54C540(this); v5 < i; i = sub_54C540(this) )
  {
    if ( sub_54C590(*(this + v5 + 2)) == 20 )
      ++v4;
    ++v5;
  }
  return v4;
}


//======================================================================
// sub_54CF20
// entry 0054cf20  size 92  status ok
//======================================================================

int __thiscall sub_54CF20(_WORD *this, int a2)
{
  int i; // eax
  int v5; // [esp+4h] [ebp-8h]
  int v6; // [esp+8h] [ebp-4h]

  v5 = 0;
  v6 = 0;
  for ( i = sub_54C540(this); v6 < i; i = sub_54C540(this) )
  {
    if ( sub_641280(*(this + v6 + 2)) == a2 )
      ++v5;
    ++v6;
  }
  return v5;
}


//======================================================================
// sub_54CF80
// entry 0054cf80  size 193  status ok
//======================================================================

int __thiscall sub_54CF80(__int16 *this)
{
  if ( sub_54C620(this) )
    return 0;
  if ( sub_54C670(this) )
    return 1;
  if ( sub_54C6B0(this) )
    return 2;
  if ( sub_54C6D0(this) )
    return 3;
  if ( sub_54C710(this) )
    return 4;
  if ( sub_54C780(this) )
    return 5;
  if ( sub_54C820(this) )
    return 6;
  if ( sub_54C840() )
    return 7;
  return -1;
}


//======================================================================
// sub_54D050
// entry 0054d050  size 53  status ok
//======================================================================

int __thiscall sub_54D050(__int16 *this)
{
  int v2; // [esp+4h] [ebp-4h]

  v2 = sub_54CF80(this);
  if ( v2 == -1 && sub_54C8A0() >= 11 )
    return 8;
  else
    return v2;
}


//======================================================================
// sub_54D090
// entry 0054d090  size 296  status ok
//======================================================================

int __thiscall sub_54D090(__int16 *this)
{
  if ( sub_54C620(this) )
    return 0;
  if ( sub_54C670(this) )
    return 1;
  if ( sub_54C6B0(this) )
  {
    if ( sub_54CF20(this, 14) == 4 )
    {
      return 2;
    }
    else if ( sub_54CF20(this, 13) == 4 || sub_54CF20(this, 12) == 4 || sub_54CF20(this, 11) == 4 )
    {
      return 3;
    }
    else
    {
      return 4;
    }
  }
  else if ( sub_54C6D0(this) )
  {
    return 5;
  }
  else if ( sub_54C710(this) )
  {
    return 6;
  }
  else if ( sub_54C780(this) )
  {
    return 7;
  }
  else if ( sub_54C820(this) )
  {
    return 8;
  }
  else if ( sub_54C840() )
  {
    return 9;
  }
  else if ( sub_54C8A0() < 11 )
  {
    return -1;
  }
  else
  {
    return 10;
  }
}


//======================================================================
// sub_54D1C0
// entry 0054d1c0  size 53  status ok
//======================================================================

int __thiscall sub_54D1C0(__int16 *this)
{
  int v2; // [esp+4h] [ebp-4h]

  v2 = sub_54CF80(this);
  if ( v2 == -1 && sub_54C8A0() >= 10 )
    return 8;
  else
    return v2;
}


//======================================================================
// sub_54D200
// entry 0054d200  size 339  status ok
//======================================================================

int __thiscall sub_54D200(__int16 *this)
{
  if ( sub_54C620(this) )
    return 0;
  if ( sub_54C970() )
    return 1;
  if ( sub_54C990(this) )
    return 2;
  if ( sub_54CA10(this) )
    return 3;
  if ( sub_54C670(this) || sub_54CAA0(this) )
    return 4;
  if ( sub_54C6B0(this) || sub_54CAE0(this) )
    return 5;
  if ( sub_54C6D0(this) || sub_54CBB0(this) )
    return 6;
  if ( sub_54C710(this) || sub_54CBF0(this) )
    return 7;
  if ( sub_54C780(this) || sub_54CCB0(this) )
    return 8;
  if ( sub_54C820(this) || sub_54CDC0(this) )
    return 9;
  return -1;
}


//======================================================================
// sub_54D360
// entry 0054d360  size 436  status ok
//======================================================================

int __thiscall sub_54D360(__int16 *this)
{
  if ( sub_54C620(this) )
    return 0;
  if ( sub_54CA10(this) )
    return 1;
  if ( sub_54C990(this) )
    return 2;
  if ( sub_54C670(this) || sub_54CAA0(this) )
    return 3;
  if ( sub_54C6B0(this) || sub_54CAE0(this) )
    return 4;
  if ( sub_54C6D0(this) || sub_54CBB0(this) )
    return 5;
  if ( sub_54C710(this) || sub_54CBF0(this) )
    return 6;
  if ( sub_54C780(this) || sub_54CCB0(this) )
    return 7;
  if ( sub_54C820(this) || sub_54CDC0(this) )
    return 8;
  if ( sub_54C840() )
    return 9;
  if ( *(_DWORD *)(dword_7947E0 + 20244) != 8 )
    return -1;
  if ( sub_54C8A0() >= 13 )
    return 10;
  if ( sub_54CEC0(this) == 1 && (sub_54CF20(this, 13) || sub_54CF20(this, 14)) )
    return 10;
  else
    return -1;
}


//======================================================================
// sub_54D520
// entry 0054d520  size 377  status ok
//======================================================================

int __thiscall sub_54D520(__int16 *this)
{
  if ( sub_54C970() && sub_54CEC0(this) == 5 )
    return 0;
  if ( sub_54C620(this) )
    return 1;
  if ( sub_54C970() )
    return 2;
  if ( sub_54C990(this) )
    return 3;
  if ( sub_54CA10(this) )
    return 4;
  if ( sub_54C670(this) || sub_54CAA0(this) )
    return 5;
  if ( sub_54C6B0(this) || sub_54CAE0(this) )
    return 6;
  if ( sub_54C6D0(this) || sub_54CBB0(this) )
    return 7;
  if ( sub_54C710(this) || sub_54CBF0(this) )
    return 8;
  if ( sub_54C780(this) || sub_54CCB0(this) )
    return 9;
  if ( sub_54C820(this) || sub_54CDC0(this) )
    return 10;
  return -1;
}


//======================================================================
// sub_54D6A0
// entry 0054d6a0  size 128  status ok
//======================================================================

char __thiscall sub_54D6A0(int this, int a2, int a3)
{
  int v3; // eax
  int i; // [esp+Ch] [ebp-4h]

  for ( i = 0; i < 5; ++i )
    *(_WORD *)(this + 2 * i + 4) = *(_WORD *)(a3 + 2 * i);
  *(_BYTE *)(this + 25) = 0;
  sub_551960(this);
  v3 = sub_54C460((_WORD *)this, *(_DWORD *)(dword_7947E0 + 20244), this + 4);
  sub_54D720(v3);
  return *(_BYTE *)(this + 25);
}


//======================================================================
// sub_54D720
// entry 0054d720  size 138  status ok
//======================================================================

int __thiscall sub_54D720(_DWORD *this, int a2)
{
  int result; // eax

  *(this + 4) = a2;
  result = dword_7947E0;
  switch ( *(_DWORD *)(dword_7947E0 + 20244) )
  {
    case 0:
      result = sub_550410(this);
      break;
    case 1:
      result = sub_5507F0(this);
      break;
    case 2:
      result = sub_550BD0(this);
      break;
    case 3:
    case 4:
      result = sub_54FFD0(this);
      break;
    case 5:
    case 6:
    case 7:
      result = sub_54F5A0(this);
      break;
    case 8:
      result = sub_54EB80(this);
      break;
    case 9:
      result = sub_54E3E0(this);
      break;
    case 0xA:
      result = sub_54D7E0(this);
      break;
    default:
      return result;
  }
  return result;
}


//======================================================================
// sub_54D7E0
// entry 0054d7e0  size 3011  status ok
//======================================================================

int __thiscall sub_54D7E0(int this)
{
  int result; // eax
  int v2; // eax
  int v3; // eax
  int v4; // esi
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int i1; // [esp+10h] [ebp-Ch]
  int i; // [esp+14h] [ebp-8h]
  int j; // [esp+14h] [ebp-8h]
  int i5; // [esp+14h] [ebp-8h]
  int i6; // [esp+14h] [ebp-8h]
  int i7; // [esp+14h] [ebp-8h]
  int i8; // [esp+14h] [ebp-8h]
  int i9; // [esp+14h] [ebp-8h]
  int i10; // [esp+14h] [ebp-8h]
  int i11; // [esp+14h] [ebp-8h]
  int i12; // [esp+14h] [ebp-8h]
  int i13; // [esp+14h] [ebp-8h]
  int k; // [esp+14h] [ebp-8h]
  int m; // [esp+14h] [ebp-8h]
  int n; // [esp+14h] [ebp-8h]
  int ii; // [esp+14h] [ebp-8h]
  int jj; // [esp+14h] [ebp-8h]
  int kk; // [esp+14h] [ebp-8h]
  int mm; // [esp+14h] [ebp-8h]
  int nn; // [esp+14h] [ebp-8h]
  int i3; // [esp+14h] [ebp-8h]
  int i4; // [esp+14h] [ebp-8h]
  int i2; // [esp+14h] [ebp-8h]
  int v32; // [esp+18h] [ebp-4h]

  v32 = 0;
  sub_551960(this);
  if ( !sub_54CEC0((_WORD *)this) )
  {
    if ( (unsigned __int8)sub_551330(4, 10, 11) )
      return sub_5519A0(2);
    if ( *(int *)(this + 16) > -1 )
    {
      switch ( *(_DWORD *)(this + 16) )
      {
        case 1:
        case 5:
        case 7:
        case 8:
        case 9:
          goto LABEL_6;
        case 6:
          sub_5519A0(19);
          break;
        case 0xA:
          break;
        default:
          goto LABEL_14;
      }
      sub_5519A0(39);
      for ( i = 0; ; ++i )
      {
        result = sub_54C540((_WORD *)this);
        if ( i >= result )
          break;
        v2 = sub_641280(*(_WORD *)(this + 2 * i + 4));
        if ( sub_54CF20((_WORD *)this, v2) > 1 )
        {
          *(_BYTE *)(v32 + this + 20) = i;
          ++v32;
        }
      }
      return result;
    }
LABEL_14:
    if ( (unsigned __int8)sub_551330(4, 1, 11) )
      return sub_5519A0(9);
    if ( (unsigned __int8)sub_551330(3, 10, 11) )
      return sub_5519A0(5);
    if ( (unsigned __int8)sub_5515D0(this) )
      return sub_5519A0(35);
    if ( sub_54C840() )
    {
      for ( j = 0; j < sub_54C540((_WORD *)this); ++j )
      {
        v3 = sub_641280(*(_WORD *)(this + 2 * j + 4));
        if ( sub_54CF20((_WORD *)this, v3) == 2 )
        {
          *(_BYTE *)(v32 + this + 20) = j;
          ++v32;
        }
      }
      return sub_5519A0(42);
    }
    if ( (unsigned __int8)sub_551330(3, 1, 11) )
    {
      v4 = sub_641280(*(_WORD *)(this + 2 * *(char *)(this + 20) + 4)) + 4;
      if ( v4 != sub_641280(*(_WORD *)(this + 2 * *(char *)(this + 22) + 4)) )
        return sub_5519A0(12);
      sub_551960(this);
    }
    if ( (unsigned __int8)sub_551890(this) )
      return sub_5519A0(46);
    if ( (unsigned __int8)sub_551670(4, 1, 11) )
      return sub_5519A0(23);
    return sub_551960(this);
  }
  if ( *(int *)(this + 16) <= -1 )
  {
LABEL_107:
    if ( sub_54CEC0((_WORD *)this) == 2 && (unsigned __int8)sub_551330(2, 10, 11)
      || sub_54CEC0((_WORD *)this) == 1 && (unsigned __int8)sub_551330(3, 10, 11) )
    {
      sub_5519A0(3);
      for ( k = 0; k < 5; ++k )
      {
        if ( *(char *)(k + this + 20) == -1 )
        {
          v32 = k;
          break;
        }
      }
      for ( m = 0; ; ++m )
      {
        result = sub_54C540((_WORD *)this);
        if ( m >= result )
          break;
        if ( sub_54C590(*(_WORD *)(this + 2 * m + 4)) == 20 )
        {
          *(_BYTE *)(v32 + this + 20) = m;
          ++v32;
        }
      }
    }
    else
    {
      sub_551960(this);
      if ( sub_54CEC0((_WORD *)this) == 1 && (unsigned __int8)sub_551330(3, 1, 11) )
      {
        sub_5519A0(10);
        for ( n = 0; n < 5; ++n )
        {
          if ( *(char *)(n + this + 20) == -1 )
          {
            v32 = n;
            break;
          }
        }
        for ( ii = 0; ; ++ii )
        {
          result = sub_54C540((_WORD *)this);
          if ( ii >= result )
            break;
          if ( sub_54C590(*(_WORD *)(this + 2 * ii + 4)) == 20 )
          {
            *(_BYTE *)(v32 + this + 20) = ii;
            ++v32;
          }
        }
      }
      else
      {
        sub_551960(this);
        if ( sub_54CEC0((_WORD *)this) == 1 && (unsigned __int8)sub_551330(2, 10, 11) )
        {
          sub_5519A0(6);
          for ( jj = 0; jj < 5; ++jj )
          {
            if ( *(char *)(jj + this + 20) == -1 )
            {
              v32 = jj;
              break;
            }
          }
          for ( kk = 0; ; ++kk )
          {
            result = sub_54C540((_WORD *)this);
            if ( kk >= result )
              break;
            if ( sub_54C590(*(_WORD *)(this + 2 * kk + 4)) == 20 )
            {
              *(_BYTE *)(v32 + this + 20) = kk;
              ++v32;
            }
          }
        }
        else
        {
          sub_551960(this);
          if ( sub_54CEC0((_WORD *)this) == 1 && (unsigned __int8)sub_551670(3, 1, 11) )
          {
            sub_5519A0(34);
            for ( mm = 0; ; ++mm )
            {
              result = sub_54C540((_WORD *)this);
              if ( mm >= result )
                break;
              result = sub_54C590(*(_WORD *)(this + 2 * mm + 4));
              if ( result == 20 )
              {
                *(_BYTE *)(this + 23) = mm;
                return result;
              }
            }
          }
          else
          {
            sub_551960(this);
            if ( sub_54CEC0((_WORD *)this) == 1 )
            {
              for ( nn = 1; nn <= 4; ++nn )
              {
                if ( (unsigned __int8)sub_5510D0(nn, 3) )
                {
                  sub_5519A0(36);
                  for ( i1 = 0; ; ++i1 )
                  {
                    result = sub_54C540((_WORD *)this);
                    if ( i1 >= result )
                      break;
                    if ( sub_641290(*(_WORD *)(this + 2 * i1 + 4)) == nn
                      || sub_54C590(*(_WORD *)(this + 2 * i1 + 4)) == 20 )
                    {
                      *(_BYTE *)(v32 + this + 20) = i1;
                      ++v32;
                    }
                  }
                  return result;
                }
              }
            }
            if ( sub_54CEC0((_WORD *)this) != 1 || !(unsigned __int8)sub_551330(2, 1, 11) )
            {
              for ( i2 = 0; i2 < sub_54C540((_WORD *)this); ++i2 )
              {
                if ( sub_54C590(*(_WORD *)(this + 2 * i2 + 4)) == 20 )
                {
                  *(_BYTE *)(v32 + this + 20) = i2;
                  ++v32;
                }
              }
              if ( v32 )
                return sub_5519A0(49);
              return sub_551960(this);
            }
            sub_5519A0(17);
            for ( i3 = 0; i3 < 5; ++i3 )
            {
              if ( *(char *)(i3 + this + 20) == -1 )
              {
                v32 = i3;
                break;
              }
            }
            for ( i4 = 0; ; ++i4 )
            {
              result = sub_54C540((_WORD *)this);
              if ( i4 >= result )
                break;
              if ( sub_54C590(*(_WORD *)(this + 2 * i4 + 4)) == 20 )
              {
                *(_BYTE *)(v32 + this + 20) = i4;
                ++v32;
              }
            }
          }
        }
      }
    }
  }
  else
  {
    switch ( *(_DWORD *)(this + 16) )
    {
      case 0:
      case 1:
      case 3:
      case 5:
      case 7:
      case 8:
      case 9:
LABEL_6:
        sub_5519A0(1);
        return sub_551920(this);
      case 2:
        sub_5519A0(22);
        for ( i5 = 0; ; ++i5 )
        {
          result = sub_54C540((_WORD *)this);
          if ( i5 >= result )
            break;
          if ( sub_54C590(*(_WORD *)(this + 2 * i5 + 4)) == 20 )
          {
            *(_BYTE *)(v32 + this + 20) = i5;
            ++v32;
          }
        }
        return result;
      case 4:
        if ( sub_54CEC0((_WORD *)this) == 4 )
          sub_5519A0(22);
        else
          sub_5519A0(1);
        if ( sub_54CEC0((_WORD *)this) == 4 )
        {
          for ( i6 = 0; ; ++i6 )
          {
            result = sub_54C540((_WORD *)this);
            if ( i6 >= result )
              break;
            if ( sub_54C590(*(_WORD *)(this + 2 * i6 + 4)) == 20 )
            {
              *(_BYTE *)(v32 + this + 20) = i6;
              ++v32;
            }
          }
        }
        else
        {
          for ( i7 = 0; ; ++i7 )
          {
            result = sub_54C540((_WORD *)this);
            if ( i7 >= result )
              break;
            v5 = sub_641280(*(_WORD *)(this + 2 * i7 + 4));
            if ( sub_54CF20((_WORD *)this, v5) > 1 || sub_54C590(*(_WORD *)(this + 2 * i7 + 4)) == 20 )
            {
              *(_BYTE *)(v32 + this + 20) = i7;
              ++v32;
            }
          }
        }
        return result;
      case 6:
        if ( sub_54CEC0((_WORD *)this) == 3 )
          sub_5519A0(41);
        else
          sub_5519A0(21);
        if ( sub_54CEC0((_WORD *)this) == 3 )
        {
          for ( i8 = 0; ; ++i8 )
          {
            result = sub_54C540((_WORD *)this);
            if ( i8 >= result )
              break;
            if ( sub_54C590(*(_WORD *)(this + 2 * i8 + 4)) == 20 )
            {
              *(_BYTE *)(v32 + this + 20) = i8;
              ++v32;
            }
          }
        }
        else
        {
          for ( i9 = 0; ; ++i9 )
          {
            result = sub_54C540((_WORD *)this);
            if ( i9 >= result )
              break;
            v6 = sub_641280(*(_WORD *)(this + 2 * i9 + 4));
            if ( sub_54CF20((_WORD *)this, v6) > 1 || sub_54C590(*(_WORD *)(this + 2 * i9 + 4)) == 20 )
            {
              *(_BYTE *)(v32 + this + 20) = i9;
              ++v32;
            }
          }
        }
        return result;
      case 0xA:
        if ( sub_54CEC0((_WORD *)this) == 2 && (unsigned __int8)sub_551330(2, 10, 11)
          || sub_54CEC0((_WORD *)this) == 1 && (unsigned __int8)sub_551330(3, 10, 11) )
        {
          sub_5519A0(3);
          for ( i10 = 0; ; ++i10 )
          {
            if ( i10 >= 5 )
              goto LABEL_87;
            if ( *(char *)(i10 + this + 20) == -1 )
              break;
          }
          v32 = i10;
LABEL_87:
          for ( i11 = 0; ; ++i11 )
          {
            result = sub_54C540((_WORD *)this);
            if ( i11 >= result )
              break;
            if ( sub_54C590(*(_WORD *)(this + 2 * i11 + 4)) == 20 )
            {
              *(_BYTE *)(v32 + this + 20) = i11;
              ++v32;
            }
          }
          return result;
        }
        sub_551960(this);
        if ( sub_54CEC0((_WORD *)this) == 2 )
        {
          sub_5519A0(47);
          for ( i12 = 0; ; ++i12 )
          {
            result = sub_54C540((_WORD *)this);
            if ( i12 >= result )
              break;
            if ( sub_54C590(*(_WORD *)(this + 2 * i12 + 4)) == 20 )
            {
              *(_BYTE *)(v32 + this + 20) = i12;
              ++v32;
            }
          }
        }
        else
        {
          sub_5519A0(40);
          for ( i13 = 0; ; ++i13 )
          {
            result = sub_54C540((_WORD *)this);
            if ( i13 >= result )
              break;
            v7 = sub_641280(*(_WORD *)(this + 2 * i13 + 4));
            if ( sub_54CF20((_WORD *)this, v7) > 1 || sub_54C590(*(_WORD *)(this + 2 * i13 + 4)) == 20 )
            {
              *(_BYTE *)(v32 + this + 20) = i13;
              ++v32;
            }
          }
        }
        break;
      default:
        goto LABEL_107;
    }
  }
  return result;
}


//======================================================================
// sub_54E3E0
// entry 0054e3e0  size 1887  status ok
//======================================================================

char __thiscall sub_54E3E0(int this)
{
  int v1; // eax
  int v2; // eax
  int v3; // eax
  int nn; // [esp+Ch] [ebp-Ch]
  int i1; // [esp+10h] [ebp-8h]
  int mm; // [esp+10h] [ebp-8h]
  int i; // [esp+10h] [ebp-8h]
  int kk; // [esp+10h] [ebp-8h]
  int j; // [esp+10h] [ebp-8h]
  int k; // [esp+10h] [ebp-8h]
  int m; // [esp+10h] [ebp-8h]
  int n; // [esp+10h] [ebp-8h]
  int ii; // [esp+10h] [ebp-8h]
  int jj; // [esp+10h] [ebp-8h]
  int v17; // [esp+14h] [ebp-4h]

  v17 = 0;
  sub_551960(this);
  if ( sub_54CEC0((_WORD *)this) )
  {
    if ( (unsigned __int8)sub_551330(3, 10, 11) )
    {
      sub_5519A0(4);
      for ( i = 0; ; ++i )
      {
        v1 = sub_54C540((_WORD *)this);
        if ( i >= v1 )
          break;
        if ( sub_54C590(*(_WORD *)(this + 2 * i + 4)) == 20 )
        {
          *(_BYTE *)(this + 23) = i;
          LOBYTE(v1) = i;
          return v1;
        }
      }
    }
    else if ( *(int *)(this + 16) <= -1 )
    {
LABEL_74:
      if ( (unsigned __int8)sub_551330(3, 1, 11) )
      {
        if ( sub_54CEC0((_WORD *)this) == 1 )
        {
          for ( j = 0; j < sub_54C540((_WORD *)this); ++j )
          {
            if ( sub_54C590(*(_WORD *)(this + 2 * j + 4)) == 20 )
            {
              sub_5519A0(10);
              *(_BYTE *)(this + 23) = j;
              LOBYTE(v1) = this;
              return v1;
            }
          }
        }
        sub_551960(this);
      }
      if ( (unsigned __int8)sub_551330(2, 10, 11) )
      {
        for ( k = 0; k < sub_54C540((_WORD *)this); ++k )
        {
          if ( sub_54C590(*(_WORD *)(this + 2 * k + 4)) == 20 )
          {
            LOBYTE(v1) = sub_5519A0(6);
            *(_BYTE *)(this + 22) = k;
            return v1;
          }
        }
      }
      if ( (unsigned __int8)sub_551330(2, 1, 11) )
      {
        for ( m = 0; m < sub_54C540((_WORD *)this); ++m )
        {
          if ( sub_54C590(*(_WORD *)(this + 2 * m + 4)) == 20 )
          {
            sub_5519A0(17);
            *(_BYTE *)(this + 22) = m;
            LOBYTE(v1) = m;
            return v1;
          }
        }
      }
      if ( (unsigned __int8)sub_551670(3, 1, 11) )
      {
        for ( n = 0; n < sub_54C540((_WORD *)this); ++n )
        {
          if ( sub_54C590(*(_WORD *)(this + 2 * n + 4)) == 20 )
          {
            sub_5519A0(34);
            *(_BYTE *)(this + 23) = n;
            LOBYTE(v1) = this;
            return v1;
          }
        }
      }
      for ( ii = sub_54C540((_WORD *)this) - 1; ii > -1; --ii )
      {
        if ( sub_54C590(*(_WORD *)(this + 2 * ii + 4)) == 20 )
        {
          *(_BYTE *)(v17 + this + 20) = ii;
          ++v17;
        }
      }
      for ( jj = sub_54C540((_WORD *)this) - 1; jj > -1; --jj )
      {
        if ( sub_54C590(*(_WORD *)(this + 2 * jj + 4)) != 20 && (int)sub_641280(*(_WORD *)(this + 2 * jj + 4)) > 10 )
        {
          sub_5519A0(44);
          *(_BYTE *)(v17 + this + 20) = jj;
          LOBYTE(v1) = v17 + 1;
          return v1;
        }
      }
      LOBYTE(v1) = sub_5519A0(49);
    }
    else
    {
      switch ( *(_DWORD *)(this + 16) )
      {
        case 0:
        case 1:
        case 2:
        case 3:
        case 5:
        case 6:
        case 7:
LABEL_6:
          sub_5519A0(1);
          LOBYTE(v1) = sub_551920(this);
          return v1;
        case 4:
          sub_5519A0(20);
          goto LABEL_66;
        case 8:
LABEL_66:
          sub_5519A0(40);
          break;
        case 0xA:
          break;
        default:
          goto LABEL_74;
      }
      sub_5519A0(44);
      for ( kk = 0; ; ++kk )
      {
        v1 = sub_54C540((_WORD *)this);
        if ( kk >= v1 )
          break;
        v3 = sub_641280(*(_WORD *)(this + 2 * kk + 4));
        if ( sub_54CF20((_WORD *)this, v3) > 1 || sub_54C590(*(_WORD *)(this + 2 * kk + 4)) == 20 )
        {
          *(_BYTE *)(v17 + this + 20) = kk;
          ++v17;
        }
      }
    }
  }
  else if ( (unsigned __int8)sub_551330(4, 10, 11) )
  {
    LOBYTE(v1) = sub_5519A0(2);
  }
  else if ( *(int *)(this + 16) <= -1 )
  {
LABEL_15:
    if ( (unsigned __int8)sub_551330(4, 1, 11) )
    {
      LOBYTE(v1) = sub_5519A0(9);
    }
    else if ( (unsigned __int8)sub_551330(3, 10, 11) )
    {
      LOBYTE(v1) = sub_5519A0(5);
    }
    else
    {
      if ( (unsigned __int8)sub_551330(3, 1, 11) )
      {
        if ( (unsigned __int8)sub_5519E0(this) )
        {
          LOBYTE(v1) = sub_5519A0(13);
          return v1;
        }
        sub_551960(this);
      }
      if ( (unsigned __int8)sub_5515D0(this) )
      {
        LOBYTE(v1) = sub_5519A0(35);
      }
      else if ( (unsigned __int8)sub_551890(this) )
      {
        LOBYTE(v1) = sub_5519A0(46);
      }
      else
      {
        if ( (unsigned __int8)sub_551330(3, 1, 11) )
        {
          if ( !(unsigned __int8)sub_551B50(*(char *)(this + 20), *(char *)(this + 22)) )
          {
            LOBYTE(v1) = sub_5519A0(14);
            return v1;
          }
          sub_551960(this);
        }
        if ( (unsigned __int8)sub_551670(4, 1, 11) )
        {
          if ( (unsigned __int8)sub_5519E0(this) )
          {
            LOBYTE(v1) = sub_5519A0(24);
            return v1;
          }
          sub_551960(this);
        }
        if ( (unsigned __int8)sub_551330(3, 1, 11) )
        {
          LOBYTE(v1) = sub_5519A0(15);
        }
        else if ( (unsigned __int8)sub_551330(2, 10, 11) )
        {
          LOBYTE(v1) = sub_5519A0(7);
        }
        else if ( (unsigned __int8)sub_551670(4, 1, 11) )
        {
          LOBYTE(v1) = sub_5519A0(25);
        }
        else
        {
          if ( (unsigned __int8)sub_551330(2, 1, 11) )
          {
            if ( (unsigned __int8)sub_5519E0(this) )
            {
              LOBYTE(v1) = sub_5519A0(18);
              return v1;
            }
            sub_551960(this);
          }
          for ( mm = 1; ; ++mm )
          {
            if ( mm > 4 )
            {
              LOBYTE(v1) = sub_551960(this);
              return v1;
            }
            if ( (unsigned __int8)sub_5510D0(mm, 3) )
              break;
          }
          sub_5519A0(38);
          for ( nn = 0; ; ++nn )
          {
            v1 = sub_54C540((_WORD *)this);
            if ( nn >= v1 )
              break;
            if ( sub_641290(*(_WORD *)(this + 2 * nn + 4)) == mm )
            {
              *(_BYTE *)(v17 + this + 20) = nn;
              ++v17;
            }
          }
        }
      }
    }
  }
  else
  {
    switch ( *(_DWORD *)(this + 16) )
    {
      case 0:
      case 3:
      case 5:
      case 6:
      case 7:
        goto LABEL_6;
      case 4:
        sub_5519A0(19);
        goto LABEL_8;
      case 8:
LABEL_8:
        sub_5519A0(39);
        break;
      case 9:
        break;
      default:
        goto LABEL_15;
    }
    sub_5519A0(42);
    for ( i1 = 0; ; ++i1 )
    {
      v1 = sub_54C540((_WORD *)this);
      if ( i1 >= v1 )
        break;
      v2 = sub_641280(*(_WORD *)(this + 2 * i1 + 4));
      if ( sub_54CF20((_WORD *)this, v2) > 1 )
      {
        *(_BYTE *)(v17 + this + 20) = i1;
        ++v17;
      }
    }
  }
  return v1;
}


//======================================================================
// sub_54EB80
// entry 0054eb80  size 2526  status ok
//======================================================================

int __thiscall sub_54EB80(int this)
{
  int result; // eax
  int v2; // eax
  int v3; // eax
  int v4; // eax
  int m; // [esp+Ch] [ebp-Ch]
  int i1; // [esp+Ch] [ebp-Ch]
  int i5; // [esp+10h] [ebp-8h]
  int i; // [esp+10h] [ebp-8h]
  int i3; // [esp+10h] [ebp-8h]
  int v11; // [esp+10h] [ebp-8h]
  int i4; // [esp+10h] [ebp-8h]
  int j; // [esp+10h] [ebp-8h]
  int k; // [esp+10h] [ebp-8h]
  int n; // [esp+10h] [ebp-8h]
  int ii; // [esp+10h] [ebp-8h]
  int jj; // [esp+10h] [ebp-8h]
  int kk; // [esp+10h] [ebp-8h]
  int mm; // [esp+10h] [ebp-8h]
  int nn; // [esp+10h] [ebp-8h]
  int i2; // [esp+10h] [ebp-8h]
  int v22; // [esp+14h] [ebp-4h]

  v22 = 0;
  sub_551960(this);
  if ( sub_54CEC0((_WORD *)this) )
  {
    if ( (unsigned __int8)sub_551330(3, 10, 11) )
    {
      for ( i = 0; i < sub_54C540((_WORD *)this); ++i )
      {
        if ( sub_54C590(*(_WORD *)(this + 2 * i + 4)) == 20 )
        {
          *(_BYTE *)(this + 23) = i;
          return sub_5519A0(4);
        }
      }
      return sub_5519A0(4);
    }
    else if ( *(int *)(this + 16) <= -1 )
    {
LABEL_77:
      if ( (unsigned __int8)sub_551330(3, 1, 11) )
      {
        for ( j = 0; j < sub_54C540((_WORD *)this); ++j )
        {
          if ( sub_54C590(*(_WORD *)(this + 2 * j + 4)) == 20 )
          {
            sub_5519A0(10);
            *(_BYTE *)(this + 23) = j;
            return this;
          }
        }
        sub_551960(this);
      }
      for ( k = 1; k <= 4; ++k )
      {
        if ( (unsigned __int8)sub_5510D0(k, 3)
          && ((unsigned __int8)sub_551040(k, 13) || (unsigned __int8)sub_551040(k, 14)) )
        {
          sub_5519A0(37);
          for ( m = 0; ; ++m )
          {
            result = sub_54C540((_WORD *)this);
            if ( m >= result )
              break;
            if ( sub_641290(*(_WORD *)(this + 2 * m + 4)) == k || sub_54C590(*(_WORD *)(this + 2 * m + 4)) == 20 )
            {
              *(_BYTE *)(v22 + this + 20) = m;
              ++v22;
            }
          }
          return result;
        }
      }
      if ( (unsigned __int8)sub_551330(2, 10, 11) )
      {
        for ( n = 0; n < sub_54C540((_WORD *)this); ++n )
        {
          if ( sub_54C590(*(_WORD *)(this + 2 * n + 4)) == 20 )
          {
            sub_5519A0(6);
            *(_BYTE *)(this + 22) = n;
            return this;
          }
        }
      }
      if ( (unsigned __int8)sub_551330(2, 1, 11) )
      {
        for ( ii = 0; ii < sub_54C540((_WORD *)this); ++ii )
        {
          if ( sub_54C590(*(_WORD *)(this + 2 * ii + 4)) == 20 )
          {
            result = sub_5519A0(17);
            *(_BYTE *)(this + 22) = ii;
            return result;
          }
        }
      }
      if ( (unsigned __int8)sub_550FD0(14) )
      {
        sub_5519A0(44);
        for ( jj = 0; ; ++jj )
        {
          result = sub_54C540((_WORD *)this);
          if ( jj >= result )
            break;
          if ( sub_641280(*(_WORD *)(this + 2 * jj + 4)) == 14 || sub_54C590(*(_WORD *)(this + 2 * jj + 4)) == 20 )
          {
            *(_BYTE *)(v22 + this + 20) = jj;
            ++v22;
          }
        }
      }
      else if ( (unsigned __int8)sub_550FD0(13) )
      {
        for ( kk = 0; kk < sub_54C540((_WORD *)this); ++kk )
        {
          if ( sub_641280(*(_WORD *)(this + 2 * kk + 4)) == 13 || sub_54C590(*(_WORD *)(this + 2 * kk + 4)) == 20 )
          {
            *(_BYTE *)(v22 + this + 20) = kk;
            ++v22;
          }
        }
        return sub_5519A0(44);
      }
      else
      {
        if ( (unsigned __int8)sub_551670(3, 1, 11) )
        {
          for ( mm = 0; mm < sub_54C540((_WORD *)this); ++mm )
          {
            if ( sub_54C590(*(_WORD *)(this + 2 * mm + 4)) == 20 )
            {
              *(_BYTE *)(this + 23) = mm;
              return sub_5519A0(34);
            }
          }
        }
        for ( nn = 1; nn <= 4; ++nn )
        {
          if ( (unsigned __int8)sub_5510D0(nn, 3) )
          {
            for ( i1 = 0; i1 < sub_54C540((_WORD *)this); ++i1 )
            {
              if ( sub_641290(*(_WORD *)(this + 2 * i1 + 4)) == nn || sub_54C590(*(_WORD *)(this + 2 * i1 + 4)) == 20 )
              {
                *(_BYTE *)(v22 + this + 20) = i1;
                ++v22;
              }
            }
            return sub_5519A0(36);
          }
        }
        for ( i2 = 0; i2 < sub_54C540((_WORD *)this); ++i2 )
        {
          if ( sub_54C590(*(_WORD *)(this + 2 * i2 + 4)) == 20 )
          {
            *(_BYTE *)(v22 + this + 20) = i2;
            ++v22;
          }
        }
        return sub_5519A0(49);
      }
    }
    else
    {
      switch ( *(_DWORD *)(this + 16) )
      {
        case 0:
        case 1:
        case 2:
        case 3:
        case 5:
        case 6:
        case 7:
LABEL_6:
          sub_5519A0(1);
          return sub_551920(this);
        case 4:
          sub_5519A0(20);
          for ( i3 = 0; ; ++i3 )
          {
            result = sub_54C540((_WORD *)this);
            if ( i3 >= result )
              break;
            if ( sub_54C590(*(_WORD *)(this + 2 * i3 + 4)) != 20 )
            {
              v3 = sub_641280(*(_WORD *)(this + 2 * i3 + 4));
              if ( sub_54CF20((_WORD *)this, v3) <= 1 )
                continue;
            }
            *(_BYTE *)(v22 + this + 20) = i3;
            ++v22;
          }
          return result;
        case 8:
          if ( !(unsigned __int8)sub_551330(3, 1, 11) )
            goto LABEL_70;
          v11 = 0;
          break;
        default:
          goto LABEL_77;
      }
      while ( v11 < sub_54C540((_WORD *)this) )
      {
        if ( sub_54C590(*(_WORD *)(this + 2 * v11 + 4)) == 20 )
        {
          result = sub_5519A0(10);
          *(_BYTE *)(this + 23) = v11;
          return result;
        }
        ++v11;
      }
      sub_551960(this);
LABEL_70:
      sub_5519A0(40);
      for ( i4 = 0; ; ++i4 )
      {
        result = sub_54C540((_WORD *)this);
        if ( i4 >= result )
          break;
        if ( sub_54C590(*(_WORD *)(this + 2 * i4 + 4)) != 20 )
        {
          v4 = sub_641280(*(_WORD *)(this + 2 * i4 + 4));
          if ( sub_54CF20((_WORD *)this, v4) <= 1 )
            continue;
        }
        *(_BYTE *)(v22 + this + 20) = i4;
        ++v22;
      }
    }
  }
  else
  {
    if ( (unsigned __int8)sub_551330(4, 10, 11) )
      return sub_5519A0(2);
    if ( *(int *)(this + 16) <= -1 )
    {
LABEL_16:
      if ( (unsigned __int8)sub_551330(4, 1, 11) )
        return sub_5519A0(9);
      if ( (unsigned __int8)sub_551330(3, 10, 11) )
        return sub_5519A0(5);
      if ( (unsigned __int8)sub_5515D0(this) )
        return sub_5519A0(35);
      if ( (unsigned __int8)sub_551890(this) )
        return sub_5519A0(46);
      if ( (unsigned __int8)sub_551330(3, 1, 11) )
      {
        if ( (unsigned __int8)sub_5519E0(this) )
          return sub_5519A0(13);
        sub_551960(this);
      }
      if ( (unsigned __int8)sub_551670(4, 1, 11) )
      {
        if ( (unsigned __int8)sub_5519E0(this) )
          return sub_5519A0(23);
        sub_551960(this);
      }
      if ( (unsigned __int8)sub_551330(3, 1, 11) )
      {
        if ( !(unsigned __int8)sub_551B50(*(char *)(this + 20), *(char *)(this + 22)) )
          return sub_5519A0(14);
        sub_551960(this);
      }
      if ( (unsigned __int8)sub_551330(2, 10, 11) )
      {
        return sub_5519A0(7);
      }
      else
      {
        if ( sub_641280(*(_WORD *)(this + 12)) == 14 )
        {
          if ( sub_641280(*(_WORD *)(this + 10)) == 13 )
          {
            sub_5519A0(50);
            *(_BYTE *)(this + 20) = 3;
            v22 = 1;
          }
          *(_BYTE *)(v22 + this + 20) = 4;
          ++v22;
        }
        else if ( sub_641280(*(_WORD *)(this + 12)) == 13 )
        {
          *(_BYTE *)(this + 20) = 4;
          v22 = 1;
        }
        if ( v22 )
          return sub_5519A0(51);
        else
          return sub_551960(this);
      }
    }
    else
    {
      switch ( *(_DWORD *)(this + 16) )
      {
        case 0:
        case 3:
        case 5:
        case 6:
        case 7:
          goto LABEL_6;
        case 4:
          sub_5519A0(19);
          goto LABEL_8;
        case 8:
LABEL_8:
          sub_5519A0(39);
          goto LABEL_9;
        case 9:
LABEL_9:
          sub_5519A0(42);
          break;
        case 0xA:
          break;
        default:
          goto LABEL_16;
      }
      sub_5519A0(43);
      for ( i5 = 0; ; ++i5 )
      {
        result = sub_54C540((_WORD *)this);
        if ( i5 >= result )
          break;
        v2 = sub_641280(*(_WORD *)(this + 2 * i5 + 4));
        if ( sub_54CF20((_WORD *)this, v2) > 1 )
        {
          *(_BYTE *)(v22 + this + 20) = i5;
          ++v22;
        }
      }
    }
  }
  return result;
}


//======================================================================
// sub_54F5A0
// entry 0054f5a0  size 2554  status ok
//======================================================================

int __thiscall sub_54F5A0(int this)
{
  int result; // eax
  int v2; // eax
  int v3; // eax
  int v4; // eax
  int i7; // [esp+Ch] [ebp-8h]
  int nn; // [esp+Ch] [ebp-8h]
  int i1; // [esp+Ch] [ebp-8h]
  int i2; // [esp+Ch] [ebp-8h]
  int i3; // [esp+Ch] [ebp-8h]
  int i4; // [esp+Ch] [ebp-8h]
  int i5; // [esp+Ch] [ebp-8h]
  int i6; // [esp+Ch] [ebp-8h]
  int i; // [esp+Ch] [ebp-8h]
  int j; // [esp+Ch] [ebp-8h]
  int k; // [esp+Ch] [ebp-8h]
  int m; // [esp+Ch] [ebp-8h]
  int n; // [esp+Ch] [ebp-8h]
  int ii; // [esp+Ch] [ebp-8h]
  int jj; // [esp+Ch] [ebp-8h]
  int kk; // [esp+Ch] [ebp-8h]
  int mm; // [esp+Ch] [ebp-8h]
  int v23; // [esp+10h] [ebp-4h]

  v23 = 0;
  sub_551960(this);
  if ( sub_54CEC0((_WORD *)this) )
  {
    if ( *(int *)(this + 16) <= -1 )
    {
LABEL_94:
      if ( sub_54CAE0((_WORD *)this) && sub_54CEC0((_WORD *)this) == 3 )
      {
        for ( i = 0; ; ++i )
        {
          result = sub_54C540((_WORD *)this);
          if ( i >= result )
            break;
          if ( sub_641280(*(_WORD *)(this + 2 * i + 4)) == 2 )
          {
            *(_BYTE *)(v23 + this + 20) = i;
            ++v23;
          }
        }
      }
      else if ( sub_54CAE0((_WORD *)this) && sub_54CEC0((_WORD *)this) >= 1 )
      {
        for ( j = 0; ; ++j )
        {
          result = sub_54C540((_WORD *)this);
          if ( j >= result )
            break;
          v4 = sub_641280(*(_WORD *)(this + 2 * j + 4));
          if ( sub_54CF20((_WORD *)this, v4) > 1 || sub_641280(*(_WORD *)(this + 2 * j + 4)) == 2 )
          {
            *(_BYTE *)(v23 + this + 20) = j;
            ++v23;
          }
        }
      }
      else if ( sub_54CEC0((_WORD *)this) == 2 && (unsigned __int8)sub_551330(2, 10, 11)
             || sub_54CEC0((_WORD *)this) == 1 && (unsigned __int8)sub_551330(3, 10, 11) )
      {
        for ( k = 0; k < 5; ++k )
        {
          if ( *(char *)(k + this + 20) == -1 )
          {
            v23 = k;
            break;
          }
        }
        for ( m = 0; m < sub_54C540((_WORD *)this); ++m )
        {
          if ( sub_641280(*(_WORD *)(this + 2 * m + 4)) == 2 )
          {
            *(_BYTE *)(v23 + this + 20) = m;
            ++v23;
          }
        }
        return sub_5519A0(3);
      }
      else
      {
        sub_551960(this);
        if ( sub_54CEC0((_WORD *)this) == 2 && (unsigned __int8)sub_551330(2, 1, 11)
          || sub_54CEC0((_WORD *)this) == 1 && (unsigned __int8)sub_551330(3, 1, 11) )
        {
          sub_5519A0(11);
          for ( n = 0; n < 5; ++n )
          {
            if ( *(char *)(n + this + 20) == -1 )
            {
              v23 = n;
              break;
            }
          }
          for ( ii = 0; ; ++ii )
          {
            result = sub_54C540((_WORD *)this);
            if ( ii >= result )
              break;
            if ( sub_641280(*(_WORD *)(this + 2 * ii + 4)) == 2 )
            {
              *(_BYTE *)(v23 + this + 20) = ii;
              ++v23;
            }
          }
        }
        else
        {
          sub_551960(this);
          if ( sub_54CDC0((void *)this) && sub_54CEC0((_WORD *)this) == 2 )
          {
            sub_5519A0(47);
            for ( jj = 0; ; ++jj )
            {
              result = sub_54C540((_WORD *)this);
              if ( jj >= result )
                break;
              if ( sub_641280(*(_WORD *)(this + 2 * jj + 4)) == 2 )
              {
                *(_BYTE *)(v23 + this + 20) = jj;
                ++v23;
              }
            }
          }
          else if ( sub_54CEC0((_WORD *)this) == 1 && (unsigned __int8)sub_551330(2, 10, 11) )
          {
            for ( kk = 0; kk < sub_54C540((_WORD *)this); ++kk )
            {
              if ( sub_641280(*(_WORD *)(this + 2 * kk + 4)) == 2 )
              {
                *(_BYTE *)(this + 22) = kk;
                return sub_5519A0(6);
              }
            }
            return sub_5519A0(6);
          }
          else
          {
            for ( mm = 0; mm < sub_54C540((_WORD *)this); ++mm )
            {
              if ( sub_641280(*(_WORD *)(this + 2 * mm + 4)) == 2 )
              {
                *(_BYTE *)(v23 + this + 20) = mm;
                ++v23;
              }
            }
            if ( v23 <= 0 )
              return sub_551960(this);
            else
              return sub_5519A0(49);
          }
        }
      }
    }
    else
    {
      switch ( *(_DWORD *)(this + 16) )
      {
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
        case 6:
        case 7:
        case 8:
LABEL_6:
          sub_5519A0(1);
          return sub_551920(this);
        case 5:
          if ( sub_54CEC0((_WORD *)this) == 3 )
            sub_5519A0(41);
          else
            sub_5519A0(21);
          goto LABEL_44;
        case 9:
LABEL_44:
          if ( sub_54CEC0((_WORD *)this) == 2 && (unsigned __int8)sub_551330(2, 10, 11)
            || sub_54CEC0((_WORD *)this) == 1 && (unsigned __int8)sub_551330(3, 10, 11) )
          {
            sub_5519A0(3);
            for ( nn = 0; ; ++nn )
            {
              if ( nn >= 5 )
                goto LABEL_53;
              if ( *(char *)(nn + this + 20) == -1 )
                break;
            }
            v23 = nn;
LABEL_53:
            for ( i1 = 0; ; ++i1 )
            {
              result = sub_54C540((_WORD *)this);
              if ( i1 >= result )
                break;
              if ( sub_641280(*(_WORD *)(this + 2 * i1 + 4)) == 2 )
              {
                *(_BYTE *)(v23 + this + 20) = i1;
                ++v23;
              }
            }
            return result;
          }
          for ( i2 = 0; i2 < 5; ++i2 )
            *(_BYTE *)(i2 + this + 20) = -1;
          if ( sub_54CEC0((_WORD *)this) == 2 && (unsigned __int8)sub_551330(2, 1, 11)
            || sub_54CEC0((_WORD *)this) == 1 && (unsigned __int8)sub_551330(3, 1, 11) )
          {
            if ( *(_BYTE *)(this + 25) == 21 )
              goto LABEL_94;
            sub_5519A0(11);
            for ( i3 = 0; ; ++i3 )
            {
              if ( i3 >= 5 )
                goto LABEL_72;
              if ( *(char *)(i3 + this + 20) == -1 )
                break;
            }
            v23 = i3;
LABEL_72:
            for ( i4 = 0; ; ++i4 )
            {
              result = sub_54C540((_WORD *)this);
              if ( i4 >= result )
                break;
              if ( sub_641280(*(_WORD *)(this + 2 * i4 + 4)) == 2 )
              {
                *(_BYTE *)(v23 + this + 20) = i4;
                ++v23;
              }
            }
            return result;
          }
          for ( i5 = 0; i5 < 5; ++i5 )
            *(_BYTE *)(i5 + this + 20) = -1;
          if ( *(_BYTE *)(this + 25) == 41 || *(_BYTE *)(this + 25) == 21 )
            goto LABEL_94;
          if ( *(_DWORD *)(this + 16) == 9 && sub_54CEC0((_WORD *)this) > 1 )
          {
            sub_5519A0(47);
            goto LABEL_94;
          }
          sub_5519A0(40);
          for ( i6 = 0; ; ++i6 )
          {
            result = sub_54C540((_WORD *)this);
            if ( i6 >= result )
              break;
            v3 = sub_641280(*(_WORD *)(this + 2 * i6 + 4));
            if ( sub_54CF20((_WORD *)this, v3) > 1 || sub_641280(*(_WORD *)(this + 2 * i6 + 4)) == 2 )
            {
              *(_BYTE *)(v23 + this + 20) = i6;
              ++v23;
            }
          }
          break;
        default:
          goto LABEL_94;
      }
    }
  }
  else
  {
    if ( (unsigned __int8)sub_551330(4, 10, 11) )
      return sub_5519A0(2);
    if ( *(int *)(this + 16) <= -1 )
    {
LABEL_14:
      if ( (unsigned __int8)sub_551330(4, 1, 11) )
        return sub_5519A0(9);
      if ( (unsigned __int8)sub_551330(3, 10, 11) )
        return sub_5519A0(5);
      if ( (unsigned __int8)sub_551330(3, 1, 11) )
      {
        if ( (unsigned __int8)sub_5519E0(this) )
          return sub_5519A0(13);
        sub_551960(this);
      }
      if ( (unsigned __int8)sub_5515D0(this) )
        return sub_5519A0(35);
      if ( (unsigned __int8)sub_551890(this) )
        return sub_5519A0(46);
      if ( (unsigned __int8)sub_551670(4, 1, 11) )
      {
        if ( (unsigned __int8)sub_5519E0(this) )
          return sub_5519A0(24);
        sub_551960(this);
      }
      if ( (unsigned __int8)sub_551330(2, 10, 11) )
      {
        if ( sub_641280(*(_WORD *)(this + 2 * *(char *)(this + 21) + 4)) != 14 )
          return sub_5519A0(8);
        sub_551960(this);
      }
      result = sub_551330(3, 1, 11);
      if ( (_BYTE)result )
      {
        if ( (unsigned __int8)sub_551B50(*(char *)(this + 20), *(char *)(this + 22)) )
          return sub_551960(this);
        else
          return sub_5519A0(14);
      }
    }
    else
    {
      switch ( *(_DWORD *)(this + 16) )
      {
        case 0:
        case 4:
        case 6:
        case 7:
        case 8:
          goto LABEL_6;
        case 5:
          sub_5519A0(19);
          break;
        case 9:
          break;
        default:
          goto LABEL_14;
      }
      sub_5519A0(39);
      for ( i7 = 0; ; ++i7 )
      {
        result = sub_54C540((_WORD *)this);
        if ( i7 >= result )
          break;
        v2 = sub_641280(*(_WORD *)(this + 2 * i7 + 4));
        if ( sub_54CF20((_WORD *)this, v2) > 1 )
        {
          *(_BYTE *)(v23 + this + 20) = i7;
          ++v23;
        }
      }
    }
  }
  return result;
}


//======================================================================
// sub_54FFD0
// entry 0054ffd0  size 1051  status ok
//======================================================================

int __thiscall sub_54FFD0(int this)
{
  int result; // eax
  int v2; // eax
  int j; // [esp+8h] [ebp-8h]
  int i; // [esp+8h] [ebp-8h]
  int v6; // [esp+Ch] [ebp-4h]

  v6 = 0;
  sub_551960(this);
  if ( (unsigned __int8)sub_551330(4, 10, 11) )
    return sub_5519A0(2);
  if ( *(int *)(this + 16) <= -1 )
  {
LABEL_14:
    if ( (unsigned __int8)sub_551330(4, 1, 11) )
      return sub_5519A0(9);
    if ( (unsigned __int8)sub_551330(3, 10, 11) )
      return sub_5519A0(5);
    if ( (unsigned __int8)sub_5515D0(this) )
      return sub_5519A0(35);
    if ( (unsigned __int8)sub_551670(4, 7, 11) )
    {
      if ( (unsigned __int8)sub_5519E0(this)
        && sub_54C590(*(_WORD *)(this + 2 * *(char *)(this + 23) + 4)) >= 11
        && sub_54C590(*(_WORD *)(this + 2 * *(char *)(this + 23) + 4)) < 14 )
      {
        return sub_5519A0(26);
      }
      sub_551960(this);
    }
    if ( (unsigned __int8)sub_551890(this) )
      return sub_5519A0(45);
    if ( (unsigned __int8)sub_551330(3, 6, 11) )
    {
      if ( !(unsigned __int8)sub_551B50(*(char *)(this + 20), *(char *)(this + 22))
        && (sub_641280(*(_WORD *)(this + 2 * *(char *)(this + 22) + 4)) == 10
         || sub_641280(*(_WORD *)(this + 2 * *(char *)(this + 22) + 4)) == 11) )
      {
        return sub_5519A0(16);
      }
      sub_551960(this);
    }
    if ( (unsigned __int8)sub_551670(4, 1, 11) )
    {
      if ( (unsigned __int8)sub_5519E0(this) )
        return sub_5519A0(24);
      sub_551960(this);
    }
    if ( (unsigned __int8)sub_551330(2, 10, 11) )
    {
      if ( (int)sub_641280(*(_WORD *)(this + 2 * *(char *)(this + 21) + 4)) >= 11
        && (int)sub_641280(*(_WORD *)(this + 2 * *(char *)(this + 21) + 4)) <= 13 )
      {
        return sub_5519A0(8);
      }
      sub_551960(this);
    }
    if ( (unsigned __int8)sub_551670(4, 10, 11) )
    {
      if ( sub_641280(*(_WORD *)(this + 2 * *(char *)(this + 23) + 4)) == 14 )
        return sub_5519A0(27);
      sub_551960(this);
    }
    if ( (unsigned __int8)sub_551330(3, 1, 11) )
    {
      if ( !(unsigned __int8)sub_551B50(*(char *)(this + 20), *(char *)(this + 22)) )
        return sub_5519A0(12);
      sub_551960(this);
    }
    for ( i = 0; i < sub_54C540((_WORD *)this); ++i )
    {
      if ( sub_54C590(*(_WORD *)(this + 2 * i + 4)) >= 10 )
      {
        *(_BYTE *)(v6 + this + 20) = i;
        ++v6;
      }
    }
    if ( v6 && v6 < 4 )
      return sub_5519A0(52);
    else
      return sub_551960(this);
  }
  else
  {
    switch ( *(_DWORD *)(this + 16) )
    {
      case 0:
      case 1:
      case 2:
      case 3:
      case 4:
      case 5:
        sub_5519A0(1);
        return sub_551920(this);
      case 6:
        sub_5519A0(39);
        goto LABEL_7;
      case 7:
LABEL_7:
        sub_5519A0(42);
        break;
      case 8:
        break;
      default:
        goto LABEL_14;
    }
    sub_5519A0(43);
    for ( j = 0; ; ++j )
    {
      result = sub_54C540((_WORD *)this);
      if ( j >= result )
        break;
      v2 = sub_641280(*(_WORD *)(this + 2 * j + 4));
      if ( sub_54CF20((_WORD *)this, v2) > 1 )
      {
        *(_BYTE *)(v6 + this + 20) = j;
        ++v6;
      }
    }
  }
  return result;
}


//======================================================================
// sub_550410
// entry 00550410  size 950  status ok
//======================================================================

int __thiscall sub_550410(int this)
{
  int result; // eax
  int v2; // eax
  int j; // [esp+8h] [ebp-8h]
  int i; // [esp+8h] [ebp-8h]
  int v6; // [esp+Ch] [ebp-4h]

  v6 = 0;
  sub_551960(this);
  if ( (unsigned __int8)sub_551330(4, 10, 11) )
    return sub_5519A0(2);
  if ( (unsigned __int8)sub_551330(4, 1, 11) )
    return sub_5519A0(9);
  if ( *(int *)(this + 16) <= -1 )
  {
LABEL_16:
    if ( (unsigned __int8)sub_551330(3, 10, 11) )
    {
      if ( !(unsigned __int8)sub_551B50(*(char *)(this + 20), *(char *)(this + 22)) )
        return sub_5519A0(5);
      sub_551960(this);
    }
    if ( (unsigned __int8)sub_5515D0(this) )
      return sub_5519A0(35);
    if ( (unsigned __int8)sub_551670(4, 1, 11) )
    {
      if ( (unsigned __int8)sub_5519E0(this) && (int)sub_641280(*(_WORD *)(this + 2 * *(char *)(this + 21) + 4)) > 10 )
        return sub_5519A0(32);
      sub_551960(this);
    }
    if ( (unsigned __int8)sub_551890(this) )
      return sub_5519A0(45);
    if ( (unsigned __int8)sub_551670(4, 1, 11) )
    {
      if ( (unsigned __int8)sub_5519E0(this) && (int)sub_641280(*(_WORD *)(this + 2 * *(char *)(this + 21) + 4)) < 11 )
        return sub_5519A0(31);
      sub_551960(this);
    }
    if ( (unsigned __int8)sub_551330(3, 1, 11) )
    {
      if ( (unsigned __int8)sub_5519E0(this) )
        return sub_5519A0(13);
      sub_551960(this);
    }
    if ( (unsigned __int8)sub_551330(2, 10, 11) )
      return sub_5519A0(7);
    if ( (unsigned __int8)sub_551330(3, 1, 11) )
    {
      if ( !(unsigned __int8)sub_551B50(*(char *)(this + 20), *(char *)(this + 22)) )
        return sub_5519A0(14);
      sub_551960(this);
    }
    if ( (unsigned __int8)sub_551670(4, 1, 11) )
    {
      if ( (int)sub_641280(*(_WORD *)(this + 2 * *(char *)(this + 21) + 4)) > 10 )
        return sub_5519A0(33);
      sub_551960(this);
    }
    for ( i = 0; i < sub_54C540((_WORD *)this); ++i )
    {
      if ( sub_54C590(*(_WORD *)(this + 2 * i + 4)) > 10 )
      {
        *(_BYTE *)(v6 + this + 20) = i;
        ++v6;
      }
    }
    if ( v6 && v6 < 4 )
      return sub_5519A0(52);
    else
      return sub_551960(this);
  }
  else
  {
    switch ( *(_DWORD *)(this + 16) )
    {
      case 0:
      case 1:
      case 2:
      case 3:
      case 4:
      case 5:
        sub_5519A0(1);
        return sub_551920(this);
      case 6:
        sub_5519A0(39);
        goto LABEL_9;
      case 7:
LABEL_9:
        sub_5519A0(42);
        break;
      case 8:
        break;
      default:
        goto LABEL_16;
    }
    sub_5519A0(43);
    for ( j = 0; ; ++j )
    {
      result = sub_54C540((_WORD *)this);
      if ( j >= result )
        break;
      v2 = sub_641280(*(_WORD *)(this + 2 * j + 4));
      if ( sub_54CF20((_WORD *)this, v2) > 1 )
      {
        *(_BYTE *)(v6 + this + 20) = j;
        ++v6;
      }
    }
  }
  return result;
}


//======================================================================
// sub_5507F0
// entry 005507f0  size 944  status ok
//======================================================================

int __thiscall sub_5507F0(int this)
{
  int result; // eax
  int v2; // eax
  int j; // [esp+8h] [ebp-8h]
  int i; // [esp+8h] [ebp-8h]
  int v6; // [esp+Ch] [ebp-4h]

  v6 = 0;
  sub_551960(this);
  if ( (unsigned __int8)sub_551330(4, 10, 11) )
    return sub_5519A0(2);
  if ( *(int *)(this + 16) <= -1 )
  {
LABEL_14:
    if ( (unsigned __int8)sub_551330(4, 1, 11) )
      return sub_5519A0(9);
    if ( (unsigned __int8)sub_551330(3, 10, 11) )
      return sub_5519A0(5);
    if ( (unsigned __int8)sub_5515D0(this) )
      return sub_5519A0(35);
    if ( (unsigned __int8)sub_551670(4, 1, 11) )
    {
      if ( (unsigned __int8)sub_5519E0(this)
        && ((int)sub_641280(*(_WORD *)(this + 2 * *(char *)(this + 21) + 4)) > 10
         || (int)sub_641280(*(_WORD *)(this + 2 * *(char *)(this + 22) + 4)) > 10) )
      {
        return sub_5519A0(28);
      }
      sub_551960(this);
    }
    if ( (unsigned __int8)sub_551890(this) )
      return sub_5519A0(45);
    if ( (unsigned __int8)sub_551670(4, 1, 11) )
    {
      if ( (unsigned __int8)sub_5519E0(this) && (int)sub_641280(*(_WORD *)(this + 2 * *(char *)(this + 22) + 4)) < 11 )
        return sub_5519A0(29);
      sub_551960(this);
    }
    if ( (unsigned __int8)sub_551330(3, 1, 11) )
    {
      if ( !(unsigned __int8)sub_551B50(*(char *)(this + 20), *(char *)(this + 22)) )
        return sub_5519A0(12);
      sub_551960(this);
    }
    if ( (unsigned __int8)sub_551670(4, 1, 11) )
    {
      if ( sub_641280(*(_WORD *)(this + 2 * *(char *)(this + 23) + 4)) == 14 )
        return sub_5519A0(30);
      sub_551960(this);
    }
    if ( (unsigned __int8)sub_551330(2, 10, 11) )
      return sub_5519A0(7);
    if ( (unsigned __int8)sub_551670(4, 1, 11) )
    {
      if ( (int)sub_641280(*(_WORD *)(this + 2 * *(char *)(this + 21) + 4)) > 10 )
        return sub_5519A0(33);
      sub_551960(this);
    }
    for ( i = 0; ; ++i )
    {
      result = sub_54C540((_WORD *)this);
      if ( i >= result )
        break;
      if ( sub_54C590(*(_WORD *)(this + 2 * i + 4)) > 10 )
      {
        *(_BYTE *)(v6 + this + 20) = i;
        ++v6;
      }
    }
    if ( v6 && v6 < 4 )
      return sub_5519A0(52);
  }
  else
  {
    switch ( *(_DWORD *)(this + 16) )
    {
      case 0:
      case 1:
      case 2:
      case 3:
      case 4:
      case 5:
        sub_5519A0(1);
        return sub_551920(this);
      case 6:
        sub_5519A0(39);
        goto LABEL_7;
      case 7:
LABEL_7:
        sub_5519A0(42);
        break;
      case 8:
        break;
      default:
        goto LABEL_14;
    }
    sub_5519A0(43);
    for ( j = 0; ; ++j )
    {
      result = sub_54C540((_WORD *)this);
      if ( j >= result )
        break;
      v2 = sub_641280(*(_WORD *)(this + 2 * j + 4));
      if ( sub_54CF20((_WORD *)this, v2) > 1 )
      {
        *(_BYTE *)(v6 + this + 20) = j;
        ++v6;
      }
    }
  }
  return result;
}


//======================================================================
// sub_550BD0
// entry 00550bd0  size 989  status ok
//======================================================================

int __thiscall sub_550BD0(int this)
{
  int result; // eax
  int v2; // eax
  int j; // [esp+8h] [ebp-8h]
  int i; // [esp+8h] [ebp-8h]
  int v6; // [esp+Ch] [ebp-4h]

  v6 = 0;
  sub_551960(this);
  if ( (unsigned __int8)sub_551330(4, 10, 11) )
    return sub_5519A0(2);
  if ( *(int *)(this + 16) <= -1 )
  {
LABEL_14:
    if ( (unsigned __int8)sub_551330(4, 1, 11) )
      return sub_5519A0(9);
    if ( (unsigned __int8)sub_551330(3, 10, 11) )
      return sub_5519A0(5);
    if ( (unsigned __int8)sub_5515D0(this) )
      return sub_5519A0(35);
    if ( (unsigned __int8)sub_551670(4, 1, 11) )
    {
      if ( (unsigned __int8)sub_5519E0(this)
        && ((int)sub_641280(*(_WORD *)(this + 2 * *(char *)(this + 21) + 4)) > 10
         || (int)sub_641280(*(_WORD *)(this + 2 * *(char *)(this + 22) + 4)) > 10) )
      {
        return sub_5519A0(28);
      }
      sub_551960(this);
    }
    if ( (unsigned __int8)sub_551890(this) )
      return sub_5519A0(45);
    if ( (unsigned __int8)sub_551670(4, 1, 11) )
    {
      if ( (unsigned __int8)sub_5519E0(this) && (int)sub_641280(*(_WORD *)(this + 2 * *(char *)(this + 22) + 4)) < 11 )
        return sub_5519A0(29);
      sub_551960(this);
    }
    if ( (unsigned __int8)sub_551330(3, 1, 11)
      && !(unsigned __int8)sub_551B50(*(char *)(this + 20), *(char *)(this + 22)) )
    {
      return sub_5519A0(12);
    }
    if ( (unsigned __int8)sub_551670(4, 1, 11) )
    {
      if ( sub_641280(*(_WORD *)(this + 2 * *(char *)(this + 23) + 4)) == 14 )
        return sub_5519A0(30);
      sub_551960(this);
    }
    if ( (unsigned __int8)sub_551330(2, 10, 11) )
      return sub_5519A0(7);
    if ( (unsigned __int8)sub_551670(4, 1, 11) )
    {
      if ( (int)sub_641280(*(_WORD *)(this + 2 * *(char *)(this + 21) + 4)) > 10 )
        return sub_5519A0(33);
      sub_551960(this);
    }
    if ( (unsigned __int8)sub_551330(3, 1, 11) )
    {
      return sub_5519A0(15);
    }
    else
    {
      for ( i = 0; i < sub_54C540((_WORD *)this); ++i )
      {
        if ( sub_54C590(*(_WORD *)(this + 2 * i + 4)) > 10 )
        {
          *(_BYTE *)(v6 + this + 20) = i;
          ++v6;
        }
      }
      if ( v6 && v6 < 4 )
        return sub_5519A0(52);
      else
        return sub_551960(this);
    }
  }
  else
  {
    switch ( *(_DWORD *)(this + 16) )
    {
      case 0:
      case 1:
      case 2:
      case 3:
      case 4:
      case 5:
      case 6:
      case 7:
        sub_5519A0(1);
        return sub_551920(this);
      case 8:
        sub_5519A0(39);
        goto LABEL_7;
      case 9:
LABEL_7:
        sub_5519A0(42);
        break;
      case 0xA:
        break;
      default:
        goto LABEL_14;
    }
    sub_5519A0(43);
    for ( j = 0; ; ++j )
    {
      result = sub_54C540((_WORD *)this);
      if ( j >= result )
        break;
      v2 = sub_641280(*(_WORD *)(this + 2 * j + 4));
      if ( sub_54CF20((_WORD *)this, v2) > 1 )
      {
        *(_BYTE *)(v6 + this + 20) = j;
        ++v6;
      }
    }
  }
  return result;
}


//======================================================================
// sub_550FD0
// entry 00550fd0  size 110  status ok
//======================================================================

char __thiscall sub_550FD0(_WORD *this, int a2)
{
  int i; // eax
  int v5; // [esp+4h] [ebp-4h]

  v5 = 0;
  for ( i = sub_54C540(this); v5 < i; i = sub_54C540(this) )
  {
    if ( sub_54C590(*(this + v5 + 2)) == a2 || sub_54C590(*(this + v5 + 2)) == 14 && a2 == 1 )
      return 1;
    ++v5;
  }
  return 0;
}


//======================================================================
// sub_551040
// entry 00551040  size 135  status ok
//======================================================================

char __thiscall sub_551040(_WORD *this, int a2, int a3)
{
  int i; // eax
  int v6; // [esp+4h] [ebp-4h]

  v6 = 0;
  for ( i = sub_54C540(this); v6 < i; i = sub_54C540(this) )
  {
    if ( (sub_54C590(*(this + v6 + 2)) == a3 || sub_54C590(*(this + v6 + 2)) == 14 && a3 == 1)
      && sub_641290(*(this + v6 + 2)) == a2 )
    {
      return 1;
    }
    ++v6;
  }
  return 0;
}


//======================================================================
// sub_5510D0
// entry 005510d0  size 91  status ok
//======================================================================

BOOL __thiscall sub_5510D0(_WORD *this, int a2, int a3)
{
  int v5; // [esp+4h] [ebp-8h]
  int i; // [esp+8h] [ebp-4h]

  v5 = 0;
  for ( i = 2; i < 15; ++i )
  {
    if ( sub_551040(this, a2, i) )
      ++v5;
  }
  return v5 == a3;
}


//======================================================================
// sub_551130
// entry 00551130  size 117  status ok
//======================================================================

bool __thiscall sub_551130(_WORD *this, int a2, int a3)
{
  int v5; // [esp+4h] [ebp-8h]
  int i; // [esp+8h] [ebp-4h]

  v5 = 0;
  if ( a3 >= 11 )
    return 0;
  for ( i = 0; i < 5; ++i )
  {
    if ( sub_550FD0(this, i + a3) )
    {
      ++v5;
    }
    else if ( v5 != a2 )
    {
      v5 = 0;
    }
  }
  return v5 == a2;
}


//======================================================================
// sub_5511B0
// entry 005511b0  size 114  status ok
//======================================================================

bool __thiscall sub_5511B0(_WORD *this, int a2, int a3, int a4)
{
  int v6; // [esp+4h] [ebp-8h]
  int i; // [esp+8h] [ebp-4h]

  v6 = 0;
  if ( a3 >= 5 - a4 + 11 )
    return 0;
  for ( i = 0; i < a4; ++i )
  {
    if ( sub_550FD0(this, i + a3) )
      ++v6;
  }
  return v6 == a2;
}


//======================================================================
// sub_551230
// entry 00551230  size 123  status ok
//======================================================================

bool __thiscall sub_551230(_WORD *this, int a2, int a3, int a4)
{
  int v6; // [esp+4h] [ebp-8h]
  int i; // [esp+8h] [ebp-4h]

  v6 = 0;
  if ( a4 >= 11 )
    return 0;
  for ( i = 0; i < 5; ++i )
  {
    if ( sub_551040(this, a3, i + a4) )
    {
      ++v6;
    }
    else if ( v6 != a2 )
    {
      v6 = 0;
    }
  }
  return v6 == a2;
}


//======================================================================
// sub_5512B0
// entry 005512b0  size 116  status ok
//======================================================================

bool __thiscall sub_5512B0(_WORD *this, int a2, int a3, int a4, int a5)
{
  int v7; // [esp+4h] [ebp-8h]
  int i; // [esp+8h] [ebp-4h]

  v7 = 0;
  if ( a4 >= 5 - a5 + 11 )
    return 0;
  for ( i = 0; i < a5; ++i )
  {
    if ( sub_551040(this, a3, i + a4) )
      ++v7;
  }
  return v7 == a2;
}


//======================================================================
// sub_551330
// entry 00551330  size 670  status ok
//======================================================================

char __thiscall sub_551330(_WORD *this, int a2, int a3, int a4)
{
  int v6; // [esp+4h] [ebp-14h]
  int m; // [esp+8h] [ebp-10h]
  int j; // [esp+8h] [ebp-10h]
  int n; // [esp+Ch] [ebp-Ch]
  int k; // [esp+Ch] [ebp-Ch]
  int v11; // [esp+10h] [ebp-8h]
  int i; // [esp+10h] [ebp-8h]
  int v13; // [esp+14h] [ebp-4h]

  v13 = 0;
  v11 = 1;
LABEL_2:
  if ( v11 > 4 )
  {
    for ( i = 1; ; ++i )
    {
      if ( i > 4 )
        return 0;
      v6 = a2 + 1;
LABEL_22:
      if ( v6 <= 5 )
        break;
    }
    for ( j = a3; ; ++j )
    {
      if ( j >= a4 )
      {
        ++v6;
        goto LABEL_22;
      }
      if ( sub_5512B0(this, a2, i, j, v6) )
        break;
    }
    for ( k = 0; k < sub_54C540(this); ++k )
    {
      if ( sub_54C590(*(this + k + 2)) != 20
        && (sub_641280(*(this + k + 2)) >= j && sub_641280(*(this + k + 2)) <= j + 4
         || sub_641280(*(this + k + 2)) == 14 && j == 1)
        && sub_641290(*(this + k + 2)) == i )
      {
        *((_BYTE *)this + v13 + 20) = k;
        ++v13;
      }
    }
    return 1;
  }
  else
  {
    for ( m = a3; ; ++m )
    {
      if ( m >= a4 )
      {
        ++v11;
        goto LABEL_2;
      }
      if ( sub_551230(this, a2, v11, m) )
        break;
    }
    for ( n = 0; n < sub_54C540(this); ++n )
    {
      if ( sub_54C590(*(this + n + 2)) != 20
        && (sub_641280(*(this + n + 2)) >= m && sub_641280(*(this + n + 2)) <= m + 4
         || sub_641280(*(this + n + 2)) == 14 && m == 1)
        && sub_641290(*(this + n + 2)) == v11 )
      {
        *((_BYTE *)this + v13 + 20) = n;
        ++v13;
      }
    }
    return 1;
  }
}


//======================================================================
// sub_5515D0
// entry 005515d0  size 152  status ok
//======================================================================

char __thiscall sub_5515D0(_WORD *this)
{
  int j; // [esp+4h] [ebp-Ch]
  int i; // [esp+8h] [ebp-8h]
  int v5; // [esp+Ch] [ebp-4h]

  v5 = 0;
  for ( i = 1; ; ++i )
  {
    if ( i > 4 )
      return 0;
    if ( sub_5510D0(this, i, 4) )
      break;
  }
  for ( j = 0; j < sub_54C540(this); ++j )
  {
    if ( sub_641290(*(this + j + 2)) == i )
    {
      *((_BYTE *)this + v5 + 20) = j;
      ++v5;
    }
  }
  return 1;
}


//======================================================================
// sub_551670
// entry 00551670  size 538  status ok
//======================================================================

char __thiscall sub_551670(_WORD *this, int a2, int a3, int a4)
{
  int j; // [esp+4h] [ebp-10h]
  int m; // [esp+4h] [ebp-10h]
  int i; // [esp+8h] [ebp-Ch]
  int k; // [esp+8h] [ebp-Ch]
  int v10; // [esp+Ch] [ebp-8h]
  int v11; // [esp+10h] [ebp-4h]

  v11 = 0;
  for ( i = a3; i < a4; ++i )
  {
    if ( sub_551130(this, a2, i) )
    {
      for ( j = 0; j < sub_54C540(this); ++j )
      {
        if ( sub_54C590(*(this + j + 2)) != 20
          && (sub_641280(*(this + j + 2)) >= i && sub_641280(*(this + j + 2)) <= i + 4
           || sub_641280(*(this + j + 2)) == 14 && i == 1) )
        {
          *((_BYTE *)this + v11 + 20) = j;
          ++v11;
        }
      }
      return 1;
    }
  }
  v10 = a2 + 1;
LABEL_16:
  if ( v10 > 5 )
    return 0;
  for ( k = a3; ; ++k )
  {
    if ( k >= a4 )
    {
      ++v10;
      goto LABEL_16;
    }
    if ( sub_5511B0(this, a2, k, v10) )
      break;
  }
  for ( m = 0; m < sub_54C540(this); ++m )
  {
    if ( sub_54C590(*(this + m + 2)) != 20
      && (sub_641280(*(this + m + 2)) >= k && sub_641280(*(this + m + 2)) <= k + 4
       || sub_641280(*(this + m + 2)) == 14 && k == 1) )
    {
      *((_BYTE *)this + v11 + 20) = m;
      ++v11;
    }
  }
  return 1;
}


//======================================================================
// sub_551890
// entry 00551890  size 129  status ok
//======================================================================

char __thiscall sub_551890(_WORD *this)
{
  int i; // [esp+4h] [ebp-Ch]
  int v4; // [esp+8h] [ebp-8h]
  int v5; // [esp+Ch] [ebp-4h]

  v5 = 0;
  v4 = sub_54C8A0();
  if ( !v4 )
    return 0;
  for ( i = 0; i < sub_54C540(this); ++i )
  {
    if ( sub_641280(*(this + i + 2)) == v4 )
    {
      *((_BYTE *)this + v5 + 20) = i;
      ++v5;
    }
  }
  return 1;
}


//======================================================================
// sub_551920
// entry 00551920  size 51  status ok
//======================================================================

int __thiscall sub_551920(_BYTE *this)
{
  int result; // eax
  int i; // [esp+4h] [ebp-4h]

  for ( i = 0; i < 5; ++i )
  {
    *(this + i + 20) = i;
    result = i + 1;
  }
  return result;
}


//======================================================================
// sub_551960
// entry 00551960  size 59  status ok
//======================================================================

int __thiscall sub_551960(_BYTE *this)
{
  int i; // [esp+4h] [ebp-4h]

  for ( i = 0; i < 5; ++i )
    *(this + i + 20) = -1;
  return sub_5519A0(0);
}


//======================================================================
// sub_5519A0
// entry 005519a0  size 52  status ok
//======================================================================

char __thiscall sub_5519A0(_BYTE *this, char a2)
{
  char result; // al

  result = a2;
  if ( a2 )
  {
    result = (char)this;
    if ( !*(this + 25) )
    {
      *(this + 25) = a2;
      return a2;
    }
  }
  else
  {
    *(this + 25) = 0;
  }
  return result;
}


//======================================================================
// sub_5519E0
// entry 005519e0  size 361  status ok
//======================================================================

char __thiscall sub_5519E0(_WORD *this)
{
  __int16 v1; // ax
  int v3; // esi
  bool v5; // [esp+Bh] [ebp-5h]
  int i; // [esp+Ch] [ebp-4h]

  v1 = sub_641230(2, 4);
  v5 = sub_54C590(v1) == 20;
  for ( i = 0; i < 4; ++i )
  {
    if ( *((char *)this + i + 20) != -1 && *((char *)this + i + 21) != -1 )
    {
      if ( sub_641280(*(this + *((char *)this + i + 20) + 2)) == 14 )
        return 0;
      if ( sub_641280(*(this + *((char *)this + i + 21) + 2)) == 14 )
        return 0;
      if ( sub_641280(*(this + *((char *)this + i + 20) + 2)) == v5 + 2 )
        return 0;
      if ( sub_641280(*(this + *((char *)this + i + 21) + 2)) == v5 + 2 )
        return 0;
      v3 = sub_641280(*(this + *((char *)this + i + 20) + 2)) + 1;
      if ( v3 != sub_641280(*(this + *((char *)this + i + 21) + 2)) )
        return 0;
    }
  }
  return 1;
}


//======================================================================
// sub_551B50
// entry 00551b50  size 288  status ok
//======================================================================

bool __thiscall sub_551B50(char *this, int a2, int a3)
{
  int v5; // [esp+8h] [ebp-14h]
  int i; // [esp+10h] [ebp-Ch]
  int j; // [esp+10h] [ebp-Ch]
  int v8; // [esp+14h] [ebp-8h]
  char v9; // [esp+1Bh] [ebp-1h]

  v9 = 0;
  v8 = sub_641280(*((_WORD *)this + *(this + 20) + 2));
  v5 = sub_641280(*((_WORD *)this + *(this + 22) + 2));
  for ( i = 0; i < 3; ++i )
  {
    if ( sub_641280(*((_WORD *)this + *(this + i + 20) + 2)) == 14 )
    {
      v9 = 1;
      break;
    }
  }
  if ( v9 )
  {
    for ( j = 0; j < 3; ++j )
    {
      if ( sub_641280(*((_WORD *)this + *(this + j + 20) + 2)) != 14
        && sub_641280(*((_WORD *)this + *(this + j + 20) + 2)) == 5 )
      {
        return 1;
      }
    }
  }
  if ( v8 > v5 )
    v8 = v5;
  return v8 + 4 == v5;
}


//======================================================================
// sub_551C70
// entry 00551c70  size 2259  status ok
//======================================================================

int __thiscall sub_551C70(_BYTE *this)
{
  const char *v1; // eax
  const char *v2; // eax
  const char *v3; // eax
  const char *v4; // eax
  const char *v5; // eax
  const char *v6; // eax
  const char *v7; // eax
  const char *v8; // eax
  const char *v9; // eax
  const char *v10; // eax
  const char *v11; // eax
  const char *v12; // eax
  const char *v13; // eax
  const char *v14; // eax
  const char *v15; // eax
  const char *v16; // eax
  const char *v17; // eax
  const char *v18; // eax
  const char *v19; // eax
  const char *v20; // eax
  const char *v21; // eax
  const char *v22; // eax
  const char *v23; // eax
  const char *v24; // eax
  const char *v25; // eax
  const char *v26; // eax
  const char *v27; // eax
  const char *v28; // eax
  const char *v29; // eax
  const char *v30; // eax
  const char *v31; // eax
  const char *v32; // eax
  const char *v33; // eax
  const char *v34; // eax
  const char *v35; // eax
  const char *v36; // eax
  const char *v37; // eax
  const char *v38; // eax
  const char *v39; // eax
  const char *v40; // eax
  const char *v41; // eax
  const char *v42; // eax
  const char *v43; // eax
  const char *v44; // eax
  const char *v45; // eax
  const char *v46; // eax
  const char *v47; // eax
  const char *v48; // eax
  const char *v49; // eax
  const char *v50; // eax
  const char *v51; // eax
  const char *v52; // eax
  const char *v53; // eax
  const char *v54; // eax
  const char *v55; // eax
  const char *v56; // eax
  char *v57; // eax
  char Destination[1028]; // [esp+2Ch] [ebp-408h] BYREF

  switch ( *(this + 25) )
  {
    case 0:
      v1 = (const char *)sub_630F40("SID_VIDEOPOKER_GARBAGE");
      strcpy(Destination, v1);
      break;
    case 1:
      v2 = (const char *)sub_630F40("SID_VIDEOPOKER_PATHAND");
      strcpy(Destination, v2);
      break;
    case 2:
      v3 = (const char *)sub_630F40("SID_VIDEOPOKER_FOURTOROYAL");
      strcpy(Destination, v3);
      break;
    case 3:
      v8 = (const char *)sub_630F40("SID_VIDEOPOKER_FOURTOROYAL1OR2WILD");
      strcpy(Destination, v8);
      break;
    case 4:
      v6 = (const char *)sub_630F40("SID_VIDEOPOKER_FOURTOWILDROYAL");
      strcpy(Destination, v6);
      break;
    case 5:
      v4 = (const char *)sub_630F40("SID_VIDEOPOKER_THREETOROYAL");
      strcpy(Destination, v4);
      break;
    case 6:
      v7 = (const char *)sub_630F40("SID_VIDEOPOKER_THREETOWILDROYAL");
      strcpy(Destination, v7);
      break;
    case 7:
      v5 = (const char *)sub_630F40("SID_VIDEOPOKER_TWOTOROYAL");
      strcpy(Destination, v5);
      break;
    case 8:
      v9 = (const char *)sub_630F40("SID_VIDEOPOKER_TWOTOROYALJQORKHIGH");
      strcpy(Destination, v9);
      break;
    case 9:
      v10 = (const char *)sub_630F40("SID_VIDEOPOKER_FOURTOSF");
      strcpy(Destination, v10);
      break;
    case 0xA:
      v13 = (const char *)sub_630F40("SID_VIDEOPOKER_FOURTOWILDSF");
      strcpy(Destination, v13);
      break;
    case 0xB:
      v18 = (const char *)sub_630F40("SID_VIDEOPOKER_FOURTO1OR2DEUCESF");
      strcpy(Destination, v18);
      break;
    case 0xC:
      v11 = (const char *)sub_630F40("SID_VIDEOPOKER_THREETOSF");
      strcpy(Destination, v11);
      break;
    case 0xD:
      v15 = (const char *)sub_630F40("SID_VIDEOPOKER_THREETOSFOUTSIDE");
      strcpy(Destination, v15);
      break;
    case 0xE:
      v16 = (const char *)sub_630F40("SID_VIDEOPOKER_THREETOSFINSIDE");
      strcpy(Destination, v16);
      break;
    case 0xF:
      v17 = (const char *)sub_630F40("SID_VIDEOPOKER_THREETOSFDOUBLEINSIDE");
      strcpy(Destination, v17);
      break;
    case 0x10:
      v19 = (const char *)sub_630F40("SID_VIDEOPOKER_THREETOSF10JHIGH");
      strcpy(Destination, v19);
      break;
    case 0x11:
      v14 = (const char *)sub_630F40("SID_VIDEOPOKER_THREETOWILDSF");
      strcpy(Destination, v14);
      break;
    case 0x12:
      v12 = (const char *)sub_630F40("SID_VIDEOPOKER_TWOTOSF");
      strcpy(Destination, v12);
      break;
    case 0x13:
      v20 = (const char *)sub_630F40("SID_VIDEOPOKER_FOUROFAKIND");
      strcpy(Destination, v20);
      break;
    case 0x14:
      v21 = (const char *)sub_630F40("SID_VIDEOPOKER_FOUROFAKINDJOKER");
      strcpy(Destination, v21);
      break;
    case 0x15:
      v22 = (const char *)sub_630F40("SID_VIDEOPOKER_FOUROFAKIND1OR2WILD");
      strcpy(Destination, v22);
      break;
    case 0x16:
      v23 = (const char *)sub_630F40("SID_VIDEOPOKER_FOURWILD");
      strcpy(Destination, v23);
      break;
    case 0x17:
      v24 = (const char *)sub_630F40("SID_VIDEOPOKER_FOURTOS");
      strcpy(Destination, v24);
      break;
    case 0x18:
      v26 = (const char *)sub_630F40("SID_VIDEOPOKER_FOURTOSOUTSIDE");
      strcpy(Destination, v26);
      break;
    case 0x19:
      v27 = (const char *)sub_630F40("SID_VIDEOPOKER_FOURTOSINSIDE");
      strcpy(Destination, v27);
      break;
    case 0x1A:
      v28 = (const char *)sub_630F40("SID_VIDEOPOKER_FOURTOSJQORK");
      strcpy(Destination, v28);
      break;
    case 0x1B:
      v29 = (const char *)sub_630F40("SID_VIDEOPOKER_FOURTOSACEHIGH");
      strcpy(Destination, v29);
      break;
    case 0x1C:
      v30 = (const char *)sub_630F40("SID_VIDEOPOKER_FOURTOS2OR3HIGHCARDSOUTSIDE");
      strcpy(Destination, v30);
      break;
    case 0x1D:
      v31 = (const char *)sub_630F40("SID_VIDEOPOKER_FOURTOSUNDER2HIGHCARDSOUTSIDE");
      strcpy(Destination, v31);
      break;
    case 0x1E:
      v32 = (const char *)sub_630F40("SID_VIDEOPOKER_FOURTOSWITHACEINSIDE");
      strcpy(Destination, v32);
      break;
    case 0x1F:
      v33 = (const char *)sub_630F40("SID_VIDEOPOKER_FOURTOSWITH3HIGHCARDSOUTSIDE");
      strcpy(Destination, v33);
      break;
    case 0x20:
      v34 = (const char *)sub_630F40("SID_VIDEOPOKER_FOURTOS3HIGHCARDSOUTSIDE");
      strcpy(Destination, v34);
      break;
    case 0x21:
      v35 = (const char *)sub_630F40("SID_VIDEOPOKER_FOURTOS3HIGHCARDSINSIDE");
      strcpy(Destination, v35);
      break;
    case 0x22:
      v25 = (const char *)sub_630F40("SID_VIDEOPOKER_FOURTOSWILD");
      strcpy(Destination, v25);
      break;
    case 0x23:
      v36 = (const char *)sub_630F40("SID_VIDEOPOKER_FOURTOFLUSH");
      strcpy(Destination, v36);
      break;
    case 0x24:
      if ( *(_DWORD *)(dword_7947E0 + 20244) == 8 )
        v38 = (const char *)sub_630F40("SID_VIDEOPOKER_FOURTOWILDFLUSH");
      else
        v38 = (const char *)sub_630F40("SID_VIDEOPOKER_FOURTO1WILDFLUSH");
      strcpy(Destination, v38);
      break;
    case 0x25:
      v39 = (const char *)sub_630F40("SID_VIDEOPOKER_FOURTOJOKERFLUSHACEKING");
      strcpy(Destination, v39);
      break;
    case 0x26:
      v37 = (const char *)sub_630F40("SID_VIDEOPOKER_THREETOFLUSH");
      strcpy(Destination, v37);
      break;
    case 0x27:
      v40 = (const char *)sub_630F40("SID_VIDEOPOKER_THREEOFAKIND");
      strcpy(Destination, v40);
      break;
    case 0x28:
      v41 = (const char *)sub_630F40("SID_VIDEOPOKER_THREEOFAKINDWILD");
      strcpy(Destination, v41);
      break;
    case 0x29:
      v42 = (const char *)sub_630F40("SID_VIDEOPOKER_THREEWILDGARBAGE");
      strcpy(Destination, v42);
      break;
    case 0x2A:
      v43 = (const char *)sub_630F40("SID_VIDEOPOKER_TWOPAIR");
      strcpy(Destination, v43);
      break;
    case 0x2B:
      if ( *(_DWORD *)(dword_7947E0 + 20244) == 3 || *(_DWORD *)(dword_7947E0 + 20244) == 4 )
      {
        v44 = (const char *)sub_630F40("SID_VIDEOPOKER_PAIR10ORBETTER");
        strcpy(Destination, v44);
      }
      if ( *(_DWORD *)(dword_7947E0 + 20244) <= 2u )
      {
        v45 = (const char *)sub_630F40("SID_VIDEOPOKER_PAIRJACKSORBETTER");
        strcpy(Destination, v45);
      }
      if ( *(_DWORD *)(dword_7947E0 + 20244) == 8 )
      {
        v46 = (const char *)sub_630F40("SID_VIDEOPOKER_TWOKINGSORTWOACES");
        strcpy(Destination, v46);
      }
      break;
    case 0x2C:
      if ( *(_DWORD *)(dword_7947E0 + 20244) == 8 )
      {
        v47 = (const char *)sub_630F40("SID_VIDEOPOKER_JOKERPLUSKINGORBETTER");
        strcpy(Destination, v47);
      }
      if ( *(_DWORD *)(dword_7947E0 + 20244) == 9 )
      {
        v48 = (const char *)sub_630F40("SID_VIDEOPOKER_JOKERPLUSJACKORBETTER");
        strcpy(Destination, v48);
      }
      break;
    case 0x2D:
      v49 = (const char *)sub_630F40("SID_VIDEOPOKER_LOWPAIR");
      strcpy(Destination, v49);
      break;
    case 0x2E:
      v50 = (const char *)sub_630F40("SID_VIDEOPOKER_ONEPAIR");
      strcpy(Destination, v50);
      break;
    case 0x2F:
      v51 = (const char *)sub_630F40("SID_VIDEOPOKER_TWOWILDGARBAGE");
      strcpy(Destination, v51);
      break;
    case 0x30:
      v52 = (const char *)sub_630F40("SID_VIDEOPOKER_JOKERPLUS5TO10");
      strcpy(Destination, v52);
      break;
    case 0x31:
      v53 = (const char *)sub_630F40("SID_VIDEOPOKER_WILDGARBAGE");
      strcpy(Destination, v53);
      break;
    case 0x32:
      v54 = (const char *)sub_630F40("SID_VIDEOPOKER_ACEANDKING");
      strcpy(Destination, v54);
      break;
    case 0x33:
      v55 = (const char *)sub_630F40("SID_VIDEOPOKER_ACEORKING");
      strcpy(Destination, v55);
      break;
    case 0x34:
      v56 = (const char *)sub_630F40("SID_VIDEOPOKER_123HIGHCARDS");
      strcpy(Destination, v56);
      break;
    default:
      break;
  }
  v57 = (char *)sub_630F40("SID_GENERIC_STRATEGY");
  return sub_57BE80(1, v57, Destination);
}


//======================================================================
// sub_552620
// entry 00552620  size 228  status ok
//======================================================================

int sub_552620()
{
  int result; // eax
  int v1; // [esp+4h] [ebp-2Ch]
  int v2; // [esp+8h] [ebp-28h]
  void *v3; // [esp+14h] [ebp-1Ch]
  void *v4; // [esp+1Ch] [ebp-14h]

  switch ( *(_DWORD *)(dword_7947E0 + 20244) )
  {
    case 0:
    case 4:
    case 7:
    case 0xA:
      v4 = operator new(0x9Cu);
      if ( v4 )
        v2 = sub_552720(v4);
      else
        v2 = 0;
      result = v2;
      break;
    default:
      v3 = operator new(0xBCu);
      if ( v3 )
        v1 = sub_552C60(v3);
      else
        v1 = 0;
      result = v1;
      break;
  }
  return result;
}


//======================================================================
// sub_552720
// entry 00552720  size 279  status ok
//======================================================================

ATL::CCRTHeap *__thiscall sub_552720(ATL::CCRTHeap *this)
{
  int i; // [esp+4h] [ebp-4h]
  int j; // [esp+4h] [ebp-4h]

  ATL::CCRTHeap::CCRTHeap(this);
  *(_DWORD *)this = &VideoPokerDisplay::`vftable';
  for ( i = 0; i < 5; ++i )
  {
    *((_DWORD *)this + i + 1) = 0;
    *((_DWORD *)this + i + 6) = 0;
    *((_DWORD *)this + i + 19) = 0;
  }
  *((_DWORD *)this + 24) = 0;
  *((_DWORD *)this + 25) = 0;
  *((_DWORD *)this + 26) = 0;
  *((_DWORD *)this + 27) = 0;
  *((_DWORD *)this + 28) = 0;
  *((_DWORD *)this + 29) = 0;
  *((_DWORD *)this + 36) = 0;
  for ( j = 0; j < 3; ++j )
    *((_DWORD *)this + j + 30) = 0;
  *((_DWORD *)this + 33) = 0;
  *((_DWORD *)this + 34) = 0;
  *((_DWORD *)this + 35) = 0;
  *((_DWORD *)this + 37) = 0;
  *((_DWORD *)this + 38) = 0;
  return this;
}


//======================================================================
// sub_552840
// entry 00552840  size 1045  status ok
//======================================================================

void __thiscall sub_552840(CNoTrackObject *this)
{
  int i; // [esp+B0h] [ebp-10h]
  int j; // [esp+B0h] [ebp-10h]

  *(_DWORD *)this = &VideoPokerDisplay::`vftable';
  for ( i = 0; i < 5; ++i )
  {
    if ( *((_DWORD *)this + i + 1) )
      (***((void (__thiscall ****)(_DWORD, int))this + i + 1))(*((_DWORD *)this + i + 1), 1);
    if ( *((_DWORD *)this + i + 6) )
      (***((void (__thiscall ****)(_DWORD, int))this + i + 6))(*((_DWORD *)this + i + 6), 1);
    if ( *((_DWORD *)this + i + 19) )
      (***((void (__thiscall ****)(_DWORD, int))this + i + 19))(*((_DWORD *)this + i + 19), 1);
  }
  if ( *((_DWORD *)this + 24) )
    (***((void (__thiscall ****)(_DWORD, int))this + 24))(*((_DWORD *)this + 24), 1);
  if ( *((_DWORD *)this + 25) )
    (***((void (__thiscall ****)(_DWORD, int))this + 25))(*((_DWORD *)this + 25), 1);
  if ( *((_DWORD *)this + 26) )
    (***((void (__thiscall ****)(_DWORD, int))this + 26))(*((_DWORD *)this + 26), 1);
  if ( *((_DWORD *)this + 27) )
    (***((void (__thiscall ****)(_DWORD, int))this + 27))(*((_DWORD *)this + 27), 1);
  if ( *((_DWORD *)this + 28) )
    (***((void (__thiscall ****)(_DWORD, int))this + 28))(*((_DWORD *)this + 28), 1);
  if ( *((_DWORD *)this + 29) )
    (***((void (__thiscall ****)(_DWORD, int))this + 29))(*((_DWORD *)this + 29), 1);
  for ( j = 0; j < 3; ++j )
  {
    if ( *((_DWORD *)this + j + 30) )
      (***((void (__thiscall ****)(_DWORD, int))this + j + 30))(*((_DWORD *)this + j + 30), 1);
  }
  if ( *((_DWORD *)this + 33) )
    (***((void (__thiscall ****)(_DWORD, int))this + 33))(*((_DWORD *)this + 33), 1);
  if ( *((_DWORD *)this + 34) )
    (***((void (__thiscall ****)(_DWORD, int))this + 34))(*((_DWORD *)this + 34), 1);
  if ( *((_DWORD *)this + 35) )
    (***((void (__thiscall ****)(_DWORD, int))this + 35))(*((_DWORD *)this + 35), 1);
  if ( *((_DWORD *)this + 36) )
    (***((void (__thiscall ****)(_DWORD, int))this + 36))(*((_DWORD *)this + 36), 1);
  CNoTrackObject::~CNoTrackObject(this);
}


//======================================================================
// sub_552C60
// entry 00552c60  size 115  status ok
//======================================================================

ATL::CCRTHeap *__thiscall sub_552C60(ATL::CCRTHeap *this)
{
  int i; // [esp+4h] [ebp-4h]

  sub_552720(this);
  *(_DWORD *)this = &VideoPokerDisplayLegacy::`vftable';
  for ( i = 0; i < 5; ++i )
    *((_DWORD *)this + i + 39) = 0;
  *((_DWORD *)this + 44) = 0;
  *((_DWORD *)this + 45) = 0;
  *((_DWORD *)this + 46) = 0;
  return this;
}


//======================================================================
// sub_552CE0
// entry 00552ce0  size 316  status ok
//======================================================================

void __thiscall sub_552CE0(CNoTrackObject *this)
{
  int i; // [esp+38h] [ebp-10h]

  *(_DWORD *)this = &VideoPokerDisplayLegacy::`vftable';
  for ( i = 0; i < 5; ++i )
  {
    if ( *((_DWORD *)this + i + 39) )
      (***((void (__thiscall ****)(_DWORD, int))this + i + 39))(*((_DWORD *)this + i + 39), 1);
  }
  if ( *((_DWORD *)this + 44) )
    (***((void (__thiscall ****)(_DWORD, int))this + 44))(*((_DWORD *)this + 44), 1);
  if ( *((_DWORD *)this + 45) )
    (***((void (__thiscall ****)(_DWORD, int))this + 45))(*((_DWORD *)this + 45), 1);
  if ( *((_DWORD *)this + 46) )
    (***((void (__thiscall ****)(_DWORD, int))this + 46))(*((_DWORD *)this + 46), 1);
  sub_552840(this);
}


//======================================================================
// sub_552E20
// entry 00552e20  size 82  status ok
//======================================================================

int __stdcall sub_552E20(int a1)
{
  int result; // eax

  switch ( a1 )
  {
    case 0:
      result = 3208010;
      break;
    case 1:
      result = 3208009;
      break;
    case 2:
      result = 3208008;
      break;
    case 3:
      result = 3208007;
      break;
    case 4:
      result = 3208011;
      break;
    case 5:
      result = 3208012;
      break;
    default:
      result = -1;
      break;
  }
  return result;
}


//======================================================================
// sub_552E90
// entry 00552e90  size 103  status ok
//======================================================================

int __stdcall sub_552E90(int a1)
{
  int result; // eax
  int v2; // [esp+8h] [ebp-4h]

  v2 = sub_5FB300(a1);
  if ( v2 )
    (*(void (__thiscall **)(int))(*(_DWORD *)v2 + 204))(v2);
  result = sub_552E20(a1);
  if ( result != -1 )
    return sub_5F2B20(result, 1);
  return result;
}


//======================================================================
// sub_552F00
// entry 00552f00  size 101  status ok
//======================================================================

int __stdcall sub_552F00(int a1)
{
  int result; // eax
  int v2; // [esp+8h] [ebp-4h]

  v2 = sub_5FB300(a1);
  if ( v2 )
    (*(void (__thiscall **)(int))(*(_DWORD *)v2 + 208))(v2);
  result = sub_552E20(a1);
  if ( result != -1 )
    return sub_5F2BA0(result);
  return result;
}


//======================================================================
// sub_552F70
// entry 00552f70  size 147  status ok
//======================================================================

int sub_552F70()
{
  int i; // [esp+8h] [ebp-4h]

  for ( i = 0; i < 6; ++i )
    sub_552F00(dword_73EFE0[i]);
  sub_5F2BA0(3208002);
  sub_5F2BA0(3208003);
  sub_5F2BA0(3208004);
  sub_5F2BA0(3208005);
  return sub_5F2BA0(3208006);
}


//======================================================================
// sub_553010
// entry 00553010  size 549  status ok
//======================================================================

int __thiscall sub_553010(_DWORD *this)
{
  int v1; // eax
  int v2; // eax
  int v3; // eax
  int v4; // eax
  int v6; // [esp+4h] [ebp-64h]
  int v7; // [esp+8h] [ebp-60h]
  int v8; // [esp+Ch] [ebp-5Ch]
  int v9; // [esp+10h] [ebp-58h]
  void *v11; // [esp+18h] [ebp-50h]
  void *v12; // [esp+20h] [ebp-48h]
  void *v13; // [esp+30h] [ebp-38h]

  v1 = sub_630F40("SID_VIDEOPOKER");
  sub_5F38B0(v1);
  (*(void (__thiscall **)(_DWORD *))(*this + 8))(this);
  v13 = operator new(0x184u);
  if ( v13 )
    v9 = sub_5F5BF0(v13);
  else
    v9 = 0;
  *(this + 27) = v9;
  v2 = sub_554230(this);
  sub_5EAE80(v2, 0, 0, 100, -1);
  *(_DWORD *)(*(this + 27) + 376) = 8;
  if ( operator new(0x1Cu) )
    v8 = sub_600A70(0);
  else
    v8 = 0;
  sub_5F5D50(v8);
  (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 27) + 116))(*(this + 27));
  v12 = operator new(0x184u);
  if ( v12 )
    v7 = sub_5F5BF0(v12);
  else
    v7 = 0;
  *(this + 28) = v7;
  v3 = sub_554230(this);
  sub_5EAE80(v3, 0, 0, 100, -1);
  *(_DWORD *)(*(this + 28) + 376) = 8;
  v11 = operator new(0x184u);
  if ( v11 )
    v6 = sub_5F5BF0(v11);
  else
    v6 = 0;
  *(this + 29) = v6;
  v4 = sub_554230(this);
  sub_5EAE80(v4, 0, 0, 100, -1);
  *(_DWORD *)(*(this + 29) + 376) = 8;
  sub_552F70();
  return sub_5542C0();
}


//======================================================================
// sub_553240
// entry 00553240  size 1818  status ok
//======================================================================

int __thiscall sub_553240(_DWORD *this)
{
  int v1; // eax
  int v2; // eax
  int v3; // eax
  int v4; // eax
  int v5; // esi
  int v6; // eax
  int v7; // esi
  int v8; // eax
  int v9; // esi
  int v10; // eax
  int v12; // [esp-Ch] [ebp-CCh]
  int v13; // [esp+8h] [ebp-B8h]
  int v14; // [esp+Ch] [ebp-B4h]
  int v15; // [esp+10h] [ebp-B0h]
  int v16; // [esp+14h] [ebp-ACh]
  int v17; // [esp+18h] [ebp-A8h]
  int v18; // [esp+1Ch] [ebp-A4h]
  int v19; // [esp+20h] [ebp-A0h]
  int v20; // [esp+24h] [ebp-9Ch]
  int v21; // [esp+28h] [ebp-98h]
  void *v23; // [esp+34h] [ebp-8Ch]
  void *v24; // [esp+3Ch] [ebp-84h]
  void *v25; // [esp+44h] [ebp-7Ch]
  void *v26; // [esp+4Ch] [ebp-74h]
  void *v27; // [esp+54h] [ebp-6Ch]
  void *v28; // [esp+5Ch] [ebp-64h]
  void *v29; // [esp+64h] [ebp-5Ch]
  void *v30; // [esp+6Ch] [ebp-54h]
  void *v31; // [esp+74h] [ebp-4Ch]
  _DWORD v32[7]; // [esp+7Ch] [ebp-44h]
  int i; // [esp+98h] [ebp-28h]
  int v34; // [esp+BCh] [ebp-4h]

  sub_5F1B10(0, 0, 0);
  v31 = operator new(0x178u);
  v34 = 0;
  if ( v31 )
  {
    sub_5EAAF0(v31);
    v21 = v1;
  }
  else
  {
    v21 = 0;
  }
  v34 = -1;
  *(this + 36) = v21;
  v2 = sub_5541C0(this);
  sub_5EAE80(v2, 0, 0, 0, -1);
  (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 36) + 116))(*(this + 36));
  v30 = operator new(0x178u);
  v34 = 1;
  if ( v30 )
  {
    sub_5EAAF0(v30);
    v20 = v3;
  }
  else
  {
    v20 = 0;
  }
  v34 = -1;
  *(this + 24) = v20;
  sub_5EAE80(3208024, 0, 0, 1, -1);
  (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 24) + 116))(*(this + 24));
  v29 = operator new(0x1D4u);
  v34 = 2;
  if ( v29 )
    v19 = sub_60F380(v29);
  else
    v19 = 0;
  *(this + 33) = v19;
  sub_60F560(7, 3208027, 109, 360, 8, -1);
  v28 = operator new(0x1D4u);
  v34 = 3;
  if ( v28 )
    v18 = sub_60F380(v28);
  else
    v18 = 0;
  *(this + 34) = v18;
  sub_60F560(7, 3208027, 244, 360, 8, -1);
  v27 = operator new(0x1D4u);
  v34 = 4;
  if ( v27 )
    v17 = sub_60F380(v27);
  else
    v17 = 0;
  v34 = -1;
  *(this + 35) = v17;
  sub_60F560(5, 3208027, 525, 360, 8, -1);
  v32[0] = 64;
  v32[1] = 201;
  v32[2] = 339;
  v32[3] = 477;
  v32[4] = 615;
  for ( i = 0; i < 5; ++i )
  {
    v26 = operator new(0x1ACu);
    v34 = 5;
    if ( v26 )
      v16 = sub_555510(0);
    else
      v16 = 0;
    v34 = -1;
    *(this + i + 1) = v16;
    sub_5EAE80(3208025, 640 * v32[i] / 800, 194, 2, -1);
    v25 = operator new(0x184u);
    v34 = 6;
    if ( v25 )
      v15 = sub_5F5BF0(v25);
    else
      v15 = 0;
    v34 = -1;
    *(this + i + 6) = v15;
    sub_5EAE80(3208019, 640 * v32[i] / 800, 224, 8, -1);
    *(_DWORD *)(*(this + i + 6) + 376) = 0;
    v24 = operator new(0x178u);
    v34 = 7;
    if ( v24 )
    {
      sub_5EAAF0(v24);
      v14 = v4;
    }
    else
    {
      v14 = 0;
    }
    v34 = -1;
    *(this + i + 19) = v14;
    v12 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*(this + i + 1) + 84))(*(this + i + 1));
    v5 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*(this + i + 1) + 76))(*(this + i + 1));
    v6 = sub_5F5550(*(this + i + 1));
    sub_5EAE80(3208026, v6 / 2 + v5, v12, 7, -1);
    v7 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*(this + i + 19) + 84))(*(this + i + 19));
    v8 = sub_5F5590(*(this + i + 19));
    v9 = (*(int (__thiscall **)(_DWORD, int))(*(_DWORD *)*(this + i + 19) + 76))(*(this + i + 19), v7 - v8 / 2);
    v10 = sub_5F5550(*(this + i + 19));
    (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)*(this + i + 19) + 68))(*(this + i + 19), v9 - v10 / 2);
  }
  v23 = operator new(0x184u);
  v34 = 8;
  if ( v23 )
    v13 = sub_5F5BF0(v23);
  else
    v13 = 0;
  v34 = -1;
  *(this + 26) = v13;
  sub_5EAE80(3208017, 0, 0, 8, -1);
  *(_DWORD *)(*(this + 26) + 376) = *((_BYTE *)dword_162EE84 + 37) != 0 ? 5 : 3;
  for ( i = 0; i < 7; ++i )
    sub_5F9DE0(0, dword_73EFE0[i], i + 3208010, 0, 0, 8, &Source, -1, -1, -1, -1, 0);
  sub_5F9DE0(0, 6, 3208018, 0, 0, 8, &Source, -1, -1, -1, -1, 0);
  sub_5FB300(6);
  return sub_602790(0);
}


//======================================================================
// sub_553960
// entry 00553960  size 2137  status ok
//======================================================================

int __thiscall sub_553960(int this)
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
  int v14; // [esp-14h] [ebp-108h]
  int v15; // [esp-14h] [ebp-108h]
  int v16; // [esp-10h] [ebp-104h]
  int v17; // [esp-10h] [ebp-104h]
  int v18; // [esp+4h] [ebp-F0h]
  int v19; // [esp+8h] [ebp-ECh]
  int v20; // [esp+Ch] [ebp-E8h]
  int v21; // [esp+10h] [ebp-E4h]
  int v22; // [esp+14h] [ebp-E0h]
  int v23; // [esp+18h] [ebp-DCh]
  int v24; // [esp+1Ch] [ebp-D8h]
  int v25; // [esp+20h] [ebp-D4h]
  int v26; // [esp+24h] [ebp-D0h]
  int v27; // [esp+28h] [ebp-CCh]
  void *v29; // [esp+34h] [ebp-C0h]
  void *v30; // [esp+3Ch] [ebp-B8h]
  void *v31; // [esp+44h] [ebp-B0h]
  void *v32; // [esp+4Ch] [ebp-A8h]
  void *v33; // [esp+5Ch] [ebp-98h]
  void *v34; // [esp+64h] [ebp-90h]
  void *v35; // [esp+6Ch] [ebp-88h]
  void *v36; // [esp+74h] [ebp-80h]
  void *v37; // [esp+7Ch] [ebp-78h]
  void *v38; // [esp+84h] [ebp-70h]
  int v39; // [esp+8Ch] [ebp-68h]
  _DWORD v40[5]; // [esp+90h] [ebp-64h]
  _DWORD v41[5]; // [esp+A4h] [ebp-50h]
  __int64 v42; // [esp+B8h] [ebp-3Ch]
  _DWORD v43[3]; // [esp+C0h] [ebp-34h]
  int i; // [esp+CCh] [ebp-28h]
  char Destination[20]; // [esp+D0h] [ebp-24h] BYREF
  int v46; // [esp+F0h] [ebp-4h]

  sub_5F1AD0(3208000);
  v38 = operator new(0x178u);
  v46 = 0;
  if ( v38 )
  {
    sub_5EAAF0(v38);
    v27 = v1;
  }
  else
  {
    v27 = 0;
  }
  v46 = -1;
  *(_DWORD *)(this + 96) = v27;
  v2 = sub_5541C0(this);
  sub_5EAE80(v2, 0, 0, 0, -1);
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 96) + 116))(*(_DWORD *)(this + 96));
  v37 = operator new(0x178u);
  v46 = 1;
  if ( v37 )
  {
    sub_5EAAF0(v37);
    v26 = v3;
  }
  else
  {
    v26 = 0;
  }
  v46 = -1;
  *(_DWORD *)(this + 100) = v26;
  sub_5EAE80(80012, 0, 0, 1, -1);
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 100) + 116))(*(_DWORD *)(this + 100));
  v36 = operator new(0x1D0u);
  v46 = 2;
  if ( v36 )
  {
    sub_5EC5A0(v36);
    v25 = v4;
  }
  else
  {
    v25 = 0;
  }
  *(_DWORD *)(this + 176) = v25;
  sub_5EC8F0("0", 42, 80, 25, 310, 385, 8, 18, -1);
  v35 = operator new(0x1D0u);
  v46 = 3;
  if ( v35 )
  {
    sub_5EC5A0(v35);
    v24 = v5;
  }
  else
  {
    v24 = 0;
  }
  *(_DWORD *)(this + 180) = v24;
  sub_5EC8F0("0", 42, 35, 25, 149, 385, 8, 48, -1);
  v34 = operator new(0x1D0u);
  v46 = 4;
  if ( v34 )
  {
    sub_5EC5A0(v34);
    v23 = v6;
  }
  else
  {
    v23 = 0;
  }
  v46 = -1;
  *(_DWORD *)(this + 184) = v23;
  v7 = sub_630F40("SID_VIDEOPOKER_GAMEOVER");
  sub_5EC8F0(v7, 42, 80, 25, 300, 216, 8, 18, -1);
  v43[0] = "SID_VIDEOPOKER_COINSIN";
  v43[1] = "SID_VIDEOPOKER_CREDIT";
  v43[2] = "SID_GENERIC_EMPTY";
  v39 = 145;
  v40[0] = 370;
  v40[1] = 360;
  v40[2] = 370;
  v40[3] = 145;
  v40[4] = 216;
  for ( i = 0; i < 3; ++i )
  {
    v33 = operator new(0x1D0u);
    v46 = 5;
    if ( v33 )
    {
      sub_5EC5A0(v33);
      v22 = v8;
    }
    else
    {
      v22 = 0;
    }
    v46 = -1;
    *(_DWORD *)(this + 4 * i + 120) = v22;
    v16 = v40[2 * i];
    v14 = v40[2 * i - 1];
    v9 = sub_630F40(v43[i]);
    sub_5EC8F0(v9, 42, 100, 20, v14, v16, 8, 5, -1);
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 4 * i + 120) + 116))(*(_DWORD *)(this + 4 * i + 120));
  }
  v10 = sub_5D0AA0(dword_793420);
  v42 = sub_64C8A0(v10, 0);
  sub_64C8D0(v42, SHIDWORD(v42), Destination, 1, 1, 1);
  (*(void (__thiscall **)(_DWORD, char *))(**(_DWORD **)(this + 128) + 180))(*(_DWORD *)(this + 128), Destination);
  v41[0] = 133;
  v41[1] = 188;
  v41[2] = 243;
  v41[3] = 298;
  v41[4] = 353;
  for ( i = 0; i < 5; ++i )
  {
    v32 = operator new(0x1ACu);
    v46 = 6;
    if ( v32 )
      v21 = sub_555510(1);
    else
      v21 = 0;
    v46 = -1;
    *(_DWORD *)(this + 4 * i + 4) = v21;
    sub_5EAE80(3208001, v41[i], 293, 2, -1);
    v31 = operator new(0x184u);
    v46 = 7;
    if ( v31 )
      v20 = sub_5F5BF0(v31);
    else
      v20 = 0;
    v46 = -1;
    *(_DWORD *)(this + 4 * i + 24) = v20;
    sub_5EAE80(80025, v41[i], 280, 8, -1);
    *(_DWORD *)(*(_DWORD *)(this + 4 * i + 24) + 376) = 0;
    v30 = operator new(0x1D0u);
    v46 = 8;
    if ( v30 )
    {
      sub_5EC5A0(v30);
      v19 = v11;
    }
    else
    {
      v19 = 0;
    }
    v46 = -1;
    *(_DWORD *)(this + 4 * i + 156) = v19;
    v17 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 4 * i + 4) + 84))(*(_DWORD *)(this + 4 * i + 4)) - 35;
    v15 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 4 * i + 4) + 76))(*(_DWORD *)(this + 4 * i + 4)) + 10;
    v12 = sub_630F40("SID_VIDEOPOKER_HELD");
    sub_5EC8F0(v12, 42, 100, 20, v15, v17, 7, 5, -1);
  }
  v29 = operator new(0x184u);
  v46 = 9;
  if ( v29 )
    v18 = sub_5F5BF0(v29);
  else
    v18 = 0;
  v46 = -1;
  *(_DWORD *)(this + 104) = v18;
  sub_5EAE80(80011, 0, 0, 8, -1);
  *(_DWORD *)(*(_DWORD *)(this + 104) + 376) = *((_BYTE *)dword_162EE84 + 37) != 0 ? 5 : 3;
  for ( i = 0; i < 7; ++i )
    sub_5F9DE0(0, dword_73EFE0[i], i + 80003, 0, 0, 8, &Source, -1, -1, -1, -1, 0);
  sub_5F9DE0(0, 6, 80013, 0, 0, 8, &Source, -1, -1, -1, -1, 0);
  sub_5FB300(6);
  return sub_602790(0);
}


//======================================================================
// sub_5541C0
// entry 005541c0  size 111  status ok
//======================================================================

int sub_5541C0()
{
  _DWORD v1[11]; // [esp+8h] [ebp-2Ch]

  v1[0] = 80021;
  v1[1] = 80015;
  v1[2] = 80016;
  v1[3] = 80014;
  v1[4] = 80017;
  v1[5] = 80020;
  v1[6] = 80022;
  v1[7] = 80018;
  v1[8] = 80023;
  v1[9] = 80024;
  v1[10] = 80019;
  return v1[*(_DWORD *)(dword_7947E0 + 20244)];
}


//======================================================================
// sub_554230
// entry 00554230  size 97  status ok
//======================================================================

int sub_554230()
{
  int result; // eax

  switch ( *(_DWORD *)(dword_7947E0 + 20244) )
  {
    case 0:
    case 4:
      result = 3208021;
      break;
    case 1:
    case 3:
      result = 80027;
      break;
    case 2:
    case 8:
      result = 80028;
      break;
    case 5:
    case 6:
    case 9:
      result = 80026;
      break;
    case 7:
      result = 3208020;
      break;
    case 0xA:
      result = 3208022;
      break;
    default:
      result = 80026;
      break;
  }
  return result;
}


//======================================================================
// sub_5542C0
// entry 005542c0  size 463  status ok
//======================================================================

int __thiscall sub_5542C0(_DWORD **this)
{
  int result; // eax
  int v2; // eax
  int v3; // [esp+4h] [ebp-128h]

  ((void (__thiscall *)(_DWORD **))(*this)[3])(this);
  if ( (unsigned __int8)sub_559130(dword_793420) )
  {
    sub_552E90(1);
    sub_552E90(0);
  }
  if ( (unsigned __int8)sub_559180(dword_793420) )
  {
    sub_552E90(5);
  }
  else
  {
    sub_552F00(5);
    if ( !*(_DWORD *)(dword_793420 + 8) )
    {
      (*(void (__thiscall **)(_DWORD))(**(this + 27) + 116))(*(this + 27));
      if ( operator new(0x1Cu) )
        v3 = sub_600A70(0);
      else
        v3 = 0;
      sub_5F5D50(v3);
      sub_5F5D50(0);
      (*(void (__thiscall **)(_DWORD))(**(this + 28) + 112))(*(this + 28));
      sub_5F5D50(0);
      (*(void (__thiscall **)(_DWORD))(**(this + 29) + 112))(*(this + 29));
    }
  }
  sub_552E90(6);
  result = sub_5591A0(dword_793420);
  if ( (_BYTE)result )
  {
    v2 = sub_5DCB00(0);
    return sub_5DBB70(v2);
  }
  return result;
}


//======================================================================
// sub_554490
// entry 00554490  size 157  status ok
//======================================================================

int __thiscall sub_554490(int this)
{
  int PreDockState; // eax
  int v4; // [esp+Ch] [ebp-4h]

  v4 = *(_DWORD *)(dword_793420 + 4);
  PreDockState = CPaneFrameWnd::GetPreDockState(*(_DWORD *)(this + 132));
  sub_60FB30(v4, v4 <= PreDockState);
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 132) + 116))(*(_DWORD *)(this + 132));
  sub_60FB30(*(_DWORD *)(dword_793420 + 8), 1);
  return (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 136) + 116))(*(_DWORD *)(this + 136));
}


//======================================================================
// sub_554530
// entry 00554530  size 307  status ok
//======================================================================

int __thiscall sub_554530(_DWORD **this)
{
  int v3; // [esp+8h] [ebp-10Ch]
  char Buffer[260]; // [esp+Ch] [ebp-108h] BYREF

  v3 = *(_DWORD *)(dword_793420 + 4);
  if ( v3 < 999999 )
    sprintf(Buffer, "%d", v3);
  else
    sprintf(Buffer, "******");
  (*(void (__thiscall **)(_DWORD, char *))(**(this + 44) + 180))(*(this + 44), Buffer);
  (*(void (__thiscall **)(_DWORD))(**(this + 44) + 116))(*(this + 44));
  sprintf(Buffer, "%d", *(_DWORD *)(dword_793420 + 8));
  (*(void (__thiscall **)(_DWORD, char *))(**(this + 45) + 180))(*(this + 45), Buffer);
  return (*(int (__thiscall **)(_DWORD))(**(this + 45) + 116))(*(this + 45));
}


//======================================================================
// sub_554670
// entry 00554670  size 647  status ok
//======================================================================

int __thiscall sub_554670(void *this)
{
  int result; // eax
  int v2; // esi
  int v3; // [esp+8h] [ebp-13Ch]

  result = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 12))(this);
  if ( *(_DWORD *)(dword_793420 + 8) )
  {
    sub_552F70();
    sub_5F5D50(0);
    if ( !*(_DWORD *)(dword_793420 + 20) )
      (*(void (__thiscall **)(_DWORD, _DWORD))(**((_DWORD **)this + 27) + 176))(*((_DWORD *)this + 27), 0);
    (*(void (__thiscall **)(_DWORD))(**((_DWORD **)this + 27) + 116))(*((_DWORD *)this + 27));
    v2 = *(_DWORD *)(dword_793420 + 8) - 1;
    if ( (int)(v2 - CMFCToolBarsCustomizeDialog::GetFlags(*((CMFCToolBarsCustomizeDialog **)this + 27))) <= 1 )
    {
      (*(void (__thiscall **)(_DWORD, int))(**((_DWORD **)this + 27) + 176))(
        *((_DWORD *)this + 27),
        *(_DWORD *)(dword_793420 + 8) - 1);
    }
    else
    {
      if ( operator new(0x20u) )
        v3 = sub_600F30(*(_DWORD *)(dword_793420 + 8) - 1, 0);
      else
        v3 = 0;
      sub_5F5D50(v3);
    }
    sub_5F5D50(0);
    (*(void (__thiscall **)(_DWORD))(**((_DWORD **)this + 28) + 112))(*((_DWORD *)this + 28));
    sub_5F5D50(0);
    (*(void (__thiscall **)(_DWORD))(**((_DWORD **)this + 29) + 112))(*((_DWORD *)this + 29));
    (*(void (__thiscall **)(void *))(*(_DWORD *)this + 20))(this);
    if ( *(_DWORD *)(dword_793420 + 8) == 5 )
    {
      return sub_552F00(6);
    }
    else
    {
      sub_552E90(4);
      result = (unsigned __int8)sub_559130(dword_793420);
      if ( (_BYTE)result )
      {
        sub_552E90(1);
        return sub_552E90(0);
      }
    }
  }
  return result;
}


//======================================================================
// sub_554900
// entry 00554900  size 29  status ok
//======================================================================

int sub_554900()
{
  return sub_60FB30(0, 1);
}


//======================================================================
// sub_554920
// entry 00554920  size 38  status ok
//======================================================================

int __thiscall sub_554920(_DWORD **this)
{
  return (*(int (__thiscall **)(_DWORD, _DWORD **))(**(this + 46) + 112))(*(this + 46), this);
}


//======================================================================
// sub_554950
// entry 00554950  size 519  status ok
//======================================================================

int __thiscall sub_554950(void *this)
{
  int result; // eax
  unsigned int Flags; // eax
  int v3; // [esp+4h] [ebp-3Ch]
  int v4; // [esp+8h] [ebp-38h]
  int v6; // [esp+14h] [ebp-2Ch]
  int v7; // [esp+30h] [ebp-10h]

  v7 = sub_54C460((_WORD *)dword_793428, *(_DWORD *)(dword_7947E0 + 20244), dword_793420 + 34);
  if ( *(_DWORD *)(dword_793420 + 20) == 1 )
  {
    sub_552E90(4);
    sub_552E90(3);
    sub_552E90(2);
  }
  result = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 4))(this);
  if ( v7 > -1 && !*(_BYTE *)(dword_793420 + 44) )
  {
    (*(void (__thiscall **)(_DWORD))(**((_DWORD **)this + 27) + 112))(*((_DWORD *)this + 27));
    (*(void (__thiscall **)(_DWORD, int))(**((_DWORD **)this + 28) + 176))(*((_DWORD *)this + 28), 6 * v7 + 5);
    v6 = *(_DWORD *)(dword_793420 + 8);
    Flags = CMFCToolBarsCustomizeDialog::GetFlags(*((CMFCToolBarsCustomizeDialog **)this + 28));
    (*(void (__thiscall **)(_DWORD, unsigned int))(**((_DWORD **)this + 29) + 176))(*((_DWORD *)this + 29), v6 + Flags);
    if ( *(_DWORD *)(dword_793420 + 20) == 1 )
    {
      (*(void (__thiscall **)(_DWORD))(**((_DWORD **)this + 28) + 116))(*((_DWORD *)this + 28));
      return (*(int (__thiscall **)(_DWORD))(**((_DWORD **)this + 29) + 116))(*((_DWORD *)this + 29));
    }
    else
    {
      if ( operator new(0x28u) )
        v4 = sub_601110(7, 1, 0, 0, 0);
      else
        v4 = 0;
      sub_5F5D50(v4);
      if ( operator new(0x28u) )
        v3 = sub_601110(7, 1, 0, 0, 0);
      else
        v3 = 0;
      return sub_5F5D50(v3);
    }
  }
  return result;
}


//======================================================================
// sub_554B60
// entry 00554b60  size 131  status ok
//======================================================================

void __thiscall sub_554B60(_DWORD **this)
{
  int i; // [esp+4h] [ebp-4h]

  for ( i = 0; i < 5; ++i )
  {
    if ( (unsigned __int8)sub_5573A0(*((_WORD *)*(this + i + 1) + 200)) )
      (*(void (__thiscall **)(_DWORD))(**(this + i + 19) + 116))(*(this + i + 19));
    else
      (*(void (__thiscall **)(_DWORD))(**(this + i + 19) + 112))(*(this + i + 19));
  }
}


//======================================================================
// sub_554BF0
// entry 00554bf0  size 143  status ok
//======================================================================

void __thiscall sub_554BF0(_DWORD **this)
{
  int i; // [esp+4h] [ebp-4h]

  for ( i = 0; i < 5; ++i )
  {
    if ( (unsigned __int8)sub_5573A0(*((_WORD *)*(this + i + 1) + 200)) )
      (*(void (__thiscall **)(_DWORD))(**(this + i + 39) + 116))(*(this + i + 39));
    else
      (*(void (__thiscall **)(_DWORD))(**(this + i + 39) + 112))(*(this + i + 39));
  }
}


//======================================================================
// sub_554C80
// entry 00554c80  size 465  status ok
//======================================================================

int __thiscall sub_554C80(void *this, int a2)
{
  if ( !*(_BYTE *)(dword_793420 + 44) && a2 )
  {
    if ( a2 > 20 )
    {
      if ( a2 > 100 )
      {
        if ( *(_BYTE *)(dword_793420 + 45) )
        {
          (*(void (__thiscall **)(Concurrency::details::ContextBase *, int, _DWORD, _DWORD, int, int, _DWORD, _DWORD, int))(*(_DWORD *)dword_162EE84 + 128))(
            dword_162EE84,
            101012,
            0,
            0,
            10,
            16,
            1.0,
            0.5,
            (int)this + 148);
          (*(void (__thiscall **)(Concurrency::details::ContextBase *, int, _DWORD, _DWORD, int, int, _DWORD, _DWORD, int))(*(_DWORD *)dword_162EE84 + 128))(
            dword_162EE84,
            101013,
            0,
            0,
            10,
            3,
            1.0,
            0.5,
            (int)this + 152);
        }
        else
        {
          (*(void (__thiscall **)(Concurrency::details::ContextBase *, int, _DWORD, _DWORD, int, int, _DWORD, _DWORD, int))(*(_DWORD *)dword_162EE84 + 128))(
            dword_162EE84,
            101012,
            0,
            0,
            10,
            5,
            1.0,
            0.5,
            (int)this + 148);
          (*(void (__thiscall **)(Concurrency::details::ContextBase *, int, _DWORD, _DWORD, int, int, _DWORD, _DWORD, int))(*(_DWORD *)dword_162EE84 + 128))(
            dword_162EE84,
            101013,
            0,
            0,
            10,
            1,
            1.0,
            0.5,
            (int)this + 152);
        }
      }
      else
      {
        (*(void (__thiscall **)(Concurrency::details::ContextBase *, int, _DWORD, _DWORD, int, int, _DWORD, _DWORD, int))(*(_DWORD *)dword_162EE84 + 128))(
          dword_162EE84,
          101012,
          0,
          0,
          10,
          5,
          1.0,
          0.5,
          (int)this + 148);
      }
    }
    else
    {
      (*(void (__thiscall **)(Concurrency::details::ContextBase *, int, _DWORD, _DWORD, int, int, _DWORD, _DWORD, int))(*(_DWORD *)dword_162EE84 + 128))(
        dword_162EE84,
        101012,
        0,
        0,
        10,
        3,
        1.0,
        0.5,
        (int)this + 148);
    }
  }
  return (*(int (__thiscall **)(void *, int))(*(_DWORD *)this + 16))(this, a2);
}


//======================================================================
// sub_554E60
// entry 00554e60  size 77  status ok
//======================================================================

int __thiscall sub_554E60(_DWORD *this, int a2)
{
  int PreDockState; // eax

  PreDockState = CPaneFrameWnd::GetPreDockState(*(this + 35));
  sub_60FB30(a2, a2 <= PreDockState);
  return (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 35) + 116))(*(this + 35));
}


//======================================================================
// sub_554EB0
// entry 00554eb0  size 175  status ok
//======================================================================

int __thiscall sub_554EB0(_DWORD **this, int a2)
{
  const char *v2; // eax
  int v3; // eax
  char Buffer[108]; // [esp+4h] [ebp-70h] BYREF

  if ( a2 )
  {
    v2 = (const char *)sub_630F40("SID_GENERIC_WON_COLON_FORMAT");
    sprintf(Buffer, v2, a2);
    (*(void (__thiscall **)(_DWORD, char *))(**(this + 46) + 180))(*(this + 46), Buffer);
  }
  else
  {
    v3 = sub_630F40("SID_VIDEOPOKER_GAMEOVER");
    (*(void (__thiscall **)(_DWORD, int))(**(this + 46) + 180))(*(this + 46), v3);
  }
  return (*(int (__thiscall **)(_DWORD))(**(this + 46) + 116))(*(this + 46));
}


//======================================================================
// sub_554F60
// entry 00554f60  size 187  status ok
//======================================================================

int __thiscall sub_554F60(void *this)
{
  int result; // eax
  int i; // [esp+Ch] [ebp-4h]

  sub_557DC0(dword_793420);
  if ( sub_54D6A0(dword_793428, *(_DWORD *)(dword_7947E0 + 20244), dword_793420 + 34) != 46
    || (result = sub_5573F0(dword_793420), !(_BYTE)result) )
  {
    for ( i = 0; i < 5; ++i )
    {
      if ( *(char *)(i + dword_793428 + 20) != -1 )
        sub_557A30(*(_WORD *)(dword_793420 + 2 * *(char *)(i + dword_793428 + 20) + 34));
    }
    return (*(int (__thiscall **)(void *))(*(_DWORD *)this + 4))(this);
  }
  return result;
}


//======================================================================
// sub_555020
// entry 00555020  size 74  status ok
//======================================================================

int __thiscall sub_555020(_DWORD *this, unsigned __int16 a2)
{
  int i; // [esp+4h] [ebp-4h]

  for ( i = 0; i < 5; ++i )
  {
    if ( *(unsigned __int16 *)(*(this + i + 1) + 400) == a2 )
      return i;
  }
  return -1;
}


//======================================================================
// sub_555070
// entry 00555070  size 290  status ok
//======================================================================

int __thiscall sub_555070(_DWORD **this)
{
  int v2; // [esp+14h] [ebp-20h]

  if ( !*((_BYTE *)dword_162EE84 + 37) )
    (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(dword_79341C + 4) + 4))(*(_DWORD *)(dword_79341C + 4), 1);
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
  (*(void (__thiscall **)(_DWORD, _DWORD))(**(this + 26) + 176))(*(this + 26), 0);
  (*(void (__thiscall **)(_DWORD))(**(this + 26) + 116))(*(this + 26));
  if ( operator new(0x20u) )
    v2 = sub_6010A0(*(_DWORD *)(dword_79341C + 4));
  else
    v2 = 0;
  sub_5F5D50(v2);
  return sub_5542C0(this);
}


//======================================================================
// sub_5551A0
// entry 005551a0  size 197  status ok
//======================================================================

int __thiscall sub_5551A0(int this)
{
  int result; // eax
  int i; // [esp+4h] [ebp-4h]

  sub_552F70();
  if ( *(_DWORD *)(dword_793420 + 20) )
  {
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 116) + 112))(*(_DWORD *)(this + 116));
    sub_5F5D50(0);
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 112) + 112))(*(_DWORD *)(this + 112));
    return sub_5F5D50(0);
  }
  else
  {
    sub_5F4510(*(_DWORD *)(this + 148), 1);
    result = sub_5F4510(*(_DWORD *)(this + 152), 1);
    for ( i = 0; i < 5; ++i )
      result = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 4 * i + 4) + 112))(*(_DWORD *)(this + 4 * i + 4));
  }
  return result;
}


//======================================================================
// sub_555270
// entry 00555270  size 61  status ok
//======================================================================

int __thiscall sub_555270(_DWORD *this, __int16 a2, int a3)
{
  *(_WORD *)(*(this + a3 + 1) + 400) = a2;
  return (*(int (__thiscall **)(_DWORD, _DWORD *))(*(_DWORD *)*(this + a3 + 1) + 116))(*(this + a3 + 1), this);
}


//======================================================================
// sub_5552B0
// entry 005552b0  size 446  status ok
//======================================================================

int __thiscall sub_5552B0(_DWORD *this, int a2)
{
  int v3; // [esp+10h] [ebp-20h]
  int i; // [esp+20h] [ebp-10h]

  (*(void (__thiscall **)(_DWORD *))(*this + 24))(this);
  for ( i = 0; ; ++i )
  {
    if ( i >= 5 )
      return (*(int (__thiscall **)(int, int, _DWORD))(*(_DWORD *)a2 + 8))(a2, 3, 0);
    if ( CMFCScanliner::channels((CMFCScanliner *)*(this + i + 1)) )
      break;
  }
  if ( dword_793418 )
    (*(void (__thiscall **)(Concurrency::details::ContextBase *, int, _DWORD, _DWORD, int, int, _DWORD, _DWORD, _DWORD *))(*(_DWORD *)dword_162EE84 + 128))(
      dword_162EE84,
      100003,
      0,
      0,
      10,
      1,
      1.0,
      0.5,
      this + 38);
  else
    (*(void (__thiscall **)(Concurrency::details::ContextBase *, int, _DWORD, _DWORD, int, int, _DWORD, _DWORD, _DWORD *))(*(_DWORD *)dword_162EE84 + 128))(
      dword_162EE84,
      100003,
      0,
      0,
      10,
      1,
      1.0,
      0.5,
      this + 37);
  dword_793418 = 1 - dword_793418;
  *(this + 11) = i;
  (*(void (__thiscall **)(_DWORD, _DWORD))(*(_DWORD *)*(this + i + 6) + 176))(*(this + i + 6), 0);
  (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + i + 6) + 116))(*(this + i + 6));
  if ( operator new(0x20u) )
    v3 = sub_5558C0(a2);
  else
    v3 = 0;
  return sub_5F5D50(v3);
}


//======================================================================
// sub_555470
// entry 00555470  size 66  status ok
//======================================================================

int __thiscall sub_555470(_DWORD **this)
{
  int result; // eax
  int i; // [esp+4h] [ebp-4h]

  for ( i = 0; i < 5; ++i )
  {
    (*(void (__thiscall **)(_DWORD))(**(this + i + 19) + 112))(*(this + i + 19));
    result = i + 1;
  }
  return result;
}


//======================================================================
// sub_5554C0
// entry 005554c0  size 72  status ok
//======================================================================

int __thiscall sub_5554C0(_DWORD **this)
{
  int result; // eax
  int i; // [esp+4h] [ebp-4h]

  for ( i = 0; i < 5; ++i )
  {
    (*(void (__thiscall **)(_DWORD))(**(this + i + 39) + 112))(*(this + i + 39));
    result = i + 1;
  }
  return result;
}


//======================================================================
// sub_555510
// entry 00555510  size 182  status ok
//======================================================================

int __thiscall sub_555510(int this, char a2)
{
  int v2; // eax
  int v4; // [esp+4h] [ebp-1Ch]
  void *v6; // [esp+Ch] [ebp-14h]

  Concurrency::details::_TaskCollection::_TaskCollection((Concurrency::details::_TaskCollection *)this);
  *(_DWORD *)this = &VideoPokerCardDisplay::`vftable';
  v6 = operator new(0x178u);
  if ( v6 )
  {
    sub_5EAAF0(v6);
    v4 = v2;
  }
  else
  {
    v4 = 0;
  }
  *(_DWORD *)(this + 420) = v4;
  *(_BYTE *)(this + 424) = a2;
  *(_BYTE *)(this + 10) = 0;
  return this;
}


//======================================================================
// sub_5555D0
// entry 005555d0  size 136  status ok
//======================================================================

int __thiscall sub_5555D0(void (__thiscall ****this)(_DWORD, int))
{
  *this = (void (__thiscall ***)(_DWORD, int))&VideoPokerCardDisplay::`vftable';
  if ( *(this + 105) )
    (***(this + 105))(*(this + 105), 1);
  return CExpandoObject::~CExpandoObject(this);
}


//======================================================================
// sub_555660
// entry 00555660  size 56  status ok
//======================================================================

int __thiscall sub_555660(__int16 *this, int a2)
{
  if ( dword_793420 )
    sub_558040(*(this + 200));
  return sub_6447E0(a2);
}


//======================================================================
// sub_5556A0
// entry 005556a0  size 64  status ok
//======================================================================

bool sub_5556A0()
{
  if ( !dword_793420 )
    return 1;
  return *(_DWORD *)(dword_793420 + 20) == 1 && !*(_DWORD *)(*(_DWORD *)(dword_79341C + 4) + 4);
}


//======================================================================
// sub_5556E0
// entry 005556e0  size 422  status ok
//======================================================================

int __thiscall sub_5556E0(__int16 *this)
{
  int v1; // eax
  int v2; // eax
  int v4; // [esp-Ch] [ebp-2Ch]
  int v5; // [esp-8h] [ebp-28h]
  int v6; // [esp+0h] [ebp-20h]
  _DWORD v8[5]; // [esp+Ch] [ebp-14h]

  v8[0] = -1;
  v8[1] = 1;
  v8[2] = 2;
  v8[3] = 3;
  v8[4] = 0;
  if ( sub_641280(*(this + 200)) == 14 )
    v6 = 1;
  else
    v6 = sub_641280(*(this + 200));
  if ( (unsigned __int16)*(this + 200) == 0xFFFF )
  {
    (*(void (__thiscall **)(__int16 *, int))(*(_DWORD *)this + 176))(this, 53);
  }
  else
  {
    v1 = sub_641290(*(this + 200));
    (*(void (__thiscall **)(__int16 *, int))(*(_DWORD *)this + 176))(this, 13 * v8[v1] + v6 - 1);
    if ( sub_641280(*(this + 200)) == 15 )
      (*(void (__thiscall **)(__int16 *, int))(*(_DWORD *)this + 176))(this, 52);
  }
  if ( dword_793428 && sub_54C590(*(this + 200)) == 20 && sub_641280(*(this + 200)) == 2 )
  {
    v5 = CMediaType::IsFixedSize((CMediaType *)this) + 1;
    v4 = (*(int (__thiscall **)(__int16 *))(*(_DWORD *)this + 84))(this);
    v2 = (*(int (__thiscall **)(__int16 *))(*(_DWORD *)this + 76))(this);
    sub_5EAE80(*((_BYTE *)this + 424) != 0 ? 80030 : 3208023, v2, v4, v5, -1);
    (*(void (__thiscall **)(_DWORD))(**((_DWORD **)this + 105) + 116))(*((_DWORD *)this + 105));
  }
  return sub_5EB570(this);
}


//======================================================================
// sub_555890
// entry 00555890  size 46  status ok
//======================================================================

int __thiscall sub_555890(_DWORD **this)
{
  (*(void (__thiscall **)(_DWORD))(**(this + 105) + 112))(*(this + 105));
  return sub_5EB5A0(this, this);
}


//======================================================================
// sub_5558C0
// entry 005558c0  size 37  status ok
//======================================================================

_DWORD *__thiscall sub_5558C0(_DWORD *this, int a2)
{
  sub_6010A0(a2);
  *this = &DealCardCycle::`vftable';
  return this;
}


//======================================================================
// sub_5558F0
// entry 005558f0  size 109  status ok
//======================================================================

int __thiscall sub_5558F0(void *this)
{
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(dword_793424 + 4 * *(_DWORD *)(dword_793424 + 44) + 24) + 112))(*(_DWORD *)(dword_793424 + 4 * *(_DWORD *)(dword_793424 + 44) + 24));
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(dword_793424 + 4 * *(_DWORD *)(dword_793424 + 44) + 4) + 116))(*(_DWORD *)(dword_793424 + 4 * *(_DWORD *)(dword_793424 + 44) + 4));
  return sub_6005D0(this);
}


//======================================================================
// sub_555960
// entry 00555960  size 164  status ok
//======================================================================

int __thiscall sub_555960(void *this)
{
  int result; // eax

  switch ( unknown_libname_843(this) )
  {
    case 0:
      *(_DWORD *)(dword_793424 + 44) = 0;
      result = (*(int (__thiscall **)(void *, int, _DWORD))(*(_DWORD *)this + 8))(this, 1, 0);
      break;
    case 1:
      result = sub_5552B0((_DWORD *)dword_793424, (int)this);
      break;
    case 2:
      result = (*(int (__thiscall **)(void *, int, _DWORD))(*(_DWORD *)this + 8))(this, 1, 0);
      break;
    case 3:
      sub_558240(dword_793420);
      result = sub_5FC420(0);
      break;
    default:
      result = sub_5E9F20((char)"false", "..\\Casino\\videopokerdisplay.cpp", 917);
      break;
  }
  return result;
}


//======================================================================
// sub_555AB0
// entry 00555ab0  size 70  status ok
//======================================================================

_DWORD *__thiscall sub_555AB0(_DWORD *this)
{
  sub_5D7B60(this);
  *this = &VideoPokerRoom::`vftable';
  dword_79341C = (int)this;
  dword_793420 = 0;
  dword_793424 = 0;
  dword_793428 = 0;
  return this;
}


//======================================================================
// sub_555B00
// entry 00555b00  size 267  status ok
//======================================================================

int __thiscall sub_555B00(_DWORD *this)
{
  *this = &VideoPokerRoom::`vftable';
  dword_79341C = 0;
  if ( dword_793420 )
    (**(void (__thiscall ***)(int, int))dword_793420)(dword_793420, 1);
  dword_793420 = 0;
  if ( dword_793424 )
    (**(void (__thiscall ***)(int, int))dword_793424)(dword_793424, 1);
  dword_793424 = 0;
  if ( dword_793428 )
    (**(void (__thiscall ***)(int, int))dword_793428)(dword_793428, 1);
  dword_793428 = 0;
  return sub_5D7BD0();
}


//======================================================================
// sub_555C10
// entry 00555c10  size 388  status ok
//======================================================================

int __thiscall sub_555C10(_DWORD **this)
{
  _DWORD *v2; // [esp+4h] [ebp-38h]
  int v3; // [esp+8h] [ebp-34h]
  int v4; // [esp+Ch] [ebp-30h]
  _DWORD *v6; // [esp+18h] [ebp-24h]
  void *v7; // [esp+20h] [ebp-1Ch]
  void *v8; // [esp+28h] [ebp-14h]

  sub_5D8230();
  v8 = operator new(0x30u);
  if ( v8 )
    v4 = sub_5570E0(v8);
  else
    v4 = 0;
  dword_793420 = v4;
  sub_5571C0();
  dword_793424 = sub_552620();
  sub_553010((_DWORD *)dword_793424);
  v7 = operator new(0x1Cu);
  if ( v7 )
    v3 = sub_54C3F0((int)v7);
  else
    v3 = 0;
  dword_793428 = v3;
  sub_558190(dword_793420);
  v6 = operator new(0x20u);
  if ( v6 )
  {
    sub_5FC0D0(0);
    *v6 = &VideoPokerRoomScript::`vftable';
    v2 = v6;
  }
  else
  {
    v2 = 0;
  }
  sub_5F1B70(v2);
  if ( *((_BYTE *)dword_162EE84 + 37) )
    return (*(int (__thiscall **)(_DWORD, int))(**(this + 1) + 4))(*(this + 1), 1);
  else
    return (*(int (__thiscall **)(_DWORD))(**(this + 1) + 16))(*(this + 1));
}


//======================================================================
// sub_555DA0
// entry 00555da0  size 31  status ok
//======================================================================

_DWORD *__stdcall sub_555DA0(_DWORD *a1, _DWORD *a2)
{
  *a1 = 1;
  *a2 = 1000000000;
  return a1;
}


//======================================================================
// sub_555DC0
// entry 00555dc0  size 16  status ok
//======================================================================

int sub_555DC0()
{
  return 3207000;
}


//======================================================================
// sub_555DD0
// entry 00555dd0  size 276  status ok
//======================================================================

int __stdcall sub_555DD0(int a1, int a2)
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
// sub_555EF0
// entry 00555ef0  size 49  status ok
//======================================================================

int __thiscall sub_555EF0(void *this)
{
  int v1; // eax

  v1 = sub_5DF2E0(dword_7947E0);
  sub_5F1E60(3208001, v1, 100035);
  return sub_64E430(this);
}


//======================================================================
// sub_555F30
// entry 00555f30  size 243  status ok
//======================================================================

int __stdcall sub_555F30(int a1, int a2)
{
  int result; // eax

  switch ( a1 )
  {
    case 3208002:
      result = sub_5580F0(0);
      break;
    case 3208003:
      result = sub_5580F0(1);
      break;
    case 3208004:
      result = sub_5580F0(2);
      break;
    case 3208005:
      result = sub_5580F0(3);
      break;
    case 3208006:
      result = sub_5580F0(4);
      break;
    case 3208007:
      result = sub_557AE0(3);
      break;
    case 3208008:
      result = sub_557AE0(2);
      break;
    case 3208009:
      result = sub_557AE0(1);
      break;
    case 3208010:
      result = sub_557AE0(0);
      break;
    case 3208011:
      result = sub_557AE0(4);
      break;
    case 3208012:
      result = sub_557AE0(5);
      break;
    default:
      result = sub_5DC7D0(a1, a2);
      break;
  }
  return result;
}


//======================================================================
// sub_556050
// entry 00556050  size 1062  status ok
//======================================================================

int __stdcall sub_556050(int a1)
{
  int result; // eax
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

  result = sub_5D7F40(a1);
  if ( *(_DWORD *)(a1 + 24) == 4 )
  {
    result = *(unsigned __int8 *)(a1 + 4);
    if ( !*(_BYTE *)(a1 + 4) )
    {
      if ( dword_793420 )
      {
        result = tolower(*(char *)(a1 + 20)) - 49;
        switch ( result )
        {
          case 0:
            result = sub_5F2A60(3208002, 0);
            if ( result )
            {
              v2 = sub_5F2A60(3208002, 0);
              result = (unsigned __int8)sub_6026D0(v2);
              if ( (_BYTE)result )
              {
                result = sub_5580F0(0);
                *(_BYTE *)(a1 + 4) = 1;
              }
            }
            break;
          case 1:
            result = sub_5F2A60(3208003, 0);
            if ( result )
            {
              v3 = sub_5F2A60(3208003, 0);
              result = sub_6026D0(v3);
              if ( (_BYTE)result )
              {
                sub_5580F0(1);
                result = a1;
                *(_BYTE *)(a1 + 4) = 1;
              }
            }
            break;
          case 2:
            result = sub_5F2A60(3208004, 0);
            if ( result )
            {
              v4 = sub_5F2A60(3208004, 0);
              result = sub_6026D0(v4);
              if ( (_BYTE)result )
              {
                result = sub_5580F0(2);
                *(_BYTE *)(a1 + 4) = 1;
              }
            }
            break;
          case 3:
            result = sub_5F2A60(3208005, 0);
            if ( result )
            {
              v5 = sub_5F2A60(3208005, 0);
              result = (unsigned __int8)sub_6026D0(v5);
              if ( (_BYTE)result )
              {
                result = sub_5580F0(3);
                *(_BYTE *)(a1 + 4) = 1;
              }
            }
            break;
          case 4:
            result = sub_5F2A60(3208006, 0);
            if ( result )
            {
              v6 = sub_5F2A60(3208006, 0);
              result = sub_6026D0(v6);
              if ( (_BYTE)result )
              {
                sub_5580F0(4);
                result = a1;
                *(_BYTE *)(a1 + 4) = 1;
              }
            }
            break;
          case 48:
            result = sub_5F2A60(3208007, 0);
            if ( result )
            {
              v7 = sub_5F2A60(3208007, 0);
              result = sub_6026D0(v7);
              if ( (_BYTE)result )
              {
                result = sub_557AE0(3);
                *(_BYTE *)(a1 + 4) = 1;
              }
            }
            break;
          case 49:
            result = sub_5F2A60(3208009, 0);
            if ( result )
            {
              v9 = sub_5F2A60(3208009, 0);
              result = sub_6026D0(v9);
              if ( (_BYTE)result )
              {
                sub_557AE0(1);
                result = a1;
                *(_BYTE *)(a1 + 4) = 1;
              }
            }
            break;
          case 50:
            result = sub_5F2A60(3208012, 0);
            if ( result )
            {
              v12 = sub_5F2A60(3208012, 0);
              result = sub_6026D0(v12);
              if ( (_BYTE)result )
              {
                sub_557AE0(5);
                result = a1;
                *(_BYTE *)(a1 + 4) = 1;
              }
            }
            break;
          case 51:
            result = sub_5F2A60(3208011, 0);
            if ( result )
            {
              v11 = sub_5F2A60(3208011, 0);
              result = (unsigned __int8)sub_6026D0(v11);
              if ( (_BYTE)result )
              {
                result = sub_557AE0(4);
                *(_BYTE *)(a1 + 4) = 1;
              }
            }
            break;
          case 60:
            result = sub_5F2A60(3208010, 0);
            if ( result )
            {
              v10 = sub_5F2A60(3208010, 0);
              result = sub_6026D0(v10);
              if ( (_BYTE)result )
              {
                result = sub_557AE0(0);
                *(_BYTE *)(a1 + 4) = 1;
              }
            }
            break;
          case 65:
            result = sub_5F2A60(3208008, 0);
            if ( result )
            {
              v8 = sub_5F2A60(3208008, 0);
              result = (unsigned __int8)sub_6026D0(v8);
              if ( (_BYTE)result )
              {
                result = sub_557AE0(2);
                *(_BYTE *)(a1 + 4) = 1;
              }
            }
            break;
          case 67:
            result = sub_5F2A60(5009, 0);
            if ( result )
            {
              v13 = sub_5F2A60(5009, 0);
              result = sub_6026D0(v13);
              if ( (_BYTE)result )
              {
                result = sub_5DB240(dword_79341C);
                *(_BYTE *)(a1 + 4) = 1;
              }
            }
            break;
          default:
            return result;
        }
      }
    }
  }
  return result;
}


//======================================================================
// sub_5564F0
// entry 005564f0  size 35  status ok
//======================================================================

char __thiscall sub_5564F0(void *this)
{
  if ( dword_793420 )
    return sub_5572E0(dword_793420, this);
  else
    return 1;
}


//======================================================================
// sub_556520
// entry 00556520  size 22  status ok
//======================================================================

int sub_556520()
{
  return sub_5542C0((_DWORD **)dword_793424);
}


//======================================================================
// sub_556540
// entry 00556540  size 164  status ok
//======================================================================

int __stdcall sub_556540(int a1)
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

  v1 = (int *)sub_5D0C30(v9, *(_DWORD *)(dword_793420 + 8));
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
  result = dword_793420;
  *(_DWORD *)(dword_793420 + 8) = 0;
  return result;
}


//======================================================================
// sub_5565F0
// entry 005565f0  size 107  status ok
//======================================================================

int __stdcall sub_5565F0(int a1)
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
  sub_5571A0(dword_793420);
  v2 = (int *)sub_64C5C0(v10, v8, v9);
  v3 = *v2;
  v4 = v2[1];
  v5 = (_DWORD *)sub_5571A0(dword_793420);
  *v5 = v3;
  v5[1] = v4;
  v6 = sub_5DCB00(a1);
  return sub_63B0A0(v6);
}


//======================================================================
// sub_556660
// entry 00556660  size 24  status ok
//======================================================================

int __stdcall sub_556660(int a1)
{
  return sub_554F60((void *)dword_793424);
}


//======================================================================
// sub_556680
// entry 00556680  size 28  status ok
//======================================================================

int __stdcall sub_556680(int a1)
{
  return sub_557AE0(a1);
}


//======================================================================
// sub_5566A0
// entry 005566a0  size 76  status ok
//======================================================================

int __stdcall sub_5566A0(int a1)
{
  int result; // eax
  _BYTE v2[8]; // [esp+8h] [ebp-Ch] BYREF
  int v3; // [esp+10h] [ebp-4h]

  v3 = *(_DWORD *)(dword_793420 + 4);
  sub_5D0DB0(v2, a1);
  result = v3;
  if ( v3 < *(_DWORD *)(dword_793420 + 4) )
    return sub_555070((_DWORD **)dword_793424);
  return result;
}


//======================================================================
// sub_5566F0
// entry 005566f0  size 314  status ok
//======================================================================

int __thiscall sub_5566F0(_DWORD *this)
{
  int result; // eax
  unsigned __int8 v3; // [esp+Bh] [ebp-1h]

  switch ( *(this + 5) )
  {
    case 1:
      v3 = *((_BYTE *)dword_162EE84 + 37);
      result = v3;
      if ( v3 )
        result = (*(int (__thiscall **)(_DWORD *, int, int))(*this + 8))(this, 2, 20);
      break;
    case 2:
      result = (*(int (__thiscall **)(_DWORD *, int, int))(*this + 8))(this, 3, 60);
      break;
    case 3:
      (*(void (__thiscall **)(int, int))(*(_DWORD *)dword_79341C + 700))(dword_79341C, 20);
      result = (*(int (__thiscall **)(_DWORD *, int, int))(*this + 8))(this, 4, 60);
      break;
    case 4:
      sub_557AE0(0);
      result = (*(int (__thiscall **)(_DWORD *, int, int))(*this + 8))(this, 5, 60);
      break;
    case 5:
      (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_79341C + 740))(dword_79341C, 0);
      result = (*(int (__thiscall **)(_DWORD *, int, int))(*this + 8))(this, 6, 60);
      break;
    case 6:
      sub_557AE0(4);
      result = (*(int (__thiscall **)(_DWORD *, int, int))(*this + 8))(this, 7, 60);
      break;
    case 7:
      result = (*(int (__thiscall **)(_DWORD *, int, int))(*this + 8))(this, 4, 90);
      break;
    default:
      result = sub_5E9F20((char)"false", "..\\Casino\\videopokerroom.cpp", 367);
      break;
  }
  return result;
}


//======================================================================
// sub_556890
// entry 00556890  size 40  status ok
//======================================================================

ATL::CCRTHeap *__thiscall sub_556890(ATL::CCRTHeap *this)
{
  ATL::CCRTHeap::CCRTHeap(this);
  *(_DWORD *)this = &RoomInterface::`vftable';
  *(_DWORD *)this = &VideoPokerRoomInterface::`vftable';
  return this;
}


//======================================================================
// sub_5568C0
// entry 005568c0  size 120  status ok
//======================================================================

_DWORD *sub_5568C0()
{
  _DWORD *v2; // [esp+Ch] [ebp-14h]

  v2 = operator new(0x80u);
  if ( v2 )
    return sub_555AB0(v2);
  else
    return 0;
}


//======================================================================
// sub_556940
// entry 00556940  size 51  status ok
//======================================================================

char __stdcall sub_556940(char *Destination)
{
  const char *v2; // eax

  if ( !Destination )
    return 0;
  v2 = (const char *)sub_630F40("SID_VIDEOPOKER");
  strcpy(Destination, v2);
  return 1;
}


//======================================================================
// sub_5569A0
// entry 005569a0  size 16  status ok
//======================================================================

int sub_5569A0()
{
  return 3208000;
}


//======================================================================
// sub_5569B0
// entry 005569b0  size 16  status ok
//======================================================================

const char *sub_5569B0()
{
  return "videopoker";
}


//======================================================================
// sub_5569D0
// entry 005569d0  size 16  status ok
//======================================================================

char **sub_5569D0()
{
  return off_740A50;
}


//======================================================================
// sub_5569E0
// entry 005569e0  size 16  status ok
//======================================================================

char **sub_5569E0()
{
  return &off_740A5C;
}


//======================================================================
// sub_556A10
// entry 00556a10  size 94  status ok
//======================================================================

char __stdcall sub_556A10(_DWORD *a1, int a2)
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
// sub_556A70
// entry 00556a70  size 16  status ok
//======================================================================

int sub_556A70()
{
  return 8;
}


//======================================================================
// sub_556AA0
// entry 00556aa0  size 52  status ok
//======================================================================

char __stdcall sub_556AA0(_DWORD *a1)
{
  if ( !a1 )
    return 0;
  *a1 = 0;
  a1[1] = 0;
  return 1;
}


//======================================================================
// sub_556AF0
// entry 00556af0  size 16  status ok
//======================================================================

int sub_556AF0()
{
  return 16;
}


//======================================================================
// sub_556B00
// entry 00556b00  size 386  status ok
//======================================================================

struct Concurrency::details::_TaskCollectionBase *__stdcall sub_556B00(int a1, _DWORD *a2, _DWORD *a3, _DWORD *a4)
{
  struct Concurrency::details::_TaskCollectionBase *result; // eax
  bool v5; // [esp+0h] [ebp-20h]
  int v6; // [esp+8h] [ebp-18h] BYREF
  int v7; // [esp+Ch] [ebp-14h]
  bool v8; // [esp+13h] [ebp-Dh]
  _DWORD v9[2]; // [esp+14h] [ebp-Ch] BYREF
  _DWORD *v10; // [esp+1Ch] [ebp-4h]

  v10 = (_DWORD *)sub_63AAE0(17);
  v5 = Concurrency::details::ContextBase::GetExecutingCollection(dword_162EE84) == (struct Concurrency::details::_TaskCollectionBase *)17
    || Concurrency::details::ContextBase::GetExecutingCollection(dword_162EE84) == (struct Concurrency::details::_TaskCollectionBase *)18;
  v8 = v5;
  if ( !v5 )
  {
    *a2 += *v10;
    a2[1] += v10[1];
    *a3 += *v10;
    a3[1] += v10[1];
  }
  result = (struct Concurrency::details::_TaskCollectionBase *)(*(int (__thiscall **)(int, int))(*(_DWORD *)dword_7947E0
                                                                                               + 828))(
                                                                 dword_7947E0,
                                                                 -1);
  if ( (_BYTE)result )
  {
    result = Concurrency::details::ContextBase::GetExecutingCollection(dword_162EE84);
    if ( result == (struct Concurrency::details::_TaskCollectionBase *)17 )
    {
      *a2 += *v10;
      a2[1] += v10[1];
      *a3 += *v10;
      a3[1] += v10[1];
      sub_5E0C40(a1, &v6, v9);
      *a2 += v9[0] + v6;
      a2[1] += v7;
      *a3 += v6;
      a3[1] += v7;
      *a4 += v9[0];
      a4[1] += v9[1];
      return (struct Concurrency::details::_TaskCollectionBase *)a4;
    }
  }
  return result;
}


//======================================================================
// sub_556C90
// entry 00556c90  size 257  status ok
//======================================================================

char __stdcall sub_556C90(int a1, int a2)
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

  v10 = sub_63AAE0(17);
  v7 = sub_64C8A0(0, 0);
  v8 = v7;
  v6 = sub_64C8A0(0, 0);
  v9 = v6;
  sub_5E0690(a1, a2);
  if ( Concurrency::details::ContextBase::GetExecutingCollection(dword_162EE84) == (struct Concurrency::details::_TaskCollectionBase *)17
    || Concurrency::details::ContextBase::GetExecutingCollection(dword_162EE84) == (struct Concurrency::details::_TaskCollectionBase *)18 )
  {
    sub_5E0C40(a2, &v8, &v9);
  }
  v2 = (int *)sub_64C5C0(v5, v8, HIDWORD(v8));
  sub_64C8D0(*v2, v2[1], Destination, 1, 1, 1);
  v3 = sub_630F40("SID_CASINOSTATS_TOTALNET_COLON");
  sub_654390(0, v3, Destination);
  return 1;
}


//======================================================================
// sub_556DA0
// entry 00556da0  size 30  status ok
//======================================================================

char __stdcall sub_556DA0(int a1)
{
  sub_5FB5A0(2, "$0.00");
  return 1;
}


//======================================================================
// sub_556DC0
// entry 00556dc0  size 41  status ok
//======================================================================

char __stdcall sub_556DC0(int a1)
{
  if ( a1 != 3208027 )
    return 0;
  sub_653BD0(17);
  return 1;
}


//======================================================================
// sub_556DF0
// entry 00556df0  size 15  status ok
//======================================================================

char __stdcall sub_556DF0(int a1)
{
  return 0;
}


//======================================================================
// sub_556E00
// entry 00556e00  size 15  status ok
//======================================================================

char __stdcall sub_556E00(int a1)
{
  return 0;
}


//======================================================================
// sub_556E10
// entry 00556e10  size 16  status ok
//======================================================================

void *sub_556E10()
{
  return &unk_740A60;
}


//======================================================================
// sub_556E20
// entry 00556e20  size 190  status ok
//======================================================================

void *__stdcall sub_556E20(int a1)
{
  int v1; // eax

  if ( (dword_79342C & 1) == 0 )
  {
    dword_79342C |= 1u;
    dword_740A84 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_7947E0 + 572))(dword_7947E0);
    v1 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_7947E0 + 572))(dword_7947E0);
    dword_740A88 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_7947E0 + 580))(dword_7947E0, v1);
  }
  if ( a1 == 3208001 )
    return &unk_740A80;
  else
    return 0;
}


//======================================================================
// sub_556EE0
// entry 00556ee0  size 16  status ok
//======================================================================

void *sub_556EE0()
{
  return &unk_73F0C8;
}


//======================================================================
// sub_556EF0
// entry 00556ef0  size 16  status ok
//======================================================================

void *sub_556EF0()
{
  return &unk_740878;
}


//======================================================================
// sub_556F00
// entry 00556f00  size 147  status ok
//======================================================================

char __stdcall sub_556F00(int a1, int a2)
{
  int v3; // [esp+4h] [ebp-4h]

  v3 = sub_556FA0(a2);
  if ( v3 == -1 )
    return 0;
  sub_5DE170(dword_7947E0);
  sub_5E2F90(dword_7947E0);
  *(_DWORD *)(dword_7947E0 + 20244) = v3;
  *(_DWORD *)(dword_7947E0 + 20240) = sub_557040(a1);
  if ( !(*(unsigned __int8 (__thiscall **)(int, int, int))(*(_DWORD *)dword_7947E0 + 820))(dword_7947E0, 17, -1) )
    sub_5E3130(dword_7947E0);
  return 1;
}


//======================================================================
// sub_556FA0
// entry 00556fa0  size 112  status ok
//======================================================================

int __stdcall sub_556FA0(int a1)
{
  int result; // eax

  switch ( a1 )
  {
    case 3208014:
      result = 3;
      break;
    case 3208015:
      result = 1;
      break;
    case 3208016:
      result = 0;
      break;
    case 3208017:
      result = 2;
      break;
    case 3208018:
      result = 4;
      break;
    case 3208019:
      result = 7;
      break;
    case 3208020:
      result = 6;
      break;
    case 3208021:
      result = 5;
      break;
    case 3208022:
      result = 10;
      break;
    default:
      result = -1;
      break;
  }
  return result;
}


//======================================================================
// sub_557040
// entry 00557040  size 80  status ok
//======================================================================

int __stdcall sub_557040(int a1)
{
  int result; // eax

  switch ( a1 )
  {
    case 3208023:
      result = 3;
      break;
    case 3208024:
      result = 4;
      break;
    case 3208025:
      result = 6;
      break;
    case 3208026:
      result = 8;
      break;
    default:
      result = -1;
      break;
  }
  return result;
}


//======================================================================
// sub_5570E0
// entry 005570e0  size 41  status ok
//======================================================================

_DWORD *__thiscall sub_5570E0(void *this)
{
  _DWORD *v2; // [esp+0h] [ebp-4h]

  sub_5D0980(this);
  *v2 = &VideoPokerState::`vftable';
  v2[4] = 0;
  return v2;
}


//======================================================================
// sub_557110
// entry 00557110  size 133  status ok
//======================================================================

void __thiscall sub_557110(CExpandoObject *this)
{
  *(_DWORD *)this = &VideoPokerState::`vftable';
  if ( *((_DWORD *)this + 4) )
    (***((void (__thiscall ****)(_DWORD, int))this + 4))(*((_DWORD *)this + 4), 1);
  CExpandoObject::~CExpandoObject(this);
}


//======================================================================
// sub_5571A0
// entry 005571a0  size 31  status ok
//======================================================================

int sub_5571A0()
{
  sub_6375B0(dword_162EE84);
  return sub_63AAE0(-1);
}


//======================================================================
// sub_5571C0
// entry 005571c0  size 276  status ok
//======================================================================

int __thiscall sub_5571C0(int this)
{
  char v1; // al
  int v3; // [esp+4h] [ebp-20h]
  void *v5; // [esp+Ch] [ebp-18h]
  int i; // [esp+14h] [ebp-10h]

  if ( !*(_DWORD *)(this + 16) )
  {
    v5 = operator new(0x810u);
    if ( v5 )
      v3 = sub_642E10(v5);
    else
      v3 = 0;
    *(_DWORD *)(this + 16) = v3;
  }
  v1 = sub_557340(this);
  sub_642E70(v1 != 0 ? 7 : 0);
  sub_557310(this);
  *(_DWORD *)(this + 20) = 0;
  for ( i = 0; i < 5; ++i )
  {
    *(_WORD *)(this + 2 * i + 24) = 0;
    *(_WORD *)(this + 2 * i + 34) = 0;
  }
  *(_BYTE *)(this + 46) = 1;
  sub_57AB80(7, &unk_740A90);
  return sub_5F2BA0(5009);
}


//======================================================================
// sub_5572E0
// entry 005572e0  size 34  status ok
//======================================================================

bool __thiscall sub_5572E0(_DWORD *this)
{
  return *(this + 2) == 0;
}


//======================================================================
// sub_557310
// entry 00557310  size 48  status ok
//======================================================================

int sub_557310()
{
  sub_6437D0(1, 0);
  return sub_643930(1, 5, "VideoPoker", 1);
}


//======================================================================
// sub_557340
// entry 00557340  size 94  status ok
//======================================================================

bool sub_557340()
{
  return *(_DWORD *)(dword_7947E0 + 20244) == 8
      || *(_DWORD *)(dword_7947E0 + 20244) == 9
      || *(_DWORD *)(dword_7947E0 + 20244) == 10;
}


//======================================================================
// sub_5573A0
// entry 005573a0  size 78  status ok
//======================================================================

char __thiscall sub_5573A0(unsigned __int16 *this, unsigned __int16 a2)
{
  int i; // [esp+4h] [ebp-4h]

  if ( !a2 )
    return 0;
  for ( i = 0; i < 5; ++i )
  {
    if ( *(this + i + 12) == a2 )
      return 1;
  }
  return 0;
}


//======================================================================
// sub_5573F0
// entry 005573f0  size 180  status ok
//======================================================================

bool __thiscall sub_5573F0(_WORD *this)
{
  int v2; // esi
  __int16 v3; // [esp+8h] [ebp-Ch]
  __int16 v4; // [esp+Ch] [ebp-8h]
  int i; // [esp+10h] [ebp-4h]

  v3 = 0;
  v4 = 0;
  for ( i = 0; i < 5; ++i )
  {
    if ( *(this + i + 12) )
    {
      if ( v3 )
      {
        if ( v4 )
          return 0;
        v4 = *(this + i + 12);
      }
      else
      {
        v3 = *(this + i + 12);
      }
    }
  }
  if ( !v3 || !v4 )
    return 0;
  v2 = sub_641280(v3);
  return v2 == sub_641280(v4);
}


//======================================================================
// sub_5574B0
// entry 005574b0  size 808  status ok
//======================================================================

bool __thiscall sub_5574B0(_WORD *this, char a2)
{
  int v3; // esi
  int v4; // esi
  int v5; // esi
  int v6; // esi
  int v7; // esi
  int v8; // esi
  int v9; // esi
  int v10; // esi
  int v11; // esi
  int v12; // esi
  int v13; // esi
  int v14; // esi
  int v16; // [esp+8h] [ebp-20h]
  int v17; // [esp+Ch] [ebp-1Ch]
  __int16 v18; // [esp+10h] [ebp-18h]
  __int16 v19; // [esp+12h] [ebp-16h]
  __int16 v20; // [esp+14h] [ebp-14h]
  __int16 v21; // [esp+16h] [ebp-12h]
  int i; // [esp+20h] [ebp-8h]
  int v23; // [esp+24h] [ebp-4h]

  v23 = 0;
  for ( i = 0; i < 5; ++i )
    *(&v18 + i) = 0;
  v17 = 1;
  v16 = 15;
  for ( i = 0; i < 5; ++i )
  {
    if ( *(this + i + 12) )
    {
      if ( sub_54C590(*(this + i + 12)) == 20 )
        return 0;
      *(&v18 + v23) = *(this + i + 12);
      if ( sub_641280(*(this + i + 12)) > v17 )
        v17 = sub_641280(*(this + i + 12));
      if ( sub_641280(*(this + i + 12)) < v16 )
        v16 = sub_641280(*(this + i + 12));
      ++v23;
    }
  }
  if ( v23 != 4 )
    return 0;
  v3 = sub_641280(v18);
  if ( v3 == sub_641280(v19) )
    return 0;
  v4 = sub_641280(v18);
  if ( v4 == sub_641280(v20) )
    return 0;
  v5 = sub_641280(v19);
  if ( v5 == sub_641280(v20) )
    return 0;
  v6 = sub_641280(v18);
  if ( v6 == sub_641280(v21) )
    return 0;
  v7 = sub_641280(v19);
  if ( v7 == sub_641280(v21) )
    return 0;
  v8 = sub_641280(v20);
  if ( v8 == sub_641280(v21) )
    return 0;
  if ( v17 - v16 > 4 )
    return 0;
  if ( !a2 )
    return 1;
  v9 = sub_641290(v18);
  if ( v9 != sub_641290(v19) )
    return 0;
  v10 = sub_641290(v18);
  if ( v10 != sub_641290(v20) )
    return 0;
  v11 = sub_641290(v19);
  if ( v11 != sub_641290(v20) )
    return 0;
  v12 = sub_641290(v18);
  if ( v12 != sub_641290(v21) )
    return 0;
  v13 = sub_641290(v19);
  if ( v13 != sub_641290(v21) )
    return 0;
  v14 = sub_641290(v20);
  return v14 == sub_641290(v21);
}


//======================================================================
// sub_5577E0
// entry 005577e0  size 592  status ok
//======================================================================

bool __thiscall sub_5577E0(_WORD *this, char a2)
{
  int v3; // esi
  int v4; // esi
  int v5; // esi
  int v6; // esi
  int v7; // esi
  int v8; // esi
  int v10; // [esp+8h] [ebp-24h]
  int v11; // [esp+Ch] [ebp-20h]
  int v12; // [esp+10h] [ebp-1Ch]
  __int16 v13; // [esp+14h] [ebp-18h]
  __int16 v14; // [esp+16h] [ebp-16h]
  __int16 v15; // [esp+18h] [ebp-14h]
  int v16; // [esp+24h] [ebp-8h]
  int i; // [esp+28h] [ebp-4h]

  v16 = 0;
  v10 = 0;
  for ( i = 0; i < 5; ++i )
    *(&v13 + i) = 0;
  v12 = 1;
  v11 = 15;
  for ( i = 0; i < 5; ++i )
  {
    if ( *(this + i + 12) )
    {
      if ( sub_54C590(*(this + i + 12)) == 20 )
      {
        ++v10;
      }
      else
      {
        *(&v13 + v16) = *(this + i + 12);
        if ( sub_641280(*(this + i + 12)) > v12 )
          v12 = sub_641280(*(this + i + 12));
        if ( sub_641280(*(this + i + 12)) < v11 )
          v11 = sub_641280(*(this + i + 12));
        ++v16;
      }
    }
  }
  if ( v10 != 1 )
    return 0;
  if ( v16 != 3 )
    return 0;
  v3 = sub_641280(v13);
  if ( v3 == sub_641280(v14) )
    return 0;
  v4 = sub_641280(v13);
  if ( v4 == sub_641280(v15) )
    return 0;
  v5 = sub_641280(v14);
  if ( v5 == sub_641280(v15) )
    return 0;
  if ( v12 - v11 > 4 )
    return 0;
  if ( !a2 )
    return 1;
  v6 = sub_641290(v13);
  if ( v6 != sub_641290(v14) )
    return 0;
  v7 = sub_641290(v13);
  if ( v7 != sub_641290(v15) )
    return 0;
  v8 = sub_641290(v14);
  return v8 == sub_641290(v15);
}


//======================================================================
// sub_557A30
// entry 00557a30  size 73  status ok
//======================================================================

__int16 __thiscall sub_557A30(_WORD *this, __int16 a2)
{
  __int16 result; // ax
  int i; // [esp+4h] [ebp-4h]

  for ( i = 0; i < 5; ++i )
  {
    if ( !*(this + i + 12) )
    {
      *(this + i + 12) = a2;
      return a2;
    }
    result = i + 1;
  }
  return result;
}


//======================================================================
// sub_557A80
// entry 00557a80  size 81  status ok
//======================================================================

int __thiscall sub_557A80(unsigned __int16 *this, unsigned __int16 a2)
{
  int i; // [esp+4h] [ebp-4h]

  if ( !a2 )
    return -1;
  for ( i = 0; i < 5; ++i )
  {
    if ( *(this + i + 12) == a2 )
      return i;
  }
  return -1;
}


//======================================================================
// sub_557AE0
// entry 00557ae0  size 697  status ok
//======================================================================

int __thiscall sub_557AE0(_DWORD *this, int a2)
{
  int result; // eax
  int v3; // eax
  int v4; // esi
  int v5; // eax
  int v7; // [esp+40h] [ebp-8h]

  result = a2;
  switch ( a2 )
  {
    case 0:
      (*(void (__thiscall **)(Concurrency::details::ContextBase *, int, _DWORD, _DWORD, int, int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)dword_162EE84 + 128))(
        dword_162EE84,
        3208002,
        0,
        0,
        5,
        1,
        1.0,
        0.5,
        0);
      sub_5D1210(this);
      sub_554670((void *)dword_793424);
      result = (int)this;
      if ( *(this + 2) )
        result = sub_558CA0();
      break;
    case 1:
      (*(void (__thiscall **)(Concurrency::details::ContextBase *, int, _DWORD, _DWORD, int, int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)dword_162EE84 + 128))(
        dword_162EE84,
        3208002,
        0,
        0,
        5,
        1,
        1.0,
        0.5,
        0);
      sub_5D0F00(this);
      sub_554670((void *)dword_793424);
      v7 = *(this + 2);
      result = (*(int (__thiscall **)(_DWORD *))(*this + 4))(this);
      if ( v7 == result )
        result = sub_558CA0();
      break;
    case 2:
      (*(void (__thiscall **)(Concurrency::details::ContextBase *, int, _DWORD, _DWORD, int, int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)dword_162EE84 + 128))(
        dword_162EE84,
        3208002,
        0,
        0,
        5,
        1,
        1.0,
        0.5,
        0);
      sub_557DC0(this);
      result = sub_554950((void *)dword_793424);
      break;
    case 3:
      (*(void (__thiscall **)(Concurrency::details::ContextBase *, int, _DWORD, _DWORD, int, int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)dword_162EE84 + 128))(
        dword_162EE84,
        3208002,
        0,
        0,
        5,
        1,
        1.0,
        0.5,
        0);
      sub_557E00(this);
      result = sub_554950((void *)dword_793424);
      break;
    case 4:
      (*(void (__thiscall **)(Concurrency::details::ContextBase *, int, _DWORD, _DWORD, int, int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)dword_162EE84 + 128))(
        dword_162EE84,
        3208002,
        0,
        0,
        5,
        1,
        1.0,
        0.5,
        0);
      result = sub_558CA0();
      break;
    case 5:
      (*(void (__thiscall **)(Concurrency::details::ContextBase *, int, _DWORD, _DWORD, int, int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)dword_162EE84 + 128))(
        dword_162EE84,
        3208002,
        0,
        0,
        5,
        1,
        1.0,
        0.5,
        0);
      sub_5D13E0(this);
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
      result = sub_5542C0((_DWORD **)dword_793424);
      break;
    case 6:
      if ( *(this + 1) || *(this + 2) || (v3 = sub_5DCB00(0), v4 = sub_5D5A50(v3), v4 >= sub_5D0AA0(this)) )
      {
        result = sub_5DC2E0();
      }
      else
      {
        v5 = sub_5DCB00(0);
        result = sub_5DBB70(v5);
      }
      break;
    default:
      return result;
  }
  return result;
}


//======================================================================
// sub_557DC0
// entry 00557dc0  size 52  status ok
//======================================================================

int __thiscall sub_557DC0(_WORD *this)
{
  int result; // eax
  int i; // [esp+4h] [ebp-4h]

  for ( i = 0; i < 5; ++i )
  {
    *(this + i + 12) = 0;
    result = i + 1;
  }
  return result;
}


//======================================================================
// sub_557E00
// entry 00557e00  size 63  status ok
//======================================================================

int __thiscall sub_557E00(_WORD *this)
{
  int result; // eax
  int i; // [esp+8h] [ebp-4h]

  for ( i = 0; i < 5; ++i )
  {
    *(this + i + 12) = *(this + i + 17);
    result = i + 1;
  }
  return result;
}


//======================================================================
// sub_557E40
// entry 00557e40  size 73  status ok
//======================================================================

int __thiscall sub_557E40(_WORD *this)
{
  int v2; // [esp+4h] [ebp-8h]
  int i; // [esp+8h] [ebp-4h]

  v2 = 0;
  for ( i = 0; i < 5; ++i )
  {
    if ( *(this + i + 17) )
      ++v2;
  }
  return v2;
}


//======================================================================
// sub_557E90
// entry 00557e90  size 286  status ok
//======================================================================

int __thiscall sub_557E90(__int16 *this, __int16 a2)
{
  int result; // eax
  int v3; // esi
  int v4; // esi
  int j; // [esp+8h] [ebp-8h]
  int k; // [esp+Ch] [ebp-4h]
  int i; // [esp+Ch] [ebp-4h]

  if ( sub_557E40(this) )
  {
    v3 = sub_641280(a2);
    if ( v3 > sub_641280(*(this + 17)) )
    {
      result = sub_557E40(this) - 1;
      for ( i = result; i > -1; --i )
      {
        v4 = sub_641280(a2);
        result = sub_641280(*(this + i + 17));
        if ( v4 >= result )
        {
          for ( j = 4; j > i + 1; --j )
            *(this + j + 17) = *(this + j + 16);
          *(this + i + 18) = a2;
          return i;
        }
      }
    }
    else
    {
      for ( k = 4; k > 0; --k )
        *(this + k + 17) = *(this + k + 16);
      *(this + 17) = a2;
      return (int)this;
    }
  }
  else
  {
    *(this + 17) = a2;
    return (int)this;
  }
  return result;
}


//======================================================================
// sub_557FB0
// entry 00557fb0  size 133  status ok
//======================================================================

_WORD *__thiscall sub_557FB0(_WORD *this, unsigned __int16 a2)
{
  _WORD *result; // eax
  int j; // [esp+8h] [ebp-Ch]
  int i; // [esp+Ch] [ebp-8h]

  for ( i = 0; i < 5; ++i )
  {
    if ( (unsigned __int16)*(this + i + 17) == a2 )
    {
      for ( j = i; j < 4; ++j )
        *(this + j + 17) = *(this + j + 18);
      *(this + 21) = 0;
      return this;
    }
    result = (_WORD *)(i + 1);
  }
  return result;
}


//======================================================================
// sub_558040
// entry 00558040  size 162  status ok
//======================================================================

int __thiscall sub_558040(unsigned __int16 *this, __int16 a2)
{
  int i; // [esp+10h] [ebp-4h]

  for ( i = 0; i < 5; ++i )
  {
    if ( sub_5573A0(this, a2) )
      *(this + sub_557A80(this, a2) + 12) = 0;
    else
      sub_557A30(this, a2);
    sub_554950((void *)dword_793424);
  }
  return (*(int (__thiscall **)(Concurrency::details::ContextBase *, int, _DWORD, _DWORD, int, int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)dword_162EE84 + 128))(
           dword_162EE84,
           100003,
           0,
           0,
           5,
           1,
           1.0,
           0.5,
           0);
}


