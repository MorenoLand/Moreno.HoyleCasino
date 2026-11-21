//======================================================================
// sub_5580F0
// entry 005580f0  size 148  status ok
//======================================================================

void __thiscall sub_5580F0(unsigned __int16 *this, int a2)
{
  _DWORD v3[5]; // [esp+4h] [ebp-18h]
  int i; // [esp+18h] [ebp-4h]

  v3[0] = 133;
  v3[1] = 188;
  v3[2] = 243;
  v3[3] = 298;
  v3[4] = 353;
  for ( i = 0; i < 5; ++i )
  {
    if ( (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(dword_793424 + 4 * i + 4) + 76))(*(_DWORD *)(dword_793424
                                                                                                  + 4 * i
                                                                                                  + 4)) == v3[a2] )
    {
      sub_558040(this, *(_WORD *)(*(_DWORD *)(dword_793424 + 4 * i + 4) + 400));
      return;
    }
  }
}


//======================================================================
// sub_558190
// entry 00558190  size 170  status ok
//======================================================================

int __thiscall sub_558190(int this)
{
  __int16 v3; // [esp+4h] [ebp-1Ch]
  int i; // [esp+1Ch] [ebp-4h]

  sub_557310();
  *(_BYTE *)(this + 44) = 1;
  *(_DWORD *)(this + 20) = 2;
  for ( i = 0; i < 5; ++i )
  {
    v3 = sub_6436C0(*(_DWORD *)(this + 16));
    sub_555270((_DWORD *)dword_793424, v3, i);
    sub_557E90((__int16 *)this, v3);
  }
  sub_558330(this);
  *(_BYTE *)(this + 44) = 0;
  return sub_557310();
}


//======================================================================
// sub_558240
// entry 00558240  size 235  status ok
//======================================================================

_DWORD *__thiscall sub_558240(_DWORD *this)
{
  _DWORD *result; // eax

  ++*(this + 5);
  result = this;
  if ( *(this + 5) == 1 )
  {
    sub_558C10(this);
    sub_57AB80(7, &unk_7422A0);
    sub_551C70((_BYTE *)dword_793428);
    sub_5F2B20(5009, 1);
    sub_5F2B20(3208002, 1);
    sub_5F2B20(3208003, 1);
    sub_5F2B20(3208004, 1);
    sub_5F2B20(3208005, 1);
    result = (_DWORD *)sub_5F2B20(3208006, 1);
  }
  if ( *(this + 5) == 2 )
  {
    sub_558330(this);
    sub_57AB80(7, &unk_740A90);
    return (_DWORD *)sub_5F2BA0(5009);
  }
  return result;
}


//======================================================================
// sub_558330
// entry 00558330  size 274  status ok
//======================================================================

Concurrency::details::ContextBase *__thiscall sub_558330(int this)
{
  int v1; // eax
  Concurrency::details::ContextBase *result; // eax
  int v4; // [esp+14h] [ebp-Ch]
  int v5; // [esp+1Ch] [ebp-4h]

  v1 = sub_558C10(this);
  v5 = sub_558450(v1);
  sub_554C80((void *)dword_793424, v5);
  *(_DWORD *)(this + 20) = 0;
  if ( !*(_BYTE *)(this + 44) )
    sub_5D0A20(v5 + *(_DWORD *)(this + 4));
  *(_DWORD *)(this + 8) = 0;
  v4 = *(_DWORD *)(this + 4);
  if ( v4 * sub_5D0AA0(this) > 100000000 )
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
    sub_5542C0((_DWORD **)dword_793424);
  }
  result = (Concurrency::details::ContextBase *)sub_5542C0((_DWORD **)dword_793424);
  if ( !*(_BYTE *)(this + 44) )
  {
    result = dword_162EE84;
    if ( *((_BYTE *)dword_162EE84 + 37) )
      return (Concurrency::details::ContextBase *)(*(int (__thiscall **)(_DWORD, int, _DWORD))(**(_DWORD **)(dword_79341C + 4)
                                                                                             + 8))(
                                                    *(_DWORD *)(dword_79341C + 4),
                                                    7,
                                                    0);
  }
  return result;
}


//======================================================================
// sub_558450
// entry 00558450  size 1933  status ok
//======================================================================

int __thiscall sub_558450(int this, int a2)
{
  int result; // eax
  int v3; // [esp+4h] [ebp-268h]
  _DWORD v4[9]; // [esp+10h] [ebp-25Ch]
  _DWORD v5[9]; // [esp+34h] [ebp-238h]
  _DWORD v6[9]; // [esp+58h] [ebp-214h]
  _DWORD v7[51]; // [esp+7Ch] [ebp-1F0h] BYREF
  _DWORD v8[10]; // [esp+148h] [ebp-124h]
  _DWORD v9[11]; // [esp+170h] [ebp-FCh]
  _DWORD v10[9]; // [esp+19Ch] [ebp-D0h]
  _DWORD v11[10]; // [esp+1C0h] [ebp-ACh]
  int v12; // [esp+1E8h] [ebp-84h]
  _DWORD v13[10]; // [esp+1ECh] [ebp-80h]
  _DWORD v14[11]; // [esp+214h] [ebp-58h]
  _DWORD v15[11]; // [esp+240h] [ebp-2Ch]

  v5[0] = 250;
  v5[1] = 50;
  v5[2] = 25;
  v5[3] = 9;
  v5[4] = 6;
  v5[5] = 4;
  v5[6] = 3;
  v5[7] = 2;
  v5[8] = 1;
  v10[0] = 250;
  v10[1] = 50;
  v10[2] = 25;
  v10[3] = 6;
  v10[4] = 5;
  v10[5] = 4;
  v10[6] = 3;
  v10[7] = 2;
  v10[8] = 1;
  v15[0] = 375;
  v15[1] = 75;
  v15[2] = 80;
  v15[3] = 40;
  v15[4] = 25;
  v15[5] = 8;
  v15[6] = 6;
  v15[7] = 4;
  v15[8] = 2;
  v15[9] = 2;
  v15[10] = 1;
  v6[0] = 250;
  v6[1] = 50;
  v6[2] = 25;
  v6[3] = 6;
  v6[4] = 5;
  v6[5] = 4;
  v6[6] = 3;
  v6[7] = 2;
  v6[8] = 1;
  v4[0] = 250;
  v4[1] = 50;
  v4[2] = 25;
  v4[3] = 9;
  v4[4] = 6;
  v4[5] = 4;
  v4[6] = 3;
  v4[7] = 1;
  v4[8] = 1;
  v11[0] = 500;
  v11[1] = 100;
  v11[2] = 25;
  v11[3] = 16;
  v11[4] = 13;
  v11[5] = 4;
  v11[6] = 3;
  v11[7] = 2;
  v11[8] = 2;
  v11[9] = 1;
  v13[0] = 375;
  v13[1] = 75;
  v13[2] = 25;
  v13[3] = 15;
  v13[4] = 11;
  v13[5] = 4;
  v13[6] = 3;
  v13[7] = 2;
  v13[8] = 2;
  v13[9] = 1;
  v7[0] = 500;
  v7[1] = 100;
  v7[2] = 20;
  v7[3] = 10;
  v7[4] = 8;
  v7[5] = 4;
  v7[6] = 4;
  v7[7] = 2;
  v7[8] = 2;
  v7[9] = 1;
  v7[10] = 1000;
  v7[11] = 200;
  v7[12] = 40;
  v7[13] = 20;
  v7[14] = 16;
  v7[15] = 8;
  v7[16] = 8;
  v7[17] = 4;
  v7[18] = 4;
  v7[19] = 2;
  v7[20] = 1500;
  v7[21] = 225;
  v7[22] = 60;
  v7[23] = 30;
  v7[24] = 24;
  v7[25] = 12;
  v7[26] = 12;
  v7[27] = 6;
  v7[28] = 6;
  v7[29] = 3;
  v7[30] = 2000;
  v7[31] = 300;
  v7[32] = 50;
  v7[33] = 40;
  v7[34] = 32;
  v7[35] = 16;
  v7[36] = 16;
  v7[37] = 8;
  v7[38] = 8;
  v7[39] = 4;
  v7[40] = 4000;
  v7[41] = 375;
  v7[42] = 100;
  v7[43] = 50;
  v7[44] = 40;
  v7[45] = 20;
  v7[46] = 20;
  v7[47] = 10;
  v7[48] = 10;
  v7[49] = 5;
  v14[0] = 1000;
  v14[1] = 200;
  v14[2] = 100;
  v14[3] = 50;
  v14[4] = 17;
  v14[5] = 7;
  v14[6] = 5;
  v14[7] = 3;
  v14[8] = 2;
  v14[9] = 1;
  v14[10] = 1;
  v8[0] = 500;
  v8[1] = 100;
  v8[2] = 50;
  v8[3] = 50;
  v8[4] = 20;
  v8[5] = 8;
  v8[6] = 5;
  v8[7] = 4;
  v8[8] = 2;
  v8[9] = 1;
  v9[0] = 4000;
  v9[1] = 800;
  v9[2] = 25;
  v9[3] = 12;
  v9[4] = 9;
  v9[5] = 6;
  v9[6] = 3;
  v9[7] = 3;
  v9[8] = 3;
  v9[9] = 2;
  v9[10] = 1;
  if ( *(_BYTE *)(this + 44) )
    v3 = 1;
  else
    v3 = *(_DWORD *)(this + 8);
  v12 = v3;
  if ( a2 < 0 )
    return 0;
  switch ( *(_DWORD *)(dword_7947E0 + 20244) )
  {
    case 0:
      if ( v12 != 5 || a2 )
        result = v12 * v5[a2];
      else
        result = 5000;
      break;
    case 1:
      if ( v12 != 5 || a2 )
        result = v12 * v10[a2];
      else
        result = 5000;
      break;
    case 2:
      if ( v12 != 5 || a2 )
        result = v12 * v15[a2];
      else
        result = 2500;
      break;
    case 3:
      if ( v12 != 5 || a2 )
        result = v12 * v6[a2];
      else
        result = 4000;
      break;
    case 4:
      if ( v12 != 5 || a2 )
        result = v12 * v4[a2];
      else
        result = 4000;
      break;
    case 5:
      if ( v12 != 5 || a2 )
        result = v12 * v11[a2];
      else
        result = 4000;
      break;
    case 6:
      if ( v12 != 5 || a2 )
        result = v12 * v13[a2];
      else
        result = 4000;
      break;
    case 7:
      result = v7[10 * v12 - 10 + a2];
      break;
    case 8:
      result = v12 * v14[a2];
      break;
    case 9:
      result = v12 * v8[a2];
      break;
    case 0xA:
      result = v12 * v9[a2];
      break;
    default:
      result = 0;
      break;
  }
  return result;
}


//======================================================================
// sub_558C10
// entry 00558c10  size 131  status ok
//======================================================================

int __thiscall sub_558C10(int this)
{
  int v3; // [esp+Ch] [ebp-4h]

  v3 = sub_54C460((_WORD *)dword_793428, *(_DWORD *)(dword_7947E0 + 20244), this + 34);
  if ( !v3 )
    *(_BYTE *)(this + 45) = 1;
  sub_554950((void *)dword_793424);
  if ( *(_DWORD *)(this + 20) == 1 )
    sub_54D6A0(dword_793428, *(_DWORD *)(dword_7947E0 + 20244), this + 34);
  return v3;
}


//======================================================================
// sub_558CA0
// entry 00558ca0  size 756  status ok
//======================================================================

int __thiscall sub_558CA0(int this)
{
  int result; // eax
  _DWORD *v2; // [esp+4h] [ebp-38h]
  _DWORD *v4; // [esp+Ch] [ebp-30h]
  __int16 v5; // [esp+14h] [ebp-28h]
  _WORD v6[6]; // [esp+18h] [ebp-24h]
  int v7; // [esp+28h] [ebp-14h]
  int i; // [esp+2Ch] [ebp-10h]
  int v9; // [esp+38h] [ebp-4h]

  sub_5F2B20(3208002, 1);
  sub_5F2B20(3208003, 1);
  sub_5F2B20(3208004, 1);
  sub_5F2B20(3208005, 1);
  sub_5F2B20(3208006, 1);
  if ( !*(_DWORD *)(this + 20) )
  {
    *(_BYTE *)(this + 46) = 1;
    *(_BYTE *)(this + 45) = 0;
    sub_557310();
    sub_557DC0((_WORD *)this);
    for ( i = 0; i < 5; ++i )
      *(_WORD *)(this + 2 * i + 34) = 0;
  }
  if ( *(_DWORD *)(this + 20) == 1 )
  {
    if ( (unsigned __int8)sub_5DF7B0(-1) )
    {
      if ( *(_BYTE *)(this + 46) )
      {
        *(_BYTE *)(this + 46) = sub_558FA0(this);
        if ( !*(_BYTE *)(this + 46) )
        {
          sub_557DC0((_WORD *)this);
          result = sub_554950((void *)dword_793424);
          if ( dword_793578 )
            return sub_57C140(dword_793578);
          return result;
        }
      }
    }
    sub_5F2BA0(5009);
  }
  sub_5551A0(dword_793424);
  for ( i = 0; i < 5; ++i )
    v6[i] = *(_WORD *)(this + 2 * i + 34);
  for ( i = 0; i < 5; ++i )
  {
    if ( !sub_5573A0((unsigned __int16 *)this, v6[i]) )
    {
      if ( v6[i] )
        v7 = sub_555020((_DWORD *)dword_793424, v6[i]);
      else
        v7 = i;
      if ( sub_557E40((_WORD *)this) == 5 )
        sub_557FB0((_WORD *)this, v6[i]);
      v5 = sub_6436C0(*(_DWORD *)(this + 16));
      sub_557E90((__int16 *)this, v5);
      *(_WORD *)(*(_DWORD *)(dword_793424 + 4 * v7 + 4) + 400) = v5;
      *(_DWORD *)(*(_DWORD *)(dword_793424 + 4 * v7 + 4) + 416) = v7;
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(dword_793424 + 4 * v7 + 4) + 112))(*(_DWORD *)(dword_793424
                                                                                                  + 4 * v7
                                                                                                  + 4));
    }
  }
  sub_557DC0((_WORD *)this);
  v4 = operator new(0x20u);
  v9 = 0;
  if ( v4 )
  {
    sub_5FC0D0(0);
    *v4 = &VideoPokerDealScript::`vftable';
    v2 = v4;
  }
  else
  {
    v2 = 0;
  }
  v9 = -1;
  return sub_5FC420(v2);
}


//======================================================================
// sub_558FA0
// entry 00558fa0  size 398  status ok
//======================================================================

char __thiscall sub_558FA0(_WORD *this)
{
  int k; // [esp+4h] [ebp-10h]
  int i; // [esp+8h] [ebp-Ch]
  int j; // [esp+8h] [ebp-Ch]
  int v5; // [esp+Ch] [ebp-8h]
  int v6; // [esp+10h] [ebp-4h]

  v6 = 0;
  v5 = 0;
  switch ( *(_BYTE *)(dword_793428 + 25) )
  {
    case 0x2E:
      return sub_5573F0(this);
    case 0x17:
      return sub_5574B0(this, 0);
    case 9:
      return sub_5574B0(this, 1);
    case 0x22:
      return sub_5577E0(this, 0);
    case 0xA:
      return sub_5577E0(this, 1);
  }
  for ( i = 0; i < 5; ++i )
  {
    if ( *(this + i + 12) )
      ++v6;
    if ( *(char *)(i + dword_793428 + 20) != -1 )
      ++v5;
  }
  if ( v6 != v5 )
    return 0;
  for ( j = 0; j < 5; ++j )
  {
    if ( *(this + j + 12) )
    {
      for ( k = 0;
            k < 5
         && (*(char *)(k + dword_793428 + 20) == -1
          || *(this + *(char *)(k + dword_793428 + 20) + 17) != *(this + j + 12));
            ++k )
      {
        ;
      }
      if ( k == 5 )
        return 0;
    }
  }
  return 1;
}


//======================================================================
// sub_559130
// entry 00559130  size 80  status ok
//======================================================================

bool __thiscall sub_559130(_DWORD *this)
{
  int v1; // eax
  int v2; // esi
  bool v4; // [esp+4h] [ebp-Ch]

  v4 = 1;
  if ( !*(this + 1) )
  {
    v1 = sub_5DCB00(0);
    v2 = sub_5D5A50(v1);
    if ( v2 < sub_5D0AA0(this) )
      return 0;
  }
  return v4;
}


//======================================================================
// sub_559180
// entry 00559180  size 31  status ok
//======================================================================

BOOL __thiscall sub_559180(_DWORD *this)
{
  return *(this + 1) > 0;
}


//======================================================================
// sub_5591A0
// entry 005591a0  size 95  status ok
//======================================================================

bool __thiscall sub_5591A0(_DWORD *this)
{
  int v1; // eax
  int v2; // esi
  char v4; // [esp+4h] [ebp-10h]

  v4 = 0;
  if ( !*(this + 1) && !*(this + 2) )
  {
    v1 = sub_5DCB00(0);
    v2 = sub_5D5A50(v1);
    if ( v2 < sub_5D0AA0(this) )
      return 1;
  }
  return v4;
}


//======================================================================
// sub_559230
// entry 00559230  size 99  status ok
//======================================================================

int __thiscall sub_559230(int this)
{
  int i; // [esp+4h] [ebp-4h]

  ATL::CCRTHeap::CCRTHeap((ATL::CCRTHeap *)this);
  *(_DWORD *)this = &VPMultiAI::`vftable';
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
// sub_5592A0
// entry 005592a0  size 169  status ok
//======================================================================

int __thiscall sub_5592A0(_WORD *this, int a2, int a3)
{
  int result; // eax
  int i; // [esp+10h] [ebp-4h]

  for ( i = 0; i < 5; ++i )
    *(this + i + 2) = *(_WORD *)(a3 + 2 * i);
  switch ( *(_DWORD *)(dword_7947E0 + 20244) )
  {
    case 0:
    case 1:
      result = sub_559E90(this);
      break;
    case 2:
      result = sub_559ED0(this);
      break;
    case 3:
    case 4:
      result = sub_55A000(this);
      break;
    case 5:
    case 6:
    case 7:
      result = sub_55A040(this);
      break;
    case 8:
    case 9:
      result = sub_55A1A0(this);
      break;
    case 0xA:
      result = sub_55A360(this);
      break;
    default:
      result = -1;
      break;
  }
  return result;
}


//======================================================================
// sub_559380
// entry 00559380  size 73  status ok
//======================================================================

int __thiscall sub_559380(_WORD *this)
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
// sub_5593D0
// entry 005593d0  size 143  status ok
//======================================================================

int __stdcall sub_5593D0(__int16 a1)
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
// sub_559460
// entry 00559460  size 68  status ok
//======================================================================

bool __thiscall sub_559460(__int16 *this)
{
  return (unsigned __int8)sub_5594B0(this) && sub_641280(*(this + 2)) == 10;
}


//======================================================================
// sub_5594B0
// entry 005594b0  size 62  status ok
//======================================================================

bool __thiscall sub_5594B0(void *this)
{
  return (unsigned __int8)sub_5595C0(this) && (unsigned __int8)sub_559550(this);
}


//======================================================================
// sub_5594F0
// entry 005594f0  size 29  status ok
//======================================================================

bool __thiscall sub_5594F0(void *this)
{
  return sub_559C50(this, this) == 4;
}


//======================================================================
// sub_559510
// entry 00559510  size 57  status ok
//======================================================================

bool __thiscall sub_559510(void *this)
{
  return sub_559C50(this) == 3 && sub_5596E0(this);
}


//======================================================================
// sub_559550
// entry 00559550  size 100  status ok
//======================================================================

char __thiscall sub_559550(__int16 *this)
{
  int v3; // [esp+4h] [ebp-8h]
  int i; // [esp+8h] [ebp-4h]

  v3 = sub_641290(*(this + 2));
  for ( i = 1; i < sub_559380(this); ++i )
  {
    if ( sub_641290(*(this + i + 2)) != v3 )
      return 0;
  }
  return 1;
}


//======================================================================
// sub_5595C0
// entry 005595c0  size 146  status ok
//======================================================================

char __thiscall sub_5595C0(__int16 *this)
{
  int v3; // [esp+4h] [ebp-8h]
  int i; // [esp+8h] [ebp-4h]

  v3 = sub_641280(*(this + 2));
  for ( i = 1; i < sub_559380(this); ++i )
  {
    if ( sub_641280(*(this + i + 2)) != ++v3 && (i != 4 || v3 != 6 || sub_641280(*(this + 6)) != 14) )
      return 0;
  }
  return 1;
}


//======================================================================
// sub_559660
// entry 00559660  size 29  status ok
//======================================================================

bool __thiscall sub_559660(void *this)
{
  return sub_559C50(this) == 3;
}


//======================================================================
// sub_559680
// entry 00559680  size 81  status ok
//======================================================================

BOOL sub_559680()
{
  int v1; // [esp+4h] [ebp-8h]
  int i; // [esp+8h] [ebp-4h]

  v1 = 0;
  for ( i = 2; i < 15; ++i )
  {
    if ( sub_559D60(i) == 2 )
      ++v1;
  }
  return v1 == 2;
}


//======================================================================
// sub_5596E0
// entry 005596e0  size 63  status ok
//======================================================================

int sub_5596E0()
{
  int i; // [esp+4h] [ebp-4h]

  for ( i = 2; i < 15; ++i )
  {
    if ( sub_559D60(i) == 2 )
      return i;
  }
  return 0;
}


//======================================================================
// sub_559720
// entry 00559720  size 129  status ok
//======================================================================

int __thiscall sub_559720(_WORD *this)
{
  int i; // eax
  int v2; // eax
  int v5; // [esp+4h] [ebp-4h]

  v5 = 0;
  for ( i = sub_559380(this); v5 < i; i = sub_559380(this) )
  {
    if ( sub_5593D0(*(this + v5 + 2)) != 20 )
    {
      v2 = sub_641280(*(this + v5 + 2));
      if ( sub_559D60(v2) == 2 )
        return sub_641280(*(this + v5 + 2));
    }
    ++v5;
  }
  return 0;
}


//======================================================================
// sub_5597B0
// entry 005597b0  size 31  status ok
//======================================================================

bool sub_5597B0()
{
  return sub_559D60(2) == 4;
}


//======================================================================
// sub_5597D0
// entry 005597d0  size 123  status ok
//======================================================================

bool __thiscall sub_5597D0(_WORD *this)
{
  int i; // [esp+4h] [ebp-4h]

  if ( (unsigned __int8)sub_5598E0(this) )
  {
    for ( i = 0; i < sub_559380(this); ++i )
    {
      if ( sub_5593D0(*(this + i + 2)) != 20 )
        return sub_641280(*(this + i + 2)) >= 10;
    }
  }
  return 0;
}


//======================================================================
// sub_559850
// entry 00559850  size 139  status ok
//======================================================================

bool __thiscall sub_559850(_WORD *this)
{
  if ( !sub_559D00(this) )
    return 0;
  if ( sub_559D00(this) >= 4 )
    return 1;
  if ( sub_559D00(this) == 3 && sub_559720(this) )
    return 1;
  if ( sub_559D00(this) == 2 && sub_559660(this) )
    return 1;
  return sub_559D00(this) == 1 && sub_5594F0(this);
}


//======================================================================
// sub_5598E0
// entry 005598e0  size 62  status ok
//======================================================================

bool __thiscall sub_5598E0(void *this)
{
  return (unsigned __int8)sub_559A30(this) && (unsigned __int8)sub_559AF0(this);
}


//======================================================================
// sub_559920
// entry 00559920  size 199  status ok
//======================================================================

bool __thiscall sub_559920(_WORD *this)
{
  int v2; // eax
  int i; // [esp+4h] [ebp-4h]

  if ( !sub_559D00(this) )
    return 0;
  if ( sub_559D00(this) >= 3 )
    return 1;
  if ( sub_559D00(this) != 2 )
    return sub_559D00(this) == 1 && sub_559660(this);
  for ( i = 0; i < sub_559380(this); ++i )
  {
    if ( sub_5593D0(*(this + i + 2)) != 20 )
    {
      v2 = sub_641280(*(this + i + 2));
      if ( sub_559D60(v2) == 2 )
        return 1;
    }
  }
  return 0;
}


//======================================================================
// sub_5599F0
// entry 005599f0  size 61  status ok
//======================================================================

bool __thiscall sub_5599F0(void *this)
{
  if ( !sub_559D00(this) )
    return 0;
  return sub_559D00(this) == 1 && sub_559680();
}


//======================================================================
// sub_559A30
// entry 00559a30  size 187  status ok
//======================================================================

char __thiscall sub_559A30(_WORD *this)
{
  int v3; // [esp+4h] [ebp-8h]
  int i; // [esp+8h] [ebp-4h]

  v3 = -2;
  if ( !sub_559D00(this) )
    return 0;
  for ( i = 0; i < sub_559380(this); ++i )
  {
    if ( v3 == -2 )
    {
      if ( sub_5593D0(*(this + i + 2)) != 20 )
        v3 = sub_641290(*(this + i + 2));
    }
    else if ( sub_5593D0(*(this + i + 2)) != 20 && sub_641290(*(this + i + 2)) != v3 )
    {
      return 0;
    }
  }
  return 1;
}


//======================================================================
// sub_559AF0
// entry 00559af0  size 262  status ok
//======================================================================

bool __thiscall sub_559AF0(_WORD *this)
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
  v8 = sub_559D00(this);
  v10 = 0;
  if ( !v8 )
    return 0;
  if ( v8 >= 4 )
    return 1;
  for ( i = 0; ; ++i )
  {
    v2 = sub_559380(v6);
    if ( i >= v2 )
      break;
    if ( sub_5593D0(v6[i + 2]) != 20 )
    {
      v3 = sub_641280(v6[i + 2]);
      if ( (int)sub_559D60(v3) > 1 )
        return 0;
      v4 = sub_5593D0(v6[i + 2]);
      v7[v10++] = v4;
    }
  }
  return v7[v10 - 1] == 14 && *(&v5 + v10) <= 5 || v7[0] + 4 >= v7[v10 - 1];
}


//======================================================================
// sub_559C00
// entry 00559c00  size 68  status ok
//======================================================================

bool __thiscall sub_559C00(void *this)
{
  int v2; // [esp+4h] [ebp-4h]

  v2 = sub_559D00(this);
  if ( !v2 )
    return 0;
  if ( sub_5596E0() && v2 == 1 )
    return 1;
  return v2 == 2;
}


//======================================================================
// sub_559C50
// entry 00559c50  size 176  status ok
//======================================================================

int __thiscall sub_559C50(__int16 *this)
{
  int v3; // [esp+4h] [ebp-10h]
  int v4; // [esp+8h] [ebp-Ch]
  int v5; // [esp+Ch] [ebp-8h]
  int i; // [esp+10h] [ebp-4h]

  v4 = 1;
  v5 = 1;
  v3 = sub_641280(*(this + 2));
  for ( i = 1; i < sub_559380(this); ++i )
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
// sub_559D00
// entry 00559d00  size 90  status ok
//======================================================================

int __thiscall sub_559D00(_WORD *this)
{
  int i; // eax
  int v4; // [esp+4h] [ebp-8h]
  int v5; // [esp+8h] [ebp-4h]

  v4 = 0;
  v5 = 0;
  for ( i = sub_559380(this); v5 < i; i = sub_559380(this) )
  {
    if ( sub_5593D0(*(this + v5 + 2)) == 20 )
      ++v4;
    ++v5;
  }
  return v4;
}


//======================================================================
// sub_559D60
// entry 00559d60  size 92  status ok
//======================================================================

int __thiscall sub_559D60(_WORD *this, int a2)
{
  int i; // eax
  int v5; // [esp+4h] [ebp-8h]
  int v6; // [esp+8h] [ebp-4h]

  v5 = 0;
  v6 = 0;
  for ( i = sub_559380(this); v6 < i; i = sub_559380(this) )
  {
    if ( sub_641280(*(this + v6 + 2)) == a2 )
      ++v5;
    ++v6;
  }
  return v5;
}


//======================================================================
// sub_559DC0
// entry 00559dc0  size 193  status ok
//======================================================================

int __thiscall sub_559DC0(__int16 *this)
{
  if ( sub_559460(this) )
    return 0;
  if ( sub_5594B0(this) )
    return 1;
  if ( sub_5594F0(this) )
    return 2;
  if ( sub_559510(this) )
    return 3;
  if ( sub_559550(this) )
    return 4;
  if ( sub_5595C0(this) )
    return 5;
  if ( sub_559660(this) )
    return 6;
  if ( sub_559680() )
    return 7;
  return -1;
}


//======================================================================
// sub_559E90
// entry 00559e90  size 53  status ok
//======================================================================

int __thiscall sub_559E90(__int16 *this)
{
  int v2; // [esp+4h] [ebp-4h]

  v2 = sub_559DC0(this);
  if ( v2 == -1 && sub_5596E0() >= 11 )
    return 8;
  else
    return v2;
}


//======================================================================
// sub_559ED0
// entry 00559ed0  size 296  status ok
//======================================================================

int __thiscall sub_559ED0(__int16 *this)
{
  if ( sub_559460(this) )
    return 0;
  if ( sub_5594B0(this) )
    return 1;
  if ( sub_5594F0(this) )
  {
    if ( sub_559D60(this, 14) == 4 )
    {
      return 2;
    }
    else if ( sub_559D60(this, 13) == 4 || sub_559D60(this, 12) == 4 || sub_559D60(this, 11) == 4 )
    {
      return 3;
    }
    else
    {
      return 4;
    }
  }
  else if ( sub_559510(this) )
  {
    return 5;
  }
  else if ( sub_559550(this) )
  {
    return 6;
  }
  else if ( sub_5595C0(this) )
  {
    return 7;
  }
  else if ( sub_559660(this) )
  {
    return 8;
  }
  else if ( sub_559680() )
  {
    return 9;
  }
  else if ( sub_5596E0() < 11 )
  {
    return -1;
  }
  else
  {
    return 10;
  }
}


//======================================================================
// sub_55A000
// entry 0055a000  size 53  status ok
//======================================================================

int __thiscall sub_55A000(__int16 *this)
{
  int v2; // [esp+4h] [ebp-4h]

  v2 = sub_559DC0(this);
  if ( v2 == -1 && sub_5596E0() >= 10 )
    return 8;
  else
    return v2;
}


//======================================================================
// sub_55A040
// entry 0055a040  size 339  status ok
//======================================================================

int __thiscall sub_55A040(__int16 *this)
{
  if ( sub_559460(this) )
    return 0;
  if ( sub_5597B0() )
    return 1;
  if ( sub_5597D0(this) )
    return 2;
  if ( sub_559850(this) )
    return 3;
  if ( sub_5594B0(this) || sub_5598E0(this) )
    return 4;
  if ( sub_5594F0(this) || sub_559920(this) )
    return 5;
  if ( sub_559510(this) || sub_5599F0(this) )
    return 6;
  if ( sub_559550(this) || sub_559A30(this) )
    return 7;
  if ( sub_5595C0(this) || sub_559AF0(this) )
    return 8;
  if ( sub_559660(this) || sub_559C00(this) )
    return 9;
  return -1;
}


//======================================================================
// sub_55A1A0
// entry 0055a1a0  size 436  status ok
//======================================================================

int __thiscall sub_55A1A0(__int16 *this)
{
  if ( sub_559460(this) )
    return 0;
  if ( sub_559850(this) )
    return 1;
  if ( sub_5597D0(this) )
    return 2;
  if ( sub_5594B0(this) || sub_5598E0(this) )
    return 3;
  if ( sub_5594F0(this) || sub_559920(this) )
    return 4;
  if ( sub_559510(this) || sub_5599F0(this) )
    return 5;
  if ( sub_559550(this) || sub_559A30(this) )
    return 6;
  if ( sub_5595C0(this) || sub_559AF0(this) )
    return 7;
  if ( sub_559660(this) || sub_559C00(this) )
    return 8;
  if ( sub_559680() )
    return 9;
  if ( *(_DWORD *)(dword_7947E0 + 20244) != 8 )
    return -1;
  if ( sub_5596E0() >= 13 )
    return 10;
  if ( sub_559D00(this) == 1 && (sub_559D60(this, 13) || sub_559D60(this, 14)) )
    return 10;
  else
    return -1;
}


//======================================================================
// sub_55A360
// entry 0055a360  size 377  status ok
//======================================================================

int __thiscall sub_55A360(__int16 *this)
{
  if ( sub_5597B0() && sub_559D00(this) == 5 )
    return 0;
  if ( sub_559460(this) )
    return 1;
  if ( sub_5597B0() )
    return 2;
  if ( sub_5597D0(this) )
    return 3;
  if ( sub_559850(this) )
    return 4;
  if ( sub_5594B0(this) || sub_5598E0(this) )
    return 5;
  if ( sub_5594F0(this) || sub_559920(this) )
    return 6;
  if ( sub_559510(this) || sub_5599F0(this) )
    return 7;
  if ( sub_559550(this) || sub_559A30(this) )
    return 8;
  if ( sub_5595C0(this) || sub_559AF0(this) )
    return 9;
  if ( sub_559660(this) || sub_559C00(this) )
    return 10;
  return -1;
}


//======================================================================
// sub_55A4E0
// entry 0055a4e0  size 128  status ok
//======================================================================

char __thiscall sub_55A4E0(int this, int a2, int a3)
{
  int v3; // eax
  int i; // [esp+Ch] [ebp-4h]

  for ( i = 0; i < 5; ++i )
    *(_WORD *)(this + 2 * i + 4) = *(_WORD *)(a3 + 2 * i);
  *(_BYTE *)(this + 25) = 0;
  sub_55EC70(this);
  v3 = sub_5592A0((_WORD *)this, *(_DWORD *)(dword_7947E0 + 20244), this + 4);
  sub_55A560(v3);
  return *(_BYTE *)(this + 25);
}


//======================================================================
// sub_55A560
// entry 0055a560  size 138  status ok
//======================================================================

int __thiscall sub_55A560(_DWORD *this, int a2)
{
  int result; // eax

  *(this + 4) = a2;
  result = dword_7947E0;
  switch ( *(_DWORD *)(dword_7947E0 + 20244) )
  {
    case 0:
      result = sub_55D6F0(this);
      break;
    case 1:
      result = sub_55DB00(this);
      break;
    case 2:
      result = sub_55DEE0(this);
      break;
    case 3:
    case 4:
      result = sub_55D2B0(this);
      break;
    case 5:
    case 6:
    case 7:
      result = sub_55C5D0(this);
      break;
    case 8:
      result = sub_55BBB0(this);
      break;
    case 9:
      result = sub_55B410(this);
      break;
    case 0xA:
      result = sub_55A620(this);
      break;
    default:
      return result;
  }
  return result;
}


//======================================================================
// sub_55A620
// entry 0055a620  size 3487  status ok
//======================================================================

int __thiscall sub_55A620(int this)
{
  int result; // eax
  int v2; // eax
  int v3; // eax
  int v4; // esi
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int nn; // [esp+10h] [ebp-Ch]
  int i; // [esp+14h] [ebp-8h]
  int j; // [esp+14h] [ebp-8h]
  int v12; // [esp+14h] [ebp-8h]
  int i10; // [esp+14h] [ebp-8h]
  int i5; // [esp+14h] [ebp-8h]
  int i6; // [esp+14h] [ebp-8h]
  int i7; // [esp+14h] [ebp-8h]
  int i8; // [esp+14h] [ebp-8h]
  int i9; // [esp+14h] [ebp-8h]
  int i11; // [esp+14h] [ebp-8h]
  int i12; // [esp+14h] [ebp-8h]
  int i13; // [esp+14h] [ebp-8h]
  int i14; // [esp+14h] [ebp-8h]
  int i15; // [esp+14h] [ebp-8h]
  int i16; // [esp+14h] [ebp-8h]
  int k; // [esp+14h] [ebp-8h]
  int m; // [esp+14h] [ebp-8h]
  int n; // [esp+14h] [ebp-8h]
  int ii; // [esp+14h] [ebp-8h]
  int jj; // [esp+14h] [ebp-8h]
  int kk; // [esp+14h] [ebp-8h]
  int mm; // [esp+14h] [ebp-8h]
  int i1; // [esp+14h] [ebp-8h]
  int i3; // [esp+14h] [ebp-8h]
  int i4; // [esp+14h] [ebp-8h]
  int i2; // [esp+14h] [ebp-8h]
  int v36; // [esp+18h] [ebp-4h]

  v36 = 0;
  sub_55EC70(this);
  if ( !sub_559D00((_WORD *)this) )
  {
    if ( *(_DWORD *)(this + 16) == 1 )
    {
LABEL_38:
      sub_55ECB0(1);
      return sub_55EC30(this);
    }
    if ( (unsigned __int8)sub_55E640(4, 10, 11) )
      return sub_55ECB0(2);
    if ( *(int *)(this + 16) > -1 )
    {
      switch ( *(_DWORD *)(this + 16) )
      {
        case 1:
        case 5:
        case 7:
        case 8:
        case 9:
          goto LABEL_38;
        case 6:
          sub_55ECB0(19);
          break;
        case 0xA:
          break;
        default:
          goto LABEL_14;
      }
      sub_55ECB0(39);
      for ( i = 0; ; ++i )
      {
        result = sub_559380((_WORD *)this);
        if ( i >= result )
          break;
        v2 = sub_641280(*(_WORD *)(this + 2 * i + 4));
        if ( sub_559D60((_WORD *)this, v2) > 1 )
        {
          *(_BYTE *)(v36 + this + 20) = i;
          ++v36;
        }
      }
      return result;
    }
LABEL_14:
    if ( (unsigned __int8)sub_55E640(4, 1, 11) )
      return sub_55ECB0(9);
    if ( (unsigned __int8)sub_55E640(3, 10, 11) )
      return sub_55ECB0(5);
    if ( (unsigned __int8)sub_55E8E0(this) )
      return sub_55ECB0(35);
    if ( sub_559680() )
    {
      for ( j = 0; j < sub_559380((_WORD *)this); ++j )
      {
        v3 = sub_641280(*(_WORD *)(this + 2 * j + 4));
        if ( sub_559D60((_WORD *)this, v3) == 2 )
        {
          *(_BYTE *)(v36 + this + 20) = j;
          ++v36;
        }
      }
      return sub_55ECB0(42);
    }
    if ( (unsigned __int8)sub_55E640(3, 1, 11) )
    {
      v4 = sub_641280(*(_WORD *)(this + 2 * *(char *)(this + 20) + 4)) + 4;
      if ( v4 != sub_641280(*(_WORD *)(this + 2 * *(char *)(this + 22) + 4)) )
        return sub_55ECB0(12);
      sub_55EC70(this);
    }
    if ( (unsigned __int8)sub_55EBA0(this) )
      return sub_55ECB0(46);
    if ( (unsigned __int8)sub_55E980(4, 1, 11) )
      return sub_55ECB0(23);
    return sub_55EC70(this);
  }
  if ( *(int *)(this + 16) <= -1 )
  {
LABEL_137:
    if ( sub_559D00((_WORD *)this) == 2 && (unsigned __int8)sub_55E640(2, 10, 11)
      || sub_559D00((_WORD *)this) == 1 && (unsigned __int8)sub_55E640(3, 10, 11) )
    {
      sub_55ECB0(3);
      for ( k = 0; k < 5; ++k )
      {
        if ( *(char *)(k + this + 20) == -1 )
        {
          v36 = k;
          break;
        }
      }
      for ( m = 0; ; ++m )
      {
        result = sub_559380((_WORD *)this);
        if ( m >= result )
          break;
        if ( sub_5593D0(*(_WORD *)(this + 2 * m + 4)) == 20 )
        {
          *(_BYTE *)(v36 + this + 20) = m;
          ++v36;
        }
      }
    }
    else
    {
      sub_55EC70(this);
      if ( sub_559D00((_WORD *)this) == 1 && (unsigned __int8)sub_55E640(3, 1, 11) )
      {
        sub_55ECB0(10);
        for ( n = 0; n < 5; ++n )
        {
          if ( *(char *)(n + this + 20) == -1 )
          {
            v36 = n;
            break;
          }
        }
        for ( ii = 0; ; ++ii )
        {
          result = sub_559380((_WORD *)this);
          if ( ii >= result )
            break;
          if ( sub_5593D0(*(_WORD *)(this + 2 * ii + 4)) == 20 )
          {
            *(_BYTE *)(v36 + this + 20) = ii;
            ++v36;
          }
        }
      }
      else
      {
        sub_55EC70(this);
        if ( sub_559D00((_WORD *)this) == 1 && (unsigned __int8)sub_55E640(2, 10, 11) )
        {
          sub_55ECB0(6);
          for ( jj = 0; jj < 5; ++jj )
          {
            if ( *(char *)(jj + this + 20) == -1 )
            {
              v36 = jj;
              break;
            }
          }
          for ( kk = 0; ; ++kk )
          {
            result = sub_559380((_WORD *)this);
            if ( kk >= result )
              break;
            if ( sub_5593D0(*(_WORD *)(this + 2 * kk + 4)) == 20 )
            {
              *(_BYTE *)(v36 + this + 20) = kk;
              ++v36;
            }
          }
        }
        else
        {
          sub_55EC70(this);
          if ( sub_559D00((_WORD *)this) == 1 )
          {
            for ( mm = 1; mm <= 4; ++mm )
            {
              if ( (unsigned __int8)sub_55E3E0(mm, 3) )
              {
                for ( nn = 0; nn < sub_559380((_WORD *)this); ++nn )
                {
                  if ( sub_641290(*(_WORD *)(this + 2 * nn + 4)) == mm
                    || sub_5593D0(*(_WORD *)(this + 2 * nn + 4)) == 20 )
                  {
                    *(_BYTE *)(v36 + this + 20) = nn;
                    ++v36;
                  }
                }
                return sub_55ECB0(36);
              }
            }
          }
          sub_55EC70(this);
          if ( sub_559D00((_WORD *)this) == 1 && (unsigned __int8)sub_55E980(3, 1, 11) )
          {
            sub_55ECB0(34);
            for ( i1 = 0; ; ++i1 )
            {
              result = sub_559380((_WORD *)this);
              if ( i1 >= result )
                break;
              if ( sub_5593D0(*(_WORD *)(this + 2 * i1 + 4)) == 20 )
              {
                *(_BYTE *)(this + 23) = i1;
                return this;
              }
            }
          }
          else
          {
            sub_55EC70(this);
            if ( sub_559D00((_WORD *)this) != 1 || !(unsigned __int8)sub_55E640(2, 1, 11) )
            {
              for ( i2 = 0; i2 < sub_559380((_WORD *)this); ++i2 )
              {
                if ( sub_5593D0(*(_WORD *)(this + 2 * i2 + 4)) == 20 )
                {
                  *(_BYTE *)(v36 + this + 20) = i2;
                  ++v36;
                }
              }
              if ( v36 )
                return sub_55ECB0(49);
              return sub_55EC70(this);
            }
            sub_55ECB0(17);
            for ( i3 = 0; i3 < 5; ++i3 )
            {
              if ( *(char *)(i3 + this + 20) == -1 )
              {
                v36 = i3;
                break;
              }
            }
            for ( i4 = 0; ; ++i4 )
            {
              result = sub_559380((_WORD *)this);
              if ( i4 >= result )
                break;
              if ( sub_5593D0(*(_WORD *)(this + 2 * i4 + 4)) == 20 )
              {
                *(_BYTE *)(v36 + this + 20) = i4;
                ++v36;
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
        goto LABEL_38;
      case 2:
        sub_55ECB0(22);
        for ( i5 = 0; ; ++i5 )
        {
          result = sub_559380((_WORD *)this);
          if ( i5 >= result )
            break;
          if ( sub_5593D0(*(_WORD *)(this + 2 * i5 + 4)) == 20 )
          {
            *(_BYTE *)(v36 + this + 20) = i5;
            ++v36;
          }
        }
        return result;
      case 4:
        if ( sub_559D00((_WORD *)this) == 4 )
          sub_55ECB0(22);
        else
          sub_55ECB0(1);
        if ( sub_559D00((_WORD *)this) == 4 )
        {
          for ( i6 = 0; ; ++i6 )
          {
            result = sub_559380((_WORD *)this);
            if ( i6 >= result )
              break;
            if ( sub_5593D0(*(_WORD *)(this + 2 * i6 + 4)) == 20 )
            {
              *(_BYTE *)(v36 + this + 20) = i6;
              ++v36;
            }
          }
        }
        else
        {
          for ( i7 = 0; ; ++i7 )
          {
            result = sub_559380((_WORD *)this);
            if ( i7 >= result )
              break;
            v5 = sub_641280(*(_WORD *)(this + 2 * i7 + 4));
            if ( sub_559D60((_WORD *)this, v5) > 1 || sub_5593D0(*(_WORD *)(this + 2 * i7 + 4)) == 20 )
            {
              *(_BYTE *)(v36 + this + 20) = i7;
              ++v36;
            }
          }
        }
        return result;
      case 6:
        if ( sub_559D00((_WORD *)this) == 3 )
          sub_55ECB0(41);
        else
          sub_55ECB0(21);
        if ( sub_559D00((_WORD *)this) == 3 )
        {
          for ( i8 = 0; ; ++i8 )
          {
            result = sub_559380((_WORD *)this);
            if ( i8 >= result )
              break;
            if ( sub_5593D0(*(_WORD *)(this + 2 * i8 + 4)) == 20 )
            {
              *(_BYTE *)(v36 + this + 20) = i8;
              ++v36;
            }
          }
        }
        else
        {
          for ( i9 = 0; ; ++i9 )
          {
            result = sub_559380((_WORD *)this);
            if ( i9 >= result )
              break;
            v6 = sub_641280(*(_WORD *)(this + 2 * i9 + 4));
            if ( sub_559D60((_WORD *)this, v6) > 1 || sub_5593D0(*(_WORD *)(this + 2 * i9 + 4)) == 20 )
            {
              *(_BYTE *)(v36 + this + 20) = i9;
              ++v36;
            }
          }
        }
        return result;
      case 8:
      case 9:
        if ( (sub_559D00((_WORD *)this) != 2 || !(unsigned __int8)sub_55E640(2, 10, 11))
          && (sub_559D00((_WORD *)this) != 1 || !(unsigned __int8)sub_55E640(3, 10, 11)) )
        {
          sub_55EC70(this);
          sub_55ECB0(1);
          return sub_55EC30(this);
        }
        sub_55ECB0(3);
        v12 = 0;
        while ( 2 )
        {
          if ( v12 < 5 )
          {
            if ( *(char *)(v12 + this + 20) != -1 )
            {
              ++v12;
              continue;
            }
            v36 = v12;
          }
          break;
        }
        for ( i10 = 0; ; ++i10 )
        {
          result = sub_559380((_WORD *)this);
          if ( i10 >= result )
            break;
          if ( sub_5593D0(*(_WORD *)(this + 2 * i10 + 4)) == 20 )
          {
            *(_BYTE *)(v36 + this + 20) = i10;
            ++v36;
          }
        }
        return result;
      case 0xA:
        if ( sub_559D00((_WORD *)this) == 2 && (unsigned __int8)sub_55E640(2, 10, 11)
          || sub_559D00((_WORD *)this) == 1 && (unsigned __int8)sub_55E640(3, 10, 11) )
        {
          sub_55ECB0(3);
          for ( i11 = 0; ; ++i11 )
          {
            if ( i11 >= 5 )
              goto LABEL_104;
            if ( *(char *)(i11 + this + 20) == -1 )
              break;
          }
          v36 = i11;
LABEL_104:
          for ( i12 = 0; ; ++i12 )
          {
            result = sub_559380((_WORD *)this);
            if ( i12 >= result )
              break;
            if ( sub_5593D0(*(_WORD *)(this + 2 * i12 + 4)) == 20 )
            {
              *(_BYTE *)(v36 + this + 20) = i12;
              ++v36;
            }
          }
          return result;
        }
        sub_55EC70(this);
        if ( sub_559D00((_WORD *)this) == 1 && (unsigned __int8)sub_55E640(3, 1, 11) )
        {
          sub_55ECB0(10);
          for ( i13 = 0; ; ++i13 )
          {
            if ( i13 >= 5 )
              goto LABEL_117;
            if ( *(char *)(i13 + this + 20) == -1 )
              break;
          }
          v36 = i13;
LABEL_117:
          for ( i14 = 0; ; ++i14 )
          {
            result = sub_559380((_WORD *)this);
            if ( i14 >= result )
              break;
            if ( sub_5593D0(*(_WORD *)(this + 2 * i14 + 4)) == 20 )
            {
              *(_BYTE *)(v36 + this + 20) = i14;
              ++v36;
            }
          }
          return result;
        }
        sub_55EC70(this);
        if ( sub_559D00((_WORD *)this) == 2 )
        {
          sub_55ECB0(47);
          for ( i15 = 0; ; ++i15 )
          {
            result = sub_559380((_WORD *)this);
            if ( i15 >= result )
              break;
            if ( sub_5593D0(*(_WORD *)(this + 2 * i15 + 4)) == 20 )
            {
              *(_BYTE *)(v36 + this + 20) = i15;
              ++v36;
            }
          }
        }
        else
        {
          sub_55ECB0(40);
          for ( i16 = 0; ; ++i16 )
          {
            result = sub_559380((_WORD *)this);
            if ( i16 >= result )
              break;
            v7 = sub_641280(*(_WORD *)(this + 2 * i16 + 4));
            if ( sub_559D60((_WORD *)this, v7) > 1 || sub_5593D0(*(_WORD *)(this + 2 * i16 + 4)) == 20 )
            {
              *(_BYTE *)(v36 + this + 20) = i16;
              ++v36;
            }
          }
        }
        break;
      default:
        goto LABEL_137;
    }
  }
  return result;
}


//======================================================================
// sub_55B410
// entry 0055b410  size 1887  status ok
//======================================================================

char __thiscall sub_55B410(int this)
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
  sub_55EC70(this);
  if ( sub_559D00((_WORD *)this) )
  {
    if ( (unsigned __int8)sub_55E640(3, 10, 11) )
    {
      sub_55ECB0(4);
      for ( i = 0; ; ++i )
      {
        v1 = sub_559380((_WORD *)this);
        if ( i >= v1 )
          break;
        if ( sub_5593D0(*(_WORD *)(this + 2 * i + 4)) == 20 )
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
      if ( (unsigned __int8)sub_55E640(3, 1, 11) )
      {
        if ( sub_559D00((_WORD *)this) == 1 )
        {
          for ( j = 0; j < sub_559380((_WORD *)this); ++j )
          {
            if ( sub_5593D0(*(_WORD *)(this + 2 * j + 4)) == 20 )
            {
              sub_55ECB0(10);
              *(_BYTE *)(this + 23) = j;
              LOBYTE(v1) = this;
              return v1;
            }
          }
        }
        sub_55EC70(this);
      }
      if ( (unsigned __int8)sub_55E640(2, 10, 11) )
      {
        for ( k = 0; k < sub_559380((_WORD *)this); ++k )
        {
          if ( sub_5593D0(*(_WORD *)(this + 2 * k + 4)) == 20 )
          {
            LOBYTE(v1) = sub_55ECB0(6);
            *(_BYTE *)(this + 22) = k;
            return v1;
          }
        }
      }
      if ( (unsigned __int8)sub_55E640(2, 1, 11) )
      {
        for ( m = 0; m < sub_559380((_WORD *)this); ++m )
        {
          if ( sub_5593D0(*(_WORD *)(this + 2 * m + 4)) == 20 )
          {
            sub_55ECB0(17);
            *(_BYTE *)(this + 22) = m;
            LOBYTE(v1) = m;
            return v1;
          }
        }
      }
      if ( (unsigned __int8)sub_55E980(3, 1, 11) )
      {
        for ( n = 0; n < sub_559380((_WORD *)this); ++n )
        {
          if ( sub_5593D0(*(_WORD *)(this + 2 * n + 4)) == 20 )
          {
            sub_55ECB0(34);
            *(_BYTE *)(this + 23) = n;
            LOBYTE(v1) = this;
            return v1;
          }
        }
      }
      for ( ii = sub_559380((_WORD *)this) - 1; ii > -1; --ii )
      {
        if ( sub_5593D0(*(_WORD *)(this + 2 * ii + 4)) == 20 )
        {
          *(_BYTE *)(v17 + this + 20) = ii;
          ++v17;
        }
      }
      for ( jj = sub_559380((_WORD *)this) - 1; jj > -1; --jj )
      {
        if ( sub_5593D0(*(_WORD *)(this + 2 * jj + 4)) != 20 && (int)sub_641280(*(_WORD *)(this + 2 * jj + 4)) > 10 )
        {
          sub_55ECB0(44);
          *(_BYTE *)(v17 + this + 20) = jj;
          LOBYTE(v1) = v17 + 1;
          return v1;
        }
      }
      LOBYTE(v1) = sub_55ECB0(49);
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
          sub_55ECB0(1);
          LOBYTE(v1) = sub_55EC30(this);
          return v1;
        case 4:
          sub_55ECB0(20);
          goto LABEL_66;
        case 8:
LABEL_66:
          sub_55ECB0(40);
          break;
        case 0xA:
          break;
        default:
          goto LABEL_74;
      }
      sub_55ECB0(44);
      for ( kk = 0; ; ++kk )
      {
        v1 = sub_559380((_WORD *)this);
        if ( kk >= v1 )
          break;
        v3 = sub_641280(*(_WORD *)(this + 2 * kk + 4));
        if ( sub_559D60((_WORD *)this, v3) > 1 || sub_5593D0(*(_WORD *)(this + 2 * kk + 4)) == 20 )
        {
          *(_BYTE *)(v17 + this + 20) = kk;
          ++v17;
        }
      }
    }
  }
  else if ( (unsigned __int8)sub_55E640(4, 10, 11) )
  {
    LOBYTE(v1) = sub_55ECB0(2);
  }
  else if ( *(int *)(this + 16) <= -1 )
  {
LABEL_15:
    if ( (unsigned __int8)sub_55E640(4, 1, 11) )
    {
      LOBYTE(v1) = sub_55ECB0(9);
    }
    else if ( (unsigned __int8)sub_55E640(3, 10, 11) )
    {
      LOBYTE(v1) = sub_55ECB0(5);
    }
    else
    {
      if ( (unsigned __int8)sub_55E640(3, 1, 11) )
      {
        if ( (unsigned __int8)sub_55ECF0(this) )
        {
          LOBYTE(v1) = sub_55ECB0(13);
          return v1;
        }
        sub_55EC70(this);
      }
      if ( (unsigned __int8)sub_55E8E0(this) )
      {
        LOBYTE(v1) = sub_55ECB0(35);
      }
      else if ( (unsigned __int8)sub_55EBA0(this) )
      {
        LOBYTE(v1) = sub_55ECB0(46);
      }
      else
      {
        if ( (unsigned __int8)sub_55E640(3, 1, 11) )
        {
          if ( !(unsigned __int8)sub_55EE60(*(char *)(this + 20), *(char *)(this + 22)) )
          {
            LOBYTE(v1) = sub_55ECB0(14);
            return v1;
          }
          sub_55EC70(this);
        }
        if ( (unsigned __int8)sub_55E980(4, 1, 11) )
        {
          if ( (unsigned __int8)sub_55ECF0(this) )
          {
            LOBYTE(v1) = sub_55ECB0(24);
            return v1;
          }
          sub_55EC70(this);
        }
        if ( (unsigned __int8)sub_55E640(3, 1, 11) )
        {
          LOBYTE(v1) = sub_55ECB0(15);
        }
        else if ( (unsigned __int8)sub_55E640(2, 10, 11) )
        {
          LOBYTE(v1) = sub_55ECB0(7);
        }
        else if ( (unsigned __int8)sub_55E980(4, 1, 11) )
        {
          LOBYTE(v1) = sub_55ECB0(25);
        }
        else
        {
          if ( (unsigned __int8)sub_55E640(2, 1, 11) )
          {
            if ( (unsigned __int8)sub_55ECF0(this) )
            {
              LOBYTE(v1) = sub_55ECB0(18);
              return v1;
            }
            sub_55EC70(this);
          }
          for ( mm = 1; ; ++mm )
          {
            if ( mm > 4 )
            {
              LOBYTE(v1) = sub_55EC70(this);
              return v1;
            }
            if ( (unsigned __int8)sub_55E3E0(mm, 3) )
              break;
          }
          sub_55ECB0(38);
          for ( nn = 0; ; ++nn )
          {
            v1 = sub_559380((_WORD *)this);
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
        sub_55ECB0(19);
        goto LABEL_8;
      case 8:
LABEL_8:
        sub_55ECB0(39);
        break;
      case 9:
        break;
      default:
        goto LABEL_15;
    }
    sub_55ECB0(42);
    for ( i1 = 0; ; ++i1 )
    {
      v1 = sub_559380((_WORD *)this);
      if ( i1 >= v1 )
        break;
      v2 = sub_641280(*(_WORD *)(this + 2 * i1 + 4));
      if ( sub_559D60((_WORD *)this, v2) > 1 )
      {
        *(_BYTE *)(v17 + this + 20) = i1;
        ++v17;
      }
    }
  }
  return v1;
}


//======================================================================
// sub_55BBB0
// entry 0055bbb0  size 2526  status ok
//======================================================================

int __thiscall sub_55BBB0(int this)
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
  sub_55EC70(this);
  if ( sub_559D00((_WORD *)this) )
  {
    if ( (unsigned __int8)sub_55E640(3, 10, 11) )
    {
      for ( i = 0; i < sub_559380((_WORD *)this); ++i )
      {
        if ( sub_5593D0(*(_WORD *)(this + 2 * i + 4)) == 20 )
        {
          *(_BYTE *)(this + 23) = i;
          return sub_55ECB0(4);
        }
      }
      return sub_55ECB0(4);
    }
    else if ( *(int *)(this + 16) <= -1 )
    {
LABEL_77:
      if ( (unsigned __int8)sub_55E640(3, 1, 11) )
      {
        for ( j = 0; j < sub_559380((_WORD *)this); ++j )
        {
          if ( sub_5593D0(*(_WORD *)(this + 2 * j + 4)) == 20 )
          {
            sub_55ECB0(10);
            *(_BYTE *)(this + 23) = j;
            return this;
          }
        }
        sub_55EC70(this);
      }
      for ( k = 1; k <= 4; ++k )
      {
        if ( (unsigned __int8)sub_55E3E0(k, 3)
          && ((unsigned __int8)sub_55E350(k, 13) || (unsigned __int8)sub_55E350(k, 14)) )
        {
          sub_55ECB0(37);
          for ( m = 0; ; ++m )
          {
            result = sub_559380((_WORD *)this);
            if ( m >= result )
              break;
            if ( sub_641290(*(_WORD *)(this + 2 * m + 4)) == k || sub_5593D0(*(_WORD *)(this + 2 * m + 4)) == 20 )
            {
              *(_BYTE *)(v22 + this + 20) = m;
              ++v22;
            }
          }
          return result;
        }
      }
      if ( (unsigned __int8)sub_55E640(2, 10, 11) )
      {
        for ( n = 0; n < sub_559380((_WORD *)this); ++n )
        {
          if ( sub_5593D0(*(_WORD *)(this + 2 * n + 4)) == 20 )
          {
            sub_55ECB0(6);
            *(_BYTE *)(this + 22) = n;
            return this;
          }
        }
      }
      if ( (unsigned __int8)sub_55E640(2, 1, 11) )
      {
        for ( ii = 0; ii < sub_559380((_WORD *)this); ++ii )
        {
          if ( sub_5593D0(*(_WORD *)(this + 2 * ii + 4)) == 20 )
          {
            result = sub_55ECB0(17);
            *(_BYTE *)(this + 22) = ii;
            return result;
          }
        }
      }
      if ( (unsigned __int8)sub_55E2E0(14) )
      {
        sub_55ECB0(44);
        for ( jj = 0; ; ++jj )
        {
          result = sub_559380((_WORD *)this);
          if ( jj >= result )
            break;
          if ( sub_641280(*(_WORD *)(this + 2 * jj + 4)) == 14 || sub_5593D0(*(_WORD *)(this + 2 * jj + 4)) == 20 )
          {
            *(_BYTE *)(v22 + this + 20) = jj;
            ++v22;
          }
        }
      }
      else if ( (unsigned __int8)sub_55E2E0(13) )
      {
        for ( kk = 0; kk < sub_559380((_WORD *)this); ++kk )
        {
          if ( sub_641280(*(_WORD *)(this + 2 * kk + 4)) == 13 || sub_5593D0(*(_WORD *)(this + 2 * kk + 4)) == 20 )
          {
            *(_BYTE *)(v22 + this + 20) = kk;
            ++v22;
          }
        }
        return sub_55ECB0(44);
      }
      else
      {
        if ( (unsigned __int8)sub_55E980(3, 1, 11) )
        {
          for ( mm = 0; mm < sub_559380((_WORD *)this); ++mm )
          {
            if ( sub_5593D0(*(_WORD *)(this + 2 * mm + 4)) == 20 )
            {
              *(_BYTE *)(this + 23) = mm;
              return sub_55ECB0(34);
            }
          }
        }
        for ( nn = 1; nn <= 4; ++nn )
        {
          if ( (unsigned __int8)sub_55E3E0(nn, 3) )
          {
            for ( i1 = 0; i1 < sub_559380((_WORD *)this); ++i1 )
            {
              if ( sub_641290(*(_WORD *)(this + 2 * i1 + 4)) == nn || sub_5593D0(*(_WORD *)(this + 2 * i1 + 4)) == 20 )
              {
                *(_BYTE *)(v22 + this + 20) = i1;
                ++v22;
              }
            }
            return sub_55ECB0(36);
          }
        }
        for ( i2 = 0; i2 < sub_559380((_WORD *)this); ++i2 )
        {
          if ( sub_5593D0(*(_WORD *)(this + 2 * i2 + 4)) == 20 )
          {
            *(_BYTE *)(v22 + this + 20) = i2;
            ++v22;
          }
        }
        return sub_55ECB0(49);
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
          sub_55ECB0(1);
          return sub_55EC30(this);
        case 4:
          sub_55ECB0(20);
          for ( i3 = 0; ; ++i3 )
          {
            result = sub_559380((_WORD *)this);
            if ( i3 >= result )
              break;
            if ( sub_5593D0(*(_WORD *)(this + 2 * i3 + 4)) != 20 )
            {
              v3 = sub_641280(*(_WORD *)(this + 2 * i3 + 4));
              if ( sub_559D60((_WORD *)this, v3) <= 1 )
                continue;
            }
            *(_BYTE *)(v22 + this + 20) = i3;
            ++v22;
          }
          return result;
        case 8:
          if ( !(unsigned __int8)sub_55E640(3, 1, 11) )
            goto LABEL_70;
          v11 = 0;
          break;
        default:
          goto LABEL_77;
      }
      while ( v11 < sub_559380((_WORD *)this) )
      {
        if ( sub_5593D0(*(_WORD *)(this + 2 * v11 + 4)) == 20 )
        {
          result = sub_55ECB0(10);
          *(_BYTE *)(this + 23) = v11;
          return result;
        }
        ++v11;
      }
      sub_55EC70(this);
LABEL_70:
      sub_55ECB0(40);
      for ( i4 = 0; ; ++i4 )
      {
        result = sub_559380((_WORD *)this);
        if ( i4 >= result )
          break;
        if ( sub_5593D0(*(_WORD *)(this + 2 * i4 + 4)) != 20 )
        {
          v4 = sub_641280(*(_WORD *)(this + 2 * i4 + 4));
          if ( sub_559D60((_WORD *)this, v4) <= 1 )
            continue;
        }
        *(_BYTE *)(v22 + this + 20) = i4;
        ++v22;
      }
    }
  }
  else
  {
    if ( (unsigned __int8)sub_55E640(4, 10, 11) )
      return sub_55ECB0(2);
    if ( *(int *)(this + 16) <= -1 )
    {
LABEL_16:
      if ( (unsigned __int8)sub_55E640(4, 1, 11) )
        return sub_55ECB0(9);
      if ( (unsigned __int8)sub_55E640(3, 10, 11) )
        return sub_55ECB0(5);
      if ( (unsigned __int8)sub_55E8E0(this) )
        return sub_55ECB0(35);
      if ( (unsigned __int8)sub_55EBA0(this) )
        return sub_55ECB0(46);
      if ( (unsigned __int8)sub_55E640(3, 1, 11) )
      {
        if ( (unsigned __int8)sub_55ECF0(this) )
          return sub_55ECB0(13);
        sub_55EC70(this);
      }
      if ( (unsigned __int8)sub_55E980(4, 1, 11) )
      {
        if ( (unsigned __int8)sub_55ECF0(this) )
          return sub_55ECB0(23);
        sub_55EC70(this);
      }
      if ( (unsigned __int8)sub_55E640(3, 1, 11) )
      {
        if ( !(unsigned __int8)sub_55EE60(*(char *)(this + 20), *(char *)(this + 22)) )
          return sub_55ECB0(14);
        sub_55EC70(this);
      }
      if ( (unsigned __int8)sub_55E640(2, 10, 11) )
      {
        return sub_55ECB0(7);
      }
      else
      {
        if ( sub_641280(*(_WORD *)(this + 12)) == 14 )
        {
          if ( sub_641280(*(_WORD *)(this + 10)) == 13 )
          {
            sub_55ECB0(50);
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
          return sub_55ECB0(51);
        else
          return sub_55EC70(this);
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
          sub_55ECB0(19);
          goto LABEL_8;
        case 8:
LABEL_8:
          sub_55ECB0(39);
          goto LABEL_9;
        case 9:
LABEL_9:
          sub_55ECB0(42);
          break;
        case 0xA:
          break;
        default:
          goto LABEL_16;
      }
      sub_55ECB0(43);
      for ( i5 = 0; ; ++i5 )
      {
        result = sub_559380((_WORD *)this);
        if ( i5 >= result )
          break;
        v2 = sub_641280(*(_WORD *)(this + 2 * i5 + 4));
        if ( sub_559D60((_WORD *)this, v2) > 1 )
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
// sub_55C5D0
// entry 0055c5d0  size 3233  status ok
//======================================================================

int __thiscall sub_55C5D0(int this)
{
  int result; // eax
  int v2; // eax
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int i12; // [esp+Ch] [ebp-8h]
  int i9; // [esp+Ch] [ebp-8h]
  int i10; // [esp+Ch] [ebp-8h]
  int v10; // [esp+Ch] [ebp-8h]
  int i11; // [esp+Ch] [ebp-8h]
  int nn; // [esp+Ch] [ebp-8h]
  int i1; // [esp+Ch] [ebp-8h]
  int i2; // [esp+Ch] [ebp-8h]
  int i3; // [esp+Ch] [ebp-8h]
  int i4; // [esp+Ch] [ebp-8h]
  int i5; // [esp+Ch] [ebp-8h]
  int i6; // [esp+Ch] [ebp-8h]
  int i7; // [esp+Ch] [ebp-8h]
  int i8; // [esp+Ch] [ebp-8h]
  int i; // [esp+Ch] [ebp-8h]
  int j; // [esp+Ch] [ebp-8h]
  int k; // [esp+Ch] [ebp-8h]
  int m; // [esp+Ch] [ebp-8h]
  int n; // [esp+Ch] [ebp-8h]
  int ii; // [esp+Ch] [ebp-8h]
  int jj; // [esp+Ch] [ebp-8h]
  int kk; // [esp+Ch] [ebp-8h]
  int mm; // [esp+Ch] [ebp-8h]
  int v30; // [esp+10h] [ebp-4h]

  v30 = 0;
  sub_55EC70(this);
  if ( sub_559D00((_WORD *)this) )
  {
    if ( *(int *)(this + 16) <= -1 )
    {
LABEL_137:
      if ( sub_559920((_WORD *)this) && sub_559D00((_WORD *)this) == 3 )
      {
        for ( i = 0; ; ++i )
        {
          result = sub_559380((_WORD *)this);
          if ( i >= result )
            break;
          if ( sub_641280(*(_WORD *)(this + 2 * i + 4)) == 2 )
          {
            *(_BYTE *)(v30 + this + 20) = i;
            ++v30;
          }
        }
      }
      else if ( sub_559920((_WORD *)this) && sub_559D00((_WORD *)this) >= 1 )
      {
        for ( j = 0; ; ++j )
        {
          result = sub_559380((_WORD *)this);
          if ( j >= result )
            break;
          v5 = sub_641280(*(_WORD *)(this + 2 * j + 4));
          if ( sub_559D60((_WORD *)this, v5) > 1 || sub_641280(*(_WORD *)(this + 2 * j + 4)) == 2 )
          {
            *(_BYTE *)(v30 + this + 20) = j;
            ++v30;
          }
        }
      }
      else if ( sub_559D00((_WORD *)this) == 2 && (unsigned __int8)sub_55E640(2, 10, 11)
             || sub_559D00((_WORD *)this) == 1 && (unsigned __int8)sub_55E640(3, 10, 11) )
      {
        for ( k = 0; k < 5; ++k )
        {
          if ( *(char *)(k + this + 20) == -1 )
          {
            v30 = k;
            break;
          }
        }
        for ( m = 0; m < sub_559380((_WORD *)this); ++m )
        {
          if ( sub_641280(*(_WORD *)(this + 2 * m + 4)) == 2 )
          {
            *(_BYTE *)(v30 + this + 20) = m;
            ++v30;
          }
        }
        return sub_55ECB0(3);
      }
      else
      {
        sub_55EC70(this);
        if ( sub_559D00((_WORD *)this) == 2 && (unsigned __int8)sub_55E640(2, 1, 11)
          || sub_559D00((_WORD *)this) == 1 && (unsigned __int8)sub_55E640(3, 1, 11) )
        {
          sub_55ECB0(11);
          for ( n = 0; n < 5; ++n )
          {
            if ( *(char *)(n + this + 20) == -1 )
            {
              v30 = n;
              break;
            }
          }
          for ( ii = 0; ; ++ii )
          {
            result = sub_559380((_WORD *)this);
            if ( ii >= result )
              break;
            if ( sub_641280(*(_WORD *)(this + 2 * ii + 4)) == 2 )
            {
              *(_BYTE *)(v30 + this + 20) = ii;
              ++v30;
            }
          }
        }
        else
        {
          sub_55EC70(this);
          if ( sub_559C00((void *)this) && sub_559D00((_WORD *)this) == 2 )
          {
            sub_55ECB0(47);
            for ( jj = 0; ; ++jj )
            {
              result = sub_559380((_WORD *)this);
              if ( jj >= result )
                break;
              if ( sub_641280(*(_WORD *)(this + 2 * jj + 4)) == 2 )
              {
                *(_BYTE *)(v30 + this + 20) = jj;
                ++v30;
              }
            }
          }
          else if ( sub_559D00((_WORD *)this) == 1 && (unsigned __int8)sub_55E640(2, 10, 11) )
          {
            for ( kk = 0; kk < sub_559380((_WORD *)this); ++kk )
            {
              if ( sub_641280(*(_WORD *)(this + 2 * kk + 4)) == 2 )
              {
                *(_BYTE *)(this + 22) = kk;
                return sub_55ECB0(6);
              }
            }
            return sub_55ECB0(6);
          }
          else
          {
            for ( mm = 0; mm < sub_559380((_WORD *)this); ++mm )
            {
              if ( sub_641280(*(_WORD *)(this + 2 * mm + 4)) == 2 )
              {
                *(_BYTE *)(v30 + this + 20) = mm;
                ++v30;
              }
            }
            if ( v30 <= 0 )
              return sub_55EC70(this);
            else
              return sub_55ECB0(49);
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
          goto LABEL_41;
        case 5:
          if ( sub_559D00((_WORD *)this) != 3 )
          {
            sub_55ECB0(21);
            for ( nn = 0; ; ++nn )
            {
              if ( nn >= 5 )
                goto LABEL_80;
              if ( *(char *)(nn + this + 20) == -1 )
                break;
            }
            v30 = nn;
LABEL_80:
            for ( i1 = 0; ; ++i1 )
            {
              result = sub_559380((_WORD *)this);
              if ( i1 >= result )
                break;
              v3 = sub_641280(*(_WORD *)(this + 2 * i1 + 4));
              if ( sub_559D60((_WORD *)this, v3) > 1 || sub_641280(*(_WORD *)(this + 2 * i1 + 4)) == 2 )
              {
                *(_BYTE *)(v30 + this + 20) = i1;
                ++v30;
              }
            }
            return result;
          }
          sub_55ECB0(41);
LABEL_87:
          if ( sub_559D00((_WORD *)this) == 2 && (unsigned __int8)sub_55E640(2, 10, 11)
            || sub_559D00((_WORD *)this) == 1 && (unsigned __int8)sub_55E640(3, 10, 11) )
          {
            sub_55ECB0(3);
            for ( i2 = 0; ; ++i2 )
            {
              if ( i2 >= 5 )
                goto LABEL_96;
              if ( *(char *)(i2 + this + 20) == -1 )
                break;
            }
            v30 = i2;
LABEL_96:
            for ( i3 = 0; ; ++i3 )
            {
              result = sub_559380((_WORD *)this);
              if ( i3 >= result )
                break;
              if ( sub_641280(*(_WORD *)(this + 2 * i3 + 4)) == 2 )
              {
                *(_BYTE *)(v30 + this + 20) = i3;
                ++v30;
              }
            }
            return result;
          }
          for ( i4 = 0; i4 < 5; ++i4 )
            *(_BYTE *)(i4 + this + 20) = -1;
          if ( sub_559D00((_WORD *)this) == 2 && (unsigned __int8)sub_55E640(2, 1, 11)
            || sub_559D00((_WORD *)this) == 1 && (unsigned __int8)sub_55E640(3, 1, 11) )
          {
            if ( *(_BYTE *)(this + 25) == 21 )
              goto LABEL_137;
            sub_55ECB0(11);
            for ( i5 = 0; ; ++i5 )
            {
              if ( i5 >= 5 )
                goto LABEL_115;
              if ( *(char *)(i5 + this + 20) == -1 )
                break;
            }
            v30 = i5;
LABEL_115:
            for ( i6 = 0; ; ++i6 )
            {
              result = sub_559380((_WORD *)this);
              if ( i6 >= result )
                break;
              if ( sub_641280(*(_WORD *)(this + 2 * i6 + 4)) == 2 )
              {
                *(_BYTE *)(v30 + this + 20) = i6;
                ++v30;
              }
            }
            return result;
          }
          for ( i7 = 0; i7 < 5; ++i7 )
            *(_BYTE *)(i7 + this + 20) = -1;
          if ( *(_BYTE *)(this + 25) == 41 || *(_BYTE *)(this + 25) == 21 )
            goto LABEL_137;
          if ( *(_DWORD *)(this + 16) == 9 && sub_559D00((_WORD *)this) > 1 )
          {
            sub_55ECB0(47);
            goto LABEL_137;
          }
          sub_55ECB0(40);
          for ( i8 = 0; ; ++i8 )
          {
            result = sub_559380((_WORD *)this);
            if ( i8 >= result )
              break;
            v4 = sub_641280(*(_WORD *)(this + 2 * i8 + 4));
            if ( sub_559D60((_WORD *)this, v4) > 1 || sub_641280(*(_WORD *)(this + 2 * i8 + 4)) == 2 )
            {
              *(_BYTE *)(v30 + this + 20) = i8;
              ++v30;
            }
          }
          return result;
        case 7:
        case 8:
          if ( sub_559D00((_WORD *)this) == 2 && (unsigned __int8)sub_55E640(2, 10, 11)
            || sub_559D00((_WORD *)this) == 1 && (unsigned __int8)sub_55E640(3, 10, 11) )
          {
            for ( i9 = 0; ; ++i9 )
            {
              if ( i9 >= 5 )
                goto LABEL_51;
              if ( *(char *)(i9 + this + 20) == -1 )
                break;
            }
            v30 = i9;
LABEL_51:
            for ( i10 = 0; i10 < sub_559380((_WORD *)this); ++i10 )
            {
              if ( sub_641280(*(_WORD *)(this + 2 * i10 + 4)) == 2 )
              {
                *(_BYTE *)(v30 + this + 20) = i10;
                ++v30;
              }
            }
            return sub_55ECB0(3);
          }
          sub_55EC70(this);
          if ( (sub_559D00((_WORD *)this) != 2 || !(unsigned __int8)sub_55E640(2, 1, 11))
            && (sub_559D00((_WORD *)this) != 1 || !(unsigned __int8)sub_55E640(3, 1, 11)) )
          {
            sub_55EC70(this);
            sub_55ECB0(1);
            return sub_55EC30(this);
          }
          sub_55ECB0(11);
          v10 = 0;
          break;
        case 9:
          goto LABEL_87;
        default:
          goto LABEL_137;
      }
      while ( v10 < 5 )
      {
        if ( *(char *)(v10 + this + 20) == -1 )
        {
          v30 = v10;
          break;
        }
        ++v10;
      }
      for ( i11 = 0; ; ++i11 )
      {
        result = sub_559380((_WORD *)this);
        if ( i11 >= result )
          break;
        if ( sub_641280(*(_WORD *)(this + 2 * i11 + 4)) == 2 )
        {
          *(_BYTE *)(v30 + this + 20) = i11;
          ++v30;
        }
      }
    }
  }
  else if ( *(_DWORD *)(this + 16) )
  {
    if ( (unsigned __int8)sub_55E640(4, 10, 11) )
      return sub_55ECB0(2);
    if ( *(int *)(this + 16) <= -1 )
    {
LABEL_14:
      if ( (unsigned __int8)sub_55E640(4, 1, 11) )
        return sub_55ECB0(9);
      if ( (unsigned __int8)sub_55E640(3, 10, 11) )
        return sub_55ECB0(5);
      if ( (unsigned __int8)sub_55E640(3, 1, 11) )
      {
        if ( (unsigned __int8)sub_55ECF0(this) )
          return sub_55ECB0(13);
        sub_55EC70(this);
      }
      if ( (unsigned __int8)sub_55E8E0(this) )
        return sub_55ECB0(35);
      if ( (unsigned __int8)sub_55EBA0(this) )
        return sub_55ECB0(46);
      if ( (unsigned __int8)sub_55E980(4, 1, 11) )
      {
        if ( (unsigned __int8)sub_55ECF0(this) )
          return sub_55ECB0(24);
        sub_55EC70(this);
      }
      if ( (unsigned __int8)sub_55E640(2, 10, 11) )
      {
        if ( sub_641280(*(_WORD *)(this + 2 * *(char *)(this + 21) + 4)) != 14 )
          return sub_55ECB0(8);
        sub_55EC70(this);
      }
      result = (unsigned __int8)sub_55E640(3, 1, 11);
      if ( (_BYTE)result )
      {
        if ( (unsigned __int8)sub_55EE60(*(char *)(this + 20), *(char *)(this + 22)) )
          return sub_55EC70(this);
        else
          return sub_55ECB0(14);
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
          goto LABEL_41;
        case 5:
          sub_55ECB0(19);
          break;
        case 9:
          break;
        default:
          goto LABEL_14;
      }
      sub_55ECB0(39);
      for ( i12 = 0; ; ++i12 )
      {
        result = sub_559380((_WORD *)this);
        if ( i12 >= result )
          break;
        v2 = sub_641280(*(_WORD *)(this + 2 * i12 + 4));
        if ( sub_559D60((_WORD *)this, v2) > 1 )
        {
          *(_BYTE *)(v30 + this + 20) = i12;
          ++v30;
        }
      }
    }
  }
  else
  {
LABEL_41:
    sub_55ECB0(1);
    return sub_55EC30(this);
  }
  return result;
}


//======================================================================
// sub_55D2B0
// entry 0055d2b0  size 1051  status ok
//======================================================================

int __thiscall sub_55D2B0(int this)
{
  int result; // eax
  int v2; // eax
  int j; // [esp+8h] [ebp-8h]
  int i; // [esp+8h] [ebp-8h]
  int v6; // [esp+Ch] [ebp-4h]

  v6 = 0;
  sub_55EC70(this);
  if ( (unsigned __int8)sub_55E640(4, 10, 11) )
    return sub_55ECB0(2);
  if ( *(int *)(this + 16) <= -1 )
  {
LABEL_14:
    if ( (unsigned __int8)sub_55E640(4, 1, 11) )
      return sub_55ECB0(9);
    if ( (unsigned __int8)sub_55E640(3, 10, 11) )
      return sub_55ECB0(5);
    if ( (unsigned __int8)sub_55E8E0(this) )
      return sub_55ECB0(35);
    if ( (unsigned __int8)sub_55E980(4, 7, 11) )
    {
      if ( (unsigned __int8)sub_55ECF0(this)
        && sub_5593D0(*(_WORD *)(this + 2 * *(char *)(this + 23) + 4)) >= 11
        && sub_5593D0(*(_WORD *)(this + 2 * *(char *)(this + 23) + 4)) < 14 )
      {
        return sub_55ECB0(26);
      }
      sub_55EC70(this);
    }
    if ( (unsigned __int8)sub_55EBA0(this) )
      return sub_55ECB0(45);
    if ( (unsigned __int8)sub_55E640(3, 6, 11) )
    {
      if ( !(unsigned __int8)sub_55EE60(*(char *)(this + 20), *(char *)(this + 22))
        && (sub_641280(*(_WORD *)(this + 2 * *(char *)(this + 22) + 4)) == 10
         || sub_641280(*(_WORD *)(this + 2 * *(char *)(this + 22) + 4)) == 11) )
      {
        return sub_55ECB0(16);
      }
      sub_55EC70(this);
    }
    if ( (unsigned __int8)sub_55E980(4, 1, 11) )
    {
      if ( (unsigned __int8)sub_55ECF0(this) )
        return sub_55ECB0(24);
      sub_55EC70(this);
    }
    if ( (unsigned __int8)sub_55E640(2, 10, 11) )
    {
      if ( (int)sub_641280(*(_WORD *)(this + 2 * *(char *)(this + 21) + 4)) >= 11
        && (int)sub_641280(*(_WORD *)(this + 2 * *(char *)(this + 21) + 4)) <= 13 )
      {
        return sub_55ECB0(8);
      }
      sub_55EC70(this);
    }
    if ( (unsigned __int8)sub_55E980(4, 10, 11) )
    {
      if ( sub_641280(*(_WORD *)(this + 2 * *(char *)(this + 23) + 4)) == 14 )
        return sub_55ECB0(27);
      sub_55EC70(this);
    }
    if ( (unsigned __int8)sub_55E640(3, 1, 11) )
    {
      if ( !(unsigned __int8)sub_55EE60(*(char *)(this + 20), *(char *)(this + 22)) )
        return sub_55ECB0(12);
      sub_55EC70(this);
    }
    for ( i = 0; i < sub_559380((_WORD *)this); ++i )
    {
      if ( sub_5593D0(*(_WORD *)(this + 2 * i + 4)) >= 10 )
      {
        *(_BYTE *)(v6 + this + 20) = i;
        ++v6;
      }
    }
    if ( v6 && v6 < 4 )
      return sub_55ECB0(52);
    else
      return sub_55EC70(this);
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
        sub_55ECB0(1);
        return sub_55EC30(this);
      case 6:
        sub_55ECB0(39);
        goto LABEL_7;
      case 7:
LABEL_7:
        sub_55ECB0(42);
        break;
      case 8:
        break;
      default:
        goto LABEL_14;
    }
    sub_55ECB0(43);
    for ( j = 0; ; ++j )
    {
      result = sub_559380((_WORD *)this);
      if ( j >= result )
        break;
      v2 = sub_641280(*(_WORD *)(this + 2 * j + 4));
      if ( sub_559D60((_WORD *)this, v2) > 1 )
      {
        *(_BYTE *)(v6 + this + 20) = j;
        ++v6;
      }
    }
  }
  return result;
}


//======================================================================
// sub_55D6F0
// entry 0055d6f0  size 991  status ok
//======================================================================

int __thiscall sub_55D6F0(int this)
{
  int result; // eax
  int v2; // eax
  int j; // [esp+8h] [ebp-8h]
  int i; // [esp+8h] [ebp-8h]
  int v6; // [esp+Ch] [ebp-4h]

  v6 = 0;
  sub_55EC70(this);
  if ( *(_DWORD *)(this + 16) <= 1u )
  {
LABEL_2:
    sub_55ECB0(1);
    return sub_55EC30(this);
  }
  if ( (unsigned __int8)sub_55E640(4, 10, 11) )
    return sub_55ECB0(2);
  if ( (unsigned __int8)sub_55E640(4, 1, 11) )
    return sub_55ECB0(9);
  if ( *(int *)(this + 16) <= -1 )
  {
LABEL_17:
    if ( (unsigned __int8)sub_55E640(3, 10, 11) )
    {
      if ( !(unsigned __int8)sub_55EE60(*(char *)(this + 20), *(char *)(this + 22)) )
        return sub_55ECB0(5);
      sub_55EC70(this);
    }
    if ( (unsigned __int8)sub_55E8E0(this) )
      return sub_55ECB0(35);
    if ( (unsigned __int8)sub_55E980(4, 1, 11) )
    {
      if ( (unsigned __int8)sub_55ECF0(this) && (int)sub_641280(*(_WORD *)(this + 2 * *(char *)(this + 21) + 4)) > 10 )
        return sub_55ECB0(32);
      sub_55EC70(this);
    }
    if ( (unsigned __int8)sub_55EBA0(this) )
      return sub_55ECB0(45);
    if ( (unsigned __int8)sub_55E980(4, 1, 11) )
    {
      if ( (unsigned __int8)sub_55ECF0(this) && (int)sub_641280(*(_WORD *)(this + 2 * *(char *)(this + 21) + 4)) < 11 )
        return sub_55ECB0(31);
      sub_55EC70(this);
    }
    if ( (unsigned __int8)sub_55E640(3, 1, 11) )
    {
      if ( (unsigned __int8)sub_55ECF0(this) )
        return sub_55ECB0(13);
      sub_55EC70(this);
    }
    if ( (unsigned __int8)sub_55E640(2, 10, 11) )
      return sub_55ECB0(7);
    if ( (unsigned __int8)sub_55E640(3, 1, 11) )
    {
      if ( !(unsigned __int8)sub_55EE60(*(char *)(this + 20), *(char *)(this + 22)) )
        return sub_55ECB0(14);
      sub_55EC70(this);
    }
    if ( (unsigned __int8)sub_55E980(4, 1, 11) )
    {
      if ( (int)sub_641280(*(_WORD *)(this + 2 * *(char *)(this + 21) + 4)) > 10 )
        return sub_55ECB0(33);
      sub_55EC70(this);
    }
    for ( i = 0; i < sub_559380((_WORD *)this); ++i )
    {
      if ( sub_5593D0(*(_WORD *)(this + 2 * i + 4)) > 10 )
      {
        *(_BYTE *)(v6 + this + 20) = i;
        ++v6;
      }
    }
    if ( v6 && v6 < 4 )
      return sub_55ECB0(52);
    else
      return sub_55EC70(this);
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
        goto LABEL_2;
      case 6:
        sub_55ECB0(39);
        goto LABEL_10;
      case 7:
LABEL_10:
        sub_55ECB0(42);
        break;
      case 8:
        break;
      default:
        goto LABEL_17;
    }
    sub_55ECB0(43);
    for ( j = 0; ; ++j )
    {
      result = sub_559380((_WORD *)this);
      if ( j >= result )
        break;
      v2 = sub_641280(*(_WORD *)(this + 2 * j + 4));
      if ( sub_559D60((_WORD *)this, v2) > 1 )
      {
        *(_BYTE *)(v6 + this + 20) = j;
        ++v6;
      }
    }
  }
  return result;
}


//======================================================================
// sub_55DB00
// entry 0055db00  size 944  status ok
//======================================================================

int __thiscall sub_55DB00(int this)
{
  int result; // eax
  int v2; // eax
  int j; // [esp+8h] [ebp-8h]
  int i; // [esp+8h] [ebp-8h]
  int v6; // [esp+Ch] [ebp-4h]

  v6 = 0;
  sub_55EC70(this);
  if ( (unsigned __int8)sub_55E640(4, 10, 11) )
    return sub_55ECB0(2);
  if ( *(int *)(this + 16) <= -1 )
  {
LABEL_14:
    if ( (unsigned __int8)sub_55E640(4, 1, 11) )
      return sub_55ECB0(9);
    if ( (unsigned __int8)sub_55E640(3, 10, 11) )
      return sub_55ECB0(5);
    if ( (unsigned __int8)sub_55E8E0(this) )
      return sub_55ECB0(35);
    if ( (unsigned __int8)sub_55E980(4, 1, 11) )
    {
      if ( (unsigned __int8)sub_55ECF0(this)
        && ((int)sub_641280(*(_WORD *)(this + 2 * *(char *)(this + 21) + 4)) > 10
         || (int)sub_641280(*(_WORD *)(this + 2 * *(char *)(this + 22) + 4)) > 10) )
      {
        return sub_55ECB0(28);
      }
      sub_55EC70(this);
    }
    if ( (unsigned __int8)sub_55EBA0(this) )
      return sub_55ECB0(45);
    if ( (unsigned __int8)sub_55E980(4, 1, 11) )
    {
      if ( (unsigned __int8)sub_55ECF0(this) && (int)sub_641280(*(_WORD *)(this + 2 * *(char *)(this + 22) + 4)) < 11 )
        return sub_55ECB0(29);
      sub_55EC70(this);
    }
    if ( (unsigned __int8)sub_55E640(3, 1, 11) )
    {
      if ( !(unsigned __int8)sub_55EE60(*(char *)(this + 20), *(char *)(this + 22)) )
        return sub_55ECB0(12);
      sub_55EC70(this);
    }
    if ( (unsigned __int8)sub_55E980(4, 1, 11) )
    {
      if ( sub_641280(*(_WORD *)(this + 2 * *(char *)(this + 23) + 4)) == 14 )
        return sub_55ECB0(30);
      sub_55EC70(this);
    }
    if ( (unsigned __int8)sub_55E640(2, 10, 11) )
      return sub_55ECB0(7);
    if ( (unsigned __int8)sub_55E980(4, 1, 11) )
    {
      if ( (int)sub_641280(*(_WORD *)(this + 2 * *(char *)(this + 21) + 4)) > 10 )
        return sub_55ECB0(33);
      sub_55EC70(this);
    }
    for ( i = 0; ; ++i )
    {
      result = sub_559380((_WORD *)this);
      if ( i >= result )
        break;
      if ( sub_5593D0(*(_WORD *)(this + 2 * i + 4)) > 10 )
      {
        *(_BYTE *)(v6 + this + 20) = i;
        ++v6;
      }
    }
    if ( v6 && v6 < 4 )
      return sub_55ECB0(52);
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
        sub_55ECB0(1);
        return sub_55EC30(this);
      case 6:
        sub_55ECB0(39);
        goto LABEL_7;
      case 7:
LABEL_7:
        sub_55ECB0(42);
        break;
      case 8:
        break;
      default:
        goto LABEL_14;
    }
    sub_55ECB0(43);
    for ( j = 0; ; ++j )
    {
      result = sub_559380((_WORD *)this);
      if ( j >= result )
        break;
      v2 = sub_641280(*(_WORD *)(this + 2 * j + 4));
      if ( sub_559D60((_WORD *)this, v2) > 1 )
      {
        *(_BYTE *)(v6 + this + 20) = j;
        ++v6;
      }
    }
  }
  return result;
}


//======================================================================
// sub_55DEE0
// entry 0055dee0  size 989  status ok
//======================================================================

int __thiscall sub_55DEE0(int this)
{
  int result; // eax
  int v2; // eax
  int j; // [esp+8h] [ebp-8h]
  int i; // [esp+8h] [ebp-8h]
  int v6; // [esp+Ch] [ebp-4h]

  v6 = 0;
  sub_55EC70(this);
  if ( (unsigned __int8)sub_55E640(4, 10, 11) )
    return sub_55ECB0(2);
  if ( *(int *)(this + 16) <= -1 )
  {
LABEL_14:
    if ( (unsigned __int8)sub_55E640(4, 1, 11) )
      return sub_55ECB0(9);
    if ( (unsigned __int8)sub_55E640(3, 10, 11) )
      return sub_55ECB0(5);
    if ( (unsigned __int8)sub_55E8E0(this) )
      return sub_55ECB0(35);
    if ( (unsigned __int8)sub_55E980(4, 1, 11) )
    {
      if ( (unsigned __int8)sub_55ECF0(this)
        && ((int)sub_641280(*(_WORD *)(this + 2 * *(char *)(this + 21) + 4)) > 10
         || (int)sub_641280(*(_WORD *)(this + 2 * *(char *)(this + 22) + 4)) > 10) )
      {
        return sub_55ECB0(28);
      }
      sub_55EC70(this);
    }
    if ( (unsigned __int8)sub_55EBA0(this) )
      return sub_55ECB0(45);
    if ( (unsigned __int8)sub_55E980(4, 1, 11) )
    {
      if ( (unsigned __int8)sub_55ECF0(this) && (int)sub_641280(*(_WORD *)(this + 2 * *(char *)(this + 22) + 4)) < 11 )
        return sub_55ECB0(29);
      sub_55EC70(this);
    }
    if ( (unsigned __int8)sub_55E640(3, 1, 11)
      && !(unsigned __int8)sub_55EE60(*(char *)(this + 20), *(char *)(this + 22)) )
    {
      return sub_55ECB0(12);
    }
    if ( (unsigned __int8)sub_55E980(4, 1, 11) )
    {
      if ( sub_641280(*(_WORD *)(this + 2 * *(char *)(this + 23) + 4)) == 14 )
        return sub_55ECB0(30);
      sub_55EC70(this);
    }
    if ( (unsigned __int8)sub_55E640(2, 10, 11) )
      return sub_55ECB0(7);
    if ( (unsigned __int8)sub_55E980(4, 1, 11) )
    {
      if ( (int)sub_641280(*(_WORD *)(this + 2 * *(char *)(this + 21) + 4)) > 10 )
        return sub_55ECB0(33);
      sub_55EC70(this);
    }
    if ( (unsigned __int8)sub_55E640(3, 1, 11) )
    {
      return sub_55ECB0(15);
    }
    else
    {
      for ( i = 0; i < sub_559380((_WORD *)this); ++i )
      {
        if ( sub_5593D0(*(_WORD *)(this + 2 * i + 4)) > 10 )
        {
          *(_BYTE *)(v6 + this + 20) = i;
          ++v6;
        }
      }
      if ( v6 && v6 < 4 )
        return sub_55ECB0(52);
      else
        return sub_55EC70(this);
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
        sub_55ECB0(1);
        return sub_55EC30(this);
      case 8:
        sub_55ECB0(39);
        goto LABEL_7;
      case 9:
LABEL_7:
        sub_55ECB0(42);
        break;
      case 0xA:
        break;
      default:
        goto LABEL_14;
    }
    sub_55ECB0(43);
    for ( j = 0; ; ++j )
    {
      result = sub_559380((_WORD *)this);
      if ( j >= result )
        break;
      v2 = sub_641280(*(_WORD *)(this + 2 * j + 4));
      if ( sub_559D60((_WORD *)this, v2) > 1 )
      {
        *(_BYTE *)(v6 + this + 20) = j;
        ++v6;
      }
    }
  }
  return result;
}


//======================================================================
// sub_55E2E0
// entry 0055e2e0  size 110  status ok
//======================================================================

char __thiscall sub_55E2E0(_WORD *this, int a2)
{
  int i; // eax
  int v5; // [esp+4h] [ebp-4h]

  v5 = 0;
  for ( i = sub_559380(this); v5 < i; i = sub_559380(this) )
  {
    if ( sub_5593D0(*(this + v5 + 2)) == a2 || sub_5593D0(*(this + v5 + 2)) == 14 && a2 == 1 )
      return 1;
    ++v5;
  }
  return 0;
}


//======================================================================
// sub_55E350
// entry 0055e350  size 135  status ok
//======================================================================

char __thiscall sub_55E350(_WORD *this, int a2, int a3)
{
  int i; // eax
  int v6; // [esp+4h] [ebp-4h]

  v6 = 0;
  for ( i = sub_559380(this); v6 < i; i = sub_559380(this) )
  {
    if ( (sub_5593D0(*(this + v6 + 2)) == a3 || sub_5593D0(*(this + v6 + 2)) == 14 && a3 == 1)
      && sub_641290(*(this + v6 + 2)) == a2 )
    {
      return 1;
    }
    ++v6;
  }
  return 0;
}


//======================================================================
// sub_55E3E0
// entry 0055e3e0  size 91  status ok
//======================================================================

BOOL __thiscall sub_55E3E0(_WORD *this, int a2, int a3)
{
  int v5; // [esp+4h] [ebp-8h]
  int i; // [esp+8h] [ebp-4h]

  v5 = 0;
  for ( i = 2; i < 15; ++i )
  {
    if ( sub_55E350(this, a2, i) )
      ++v5;
  }
  return v5 == a3;
}


//======================================================================
// sub_55E440
// entry 0055e440  size 117  status ok
//======================================================================

bool __thiscall sub_55E440(_WORD *this, int a2, int a3)
{
  int v5; // [esp+4h] [ebp-8h]
  int i; // [esp+8h] [ebp-4h]

  v5 = 0;
  if ( a3 >= 11 )
    return 0;
  for ( i = 0; i < 5; ++i )
  {
    if ( sub_55E2E0(this, i + a3) )
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
// sub_55E4C0
// entry 0055e4c0  size 114  status ok
//======================================================================

bool __thiscall sub_55E4C0(_WORD *this, int a2, int a3, int a4)
{
  int v6; // [esp+4h] [ebp-8h]
  int i; // [esp+8h] [ebp-4h]

  v6 = 0;
  if ( a3 >= 5 - a4 + 11 )
    return 0;
  for ( i = 0; i < a4; ++i )
  {
    if ( sub_55E2E0(this, i + a3) )
      ++v6;
  }
  return v6 == a2;
}


//======================================================================
// sub_55E540
// entry 0055e540  size 123  status ok
//======================================================================

bool __thiscall sub_55E540(_WORD *this, int a2, int a3, int a4)
{
  int v6; // [esp+4h] [ebp-8h]
  int i; // [esp+8h] [ebp-4h]

  v6 = 0;
  if ( a4 >= 11 )
    return 0;
  for ( i = 0; i < 5; ++i )
  {
    if ( sub_55E350(this, a3, i + a4) )
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
// sub_55E5C0
// entry 0055e5c0  size 116  status ok
//======================================================================

bool __thiscall sub_55E5C0(_WORD *this, int a2, int a3, int a4, int a5)
{
  int v7; // [esp+4h] [ebp-8h]
  int i; // [esp+8h] [ebp-4h]

  v7 = 0;
  if ( a4 >= 5 - a5 + 11 )
    return 0;
  for ( i = 0; i < a5; ++i )
  {
    if ( sub_55E350(this, a3, i + a4) )
      ++v7;
  }
  return v7 == a2;
}


//======================================================================
// sub_55E640
// entry 0055e640  size 670  status ok
//======================================================================

char __thiscall sub_55E640(_WORD *this, int a2, int a3, int a4)
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
      if ( sub_55E5C0(this, a2, i, j, v6) )
        break;
    }
    for ( k = 0; k < sub_559380(this); ++k )
    {
      if ( sub_5593D0(*(this + k + 2)) != 20
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
      if ( sub_55E540(this, a2, v11, m) )
        break;
    }
    for ( n = 0; n < sub_559380(this); ++n )
    {
      if ( sub_5593D0(*(this + n + 2)) != 20
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
// sub_55E8E0
// entry 0055e8e0  size 152  status ok
//======================================================================

char __thiscall sub_55E8E0(_WORD *this)
{
  int j; // [esp+4h] [ebp-Ch]
  int i; // [esp+8h] [ebp-8h]
  int v5; // [esp+Ch] [ebp-4h]

  v5 = 0;
  for ( i = 1; ; ++i )
  {
    if ( i > 4 )
      return 0;
    if ( sub_55E3E0(this, i, 4) )
      break;
  }
  for ( j = 0; j < sub_559380(this); ++j )
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
// sub_55E980
// entry 0055e980  size 538  status ok
//======================================================================

char __thiscall sub_55E980(_WORD *this, int a2, int a3, int a4)
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
    if ( sub_55E440(this, a2, i) )
    {
      for ( j = 0; j < sub_559380(this); ++j )
      {
        if ( sub_5593D0(*(this + j + 2)) != 20
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
    if ( sub_55E4C0(this, a2, k, v10) )
      break;
  }
  for ( m = 0; m < sub_559380(this); ++m )
  {
    if ( sub_5593D0(*(this + m + 2)) != 20
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
// sub_55EBA0
// entry 0055eba0  size 129  status ok
//======================================================================

char __thiscall sub_55EBA0(_WORD *this)
{
  int i; // [esp+4h] [ebp-Ch]
  int v4; // [esp+8h] [ebp-8h]
  int v5; // [esp+Ch] [ebp-4h]

  v5 = 0;
  v4 = sub_5596E0();
  if ( !v4 )
    return 0;
  for ( i = 0; i < sub_559380(this); ++i )
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
// sub_55EC30
// entry 0055ec30  size 51  status ok
//======================================================================

int __thiscall sub_55EC30(_BYTE *this)
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
// sub_55EC70
// entry 0055ec70  size 59  status ok
//======================================================================

int __thiscall sub_55EC70(_BYTE *this)
{
  int i; // [esp+4h] [ebp-4h]

  for ( i = 0; i < 5; ++i )
    *(this + i + 20) = -1;
  return sub_55ECB0(0);
}


//======================================================================
// sub_55ECB0
// entry 0055ecb0  size 52  status ok
//======================================================================

char __thiscall sub_55ECB0(_BYTE *this, char a2)
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
// sub_55ECF0
// entry 0055ecf0  size 361  status ok
//======================================================================

char __thiscall sub_55ECF0(_WORD *this)
{
  __int16 v1; // ax
  int v3; // esi
  bool v5; // [esp+Bh] [ebp-5h]
  int i; // [esp+Ch] [ebp-4h]

  v1 = sub_641230(2, 4);
  v5 = sub_5593D0(v1) == 20;
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
// sub_55EE60
// entry 0055ee60  size 288  status ok
//======================================================================

bool __thiscall sub_55EE60(char *this, int a2, int a3)
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
// sub_55EF80
// entry 0055ef80  size 2259  status ok
//======================================================================

int __thiscall sub_55EF80(_BYTE *this)
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
      v1 = (const char *)sub_630F40("SID_VIDEOPOKER_MULTI_GARBAGE");
      strcpy(Destination, v1);
      break;
    case 1:
      v2 = (const char *)sub_630F40("SID_VIDEOPOKER_MULTI_PATHAND");
      strcpy(Destination, v2);
      break;
    case 2:
      v3 = (const char *)sub_630F40("SID_VIDEOPOKER_MULTI_FOURTOROYAL");
      strcpy(Destination, v3);
      break;
    case 3:
      v8 = (const char *)sub_630F40("SID_VIDEOPOKER_MULTI_FOURTOROYAL1OR2WILD");
      strcpy(Destination, v8);
      break;
    case 4:
      v6 = (const char *)sub_630F40("SID_VIDEOPOKER_MULTI_FOURTOWILDROYAL");
      strcpy(Destination, v6);
      break;
    case 5:
      v4 = (const char *)sub_630F40("SID_VIDEOPOKER_MULTI_THREETOROYAL");
      strcpy(Destination, v4);
      break;
    case 6:
      v7 = (const char *)sub_630F40("SID_VIDEOPOKER_MULTI_THREETOWILDROYAL");
      strcpy(Destination, v7);
      break;
    case 7:
      v5 = (const char *)sub_630F40("SID_VIDEOPOKER_MULTI_TWOTOROYAL");
      strcpy(Destination, v5);
      break;
    case 8:
      v9 = (const char *)sub_630F40("SID_VIDEOPOKER_MULTI_TWOTOROYALJQORKHIGH");
      strcpy(Destination, v9);
      break;
    case 9:
      v10 = (const char *)sub_630F40("SID_VIDEOPOKER_MULTI_FOURTOSF");
      strcpy(Destination, v10);
      break;
    case 0xA:
      v13 = (const char *)sub_630F40("SID_VIDEOPOKER_MULTI_FOURTOWILDSF");
      strcpy(Destination, v13);
      break;
    case 0xB:
      v18 = (const char *)sub_630F40("SID_VIDEOPOKER_MULTI_FOURTO1OR2DEUCESF");
      strcpy(Destination, v18);
      break;
    case 0xC:
      v11 = (const char *)sub_630F40("SID_VIDEOPOKER_MULTI_THREETOSF");
      strcpy(Destination, v11);
      break;
    case 0xD:
      v15 = (const char *)sub_630F40("SID_VIDEOPOKER_MULTI_THREETOSFOUTSIDE");
      strcpy(Destination, v15);
      break;
    case 0xE:
      v16 = (const char *)sub_630F40("SID_VIDEOPOKER_MULTI_THREETOSFINSIDE");
      strcpy(Destination, v16);
      break;
    case 0xF:
      v17 = (const char *)sub_630F40("SID_VIDEOPOKER_MULTI_THREETOSFDOUBLEINSIDE");
      strcpy(Destination, v17);
      break;
    case 0x10:
      v19 = (const char *)sub_630F40("SID_VIDEOPOKER_MULTI_THREETOSF10JHIGH");
      strcpy(Destination, v19);
      break;
    case 0x11:
      v14 = (const char *)sub_630F40("SID_VIDEOPOKER_MULTI_THREETOWILDSF");
      strcpy(Destination, v14);
      break;
    case 0x12:
      v12 = (const char *)sub_630F40("SID_VIDEOPOKER_MULTI_TWOTOSF");
      strcpy(Destination, v12);
      break;
    case 0x13:
      v20 = (const char *)sub_630F40("SID_VIDEOPOKER_MULTI_FOUROFAKIND");
      strcpy(Destination, v20);
      break;
    case 0x14:
      v21 = (const char *)sub_630F40("SID_VIDEOPOKER_MULTI_FOUROFAKINDJOKER");
      strcpy(Destination, v21);
      break;
    case 0x15:
      v22 = (const char *)sub_630F40("SID_VIDEOPOKER_MULTI_FOUROFAKIND1OR2WILD");
      strcpy(Destination, v22);
      break;
    case 0x16:
      v23 = (const char *)sub_630F40("SID_VIDEOPOKER_MULTI_FOURWILD");
      strcpy(Destination, v23);
      break;
    case 0x17:
      v24 = (const char *)sub_630F40("SID_VIDEOPOKER_MULTI_FOURTOS");
      strcpy(Destination, v24);
      break;
    case 0x18:
      v26 = (const char *)sub_630F40("SID_VIDEOPOKER_MULTI_FOURTOSOUTSIDE");
      strcpy(Destination, v26);
      break;
    case 0x19:
      v27 = (const char *)sub_630F40("SID_VIDEOPOKER_MULTI_FOURTOSINSIDE");
      strcpy(Destination, v27);
      break;
    case 0x1A:
      v28 = (const char *)sub_630F40("SID_VIDEOPOKER_MULTI_FOURTOSJQORK");
      strcpy(Destination, v28);
      break;
    case 0x1B:
      v29 = (const char *)sub_630F40("SID_VIDEOPOKER_MULTI_FOURTOSACEHIGH");
      strcpy(Destination, v29);
      break;
    case 0x1C:
      v30 = (const char *)sub_630F40("SID_VIDEOPOKER_MULTI_FOURTOS2OR3HIGHCARDSOUTSIDE");
      strcpy(Destination, v30);
      break;
    case 0x1D:
      v31 = (const char *)sub_630F40("SID_VIDEOPOKER_MULTI_FOURTOSUNDER2HIGHCARDSOUTSIDE");
      strcpy(Destination, v31);
      break;
    case 0x1E:
      v32 = (const char *)sub_630F40("SID_VIDEOPOKER_MULTI_FOURTOSWITHACEINSIDE");
      strcpy(Destination, v32);
      break;
    case 0x1F:
      v33 = (const char *)sub_630F40("SID_VIDEOPOKER_MULTI_FOURTOSWITH3HIGHCARDSOUTSIDE");
      strcpy(Destination, v33);
      break;
    case 0x20:
      v34 = (const char *)sub_630F40("SID_VIDEOPOKER_MULTI_FOURTOS3HIGHCARDSOUTSIDE");
      strcpy(Destination, v34);
      break;
    case 0x21:
      v35 = (const char *)sub_630F40("SID_VIDEOPOKER_MULTI_FOURTOS3HIGHCARDSINSIDE");
      strcpy(Destination, v35);
      break;
    case 0x22:
      v25 = (const char *)sub_630F40("SID_VIDEOPOKER_MULTI_FOURTOSWILD");
      strcpy(Destination, v25);
      break;
    case 0x23:
      v36 = (const char *)sub_630F40("SID_VIDEOPOKER_MULTI_FOURTOFLUSH");
      strcpy(Destination, v36);
      break;
    case 0x24:
      if ( *(_DWORD *)(dword_7947E0 + 20244) == 8 )
        v38 = (const char *)sub_630F40("SID_VIDEOPOKER_MULTI_FOURTOWILDFLUSH");
      else
        v38 = (const char *)sub_630F40("SID_VIDEOPOKER_MULTI_FOURTO1WILDFLUSH");
      strcpy(Destination, v38);
      break;
    case 0x25:
      v39 = (const char *)sub_630F40("SID_VIDEOPOKER_MULTI_FOURTOJOKERFLUSHACEKING");
      strcpy(Destination, v39);
      break;
    case 0x26:
      v37 = (const char *)sub_630F40("SID_VIDEOPOKER_MULTI_THREETOFLUSH");
      strcpy(Destination, v37);
      break;
    case 0x27:
      v40 = (const char *)sub_630F40("SID_VIDEOPOKER_MULTI_THREEOFAKIND");
      strcpy(Destination, v40);
      break;
    case 0x28:
      v41 = (const char *)sub_630F40("SID_VIDEOPOKER_MULTI_THREEOFAKINDWILD");
      strcpy(Destination, v41);
      break;
    case 0x29:
      v42 = (const char *)sub_630F40("SID_VIDEOPOKER_MULTI_THREEWILDGARBAGE");
      strcpy(Destination, v42);
      break;
    case 0x2A:
      v43 = (const char *)sub_630F40("SID_VIDEOPOKER_MULTI_TWOPAIR");
      strcpy(Destination, v43);
      break;
    case 0x2B:
      if ( *(_DWORD *)(dword_7947E0 + 20244) == 3 || *(_DWORD *)(dword_7947E0 + 20244) == 4 )
      {
        v44 = (const char *)sub_630F40("SID_VIDEOPOKER_MULTI_PAIR10ORBETTER");
        strcpy(Destination, v44);
      }
      if ( *(_DWORD *)(dword_7947E0 + 20244) <= 2u )
      {
        v45 = (const char *)sub_630F40("SID_VIDEOPOKER_MULTI_PAIRJACKSORBETTER");
        strcpy(Destination, v45);
      }
      if ( *(_DWORD *)(dword_7947E0 + 20244) == 8 )
      {
        v46 = (const char *)sub_630F40("SID_VIDEOPOKER_MULTI_TWOKINGSORTWOACES");
        strcpy(Destination, v46);
      }
      break;
    case 0x2C:
      if ( *(_DWORD *)(dword_7947E0 + 20244) == 8 )
      {
        v47 = (const char *)sub_630F40("SID_VIDEOPOKER_MULTI_JOKERPLUSKINGORBETTER");
        strcpy(Destination, v47);
      }
      if ( *(_DWORD *)(dword_7947E0 + 20244) == 9 )
      {
        v48 = (const char *)sub_630F40("SID_VIDEOPOKER_MULTI_JOKERPLUSJACKORBETTER");
        strcpy(Destination, v48);
      }
      break;
    case 0x2D:
      v49 = (const char *)sub_630F40("SID_VIDEOPOKER_MULTI_LOWPAIR");
      strcpy(Destination, v49);
      break;
    case 0x2E:
      v50 = (const char *)sub_630F40("SID_VIDEOPOKER_MULTI_ONEPAIR");
      strcpy(Destination, v50);
      break;
    case 0x2F:
      v51 = (const char *)sub_630F40("SID_VIDEOPOKER_MULTI_TWOWILDGARBAGE");
      strcpy(Destination, v51);
      break;
    case 0x30:
      v52 = (const char *)sub_630F40("SID_VIDEOPOKER_MULTI_JOKERPLUS5TO10");
      strcpy(Destination, v52);
      break;
    case 0x31:
      v53 = (const char *)sub_630F40("SID_VIDEOPOKER_MULTI_WILDGARBAGE");
      strcpy(Destination, v53);
      break;
    case 0x32:
      v54 = (const char *)sub_630F40("SID_VIDEOPOKER_MULTI_ACEANDKING");
      strcpy(Destination, v54);
      break;
    case 0x33:
      v55 = (const char *)sub_630F40("SID_VIDEOPOKER_MULTI_ACEORKING");
      strcpy(Destination, v55);
      break;
    case 0x34:
      v56 = (const char *)sub_630F40("SID_VIDEOPOKER_MULTI_123HIGHCARDS");
      strcpy(Destination, v56);
      break;
    default:
      break;
  }
  v57 = (char *)sub_630F40("SID_GENERIC_STRATEGY");
  return sub_57BE80(1, v57, Destination);
}


//======================================================================
// sub_55F930
// entry 0055f930  size 465  status ok
//======================================================================

ATL::CCRTHeap *__thiscall sub_55F930(ATL::CCRTHeap *this)
{
  int i; // [esp+4h] [ebp-4h]
  int j; // [esp+4h] [ebp-4h]
  int k; // [esp+4h] [ebp-4h]
  int m; // [esp+4h] [ebp-4h]

  ATL::CCRTHeap::CCRTHeap(this);
  *(_DWORD *)this = &VPMultiDisplay::`vftable';
  for ( i = 0; i < 5; ++i )
  {
    *((_DWORD *)this + i + 2) = 0;
    *((_DWORD *)this + i + 7) = 0;
    *((_DWORD *)this + i + 19) = 0;
  }
  *((_DWORD *)this + 29) = 0;
  *((_DWORD *)this + 30) = 0;
  *((_DWORD *)this + 31) = 0;
  *((_DWORD *)this + 32) = 0;
  *((_DWORD *)this + 33) = 0;
  *((_DWORD *)this + 34) = 0;
  for ( j = 0; j < 11; ++j )
    *((_DWORD *)this + j + 35) = 0;
  *((_DWORD *)this + 46) = 0;
  for ( k = 0; k < 3; ++k )
    *((_DWORD *)this + k + 47) = 0;
  *((_DWORD *)this + 50) = 0;
  *((_DWORD *)this + 51) = 0;
  *((_DWORD *)this + 52) = 0;
  *((_DWORD *)this + 53) = 0;
  *((_DWORD *)this + 54) = 0;
  *((_DWORD *)this + 55) = 0;
  *((_DWORD *)this + 56) = 0;
  *((_DWORD *)this + 57) = 0;
  *((_DWORD *)this + 58) = 0;
  *((_DWORD *)this + 59) = 0;
  *((_DWORD *)this + 60) = 0;
  *((_DWORD *)this + 61) = 0;
  for ( m = 0; m < 5; ++m )
    *((_DWORD *)this + m + 24) = 0;
  return this;
}


//======================================================================
// sub_55FB10
// entry 0055fb10  size 1601  status ok
//======================================================================

void __thiscall sub_55FB10(CNoTrackObject *this)
{
  void *v2; // [esp+5Ch] [ebp-ACh]
  void (__thiscall ***v3)(_DWORD, int); // [esp+64h] [ebp-A4h]
  void *v4; // [esp+6Ch] [ebp-9Ch]
  void (__thiscall ***v5)(_DWORD, int); // [esp+74h] [ebp-94h]
  void *v6; // [esp+7Ch] [ebp-8Ch]
  void (__thiscall ***v7)(_DWORD, int); // [esp+84h] [ebp-84h]
  void (__thiscall ***v8)(_DWORD, int); // [esp+8Ch] [ebp-7Ch]
  void *v9; // [esp+94h] [ebp-74h]
  void (__thiscall ***v10)(_DWORD, int); // [esp+9Ch] [ebp-6Ch]
  void (__thiscall ***v11)(_DWORD, int); // [esp+A4h] [ebp-64h]
  void (__thiscall ***v12)(_DWORD, int); // [esp+ACh] [ebp-5Ch]
  void (__thiscall ***v13)(_DWORD, int); // [esp+B4h] [ebp-54h]
  void (__thiscall ***v14)(_DWORD, int); // [esp+BCh] [ebp-4Ch]
  void (__thiscall ***v15)(_DWORD, int); // [esp+C4h] [ebp-44h]
  void *v16; // [esp+CCh] [ebp-3Ch]
  void (__thiscall ***v17)(_DWORD, int); // [esp+D4h] [ebp-34h]
  void (__thiscall ***v18)(_DWORD, int); // [esp+DCh] [ebp-2Ch]
  void (__thiscall ***v19)(_DWORD, int); // [esp+E4h] [ebp-24h]
  void (__thiscall ***v20)(_DWORD, int); // [esp+ECh] [ebp-1Ch]
  void (__thiscall ***v21)(_DWORD, int); // [esp+F4h] [ebp-14h]
  int i; // [esp+F8h] [ebp-10h]
  int j; // [esp+F8h] [ebp-10h]
  int k; // [esp+F8h] [ebp-10h]
  int m; // [esp+F8h] [ebp-10h]

  *(_DWORD *)this = &VPMultiDisplay::`vftable';
  for ( i = 0; i < 5; ++i )
  {
    v21 = (void (__thiscall ***)(_DWORD, int))*((_DWORD *)this + i + 2);
    if ( v21 )
      (**v21)(v21, 1);
    v20 = (void (__thiscall ***)(_DWORD, int))*((_DWORD *)this + i + 7);
    if ( v20 )
      (**v20)(v20, 1);
    v19 = (void (__thiscall ***)(_DWORD, int))*((_DWORD *)this + i + 19);
    if ( v19 )
      (**v19)(v19, 1);
  }
  v18 = (void (__thiscall ***)(_DWORD, int))*((_DWORD *)this + 46);
  if ( v18 )
    (**v18)(v18, 1);
  for ( j = 0; j < 5; ++j )
  {
    v17 = (void (__thiscall ***)(_DWORD, int))*((_DWORD *)this + j + 24);
    if ( v17 )
      (**v17)(v17, 1);
  }
  v16 = (void *)*((_DWORD *)this + 1);
  if ( v16 )
  {
    sub_566720(v16);
    operator delete(v16);
  }
  v15 = (void (__thiscall ***)(_DWORD, int))*((_DWORD *)this + 29);
  if ( v15 )
    (**v15)(v15, 1);
  v14 = (void (__thiscall ***)(_DWORD, int))*((_DWORD *)this + 30);
  if ( v14 )
    (**v14)(v14, 1);
  v13 = (void (__thiscall ***)(_DWORD, int))*((_DWORD *)this + 31);
  if ( v13 )
    (**v13)(v13, 1);
  v12 = (void (__thiscall ***)(_DWORD, int))*((_DWORD *)this + 32);
  if ( v12 )
    (**v12)(v12, 1);
  v11 = (void (__thiscall ***)(_DWORD, int))*((_DWORD *)this + 33);
  if ( v11 )
    (**v11)(v11, 1);
  v10 = (void (__thiscall ***)(_DWORD, int))*((_DWORD *)this + 34);
  if ( v10 )
    (**v10)(v10, 1);
  for ( k = 0; k < 11; ++k )
  {
    v9 = (void *)*((_DWORD *)this + k + 35);
    if ( v9 )
    {
      sub_562B10(v9);
      operator delete(v9);
    }
  }
  for ( m = 0; m < 3; ++m )
  {
    v8 = (void (__thiscall ***)(_DWORD, int))*((_DWORD *)this + m + 47);
    if ( v8 )
      (**v8)(v8, 1);
  }
  v7 = (void (__thiscall ***)(_DWORD, int))*((_DWORD *)this + 50);
  if ( v7 )
    (**v7)(v7, 1);
  v6 = (void *)*((_DWORD *)this + 51);
  if ( v6 )
  {
    sub_565630(v6);
    operator delete(v6);
  }
  v5 = (void (__thiscall ***)(_DWORD, int))*((_DWORD *)this + 52);
  if ( v5 )
    (**v5)(v5, 1);
  v4 = (void *)*((_DWORD *)this + 53);
  if ( v4 )
  {
    sub_565630(v4);
    operator delete(v4);
  }
  v3 = (void (__thiscall ***)(_DWORD, int))*((_DWORD *)this + 54);
  if ( v3 )
    (**v3)(v3, 1);
  v2 = (void *)*((_DWORD *)this + 55);
  if ( v2 )
  {
    sub_565630(v2);
    operator delete(v2);
  }
  CNoTrackObject::~CNoTrackObject(this);
}


//======================================================================
// sub_560160
// entry 00560160  size 75  status ok
//======================================================================

int __stdcall sub_560160(int a1)
{
  int result; // eax

  switch ( a1 )
  {
    case 0:
      result = 3220009;
      break;
    case 1:
      result = 3220008;
      break;
    case 3:
      result = 3220007;
      break;
    case 4:
      result = 3220010;
      break;
    case 5:
      result = 3220011;
      break;
    default:
      result = -1;
      break;
  }
  return result;
}


//======================================================================
// sub_5601D0
// entry 005601d0  size 97  status ok
//======================================================================

int __stdcall sub_5601D0(int a1)
{
  int v1; // eax
  int result; // eax

  v1 = sub_5FB300(a1);
  (*(void (__thiscall **)(int, int))(*(_DWORD *)v1 + 204))(v1, v1);
  result = sub_560160(a1);
  if ( result != -1 )
    return sub_5F2B20(result, 1);
  return result;
}


//======================================================================
// sub_560240
// entry 00560240  size 95  status ok
//======================================================================

int __stdcall sub_560240(int a1)
{
  int v1; // eax
  int result; // eax

  v1 = sub_5FB300(a1);
  (*(void (__thiscall **)(int, int))(*(_DWORD *)v1 + 208))(v1, v1);
  result = sub_560160(a1);
  if ( result != -1 )
    return sub_5F2BA0(result);
  return result;
}


//======================================================================
// sub_5602A0
// entry 005602a0  size 147  status ok
//======================================================================

int sub_5602A0()
{
  int i; // [esp+8h] [ebp-4h]

  for ( i = 0; i < 5; ++i )
    sub_560240(dword_743C98[i]);
  sub_5F2BA0(3220002);
  sub_5F2BA0(3220003);
  sub_5F2BA0(3220004);
  sub_5F2BA0(3220005);
  return sub_5F2BA0(3220006);
}


//======================================================================
// sub_560340
// entry 00560340  size 23  status ok
//======================================================================

int __stdcall sub_560340(int a1)
{
  return dword_743E04[a1];
}


//======================================================================
// sub_560360
// entry 00560360  size 71  status ok
//======================================================================

int __thiscall sub_560360(_DWORD *this, int a2, int a3)
{
  sub_562DE0(*(this + a2 + 35));
  sub_562E10(a3);
  return sub_563030(*(this + a2 + 35));
}


//======================================================================
// sub_5603B0
// entry 005603b0  size 153  status ok
//======================================================================

int __stdcall sub_5603B0(int a1)
{
  int result; // eax

  switch ( a1 )
  {
    case 3220010:
      result = 0;
      break;
    case 3220011:
      result = 2;
      break;
    case 3220012:
      result = 4;
      break;
    case 3220013:
      result = 6;
      break;
    case 3220014:
      result = 8;
      break;
    case 3220015:
      result = 10;
      break;
    case 3220016:
      result = 12;
      break;
    case 3220017:
      result = 14;
      break;
    case 3220018:
      result = 16;
      break;
    case 3220019:
      result = 18;
      break;
    case 3220020:
      result = 20;
      break;
    case 3220021:
      result = 22;
      break;
    case 3220041:
      result = 24;
      break;
    case 3220042:
      result = 26;
      break;
    default:
      result = 0;
      break;
  }
  return result;
}


//======================================================================
// sub_5604B0
// entry 005604b0  size 205  status ok
//======================================================================

int __stdcall sub_5604B0(int a1)
{
  int v2; // [esp+8h] [ebp-4h]

  v2 = *(_DWORD *)(dword_7947E0 + 20244);
  if ( (unsigned int)a1 >= 0xC )
    return 3220010;
  if ( v2 )
  {
    if ( v2 == 5 )
    {
      if ( a1 > 9 )
        sub_5E9F20((char)"handResult <= 9", "..\\Casino\\vpmdisplay.cpp", 305);
      return dword_743E44[a1];
    }
    else if ( v2 == 10 )
    {
      if ( a1 > 10 )
        sub_5E9F20((char)"handResult <= 10", "..\\Casino\\vpmdisplay.cpp", 308);
      return dword_743E18[a1];
    }
    else
    {
      return 3220010;
    }
  }
  else
  {
    if ( a1 > 8 )
      sub_5E9F20((char)"handResult <= 8", "..\\Casino\\vpmdisplay.cpp", 302);
    return dword_743E6C[a1];
  }
}


//======================================================================
// sub_560580
// entry 00560580  size 4164  status ok
//======================================================================

int __thiscall sub_560580(int this)
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
  int v14; // [esp-14h] [ebp-19Ch]
  int v15; // [esp-10h] [ebp-198h]
  int v16; // [esp+0h] [ebp-188h]
  int v17; // [esp+0h] [ebp-188h]
  int v18; // [esp+0h] [ebp-188h]
  int v19; // [esp+0h] [ebp-188h]
  int v20; // [esp+4h] [ebp-184h]
  int v21; // [esp+4h] [ebp-184h]
  int v22; // [esp+4h] [ebp-184h]
  int v23; // [esp+4h] [ebp-184h]
  int v24; // [esp+4h] [ebp-184h]
  int v25; // [esp+8h] [ebp-180h]
  int v26; // [esp+Ch] [ebp-17Ch]
  int v27; // [esp+10h] [ebp-178h]
  int v28; // [esp+14h] [ebp-174h]
  int v29; // [esp+18h] [ebp-170h]
  int v30; // [esp+1Ch] [ebp-16Ch]
  int v31; // [esp+20h] [ebp-168h]
  int v32; // [esp+24h] [ebp-164h]
  int v33; // [esp+28h] [ebp-160h]
  int v34; // [esp+2Ch] [ebp-15Ch]
  _AFX_OLE_STATE *v35; // [esp+30h] [ebp-158h]
  int v36; // [esp+34h] [ebp-154h]
  int v37; // [esp+38h] [ebp-150h]
  int v38; // [esp+3Ch] [ebp-14Ch]
  int v39; // [esp+40h] [ebp-148h]
  int v40; // [esp+44h] [ebp-144h]
  int v41; // [esp+48h] [ebp-140h]
  int v42; // [esp+4Ch] [ebp-13Ch]
  int v43; // [esp+50h] [ebp-138h]
  void *v45; // [esp+5Ch] [ebp-12Ch]
  void *v46; // [esp+64h] [ebp-124h]
  void *v47; // [esp+6Ch] [ebp-11Ch]
  void *v48; // [esp+74h] [ebp-114h]
  void *v49; // [esp+84h] [ebp-104h]
  void *v50; // [esp+8Ch] [ebp-FCh]
  void *v51; // [esp+94h] [ebp-F4h]
  void *v52; // [esp+9Ch] [ebp-ECh]
  void *v53; // [esp+A4h] [ebp-E4h]
  void *v54; // [esp+ACh] [ebp-DCh]
  void *v55; // [esp+B4h] [ebp-D4h]
  _AFX_OLE_STATE *v56; // [esp+BCh] [ebp-CCh]
  void *v57; // [esp+C4h] [ebp-C4h]
  void *v58; // [esp+CCh] [ebp-BCh]
  void *v59; // [esp+D4h] [ebp-B4h]
  void *v60; // [esp+DCh] [ebp-ACh]
  void *v61; // [esp+E4h] [ebp-A4h]
  void *v62; // [esp+ECh] [ebp-9Ch]
  void *v63; // [esp+F4h] [ebp-94h]
  void *v64; // [esp+FCh] [ebp-8Ch]
  int v65; // [esp+104h] [ebp-84h] BYREF
  int v66; // [esp+108h] [ebp-80h] BYREF
  int v67; // [esp+10Ch] [ebp-7Ch]
  _DWORD v68[5]; // [esp+110h] [ebp-78h]
  _DWORD v69[5]; // [esp+124h] [ebp-64h]
  int v70; // [esp+138h] [ebp-50h] BYREF
  _DWORD v71[3]; // [esp+13Ch] [ebp-4Ch]
  __int64 v72; // [esp+148h] [ebp-40h]
  int i; // [esp+150h] [ebp-38h]
  char Destination[20]; // [esp+154h] [ebp-34h] BYREF
  int v75; // [esp+16Ch] [ebp-1Ch] BYREF
  int v76; // [esp+170h] [ebp-18h] BYREF
  int v77; // [esp+174h] [ebp-14h] BYREF
  int v78; // [esp+178h] [ebp-10h] BYREF
  int v79; // [esp+184h] [ebp-4h]

  v71[0] = "SID_VIDEOPOKER_MULTI_COINSIN";
  v71[1] = "SID_VIDEOPOKER_MULTI_CREDIT";
  v71[2] = "SID_GENERIC_EMPTY";
  v67 = 42;
  v68[0] = 279;
  v68[1] = 460;
  v68[2] = 279;
  v68[3] = 430;
  v68[4] = 320;
  v69[0] = 3220030;
  v69[1] = 3220031;
  v69[2] = 3220032;
  v69[3] = 3220033;
  v69[4] = 3220034;
  v75 = 0;
  v76 = 0;
  v70 = 0;
  v1 = sub_630F40("SID_VIDEOPOKER_MULTI");
  sub_5F38B0(v1);
  sub_5F1AD0(3220000);
  v64 = operator new(0x10u);
  v79 = 0;
  if ( v64 )
    v43 = sub_5666E0(v64);
  else
    v43 = 0;
  v79 = -1;
  *(_DWORD *)(this + 4) = v43;
  sub_5667D0();
  sub_566A20(*(_DWORD *)(this + 4));
  sub_566970(100);
  v63 = operator new(0x184u);
  v79 = 1;
  if ( v63 )
    v42 = sub_5F5BF0(v63);
  else
    v42 = 0;
  v79 = -1;
  *(_DWORD *)(this + 116) = v42;
  sub_5EAE80(3220025, 0, 0, 3, -1);
  *(_DWORD *)(*(_DWORD *)(this + 116) + 376) = 3;
  v62 = operator new(0x184u);
  v79 = 2;
  if ( v62 )
    v41 = sub_5F5BF0(v62);
  else
    v41 = 0;
  v79 = -1;
  *(_DWORD *)(this + 120) = v41;
  sub_5EAE80(3220026, 0, 0, 100, -1);
  *(_DWORD *)(*(_DWORD *)(this + 120) + 376) = 0;
  sub_5628B0(&v75, &v76, &v70);
  v61 = operator new(0x178u);
  v79 = 3;
  if ( v61 )
  {
    sub_5EAAF0(v61);
    v40 = v2;
  }
  else
  {
    v40 = 0;
  }
  v79 = -1;
  *(_DWORD *)(this + 124) = v40;
  sub_5EAE80(3220027, v75, v76, 600, -1);
  (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 124) + 176))(*(_DWORD *)(this + 124), v70);
  (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 124) + 68))(*(_DWORD *)(this + 124), v75, v76);
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 124) + 116))(*(_DWORD *)(this + 124));
  v60 = operator new(0x184u);
  v79 = 4;
  if ( v60 )
    v39 = sub_5F5BF0(v60);
  else
    v39 = 0;
  v79 = -1;
  *(_DWORD *)(this + 128) = v39;
  v3 = sub_5616C0(this);
  sub_5EAE80(v3, 0, 0, 500, -1);
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 128) + 116))(*(_DWORD *)(this + 128));
  sub_5615D0(&v77, &v65, &v78, &v66);
  v59 = operator new(0x178u);
  v79 = 5;
  if ( v59 )
  {
    sub_5EAAF0(v59);
    v38 = v4;
  }
  else
  {
    v38 = 0;
  }
  v79 = -1;
  *(_DWORD *)(this + 136) = v38;
  sub_5EAE80(v77, 0, 0, 500, -1);
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 136) + 116))(*(_DWORD *)(this + 136));
  for ( i = 0; i < 11; ++i )
  {
    v58 = operator new(0x24u);
    v79 = 6;
    if ( v58 )
      v37 = sub_562AC0(v58);
    else
      v37 = 0;
    v79 = -1;
    *(_DWORD *)(this + 4 * i + 140) = v37;
    *(_DWORD *)(*(_DWORD *)(this + 4 * i + 140) + 16) = v78;
    *(_DWORD *)(*(_DWORD *)(this + 4 * i + 140) + 12) = v65;
    *(_DWORD *)(*(_DWORD *)(this + 4 * i + 140) + 20) = i;
    *(_BYTE *)(*(_DWORD *)(this + 4 * i + 140) + 24) = i <= v66 - 1;
    sub_562BD0(v16, v20);
    if ( *(_BYTE *)(*(_DWORD *)(this + 4 * i + 140) + 24) )
      sub_563080(*(_DWORD *)(this + 4 * i + 140));
    else
      sub_562FF0(*(_DWORD *)(this + 4 * i + 140));
  }
  v57 = operator new(0x184u);
  v79 = 7;
  if ( v57 )
    v36 = sub_5F5BF0(v57);
  else
    v36 = 0;
  v79 = -1;
  *(_DWORD *)(this + 132) = v36;
  sub_5EAE80(3220028, 0, 0, 500, -1);
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 132) + 112))(*(_DWORD *)(this + 132));
  for ( i = 0; i < 5; ++i )
  {
    v56 = (_AFX_OLE_STATE *)operator new(0x1E4u);
    v79 = 8;
    if ( v56 )
      v35 = _AFX_OLE_STATE::_AFX_OLE_STATE(v56);
    else
      v35 = 0;
    v79 = -1;
    *(_DWORD *)(this + 4 * i + 96) = v35;
    sub_5EAE80(v69[i], 0, 0, 1, -1);
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 4 * i + 96) + 116))(*(_DWORD *)(this + 4 * i + 96));
    *(_DWORD *)(*(_DWORD *)(this + 4 * i + 96) + 476) = i;
    sub_602EB0(*(_DWORD *)(this + 4 * i + 96));
    (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 4 * i + 96) + 176))(
      *(_DWORD *)(this + 4 * i + 96),
      i != 4 ? 0 : 2);
    *(_BYTE *)(*(_DWORD *)(this + 4 * i + 96) + 480) = i == 4;
  }
  v55 = operator new(0x178u);
  v79 = 9;
  if ( v55 )
  {
    sub_5EAAF0(v55);
    v34 = v5;
  }
  else
  {
    v34 = 0;
  }
  v79 = -1;
  *(_DWORD *)(this + 200) = v34;
  sub_5EAE80(3220057, 0, 0, 600, -1);
  v54 = operator new(0x40u);
  v79 = 10;
  if ( v54 )
    v33 = sub_5655D0(v54);
  else
    v33 = 0;
  v79 = -1;
  *(_DWORD *)(this + 204) = v33;
  sub_5656F0(v16, v20);
  sub_565A50(4);
  sub_5664C0(0);
  v53 = operator new(0x178u);
  v79 = 11;
  if ( v53 )
  {
    sub_5EAAF0(v53);
    v32 = v6;
  }
  else
  {
    v32 = 0;
  }
  v79 = -1;
  *(_DWORD *)(this + 208) = v32;
  sub_5EAE80(3220056, 0, 0, 600, -1);
  v52 = operator new(0x40u);
  v79 = 12;
  if ( v52 )
    v31 = sub_5655D0(v52);
  else
    v31 = 0;
  v79 = -1;
  *(_DWORD *)(this + 212) = v31;
  sub_5656F0(v17, v21);
  sub_565A50(2);
  sub_5664C0(0);
  v51 = operator new(0x178u);
  v79 = 13;
  if ( v51 )
  {
    sub_5EAAF0(v51);
    v30 = v7;
  }
  else
  {
    v30 = 0;
  }
  v79 = -1;
  *(_DWORD *)(this + 216) = v30;
  sub_5EAE80(3220058, 0, 0, 600, -1);
  v50 = operator new(0x40u);
  v79 = 14;
  if ( v50 )
    v29 = sub_5655D0(v50);
  else
    v29 = 0;
  v79 = -1;
  *(_DWORD *)(this + 220) = v29;
  sub_5656F0(v18, v22);
  sub_565A50(3);
  sub_5664C0(0);
  for ( i = 0; i < 3; ++i )
  {
    v49 = operator new(0x1D0u);
    v79 = 15;
    if ( v49 )
    {
      sub_5EC5A0(v49);
      v28 = v8;
    }
    else
    {
      v28 = 0;
    }
    v79 = -1;
    *(_DWORD *)(this + 4 * i + 188) = v28;
    v15 = v68[2 * i];
    v14 = v68[2 * i - 1];
    v9 = sub_630F40(v71[i]);
    sub_5EC8F0(v9, 42, 100, 20, v14, v15, 2, 5, -1);
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 4 * i + 188) + 116))(*(_DWORD *)(this + 4 * i + 188));
  }
  v10 = sub_5D0AA0(dword_79343C);
  v72 = sub_64C8A0(v10, 0);
  sub_64C8D0(v72, SHIDWORD(v72), Destination, 1, 1, 1);
  (*(void (__thiscall **)(_DWORD, char *))(**(_DWORD **)(this + 196) + 180))(*(_DWORD *)(this + 196), Destination);
  for ( i = 0; i < 5; ++i )
  {
    v48 = operator new(0x1A4u);
    v79 = 16;
    if ( v48 )
      v27 = sub_564F10(v48);
    else
      v27 = 0;
    v79 = -1;
    *(_DWORD *)(this + 4 * i + 8) = v27;
    v11 = sub_560340(i);
    sub_5EAE80(3220037, v11, 258, 10, -1);
    v75 = sub_560340(i);
    v76 = 258;
    v47 = operator new(0x184u);
    v79 = 17;
    if ( v47 )
      v26 = sub_5F5BF0(v47);
    else
      v26 = 0;
    v79 = -1;
    *(_DWORD *)(this + 4 * i + 28) = v26;
    sub_5EAE80(3220036, v75, v76, 2, -1);
    *(_DWORD *)(*(_DWORD *)(this + 4 * i + 28) + 376) = 0;
    v46 = operator new(0x178u);
    v79 = 18;
    if ( v46 )
    {
      sub_5EAAF0(v46);
      v25 = v12;
    }
    else
    {
      v25 = 0;
    }
    v79 = -1;
    *(_DWORD *)(this + 4 * i + 76) = v25;
    sub_5EAE80(3220035, 0, 0, 50, -1);
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 4 * i + 76) + 112))(*(_DWORD *)(this + 4 * i + 76));
  }
  v45 = operator new(0x910u);
  v79 = 19;
  if ( v45 )
    v24 = ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>>>::operator+=(v19, v23);
  else
    v24 = 0;
  v79 = -1;
  *(_DWORD *)(this + 184) = v24;
  sub_5640F0(v19, v24);
  sub_564490(*(_DWORD *)(this + 184));
  for ( i = 0; i < 5; ++i )
    sub_5F9DE0(0, dword_743C98[i], i + 3220001, 0, 0, 2, &Source, -1, -1, -1, -1, 0);
  sub_5602A0();
  sub_5F9DE0(0, 6, 3220029, 0, 0, 2, &Source, -1, -1, -1, -1, 0);
  sub_5FB300(6);
  sub_602790(0);
  return sub_561950(this);
}


//======================================================================
// sub_5615D0
// entry 005615d0  size 236  status ok
//======================================================================

int *__stdcall sub_5615D0(int *a1, int *a2, int *a3, int *a4)
{
  int *result; // eax
  int v5; // [esp+0h] [ebp-Ch]

  v5 = *(_DWORD *)(dword_7947E0 + 20244);
  if ( v5 )
  {
    if ( v5 == 5 )
    {
      *a1 = 3220052;
      *a2 = 3220053;
      result = a3;
      *a3 = 3220054;
      *a4 = 10;
    }
    else if ( v5 == 10 )
    {
      *a1 = 3220049;
      result = a2;
      *a2 = 3220051;
      *a3 = 3220050;
      *a4 = 11;
    }
    else
    {
      *a4 = 0;
      *a3 = 0;
      *a2 = 0;
      result = a1;
      *a1 = 0;
    }
  }
  else
  {
    *a1 = 3220046;
    *a2 = 3220048;
    *a3 = 3220047;
    result = a4;
    *a4 = 9;
  }
  if ( *a4 > 11 )
    return (int *)sub_5E9F20((char)"numPayouts <= VP_MAX_PAYOUTS", "..\\Casino\\vpmdisplay.cpp", 507);
  return result;
}


//======================================================================
// sub_5616C0
// entry 005616c0  size 111  status ok
//======================================================================

int sub_5616C0()
{
  _DWORD v1[11]; // [esp+4h] [ebp-30h] BYREF
  int v2; // [esp+30h] [ebp-4h]

  v1[0] = 3220038;
  memset(&v1[1], 0, 16);
  v1[5] = 3220040;
  memset(&v1[6], 0, 16);
  v1[10] = 3220039;
  v2 = *(_DWORD *)(dword_7947E0 + 20244);
  return v1[v2];
}


//======================================================================
// sub_5617A0
// entry 005617a0  size 429  status ok
//======================================================================

int __thiscall sub_5617A0(_DWORD **this)
{
  int result; // eax
  _DWORD v3[5]; // [esp+4h] [ebp-28h]
  int i; // [esp+18h] [ebp-14h]
  _BYTE v5[8]; // [esp+1Ch] [ebp-10h]
  int v6; // [esp+28h] [ebp-4h]

  result = unknown_libname_543(*(_DWORD *)(dword_79343C + 52)) + 1;
  v6 = result;
  v3[0] = 1;
  v3[1] = 5;
  v3[2] = 10;
  v3[3] = 25;
  v3[4] = 50;
  for ( i = 0; i < 5; ++i )
  {
    if ( (unsigned __int8)sub_568530(v3[i]) )
    {
      v5[i] = 1;
      result = (*(int (__thiscall **)(_DWORD))(**(this + i + 24) + 204))(*(this + i + 24));
    }
    else
    {
      v5[i] = 0;
      result = (*(int (__thiscall **)(_DWORD))(**(this + i + 24) + 208))(*(this + i + 24));
    }
  }
  for ( i = 0; i < 5; ++i )
  {
    if ( v5[i] && v6 == v3[i] )
    {
      *((_BYTE *)*(this + i + 24) + 480) = 1;
      (*(void (__thiscall **)(_DWORD, int))(**(this + i + 24) + 176))(*(this + i + 24), 3);
    }
    else
    {
      (*(void (__thiscall **)(_DWORD, _DWORD))(**(this + i + 24) + 176))(*(this + i + 24), 0);
      *((_BYTE *)*(this + i + 24) + 480) = 0;
    }
    result = i + 1;
  }
  return result;
}


//======================================================================
// sub_561950
// entry 00561950  size 497  status ok
//======================================================================

int __thiscall sub_561950(int this)
{
  int v1; // eax
  int result; // eax
  int v3; // eax
  int v5; // [esp+8h] [ebp-Ch]

  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 200) + 116))(*(_DWORD *)(this + 200));
  if ( *(int *)(dword_79343C + 4) < 999999 )
  {
    sub_565A50(4);
    sub_5664C0(*(_DWORD *)(dword_79343C + 4));
  }
  else
  {
    sub_566410(*(_DWORD *)(this + 204));
  }
  sub_566210(*(_DWORD *)(this + 204));
  v5 = *(_DWORD *)(dword_79343C + 8);
  v1 = unknown_libname_543(*(_DWORD *)(dword_79343C + 52));
  sub_5664C0(v5 * (v1 + 1));
  sub_566210(*(_DWORD *)(this + 212));
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 208) + 116))(*(_DWORD *)(this + 208));
  sub_5617A0((_DWORD **)this);
  sub_5FB300(0);
  sub_5EB700(1);
  sub_5FB300(1);
  sub_5EB700(1);
  sub_5FB300(3);
  sub_5EB700(1);
  sub_5FB300(4);
  sub_5EB700(1);
  sub_5FB300(5);
  sub_5EB700(1);
  if ( (unsigned __int8)sub_56A5D0(dword_79343C) )
  {
    sub_5601D0(1);
    sub_5601D0(0);
  }
  if ( (unsigned __int8)sub_56A660(dword_79343C) )
    sub_5601D0(5);
  else
    sub_560240(5);
  sub_5601D0(6);
  result = sub_56A680(dword_79343C);
  if ( (_BYTE)result )
  {
    v3 = sub_5DCB00(0);
    return sub_5DBB70(v3);
  }
  return result;
}


//======================================================================
// sub_561B50
// entry 00561b50  size 440  status ok
//======================================================================

int __thiscall sub_561B50(int this)
{
  int v1; // eax
  int result; // eax
  int v4; // [esp+Ch] [ebp-10h]
  int i; // [esp+18h] [ebp-4h]

  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 200) + 116))(*(_DWORD *)(this + 200));
  if ( *(int *)(dword_79343C + 4) < 999999 )
  {
    sub_565A50(4);
    sub_5664C0(*(_DWORD *)(dword_79343C + 4));
  }
  else
  {
    sub_566410(*(_DWORD *)(this + 204));
  }
  sub_566210(*(_DWORD *)(this + 204));
  v4 = *(_DWORD *)(dword_79343C + 8);
  v1 = unknown_libname_543(*(_DWORD *)(dword_79343C + 52));
  sub_5664C0(v4 * (v1 + 1));
  sub_566210(*(_DWORD *)(this + 212));
  result = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 208) + 116))(*(_DWORD *)(this + 208));
  if ( *(_DWORD *)(dword_79343C + 8) )
  {
    sub_5602A0();
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 216) + 112))(*(_DWORD *)(this + 216));
    sub_566310(*(_DWORD *)(this + 220));
    sub_566A20(*(_DWORD *)(this + 4));
    sub_5601D0(4);
    for ( i = 0; i < 5; ++i )
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 4 * i + 96) + 208))(*(_DWORD *)(this + 4 * i + 96));
    if ( *(_DWORD *)(dword_79343C + 8) == 5 )
    {
      return sub_560240(6);
    }
    else
    {
      result = sub_56A5D0(dword_79343C);
      if ( (_BYTE)result )
      {
        sub_5601D0(1);
        return sub_5601D0(0);
      }
    }
  }
  return result;
}


//======================================================================
// sub_561D10
// entry 00561d10  size 43  status ok
//======================================================================

int __stdcall sub_561D10(char a1)
{
  if ( a1 )
    return sub_5601D0(4);
  else
    return sub_560240(4);
}


//======================================================================
// sub_561D40
// entry 00561d40  size 213  status ok
//======================================================================

int __stdcall sub_561D40(char a1)
{
  if ( a1 )
  {
    sub_5F2B20(3220002, 1);
    sub_5F2B20(3220003, 1);
    sub_5F2B20(3220004, 1);
    sub_5F2B20(3220005, 1);
    sub_5F2B20(3220006, 1);
    return sub_5601D0(3);
  }
  else
  {
    sub_5F2BA0(3220002);
    sub_5F2BA0(3220003);
    sub_5F2BA0(3220004);
    sub_5F2BA0(3220005);
    sub_5F2BA0(3220006);
    return sub_560240(3);
  }
}


//======================================================================
// sub_561E20
// entry 00561e20  size 164  status ok
//======================================================================

int __thiscall sub_561E20(_DWORD *this)
{
  int result; // eax
  int i; // [esp+Ch] [ebp-4h]

  sub_5592A0((_WORD *)dword_793444, *(_DWORD *)(dword_7947E0 + 20244), dword_79343C + 36);
  sub_561F20(this);
  result = dword_79343C;
  if ( *(_BYTE *)(dword_79343C + 46) )
  {
    sub_5645C0(1);
    sub_564B10(*(this + 46));
    for ( i = 0; i < 49; ++i )
      sub_564880(i);
    return sub_564490(*(this + 46));
  }
  return result;
}


//======================================================================
// sub_561ED0
// entry 00561ed0  size 42  status ok
//======================================================================

int __thiscall sub_561ED0(_DWORD *this, int a2)
{
  return sub_568840(*(_WORD *)(*(this + a2 + 2) + 400));
}


//======================================================================
// sub_561F00
// entry 00561f00  size 30  status ok
//======================================================================

__int16 __thiscall sub_561F00(_DWORD *this, int a2)
{
  return *(_WORD *)(*(this + a2 + 2) + 400);
}


//======================================================================
// sub_561F20
// entry 00561f20  size 229  status ok
//======================================================================

void __thiscall sub_561F20(_DWORD **this)
{
  int i; // [esp+4h] [ebp-20h]
  _DWORD v3[5]; // [esp+10h] [ebp-14h]

  v3[0] = 123;
  v3[1] = 182;
  v3[2] = 241;
  v3[3] = 300;
  v3[4] = 359;
  for ( i = 0; i < 5; ++i )
  {
    (*(void (__thiscall **)(_DWORD, _DWORD, int))(**(this + i + 19) + 68))(*(this + i + 19), v3[i], 326);
    if ( (unsigned __int8)sub_568840(*((_WORD *)*(this + i + 2) + 200)) )
      (*(void (__thiscall **)(_DWORD))(**(this + i + 19) + 116))(*(this + i + 19));
    else
      (*(void (__thiscall **)(_DWORD))(**(this + i + 19) + 112))(*(this + i + 19));
  }
}


//======================================================================
// sub_562010
// entry 00562010  size 165  status ok
//======================================================================

int __thiscall sub_562010(_DWORD *this, unsigned __int8 a2)
{
  int result; // eax
  int v4; // [esp+4h] [ebp-8h]
  int v5; // [esp+8h] [ebp-4h]

  v5 = sub_569FE0(dword_79343C);
  v4 = sub_5698C0(v5);
  if ( !v4 )
    return sub_566A20(*(this + 1));
  if ( a2 )
    sub_560360(this, v5, v4);
  sub_566B00(v5);
  sub_566AE0(v4);
  sub_5669C0(*(this + 1));
  result = a2;
  if ( a2 )
    return sub_562A00(v5);
  return result;
}


//======================================================================
// sub_5620C0
// entry 005620c0  size 156  status ok
//======================================================================

int __thiscall sub_5620C0(int this, int a2)
{
  if ( a2 )
  {
    sub_5EAF00(3220058);
    sub_5664C0(a2);
    sub_566210(*(_DWORD *)(this + 220));
  }
  else
  {
    sub_5EAF00(3220055);
    sub_5664C0(0);
    sub_566310(*(_DWORD *)(this + 220));
  }
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 216) + 116))(*(_DWORD *)(this + 216));
  return sub_562010((_DWORD *)this, 0);
}


//======================================================================
// sub_562160
// entry 00562160  size 212  status ok
//======================================================================

int __thiscall sub_562160(_DWORD **this)
{
  int result; // eax
  int i; // [esp+Ch] [ebp-4h]

  sub_569270(dword_79343C);
  if ( sub_55A4E0(dword_793444, *(_DWORD *)(dword_7947E0 + 20244), dword_79343C + 36) != 46
    || (result = sub_568890(dword_79343C), !(_BYTE)result) )
  {
    for ( i = 0; i < 5; ++i )
    {
      if ( *(char *)(i + dword_793444 + 20) != -1 )
        sub_568ED0(*(_WORD *)(dword_79343C + 2 * *(char *)(i + dword_793444 + 20) + 36));
    }
    sub_561F20(this);
    sub_56ACE0(*(_DWORD *)(dword_79343C + 52));
    return sub_5645C0(0);
  }
  return result;
}


//======================================================================
// sub_562240
// entry 00562240  size 74  status ok
//======================================================================

int __thiscall sub_562240(_DWORD *this, unsigned __int16 a2)
{
  int i; // [esp+4h] [ebp-4h]

  for ( i = 0; i < 5; ++i )
  {
    if ( *(unsigned __int16 *)(*(this + i + 2) + 400) == a2 )
      return i;
  }
  return -1;
}


//======================================================================
// sub_562290
// entry 00562290  size 308  status ok
//======================================================================

int __thiscall sub_562290(_DWORD *this)
{
  int v2; // [esp+14h] [ebp-20h]

  if ( !*((_BYTE *)dword_162EE84 + 37) )
    (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(dword_793438 + 4) + 4))(*(_DWORD *)(dword_793438 + 4), 1);
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
  *(_DWORD *)(*(this + 29) + 376) = 1;
  (*(void (__thiscall **)(_DWORD, _DWORD))(*(_DWORD *)*(this + 29) + 176))(*(this + 29), 0);
  (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 29) + 116))(*(this + 29));
  if ( operator new(0x1Cu) )
    v2 = sub_563370(*(_DWORD *)(dword_793438 + 4));
  else
    v2 = 0;
  sub_5F5D50(v2);
  return sub_561950((int)this);
}


//======================================================================
// sub_5623D0
// entry 005623d0  size 199  status ok
//======================================================================

int __thiscall sub_5623D0(_DWORD *this)
{
  int result; // eax
  int i; // [esp+4h] [ebp-4h]
  int j; // [esp+4h] [ebp-4h]

  sub_5602A0();
  result = dword_79343C;
  if ( !*(_DWORD *)(dword_79343C + 20) )
  {
    sub_609870(*(this + 56), 1);
    result = sub_609870(*(this + 57), 1);
    for ( i = 0; i < 5; ++i )
      result = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*(this + i + 2) + 112))(*(this + i + 2));
  }
  for ( j = 0; j < 11; ++j )
  {
    sub_562D90(*(this + j + 35));
    sub_563080(*(this + j + 35));
    result = j + 1;
  }
  return result;
}


//======================================================================
// sub_5624A0
// entry 005624a0  size 61  status ok
//======================================================================

int __thiscall sub_5624A0(_DWORD *this, __int16 a2, int a3)
{
  *(_WORD *)(*(this + a3 + 2) + 400) = a2;
  return (*(int (__thiscall **)(_DWORD, _DWORD *))(*(_DWORD *)*(this + a3 + 2) + 116))(*(this + a3 + 2), this);
}


//======================================================================
// sub_5624E0
// entry 005624e0  size 577  status ok
//======================================================================

int __thiscall sub_5624E0(_DWORD *this, int a2)
{
  int v3; // [esp+10h] [ebp-24h]
  int v5; // [esp+20h] [ebp-14h]
  int v6; // [esp+20h] [ebp-14h]
  int i; // [esp+24h] [ebp-10h]
  int j; // [esp+24h] [ebp-10h]

  for ( i = 0; i < 5; ++i )
    (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + i + 19) + 112))(*(this + i + 19));
  v5 = sub_637810(0);
  if ( v5 > 3 )
  {
    if ( v5 > 6 )
    {
      if ( v5 > 8 )
        v6 = 3;
      else
        v6 = 2;
    }
    else
    {
      v6 = 1;
    }
  }
  else
  {
    v6 = 0;
  }
  for ( j = 0; ; ++j )
  {
    if ( j >= 5 )
      return (*(int (__thiscall **)(int, int, _DWORD))(*(_DWORD *)a2 + 8))(a2, 3, 0);
    if ( CMFCScanliner::channels((CMFCScanliner *)*(this + j + 2)) )
      break;
  }
  if ( dword_793434 )
    (*(void (__thiscall **)(Concurrency::details::ContextBase *, int, _DWORD, _DWORD, int, int, _DWORD, _DWORD, _DWORD *))(*(_DWORD *)dword_162EE84 + 128))(
      dword_162EE84,
      100003,
      0,
      0,
      10,
      1,
      1.0,
      0.5,
      this + 57);
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
      this + 56);
  dword_793434 = 1 - dword_793434;
  *(this + 62) = j;
  (*(void (__thiscall **)(_DWORD, _DWORD))(*(_DWORD *)*(this + j + 7) + 176))(*(this + j + 7), 0);
  (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + j + 7) + 116))(*(this + j + 7));
  if ( operator new(0x20u) )
    v3 = sub_565210(a2);
  else
    v3 = 0;
  sub_5F5D50(v3);
  *(_DWORD *)(*(this + j + 7) + 376) = v6;
  return v6;
}


//======================================================================
// sub_562730
// entry 00562730  size 143  status ok
//======================================================================

int sub_562730()
{
  int v1; // [esp+4h] [ebp-1Ch]

  if ( operator new(0x1Cu) )
    v1 = sub_563440(0);
  else
    v1 = 0;
  sub_5F5D50(v1);
  return sub_5627C0(1, 20);
}


//======================================================================
// sub_5627C0
// entry 005627c0  size 228  status ok
//======================================================================

int __thiscall sub_5627C0(_DWORD **this, char a2, int a3)
{
  int v4; // [esp+4h] [ebp-1Ch]

  if ( !a2 || *(_BYTE *)(dword_79343C + 46) )
  {
    sub_5F5D50(0);
    return (*(int (__thiscall **)(_DWORD))(**(this + 33) + 112))(*(this + 33));
  }
  else
  {
    if ( operator new(0x1Cu) )
      v4 = sub_600A70(0);
    else
      v4 = 0;
    sub_5F5D50(v4);
    return (*(int (__thiscall **)(_DWORD))(**(this + 33) + 116))(*(this + 33));
  }
}


//======================================================================
// sub_5628B0
// entry 005628b0  size 204  status ok
//======================================================================

_DWORD *__stdcall sub_5628B0(_DWORD *a1, _DWORD *a2, _DWORD *a3)
{
  _DWORD *result; // eax
  int v4; // [esp+8h] [ebp-8h]

  v4 = 0;
  *a1 = 542;
  *a2 = 289;
  switch ( *(_DWORD *)(dword_7947E0 + 20240) )
  {
    case 2:
      *a3 = 0;
      v4 = -11;
      break;
    case 3:
      *a3 = 1;
      v4 = -6;
      break;
    case 4:
      *a3 = 2;
      v4 = -6;
      break;
    case 6:
      *a3 = 3;
      v4 = -8;
      break;
    case 8:
      *a3 = 4;
      v4 = -8;
      break;
    default:
      break;
  }
  result = *(_DWORD **)(dword_7947E0 + 20244);
  if ( result == (_DWORD *)10 )
  {
    *a1 += v4;
    return a1;
  }
  return result;
}


//======================================================================
// sub_5629A0
// entry 005629a0  size 85  status ok
//======================================================================

int sub_5629A0()
{
  unsigned int v1; // [esp+8h] [ebp-4h]

  v1 = sub_62FC30(0, 5);
  if ( v1 >= 6 )
    sub_5E9F20((char)"drum>=0 && drum<=5", "..\\Casino\\vpmdisplay.cpp", 1092);
  return dword_743E90[v1];
}


//======================================================================
// sub_562A00
// entry 00562a00  size 191  status ok
//======================================================================

int __thiscall sub_562A00(_DWORD *this, int a2)
{
  int result; // eax
  int v4; // [esp+10h] [ebp-4h]

  result = sub_569F00(a2);
  v4 = result;
  if ( result )
  {
    if ( (unsigned __int8)sub_5F45A0(*(this + 58)) )
      return (*(int (__thiscall **)(Concurrency::details::ContextBase *, int, _DWORD, _DWORD, int, int, _DWORD, _DWORD, _DWORD *))(*(_DWORD *)dword_162EE84 + 128))(
               dword_162EE84,
               v4,
               0,
               0,
               10,
               1,
               1.0,
               0.5,
               this + 59);
    else
      return (*(int (__thiscall **)(Concurrency::details::ContextBase *, int, _DWORD, _DWORD, int, int, _DWORD, _DWORD, _DWORD *))(*(_DWORD *)dword_162EE84 + 128))(
               dword_162EE84,
               v4,
               0,
               0,
               10,
               1,
               1.0,
               0.5,
               this + 58);
  }
  return result;
}


//======================================================================
// sub_562AC0
// entry 00562ac0  size 80  status ok
//======================================================================

_DWORD *__thiscall sub_562AC0(_DWORD *this)
{
  *this = 0;
  *(this + 1) = 0;
  *(this + 2) = 0;
  *((_BYTE *)this + 24) = 0;
  *(this + 5) = 0;
  *(this + 7) = 0;
  *(this + 8) = 0;
  return this;
}


//======================================================================
// sub_562B10
// entry 00562b10  size 191  status ok
//======================================================================

void *__thiscall sub_562B10(_DWORD *this)
{
  void *result; // eax
  void *v3; // [esp+14h] [ebp-14h]
  void *v4; // [esp+1Ch] [ebp-Ch]

  if ( *this )
    (**(void (__thiscall ***)(_DWORD, int))*this)(*this, 1);
  v4 = (void *)*(this + 1);
  if ( v4 )
  {
    sub_565630(v4);
    operator delete(v4);
  }
  result = (void *)*(this + 2);
  v3 = result;
  if ( result )
  {
    sub_565630(result);
    operator delete(v3);
    return v3;
  }
  return result;
}


//======================================================================
// sub_562BD0
// entry 00562bd0  size 445  status ok
//======================================================================

int __thiscall sub_562BD0(_DWORD *this)
{
  int v1; // eax
  int v2; // eax
  int v3; // eax
  int v5; // [esp+4h] [ebp-38h]
  int v6; // [esp+8h] [ebp-34h]
  int v7; // [esp+Ch] [ebp-30h]
  void *v9; // [esp+14h] [ebp-28h]
  void *v10; // [esp+1Ch] [ebp-20h]
  void *v11; // [esp+24h] [ebp-18h]
  int v12; // [esp+2Ch] [ebp-10h]

  v12 = sub_562E40(this);
  v11 = operator new(0x178u);
  if ( v11 )
  {
    sub_5EAAF0(v11);
    v7 = v1;
  }
  else
  {
    v7 = 0;
  }
  *this = v7;
  sub_5EAE80(*(this + 4), 0, 0, 700, -1);
  (*(void (__thiscall **)(_DWORD, _DWORD))(*(_DWORD *)*this + 176))(*this, *(this + 5));
  v10 = operator new(0x40u);
  if ( v10 )
    v6 = sub_5655D0(v10);
  else
    v6 = 0;
  *(this + 1) = v6;
  sub_5656F0();
  sub_565A50(v12);
  v2 = sub_562EB0(this);
  sub_565CF0(v2);
  sub_5664C0(0);
  v9 = operator new(0x40u);
  if ( v9 )
    v5 = sub_5655D0(v9);
  else
    v5 = 0;
  *(this + 2) = v5;
  sub_5656F0();
  sub_565A50(v12);
  v3 = sub_562F30(this);
  sub_565CF0(v3);
  return sub_5664C0(0);
}


//======================================================================
// sub_562D90
// entry 00562d90  size 67  status ok
//======================================================================

int __thiscall sub_562D90(_DWORD *this)
{
  *(this + 7) = 0;
  *(this + 8) = 0;
  sub_5664C0(*(this + 7));
  return sub_5664C0(*(this + 8));
}


//======================================================================
// sub_562DE0
// entry 00562de0  size 44  status ok
//======================================================================

int __thiscall sub_562DE0(_DWORD *this)
{
  return sub_5664C0(++*(this + 7));
}


//======================================================================
// sub_562E10
// entry 00562e10  size 46  status ok
//======================================================================

int __thiscall sub_562E10(_DWORD *this, int a2)
{
  *(this + 8) += a2;
  return sub_5664C0(*(this + 8));
}


//======================================================================
// sub_562E40
// entry 00562e40  size 101  status ok
//======================================================================

BOOL __thiscall sub_562E40(_DWORD *this)
{
  int v2; // [esp+0h] [ebp-Ch]

  v2 = *(_DWORD *)(dword_7947E0 + 20244);
  switch ( v2 )
  {
    case 0:
      return *(this + 5) > 4;
    case 5:
      return *(this + 5) > 4;
    case 10:
      return *(this + 5) > 5;
  }
  return 0;
}


//======================================================================
// sub_562EB0
// entry 00562eb0  size 127  status ok
//======================================================================

int __thiscall sub_562EB0(_DWORD *this)
{
  int v2; // [esp+0h] [ebp-Ch]

  v2 = *(_DWORD *)(dword_7947E0 + 20244);
  switch ( v2 )
  {
    case 0:
      return dword_743EFC[*(this + 5)];
    case 5:
      return dword_743ED4[*(this + 5)];
    case 10:
      return dword_743EA8[*(this + 5)];
  }
  sub_5E9F20((char)"0", "..\\Casino\\vpmdisplay.cpp", 1213);
  return 0;
}


//======================================================================
// sub_562F30
// entry 00562f30  size 127  status ok
//======================================================================

int __thiscall sub_562F30(_DWORD *this)
{
  int v2; // [esp+0h] [ebp-Ch]

  v2 = *(_DWORD *)(dword_7947E0 + 20244);
  switch ( v2 )
  {
    case 0:
      return dword_743F74[*(this + 5)];
    case 5:
      return dword_743F4C[*(this + 5)];
    case 10:
      return dword_743F20[*(this + 5)];
  }
  sub_5E9F20((char)"0", "..\\Casino\\vpmdisplay.cpp", 1231);
  return 0;
}


//======================================================================
// sub_562FB0
// entry 00562fb0  size 63  status ok
//======================================================================

int __thiscall sub_562FB0(_DWORD *this)
{
  int result; // eax

  result = (int)this;
  if ( *((_BYTE *)this + 24) )
  {
    (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*this + 116))(*this);
    sub_566210(*(this + 1));
    return sub_566210(*(this + 2));
  }
  return result;
}


//======================================================================
// sub_562FF0
// entry 00562ff0  size 52  status ok
//======================================================================

int __thiscall sub_562FF0(_DWORD *this)
{
  (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*this + 112))(*this);
  sub_566310(*(this + 1));
  return sub_566310(*(this + 2));
}


//======================================================================
// sub_563030
// entry 00563030  size 68  status ok
//======================================================================

int __thiscall sub_563030(_DWORD *this)
{
  sub_5EAF00(*(this + 3));
  sub_565950(255);
  sub_565950(255);
  return sub_562FB0(this);
}


//======================================================================
// sub_563080
// entry 00563080  size 62  status ok
//======================================================================

int __thiscall sub_563080(_DWORD *this)
{
  sub_5EAF00(*(this + 4));
  sub_565950(50);
  sub_565950(50);
  return sub_562FB0(this);
}


//======================================================================
// sub_563100
// entry 00563100  size 158  status ok
//======================================================================

int __thiscall sub_563100(_BYTE *this, int a2)
{
  if ( *(_BYTE *)(dword_79343C + 60) )
  {
    if ( (*(unsigned __int8 (__thiscall **)(_BYTE *, int))(*(_DWORD *)this + 132))(this, a2) )
    {
      *(_BYTE *)(a2 + 4) = 1;
      if ( !*(this + 480) )
        (*(void (__thiscall **)(_BYTE *, int))(*(_DWORD *)this + 176))(this, 2);
    }
    else if ( *(this + 480) )
    {
      (*(void (__thiscall **)(_BYTE *, int))(*(_DWORD *)this + 176))(this, 3);
    }
    else
    {
      (*(void (__thiscall **)(_BYTE *, _DWORD))(*(_DWORD *)this + 176))(this, 0);
    }
  }
  return sub_5F4FC0(a2);
}


//======================================================================
// sub_5631A0
// entry 005631a0  size 70  status ok
//======================================================================

int __thiscall sub_5631A0(_BYTE *this, int a2)
{
  if ( *(_BYTE *)(dword_79343C + 60) && !*(this + 480) )
    (*(void (__thiscall **)(_BYTE *, int))(*(_DWORD *)this + 176))(this, 1);
  return sub_601CA0(a2);
}


//======================================================================
// sub_5631F0
// entry 005631f0  size 68  status ok
//======================================================================

int __thiscall sub_5631F0(_BYTE *this, int a2)
{
  if ( *(_BYTE *)(dword_79343C + 60) && !*(this + 480) )
    (*(void (__thiscall **)(_BYTE *))(*(_DWORD *)this + 192))(this);
  return sub_601E90(a2);
}


//======================================================================
// sub_563240
// entry 00563240  size 276  status ok
//======================================================================

int __thiscall sub_563240(_DWORD *this)
{
  int result; // eax
  int v3; // [esp+Ch] [ebp-8h]
  int i; // [esp+10h] [ebp-4h]

  v3 = 0;
  result = dword_79343C;
  if ( *(_BYTE *)(dword_79343C + 60) )
  {
    result = *(_DWORD *)(dword_79343C + 8);
    if ( !result )
    {
      switch ( *(this + 119) )
      {
        case 0:
          v3 = 1;
          break;
        case 1:
          v3 = 5;
          break;
        case 2:
          v3 = 10;
          break;
        case 3:
          v3 = 25;
          break;
        case 4:
          v3 = 50;
          break;
        default:
          break;
      }
      sub_56A7A0(v3 - 1, 1);
      result = (*(int (__thiscall **)(_DWORD *, int))(*this + 176))(this, 3);
      *((_BYTE *)this + 480) = 1;
      for ( i = 0; i < 5; ++i )
      {
        result = (int)this;
        if ( i != *(this + 119) )
        {
          (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(dword_793440 + 4 * i + 96) + 176))(
            *(_DWORD *)(dword_793440 + 4 * i + 96),
            0);
          result = i;
          *(_BYTE *)(*(_DWORD *)(dword_793440 + 4 * i + 96) + 480) = 0;
        }
      }
    }
  }
  return result;
}


//======================================================================
// sub_563370
// entry 00563370  size 37  status ok
//======================================================================

_DWORD *__thiscall sub_563370(_DWORD *this, int a2)
{
  sub_600A70(a2);
  *this = &VPMultiCycleInsertBill::`vftable';
  return this;
}


//======================================================================
// sub_5633C0
// entry 005633c0  size 70  status ok
//======================================================================

int __thiscall sub_5633C0(_DWORD **this, int a2, int a3)
{
  sub_6004E0(a2, 0);
  (*(void (__thiscall **)(_DWORD, _DWORD))(**(this + 1) + 176))(*(this + 1), 0);
  return (*(int (__thiscall **)(_DWORD))(**(this + 1) + 116))(*(this + 1));
}


//======================================================================
// sub_563410
// entry 00563410  size 40  status ok
//======================================================================

int __thiscall sub_563410(_DWORD **this)
{
  sub_600B30(this);
  return (*(int (__thiscall **)(_DWORD))(**(this + 1) + 112))(*(this + 1));
}


//======================================================================
// sub_563440
// entry 00563440  size 146  status ok
//======================================================================

_DWORD *__thiscall sub_563440(_DWORD *this, int a2)
{
  sub_600A70(a2);
  *this = &VPMultiCycleCashOut::`vftable';
  (*(void (__cdecl **)(int))(*(_DWORD *)dword_162EE84 + 128))(101000);
  return this;
}


//======================================================================
// sub_563500
// entry 00563500  size 70  status ok
//======================================================================

int __thiscall sub_563500(_DWORD **this, int a2, int a3)
{
  sub_6004E0(a2, 0);
  (*(void (__thiscall **)(_DWORD, _DWORD))(**(this + 1) + 176))(*(this + 1), 0);
  return (*(int (__thiscall **)(_DWORD))(**(this + 1) + 116))(*(this + 1));
}


//======================================================================
// sub_563550
// entry 00563550  size 40  status ok
//======================================================================

int __thiscall sub_563550(_DWORD **this)
{
  sub_600B30(this);
  return (*(int (__thiscall **)(_DWORD))(**(this + 1) + 112))(*(this + 1));
}


//======================================================================
// sub_563580
// entry 00563580  size 100  status ok
//======================================================================

int __thiscall sub_563580(int this)
{
  int i; // [esp+4h] [ebp-4h]

  ATL::CCRTHeap::CCRTHeap((ATL::CCRTHeap *)this);
  *(_DWORD *)this = &VPMultiExtraRolloverDisplay::`vftable';
  *(_DWORD *)(this + 4) = 0;
  for ( i = 0; i < 5; ++i )
    *(_DWORD *)(this + 4 * i + 8) = 0;
  *(_DWORD *)(this + 28) = 0;
  *(_BYTE *)(this + 32) = 0;
  return this;
}


//======================================================================
// sub_5635F0
// entry 005635f0  size 276  status ok
//======================================================================

void __thiscall sub_5635F0(CNoTrackObject *this)
{
  void *v2; // [esp+18h] [ebp-24h]
  void (__thiscall ***v3)(_DWORD, int); // [esp+20h] [ebp-1Ch]
  void (__thiscall ***v4)(_DWORD, int); // [esp+28h] [ebp-14h]
  int i; // [esp+2Ch] [ebp-10h]

  *(_DWORD *)this = &VPMultiExtraRolloverDisplay::`vftable';
  v4 = (void (__thiscall ***)(_DWORD, int))*((_DWORD *)this + 1);
  if ( v4 )
    (**v4)(v4, 1);
  for ( i = 0; i < 5; ++i )
  {
    v3 = (void (__thiscall ***)(_DWORD, int))*((_DWORD *)this + i + 2);
    if ( v3 )
      (**v3)(v3, 1);
  }
  v2 = (void *)*((_DWORD *)this + 7);
  if ( v2 )
  {
    sub_566720(v2);
    operator delete(v2);
  }
  CNoTrackObject::~CNoTrackObject(this);
}


//======================================================================
// sub_563710
// entry 00563710  size 495  status ok
//======================================================================

int __thiscall sub_563710(_DWORD *this)
{
  int v1; // eax
  int v2; // eax
  int v3; // eax
  int v5; // [esp+4h] [ebp-3Ch]
  int v6; // [esp+8h] [ebp-38h]
  int v7; // [esp+Ch] [ebp-34h]
  void *v9; // [esp+14h] [ebp-2Ch]
  void *v10; // [esp+1Ch] [ebp-24h]
  void *v11; // [esp+24h] [ebp-1Ch]
  int i; // [esp+30h] [ebp-10h]

  v11 = operator new(0x178u);
  if ( v11 )
  {
    sub_5EAAF0(v11);
    v7 = v1;
  }
  else
  {
    v7 = 0;
  }
  *(this + 1) = v7;
  sub_5EAE80(3220023, 0, 0, 1800, -1);
  v2 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 1) + 84))(*(this + 1));
  (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)*(this + 1) + 80))(*(this + 1), v2 + 154);
  for ( i = 0; i < 5; ++i )
  {
    v10 = operator new(0x178u);
    if ( v10 )
    {
      sub_5EAAF0(v10);
      v6 = v3;
    }
    else
    {
      v6 = 0;
    }
    *(this + i + 2) = v6;
    sub_5EAE80(3220024, dword_744034[i], 268, 1801, -1);
    (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)*(this + i + 2) + 80))(*(this + i + 2), 260);
  }
  v9 = operator new(0x10u);
  if ( v9 )
    v5 = sub_5666E0(v9);
  else
    v5 = 0;
  *(this + 7) = v5;
  sub_5667D0();
  sub_566A60(6);
  return sub_566970(1802);
}


//======================================================================
// sub_563900
// entry 00563900  size 327  status ok
//======================================================================

int __thiscall sub_563900(int this, int a2)
{
  int i; // [esp+4h] [ebp-18h]
  int v5; // [esp+Ch] [ebp-10h]
  int v6; // [esp+10h] [ebp-Ch]
  int v7; // [esp+14h] [ebp-8h]
  int v8; // [esp+18h] [ebp-4h]

  v6 = *(_DWORD *)(*(_DWORD *)(dword_793440 + 184) + 4 * a2 + 1724);
  if ( a2 == -1 )
    return sub_563AD0(this);
  for ( i = 0; i < 5; ++i )
  {
    v8 = sub_564D10(*(_WORD *)(*(_DWORD *)(dword_79343C + 52) + 10 * a2 + 246 + 2 * i));
    (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 4 * i + 8) + 176))(*(_DWORD *)(this + 4 * i + 8), v8);
  }
  v5 = sub_5604B0(v6);
  v7 = sub_5603B0(v5);
  (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 4) + 176))(*(_DWORD *)(this + 4), v7);
  if ( v6 == -1 )
  {
    *(_BYTE *)(this + 32) = 0;
  }
  else
  {
    *(_BYTE *)(this + 32) = 1;
    sub_566B00(v6);
    sub_566AE0(*(_DWORD *)(*(_DWORD *)(dword_793440 + 184) + 4 * a2 + 1920));
  }
  return sub_563A50(this);
}


//======================================================================
// sub_563A50
// entry 00563a50  size 124  status ok
//======================================================================

int __thiscall sub_563A50(int this)
{
  int i; // [esp+4h] [ebp-4h]

  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 4) + 116))(*(_DWORD *)(this + 4));
  for ( i = 0; i < 5; ++i )
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 4 * i + 8) + 116))(*(_DWORD *)(this + 4 * i + 8));
  if ( *(_BYTE *)(this + 32) )
    return sub_5669C0(*(_DWORD *)(this + 28));
  else
    return sub_566A20(*(_DWORD *)(this + 28));
}


//======================================================================
// sub_563AD0
// entry 00563ad0  size 100  status ok
//======================================================================

int __thiscall sub_563AD0(int this)
{
  int i; // [esp+4h] [ebp-4h]

  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 4) + 112))(*(_DWORD *)(this + 4));
  for ( i = 0; i < 5; ++i )
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 4 * i + 8) + 112))(*(_DWORD *)(this + 4 * i + 8));
  return sub_566A20(*(_DWORD *)(this + 28));
}


//======================================================================
// sub_563B80
// entry 00563b80  size 160  status ok
//======================================================================

int __thiscall sub_563B80(int *this, int a2)
{
  int result; // eax

  if ( (*(unsigned __int8 (__thiscall **)(int *, int))(*this + 132))(this, a2) )
  {
    result = *(_DWORD *)(a2 + 24);
    if ( result == 3 )
    {
      *(_BYTE *)(a2 + 4) = 1;
      result = *(_DWORD *)(dword_793440 + 184);
      *(_DWORD *)(result + 4 * *(this + 94) + 2120) = 1;
    }
  }
  else
  {
    result = *(this + 94);
    *(_DWORD *)(*(_DWORD *)(dword_793440 + 184) + 4 * result + 2120) = 0;
  }
  if ( !*(this + 94) )
    return sub_563C20(*(_DWORD *)(dword_793440 + 184));
  return result;
}


//======================================================================
// sub_563C20
// entry 00563c20  size 258  status ok
//======================================================================

int __thiscall sub_563C20(int this)
{
  int i; // [esp+4h] [ebp-8h]
  char v4; // [esp+Bh] [ebp-1h]

  v4 = 0;
  if ( !(unsigned __int8)sub_568790(dword_79343C) || !*(_BYTE *)(this + 2316) )
    return sub_563AD0(*(_DWORD *)(this + 1376));
  for ( i = 0; i < 49; ++i )
  {
    if ( *(_DWORD *)(this + 4 * i + 2120) )
    {
      *(_DWORD *)(this + 2116) = i;
      v4 = 1;
    }
  }
  if ( !v4 )
    *(_DWORD *)(this + 2116) = -1;
  if ( *(_DWORD *)(this + 2116) == -1 || (unsigned __int8)sub_56B950(*(_DWORD *)(this + 2116), 1) )
    return sub_563900(*(_DWORD *)(this + 1376), *(_DWORD *)(this + 2116));
  else
    return sub_563AD0(*(_DWORD *)(this + 1376));
}


//======================================================================
// sub_563E30
// entry 00563e30  size 382  status ok
//======================================================================

void __thiscall sub_563E30(CNoTrackObject *this)
{
  void (__thiscall ***v2)(_DWORD, int); // [esp+1Ch] [ebp-30h]
  void *v3; // [esp+24h] [ebp-28h]
  void (__thiscall ***v4)(_DWORD, int); // [esp+2Ch] [ebp-20h]
  void (__thiscall ***v5)(_DWORD, int); // [esp+34h] [ebp-18h]
  int j; // [esp+38h] [ebp-14h]
  int i; // [esp+3Ch] [ebp-10h]

  *(_DWORD *)this = &VPMultiExtraHandsDisplay::`vftable';
  for ( i = 0; i < 49; ++i )
  {
    v5 = (void (__thiscall ***)(_DWORD, int))*((_DWORD *)this + i + 1);
    if ( v5 )
      (**v5)(v5, 1);
    for ( j = 0; j < 5; ++j )
    {
      v4 = (void (__thiscall ***)(_DWORD, int))*((_DWORD *)this + 5 * i + j + 50);
      if ( v4 )
        (**v4)(v4, 1);
    }
    v3 = (void *)*((_DWORD *)this + i + 295);
    if ( v3 )
    {
      sub_565630(v3);
      operator delete(v3);
    }
  }
  v2 = (void (__thiscall ***)(_DWORD, int))*((_DWORD *)this + 344);
  if ( v2 )
    (**v2)(v2, 1);
  CNoTrackObject::~CNoTrackObject(this);
}


//======================================================================
// sub_563FB0
// entry 00563fb0  size 305  status ok
//======================================================================

int __thiscall sub_563FB0(_BYTE *this)
{
  int result; // eax
  int j; // [esp+4h] [ebp-8h]
  int i; // [esp+8h] [ebp-4h]

  for ( i = 0; i < 49; ++i )
  {
    *(this + i + 1380) = sub_56B950(i, 0);
    for ( j = 0; j < 5; ++j )
    {
      if ( *((_DWORD *)this + 5 * i + j + 50) )
        (*(void (__thiscall **)(_DWORD, int))(**((_DWORD **)this + 5 * i + j + 50) + 176))(
          *((_DWORD *)this + 5 * i + j + 50),
          53);
      if ( *((_DWORD *)this + i + 1) )
      {
        sub_5EAF00(3220010);
        (*(void (__thiscall **)(_DWORD, int))(**((_DWORD **)this + i + 1) + 176))(*((_DWORD *)this + i + 1), 2 * i);
      }
    }
    if ( *((_DWORD *)this + i + 295) )
      sub_566310(*((_DWORD *)this + i + 295));
    result = i + 1;
  }
  *(this + 2316) = 0;
  return result;
}


//======================================================================
// sub_5640F0
// entry 005640f0  size 853  status ok
//======================================================================

int __thiscall sub_5640F0(int this)
{
  int v1; // eax
  int v2; // eax
  int result; // eax
  int v4; // [esp+4h] [ebp-50h]
  int v5; // [esp+8h] [ebp-4Ch]
  int v6; // [esp+Ch] [ebp-48h]
  _AFX_OLE_STATE *v7; // [esp+10h] [ebp-44h]
  void *v9; // [esp+18h] [ebp-3Ch]
  void *v10; // [esp+20h] [ebp-34h]
  void *v11; // [esp+28h] [ebp-2Ch]
  _AFX_OLE_STATE *v12; // [esp+30h] [ebp-24h]
  int j; // [esp+38h] [ebp-1Ch]
  int i; // [esp+3Ch] [ebp-18h]
  int v15; // [esp+40h] [ebp-14h] BYREF
  int v16; // [esp+44h] [ebp-10h] BYREF
  int v17; // [esp+50h] [ebp-4h]

  for ( i = 0; i < 49; ++i )
  {
    v12 = (_AFX_OLE_STATE *)operator new(0x17Cu);
    v17 = 0;
    if ( v12 )
      v7 = _AFX_OLE_STATE::_AFX_OLE_STATE(v12);
    else
      v7 = 0;
    v17 = -1;
    *(_DWORD *)(this + 4 * i + 4) = v7;
    sub_5EAE80(3220010, 0, 0, 20, -1);
    (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 4 * i + 4) + 176))(*(_DWORD *)(this + 4 * i + 4), 2 * i);
    *(_DWORD *)(*(_DWORD *)(this + 4 * i + 4) + 376) = i;
    v1 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 4 * i + 4) + 84))(*(_DWORD *)(this + 4 * i + 4));
    (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 4 * i + 4) + 80))(*(_DWORD *)(this + 4 * i + 4), v1 - 6);
    for ( j = 0; j < 5; ++j )
    {
      sub_564450(i, j, &v15, &v16);
      v11 = operator new(0x178u);
      v17 = 1;
      if ( v11 )
      {
        sub_5EAAF0(v11);
        v6 = v2;
      }
      else
      {
        v6 = 0;
      }
      v17 = -1;
      *(_DWORD *)(this + 20 * i + 200 + 4 * j) = v6;
      sub_5EAE80(3220022, v15, v16, 30, -1);
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 20 * i + 200 + 4 * j) + 176))(
        *(_DWORD *)(this + 20 * i + 200 + 4 * j),
        53);
    }
    v10 = operator new(0x40u);
    v17 = 2;
    if ( v10 )
      v5 = sub_5655D0(v10);
    else
      v5 = 0;
    v17 = -1;
    *(_DWORD *)(this + 4 * i + 1180) = v5;
    sub_5656F0();
    sub_565A50(i + 100);
    sub_5664C0(0);
    sub_5658C0(40);
    *(_DWORD *)(this + 4 * i + 1724) = -1;
    *(_DWORD *)(this + 4 * i + 1920) = 0;
  }
  v9 = operator new(0x24u);
  v17 = 3;
  if ( v9 )
    v4 = sub_563580((int)v9);
  else
    v4 = 0;
  v17 = -1;
  *(_DWORD *)(this + 1376) = v4;
  sub_563710(*(_DWORD **)(this + 1376));
  result = sub_563AD0(*(_DWORD *)(this + 1376));
  *(_BYTE *)(this + 2316) = 1;
  return result;
}


//======================================================================
// sub_564450
// entry 00564450  size 58  status ok
//======================================================================

int __stdcall sub_564450(int a1, int a2, _DWORD *a3, int *a4)
{
  int result; // eax

  *a3 = dword_744098[10 * a1 + 2 * a2];
  result = dword_74409C[10 * a1 + 2 * a2] - 6;
  *a4 = result;
  return result;
}


//======================================================================
// sub_564490
// entry 00564490  size 297  status ok
//======================================================================

int __thiscall sub_564490(_DWORD **this)
{
  int result; // eax
  int j; // [esp+4h] [ebp-8h]
  int k; // [esp+4h] [ebp-8h]
  int i; // [esp+8h] [ebp-4h]

  for ( i = 0; i < 49; ++i )
  {
    if ( *((_BYTE *)this + i + 1380) )
    {
      (*(void (__thiscall **)(_DWORD))(**(this + i + 1) + 116))(*(this + i + 1));
      sub_5EB5D0(255);
      for ( j = 0; j < 5; ++j )
      {
        (*(void (__thiscall **)(_DWORD))(**(this + 5 * i + j + 50) + 116))(*(this + 5 * i + j + 50));
        sub_5EB5D0(255);
      }
    }
    else
    {
      sub_5EB5D0(50);
      for ( k = 0; k < 5; ++k )
        sub_5EB5D0(50);
    }
    result = i + 1;
  }
  return result;
}


//======================================================================
// sub_5645C0
// entry 005645c0  size 417  status ok
//======================================================================

int __thiscall sub_5645C0(unsigned __int8 *this, unsigned __int8 a2)
{
  int result; // eax
  int m; // [esp+4h] [ebp-14h]
  int j; // [esp+4h] [ebp-14h]
  __int16 v6; // [esp+Ch] [ebp-Ch]
  int k; // [esp+10h] [ebp-8h]
  int i; // [esp+10h] [ebp-8h]
  int v9; // [esp+14h] [ebp-4h]
  int v10; // [esp+14h] [ebp-4h]

  result = a2;
  if ( a2 )
  {
    for ( i = 0; i < 49; ++i )
    {
      if ( *(this + i + 1380) )
      {
        for ( j = 0; j < 5; ++j )
        {
          v10 = sub_564D10(*(_WORD *)(*(_DWORD *)(dword_79343C + 52) + 10 * i + 246 + 2 * j));
          (*(void (__thiscall **)(_DWORD, int))(**((_DWORD **)this + 5 * i + j + 50) + 176))(
            *((_DWORD *)this + 5 * i + j + 50),
            v10);
        }
      }
      result = i + 1;
    }
  }
  else
  {
    for ( k = 0; k < 49; ++k )
    {
      result = *(this + k + 1380);
      if ( *(this + k + 1380) )
      {
        for ( m = 0; m < 5; ++m )
        {
          v6 = *(_WORD *)(*(_DWORD *)(dword_79343C + 52) + 2 * m + 940);
          if ( v6 )
          {
            v9 = sub_564D10(v6);
            result = (*(int (__thiscall **)(_DWORD, int))(**((_DWORD **)this + 5 * k + m + 50) + 176))(
                       *((_DWORD *)this + 5 * k + m + 50),
                       v9);
          }
          else
          {
            result = (*(int (__thiscall **)(_DWORD, int))(**((_DWORD **)this + 5 * k + m + 50) + 176))(
                       *((_DWORD *)this + 5 * k + m + 50),
                       53);
          }
        }
      }
    }
  }
  return result;
}


//======================================================================
// sub_564770
// entry 00564770  size 268  status ok
//======================================================================

int __thiscall sub_564770(_DWORD **this, int a2, int a3, char a4)
{
  int result; // eax
  __int16 v6; // [esp+8h] [ebp-8h]
  int v7; // [esp+Ch] [ebp-4h]
  int v8; // [esp+Ch] [ebp-4h]

  if ( a4 )
  {
    v7 = sub_564D10(*(_WORD *)(*(_DWORD *)(dword_79343C + 52) + 10 * a2 + 246 + 2 * a3));
    result = (*(int (__thiscall **)(_DWORD, int))(**(this + 5 * a2 + a3 + 50) + 176))(*(this + 5 * a2 + a3 + 50), v7);
  }
  else
  {
    v6 = *(_WORD *)(*(_DWORD *)(dword_79343C + 52) + 2 * a3 + 940);
    if ( v6 )
    {
      v8 = sub_564D10(v6);
      result = (*(int (__thiscall **)(_DWORD, int))(**(this + 5 * a2 + a3 + 50) + 176))(*(this + 5 * a2 + a3 + 50), v8);
    }
    else
    {
      result = (*(int (__thiscall **)(_DWORD, int))(**(this + 5 * a2 + a3 + 50) + 176))(*(this + 5 * a2 + a3 + 50), 53);
    }
  }
  *((_BYTE *)this + 5 * a2 + a3 + 1429) = 1;
  return result;
}


//======================================================================
// sub_564880
// entry 00564880  size 345  status ok
//======================================================================

int __thiscall sub_564880(_DWORD *this, int a2)
{
  int result; // eax
  int v4; // [esp+4h] [ebp-8h]
  int v5; // [esp+8h] [ebp-4h]

  result = sub_56B950(a2, 0);
  if ( (_BYTE)result )
  {
    v4 = sub_5604B0(*(this + a2 + 431));
    sub_5EAF00(v4);
    *((_BYTE *)this + a2 + 1674) = 1;
    if ( (int)*(this + a2 + 431) < 0 )
    {
      return (*(int (__thiscall **)(_DWORD, int))(*(_DWORD *)*(this + a2 + 1) + 176))(*(this + a2 + 1), 2 * a2);
    }
    else
    {
      if ( !*(_BYTE *)(dword_79343C + 46) )
        sub_562A00((_DWORD *)dword_793440, *(this + a2 + 431));
      (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)*(this + a2 + 1) + 176))(*(this + a2 + 1), 2 * a2 + 1);
      v5 = sub_56B710(a2, this + a2 + 431);
      sub_560360((_DWORD *)dword_793440, *(this + a2 + 431), v5);
      sub_5664C0(v5);
      return sub_566210(*(this + a2 + 295));
    }
  }
  return result;
}


//======================================================================
// sub_5649E0
// entry 005649e0  size 294  status ok
//======================================================================

int __thiscall sub_5649E0(_BYTE *this)
{
  int result; // eax
  int k; // [esp+4h] [ebp-8h]
  int i; // [esp+8h] [ebp-4h]
  int j; // [esp+8h] [ebp-4h]

  for ( i = 0; i < 49; ++i )
  {
    sub_566310(*((_DWORD *)this + i + 295));
    if ( *(this + i + 1380) )
    {
      sub_5EAF00(3220010);
      (*(void (__thiscall **)(_DWORD, int))(**((_DWORD **)this + i + 1) + 176))(*((_DWORD *)this + i + 1), 2 * i);
      *(this + i + 1674) = 0;
    }
    result = i + 1;
  }
  for ( j = 0; j < 49; ++j )
  {
    result = (unsigned __int8)*(this + j + 1380);
    if ( *(this + j + 1380) )
    {
      for ( k = 0; k < 5; ++k )
      {
        if ( *(_WORD *)(*(_DWORD *)(dword_79343C + 52) + 2 * k + 940) )
        {
          result = k + 5 * j;
          *(this + result + 1429) = 1;
        }
        else
        {
          result = (int)this;
          *(this + 5 * j + k + 1429) = 0;
        }
      }
    }
  }
  *(this + 2316) = 1;
  return result;
}


//======================================================================
// sub_564B10
// entry 00564b10  size 181  status ok
//======================================================================

int __thiscall sub_564B10(_DWORD *this)
{
  int result; // eax
  int v2; // eax
  int v4; // [esp+4h] [ebp-8h] BYREF
  int i; // [esp+8h] [ebp-4h]

  result = dword_79343C;
  if ( *(int *)(dword_79343C + 20) < 1 )
  {
    for ( i = 0; i < 49; ++i )
    {
      *(this + i + 431) = -1;
      *(this + i + 480) = 0;
      result = i + 1;
    }
  }
  else
  {
    for ( i = 0; i < 49; ++i )
    {
      result = *((unsigned __int8 *)this + i + 1380);
      if ( *((_BYTE *)this + i + 1380) )
      {
        v2 = sub_56B710(i, &v4);
        *(this + i + 480) = v2;
        result = i;
        *(this + i + 431) = v4;
      }
    }
  }
  return result;
}


//======================================================================
// sub_564BD0
// entry 00564bd0  size 311  status ok
//======================================================================

int __thiscall sub_564BD0(_DWORD *this, int a2)
{
  int j; // [esp+4h] [ebp-Ch]
  char v5; // [esp+Bh] [ebp-5h]
  int i; // [esp+Ch] [ebp-4h]

  for ( i = 0; i < 49; ++i )
  {
    if ( *((_BYTE *)this + i + 1380) )
    {
      v5 = 0;
      for ( j = 0; j < 5; ++j )
      {
        if ( j == 4 && !*((_BYTE *)this + i + 1674) )
        {
          if ( *((_BYTE *)this + 5 * i + 1433) )
          {
            sub_564880(this, i);
            if ( !*(_BYTE *)(dword_79343C + 25) )
              return (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)a2 + 28))(a2, 0);
          }
          else
          {
            v5 = 1;
          }
        }
        if ( !*((_BYTE *)this + 5 * i + j + 1429) )
        {
          sub_564770((_DWORD **)this, i, j, 1);
          if ( v5 )
            sub_564880(this, i);
          if ( !*(_BYTE *)(dword_79343C + 25) )
            return (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)a2 + 28))(a2, 0);
        }
      }
    }
  }
  return (*(int (__thiscall **)(int, int, _DWORD))(*(_DWORD *)a2 + 8))(a2, 6, 0);
}


//======================================================================
// sub_564D10
// entry 00564d10  size 326  status ok
//======================================================================

int __stdcall sub_564D10(__int16 a1)
{
  int result; // eax
  int v2; // [esp+Ch] [ebp-10h]
  int v3; // [esp+10h] [ebp-Ch]
  int v4; // [esp+14h] [ebp-8h]

  v3 = sub_641280(a1);
  v2 = sub_641290(a1);
  if ( sub_5593D0(a1) != 20 )
  {
LABEL_10:
    if ( v3 == 15 )
      return 52;
    switch ( v2 )
    {
      case 1:
        v4 = 13;
        break;
      case 2:
        v4 = 26;
        break;
      case 3:
        v4 = 39;
        break;
      case 4:
        v4 = 0;
        break;
      default:
        sub_5E9F20((char)"false", "..\\Casino\\vpmdisplay.cpp", 2015);
        v4 = 0;
        break;
    }
    if ( v3 == 1 || v3 == 14 )
      return v4;
    else
      return v4 + v3 - 1;
  }
  if ( v3 != 2 )
  {
LABEL_8:
    if ( v3 == 15 )
      return 58;
    goto LABEL_10;
  }
  switch ( v2 )
  {
    case 1:
      result = 55;
      break;
    case 2:
      result = 56;
      break;
    case 3:
      result = 57;
      break;
    case 4:
      result = 54;
      break;
    default:
      goto LABEL_8;
  }
  return result;
}


//======================================================================
// sub_564F10
// entry 00564f10  size 42  status ok
//======================================================================

Concurrency::details::_TaskCollection *__thiscall sub_564F10(Concurrency::details::_TaskCollection *this)
{
  Concurrency::details::_TaskCollection::_TaskCollection(this);
  *(_DWORD *)this = &VPMultiCardDisplay::`vftable';
  *((_BYTE *)this + 10) = 0;
  return this;
}


//======================================================================
// sub_564F60
// entry 00564f60  size 77  status ok
//======================================================================

int __stdcall sub_564F60(int a1)
{
  (*(void (__thiscall **)(Concurrency::details::ContextBase *, int, _DWORD, _DWORD, int, int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)dword_162EE84 + 128))(
    dword_162EE84,
    3220062,
    0,
    0,
    5,
    1,
    1.0,
    0.5,
    0);
  return sub_644660(a1);
}


//======================================================================
// sub_564FB0
// entry 00564fb0  size 47  status ok
//======================================================================

int __thiscall sub_564FB0(__int16 *this, int a2)
{
  sub_5694F0(*(this + 200));
  return sub_6447E0(a2);
}


//======================================================================
// sub_564FE0
// entry 00564fe0  size 51  status ok
//======================================================================

bool sub_564FE0()
{
  return *(_DWORD *)(dword_79343C + 20) == 1 && !*(_DWORD *)(*(_DWORD *)(dword_793438 + 4) + 4);
}


//======================================================================
// sub_565020
// entry 00565020  size 433  status ok
//======================================================================

int __thiscall sub_565020(__int16 *this)
{
  int v1; // eax
  int v3; // [esp+4h] [ebp-20h]
  _DWORD v5[5]; // [esp+10h] [ebp-14h]

  v5[0] = -1;
  v5[1] = 1;
  v5[2] = 2;
  v5[3] = 3;
  v5[4] = 0;
  if ( sub_641280(*(this + 200)) == 14 )
    v3 = 1;
  else
    v3 = sub_641280(*(this + 200));
  v1 = sub_641290(*(this + 200));
  (*(void (__thiscall **)(__int16 *, int))(*(_DWORD *)this + 176))(this, 13 * v5[v1] + v3 - 1);
  if ( sub_641280(*(this + 200)) == 15 )
    (*(void (__thiscall **)(__int16 *, int))(*(_DWORD *)this + 176))(this, 52);
  if ( sub_5593D0(*(this + 200)) == 20 )
  {
    if ( sub_641280(*(this + 200)) == 2 )
    {
      switch ( sub_641290(*(this + 200)) )
      {
        case 1:
          (*(void (__thiscall **)(__int16 *, int))(*(_DWORD *)this + 176))(this, 55);
          break;
        case 2:
          (*(void (__thiscall **)(__int16 *, int))(*(_DWORD *)this + 176))(this, 56);
          break;
        case 3:
          (*(void (__thiscall **)(__int16 *, int))(*(_DWORD *)this + 176))(this, 57);
          break;
        case 4:
          (*(void (__thiscall **)(__int16 *, int))(*(_DWORD *)this + 176))(this, 54);
          break;
        default:
          return sub_5EB570(this);
      }
    }
    else if ( sub_641280(*(this + 200)) == 15 )
    {
      (*(void (__thiscall **)(__int16 *, int))(*(_DWORD *)this + 176))(this, 58);
    }
  }
  return sub_5EB570(this);
}


//======================================================================
// sub_5651F0
// entry 005651f0  size 19  status ok
//======================================================================

int __thiscall sub_5651F0(void *this)
{
  return sub_5EB5A0(this, this);
}


//======================================================================
// sub_565210
// entry 00565210  size 37  status ok
//======================================================================

_DWORD *__thiscall sub_565210(_DWORD *this, int a2)
{
  sub_6010A0(a2);
  *this = &VPMultiDealCardCycle::`vftable';
  return this;
}


//======================================================================
// sub_565240
// entry 00565240  size 121  status ok
//======================================================================

int __thiscall sub_565240(void *this)
{
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(dword_793440 + 4 * *(_DWORD *)(dword_793440 + 248) + 28) + 112))(*(_DWORD *)(dword_793440 + 4 * *(_DWORD *)(dword_793440 + 248) + 28));
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(dword_793440 + 4 * *(_DWORD *)(dword_793440 + 248) + 8) + 116))(*(_DWORD *)(dword_793440 + 4 * *(_DWORD *)(dword_793440 + 248) + 8));
  return sub_6005D0(this);
}


//======================================================================
// sub_5652C0
// entry 005652c0  size 634  status ok
//======================================================================

int __thiscall sub_5652C0(void *this)
{
  int result; // eax
  int v2; // eax
  int v3; // [esp+8h] [ebp-Ch]

  switch ( unknown_libname_843(this) )
  {
    case 0:
      sub_5602A0();
      *(_BYTE *)(dword_79343C + 24) = 1;
      *(_BYTE *)(dword_79343C + 25) = 0;
      sub_5649E0(*(_BYTE **)(dword_793440 + 184));
      *(_DWORD *)(dword_793440 + 248) = 0;
      result = (*(int (__thiscall **)(void *, int, _DWORD))(*(_DWORD *)this + 8))(this, 1, 0);
      break;
    case 1:
      result = sub_5624E0((_DWORD *)dword_793440, (int)this);
      break;
    case 2:
      result = (*(int (__thiscall **)(void *, int, _DWORD))(*(_DWORD *)this + 8))(this, 1, 0);
      break;
    case 3:
      if ( *(int *)(dword_79343C + 20) >= 1 )
      {
        sub_562010((_DWORD *)dword_793440, 1u);
        sub_564B10(*(_DWORD **)(dword_793440 + 184));
        if ( unknown_libname_543(*(_DWORD *)(dword_79343C + 52)) >= 1 )
        {
          v3 = dword_793440 + 244;
          v2 = sub_5629A0();
          (*(void (__thiscall **)(Concurrency::details::ContextBase *, int, _DWORD, _DWORD, int, int, _DWORD, _DWORD, int))(*(_DWORD *)dword_162EE84 + 128))(
            dword_162EE84,
            v2,
            0,
            0,
            10,
            100,
            1.0,
            0.5,
            v3);
        }
        goto LABEL_8;
      }
      result = (*(int (__thiscall **)(void *, int, _DWORD))(*(_DWORD *)this + 8))(this, 6, 0);
      break;
    case 4:
      result = sub_564BD0(*(_DWORD **)(dword_793440 + 184), (int)this);
      break;
    case 5:
LABEL_8:
      result = (*(int (__thiscall **)(void *, int, _DWORD))(*(_DWORD *)this + 8))(this, 4, 0);
      break;
    case 6:
      if ( unknown_libname_543(*(_DWORD *)(dword_79343C + 52)) >= 1 )
        sub_5F4510(*(_DWORD *)(dword_793440 + 244), 1);
      sub_5696D0(dword_79343C);
      *(_BYTE *)(dword_79343C + 24) = 0;
      if ( *(_BYTE *)(dword_79343C + 25) )
      {
        sub_5F4510(*(_DWORD *)(dword_793440 + 232), 1);
        sub_5F4510(*(_DWORD *)(dword_793440 + 236), 1);
        (*(void (__thiscall **)(Concurrency::details::ContextBase *, int, _DWORD, _DWORD, int, int, _DWORD, _DWORD, int))(*(_DWORD *)dword_162EE84 + 128))(
          dword_162EE84,
          3220063,
          0,
          0,
          10,
          1,
          1.0,
          0.5,
          dword_793440 + 240);
      }
      result = sub_5FC420(0);
      break;
    default:
      result = sub_5E9F20((char)"false", "..\\Casino\\vpmdisplay.cpp", 2180);
      break;
  }
  return result;
}


//======================================================================
// sub_5655D0
// entry 005655d0  size 95  status ok
//======================================================================

_DWORD *__thiscall sub_5655D0(_DWORD *this)
{
  int i; // [esp+4h] [ebp-4h]

  for ( i = 0; i < 8; ++i )
    *(this + i) = 0;
  *(this + 8) = 0;
  *(this + 9) = 0;
  *(this + 12) = 3220044;
  *(this + 13) = 0;
  return this;
}


//======================================================================
// sub_565630
// entry 00565630  size 183  status ok
//======================================================================

int __thiscall sub_565630(int this)
{
  int result; // eax
  int i; // [esp+28h] [ebp-4h]

  for ( i = 0; i < 8; ++i )
  {
    if ( *(_DWORD *)(this + 4 * i) )
      (***(void (__thiscall ****)(_DWORD, int))(this + 4 * i))(*(_DWORD *)(this + 4 * i), 1);
  }
  if ( *(_DWORD *)(this + 32) )
    (***(void (__thiscall ****)(_DWORD, int))(this + 32))(*(_DWORD *)(this + 32), 1);
  result = *(_DWORD *)(this + 36);
  if ( result )
    return (***(int (__thiscall ****)(_DWORD, int))(this + 36))(*(_DWORD *)(this + 36), 1);
  return result;
}


//======================================================================
// sub_5656F0
// entry 005656f0  size 459  status ok
//======================================================================

void __thiscall sub_5656F0(_DWORD *this)
{
  int v1; // eax
  int v2; // eax
  int v3; // [esp+4h] [ebp-2Ch]
  int v4; // [esp+8h] [ebp-28h]
  void *v6; // [esp+10h] [ebp-20h]
  void *v7; // [esp+18h] [ebp-18h]
  int i; // [esp+20h] [ebp-10h]
  int j; // [esp+20h] [ebp-10h]

  for ( i = 0; i < 8; ++i )
  {
    v7 = operator new(0x178u);
    if ( v7 )
    {
      sub_5EAAF0(v7);
      v4 = v1;
    }
    else
    {
      v4 = 0;
    }
    *(this + i) = v4;
    sub_5EAE80(*(this + 12), 0, 0, 1802, -1);
    (*(void (__thiscall **)(_DWORD, _DWORD))(*(_DWORD *)*(this + i) + 176))(*(this + i), 0);
    (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + i) + 112))(*(this + i));
    *((_BYTE *)this + i + 56) = 0;
  }
  for ( j = 0; j < 2; ++j )
  {
    v6 = operator new(0x178u);
    if ( v6 )
    {
      sub_5EAAF0(v6);
      v3 = v2;
    }
    else
    {
      v3 = 0;
    }
    *(this + j + 8) = v3;
    sub_5EAE80(*(this + 12), 0, 0, 1802, -1);
    (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)*(this + j + 8) + 176))(*(this + j + 8), 10);
    (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + j + 8) + 112))(*(this + j + 8));
  }
}


//======================================================================
// sub_5658C0
// entry 005658c0  size 131  status ok
//======================================================================

int __thiscall sub_5658C0(_DWORD **this, int a2)
{
  int result; // eax
  int i; // [esp+4h] [ebp-4h]
  int j; // [esp+4h] [ebp-4h]

  for ( i = 0; i < 8; ++i )
  {
    (*(void (__thiscall **)(_DWORD, int))(**(this + i) + 108))(*(this + i), a2);
    result = i + 1;
  }
  for ( j = 0; j < 2; ++j )
  {
    (*(void (__thiscall **)(_DWORD, int))(**(this + j + 8) + 108))(*(this + j + 8), a2);
    result = j + 1;
  }
  return result;
}


//======================================================================
// sub_565950
// entry 00565950  size 104  status ok
//======================================================================

int __stdcall sub_565950(char a1)
{
  int result; // eax
  int i; // [esp+4h] [ebp-4h]
  int j; // [esp+4h] [ebp-4h]

  for ( i = 0; i < 8; ++i )
  {
    sub_5EB5D0(a1);
    result = i + 1;
  }
  for ( j = 0; j < 2; ++j )
    result = sub_5EB5D0(a1);
  return result;
}


//======================================================================
// sub_5659C0
// entry 005659c0  size 115  status ok
//======================================================================

int __thiscall sub_5659C0(_DWORD *this, int a2)
{
  int result; // eax

  if ( !byte_793430 )
    return a2;
  switch ( *(this + 10) )
  {
    case 0:
      result = 715000;
      break;
    case 1:
      result = 1000;
      break;
    case 2:
      result = 250;
      break;
    case 3:
      result = (int)&unk_14CA634;
      break;
    case 4:
      result = 10;
      break;
    case 5:
      result = 1000;
      break;
    case 6:
      result = 100000;
      break;
    default:
      result = 2000;
      break;
  }
  return result;
}


//======================================================================
// sub_565A50
// entry 00565a50  size 502  status ok
//======================================================================

_DWORD *__thiscall sub_565A50(_DWORD *this, int a2)
{
  _DWORD *result; // eax
  int i; // [esp+8h] [ebp-Ch]
  int j; // [esp+8h] [ebp-Ch]
  _DWORD v6[2]; // [esp+Ch] [ebp-8h]

  v6[0] = 0;
  v6[1] = 0;
  *(this + 10) = a2;
  switch ( *(this + 10) )
  {
    case 0:
      result = this;
      *(this + 12) = 3220044;
      *(this + 13) = 0;
      v6[0] = 93;
      break;
    case 1:
      *(this + 12) = 3220044;
      result = this;
      *(this + 13) = 1;
      break;
    case 2:
      *(this + 13) = 1;
      *(this + 12) = 3220043;
      result = (_DWORD *)sub_565CF0(351);
      break;
    case 3:
      *(this + 13) = 1;
      *(this + 12) = 3220045;
      result = (_DWORD *)sub_565CF0(351);
      break;
    case 4:
      *(this + 13) = 0;
      *(this + 12) = 3220043;
      v6[0] = 419;
      result = (_DWORD *)sub_565CF0(351);
      break;
    case 5:
      *(this + 13) = 0;
      *(this + 12) = 3220043;
      v6[0] = 329;
      result = (_DWORD *)sub_565CF0(293);
      break;
    case 6:
      *(this + 13) = 0;
      *(this + 12) = 3220043;
      v6[0] = 329;
      result = (_DWORD *)sub_565CF0(321);
      break;
    default:
      *(this + 13) = 2;
      *(this + 12) = 3220044;
      result = (_DWORD *)sub_565CF0(dword_7437F4[2 * *(this + 10)] + 4);
      break;
  }
  for ( i = 0; i < 8; ++i )
    result = (_DWORD *)sub_5EAF00(*(this + 12));
  for ( j = 0; j < 2; ++j )
  {
    sub_5EAF00(*(this + 12));
    (*(void (__thiscall **)(_DWORD, _DWORD))(*(_DWORD *)*(this + j + 8) + 72))(*(this + j + 8), v6[j]);
    result = (_DWORD *)(j + 1);
  }
  return result;
}


//======================================================================
// sub_565C70
// entry 00565c70  size 25  status ok
//======================================================================

bool __thiscall sub_565C70(_DWORD *this)
{
  return *(this + 13) == 0;
}


//======================================================================
// sub_565CF0
// entry 00565cf0  size 118  status ok
//======================================================================

int __thiscall sub_565CF0(_DWORD **this, int a2)
{
  int i; // [esp+4h] [ebp-4h]

  for ( i = 0; i < 8; ++i )
    (*(void (__thiscall **)(_DWORD, int))(**(this + i) + 80))(*(this + i), a2);
  (*(void (__thiscall **)(_DWORD, int))(**(this + 8) + 80))(*(this + 8), a2);
  return (*(int (__thiscall **)(_DWORD, int))(**(this + 9) + 80))(*(this + 9), a2);
}


//======================================================================
// sub_565D90
// entry 00565d90  size 146  status ok
//======================================================================

int __thiscall sub_565D90(_DWORD *this, int a2)
{
  if ( sub_565C70(this) )
  {
    if ( sub_566380(this) > 4 )
      return dword_743CC8[a2];
    else
      return dword_743CAC[a2];
  }
  else if ( sub_566380(this) > 4 )
  {
    sub_5E9F20((char)"0", "..\\Casino\\vpmdisplay.cpp", 2432);
    if ( sub_566380(this) > 6 )
      return 0;
    else
      return dword_743CEC[a2];
  }
  else
  {
    return dword_743CEC[a2];
  }
}


//======================================================================
// sub_565E30
// entry 00565e30  size 78  status ok
//======================================================================

int __thiscall sub_565E30(_DWORD *this, int a2)
{
  int v2; // esi

  v2 = dword_743B10[2 * *(this + 10) - 200] + 20;
  return v2 - 6 * sub_566380(this) / 2 + 6 * a2;
}


//======================================================================
// sub_565E80
// entry 00565e80  size 49  status ok
//======================================================================

int __stdcall sub_565E80(unsigned int a1)
{
  if ( a1 > 2 )
    return dword_743D08[0] + 9 * a1;
  else
    return dword_743D08[a1];
}


//======================================================================
// sub_565EC0
// entry 00565ec0  size 454  status ok
//======================================================================

int __thiscall sub_565EC0(_DWORD **this, unsigned int a2)
{
  int result; // eax

  switch ( sub_566380(this) )
  {
    case 1:
    case 2:
    case 3:
    case 4:
      (*(void (__thiscall **)(_DWORD, _DWORD))(**(this + 8) + 72))(*(this + 8), 0);
      (*(void (__thiscall **)(_DWORD, _DWORD))(**(this + 9) + 72))(*(this + 9), 0);
      if ( a2 < 4 )
        result = dword_743D14[a2];
      else
        result = 0;
      break;
    case 5:
      (*(void (__thiscall **)(_DWORD, int))(**(this + 8) + 72))(*(this + 8), 264);
      (*(void (__thiscall **)(_DWORD, _DWORD))(**(this + 9) + 72))(*(this + 9), 0);
      if ( a2 <= 4 )
        result = dword_743D24[a2];
      else
        result = 0;
      break;
    case 6:
      (*(void (__thiscall **)(_DWORD, int))(**(this + 8) + 72))(*(this + 8), 274);
      (*(void (__thiscall **)(_DWORD, _DWORD))(**(this + 9) + 72))(*(this + 9), 0);
      if ( a2 < 6 )
        result = dword_743D38[a2];
      else
        result = 0;
      break;
    case 7:
      (*(void (__thiscall **)(_DWORD, int))(**(this + 8) + 72))(*(this + 8), 254);
      (*(void (__thiscall **)(_DWORD, int))(**(this + 9) + 72))(*(this + 9), 289);
      if ( a2 <= 6 )
        result = dword_743D50[a2];
      else
        result = 0;
      break;
    case 8:
      (*(void (__thiscall **)(_DWORD, int))(**(this + 8) + 72))(*(this + 8), 264);
      (*(void (__thiscall **)(_DWORD, int))(**(this + 9) + 72))(*(this + 9), 299);
      if ( a2 < 8 )
        result = dword_743D6C[a2];
      else
        result = 0;
      break;
    default:
      result = 245;
      break;
  }
  return result;
}


//======================================================================
// sub_5660B0
// entry 005660b0  size 82  status ok
//======================================================================

int __thiscall sub_5660B0(void *this, unsigned int a2)
{
  if ( sub_566380(this) <= 4 && a2 < 4 )
    return dword_743D8C[a2];
  if ( a2 > 5 )
    return 0;
  return dword_743DA4[a2];
}


//======================================================================
// sub_566110
// entry 00566110  size 94  status ok
//======================================================================

int __thiscall sub_566110(void *this, unsigned int a2)
{
  if ( sub_566380(this) > 4 )
  {
    if ( a2 <= 5 )
      return dword_743DBC[a2] + 159;
  }
  else if ( a2 < 4 )
  {
    return dword_743DD4[a2] + 159;
  }
  return 0;
}


//======================================================================
// sub_566170
// entry 00566170  size 126  status ok
//======================================================================

int __thiscall sub_566170(_DWORD *this, unsigned int a2)
{
  int result; // eax

  switch ( *(this + 10) )
  {
    case 0:
    case 1:
      result = sub_565D90(this, a2);
      break;
    case 2:
      result = sub_565E80(a2);
      break;
    case 3:
      result = sub_565EC0((_DWORD **)this, a2);
      break;
    case 4:
      result = sub_5660B0(this, a2);
      break;
    case 5:
    case 6:
      result = sub_566110(this, a2);
      break;
    default:
      result = sub_565E30(this, a2);
      break;
  }
  return result;
}


//======================================================================
// sub_566210
// entry 00566210  size 248  status ok
//======================================================================

int __thiscall sub_566210(_DWORD **this)
{
  int v3; // [esp+4h] [ebp-8h]
  int i; // [esp+8h] [ebp-4h]

  v3 = sub_566380(this);
  for ( i = 0; i < 8; ++i )
  {
    if ( *((_BYTE *)this + i + 56) )
      (*(void (__thiscall **)(_DWORD))(**(this + i) + 116))(*(this + i));
    else
      (*(void (__thiscall **)(_DWORD))(**(this + i) + 112))(*(this + i));
  }
  if ( v3 > 4 )
  {
    (*(void (__thiscall **)(_DWORD))(**(this + 8) + 116))(*(this + 8));
    if ( v3 > 6 )
      return (*(int (__thiscall **)(_DWORD))(**(this + 9) + 116))(*(this + 9));
    else
      return (*(int (__thiscall **)(_DWORD))(**(this + 9) + 112))(*(this + 9));
  }
  else
  {
    (*(void (__thiscall **)(_DWORD))(**(this + 8) + 112))(*(this + 8));
    return (*(int (__thiscall **)(_DWORD))(**(this + 9) + 112))(*(this + 9));
  }
}


//======================================================================
// sub_566310
// entry 00566310  size 104  status ok
//======================================================================

int __thiscall sub_566310(_DWORD **this)
{
  int i; // [esp+4h] [ebp-4h]

  for ( i = 0; i < 8; ++i )
    (*(void (__thiscall **)(_DWORD))(**(this + i) + 112))(*(this + i));
  (*(void (__thiscall **)(_DWORD))(**(this + 8) + 112))(*(this + 8));
  return (*(int (__thiscall **)(_DWORD))(**(this + 9) + 112))(*(this + 9));
}


//======================================================================
// sub_566380
// entry 00566380  size 143  status ok
//======================================================================

int __thiscall sub_566380(int *this)
{
  if ( *(this + 11) <= 9 )
    return 1;
  if ( *(this + 11) <= 99 )
    return 2;
  if ( *(this + 11) <= 999 )
    return 3;
  if ( *(this + 11) <= 9999 )
    return 4;
  if ( *(this + 11) <= 99999 )
    return 5;
  if ( *(this + 11) <= 999999 )
    return 6;
  if ( *(this + 11) > (int)&unk_98967F )
    return 8;
  return 7;
}


//======================================================================
// sub_566410
// entry 00566410  size 174  status ok
//======================================================================

void __thiscall sub_566410(_DWORD *this)
{
  int v1; // eax
  int i; // [esp+4h] [ebp-4h]
  signed int j; // [esp+4h] [ebp-4h]

  for ( i = 0; i < 8; ++i )
    *((_BYTE *)this + i + 56) = 0;
  for ( j = 0; j < 6; ++j )
  {
    sub_5EAF00(3220076);
    (*(void (__thiscall **)(_DWORD, _DWORD))(*(_DWORD *)*(this + j) + 176))(*(this + j), 0);
    v1 = sub_566170(this, j);
    (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)*(this + j) + 72))(*(this + j), v1);
    *((_BYTE *)this + j + 56) = 1;
  }
}


//======================================================================
// sub_5664C0
// entry 005664c0  size 530  status ok
//======================================================================

char __thiscall sub_5664C0(_DWORD *this, int a2)
{
  char result; // al
  int v3; // eax
  bool v4; // [esp+0h] [ebp-34h]
  signed int v6; // [esp+8h] [ebp-2Ch]
  _DWORD v7[8]; // [esp+Ch] [ebp-28h]
  signed int i; // [esp+2Ch] [ebp-8h]
  signed int v9; // [esp+30h] [ebp-4h]

  v6 = -1;
  *(this + 11) = a2;
  *(this + 11) = sub_5659C0(this, a2);
  for ( i = 0; i < 8; ++i )
    *((_BYTE *)this + i + 56) = 0;
  if ( *(this + 11) )
  {
    v9 = *(this + 11);
    for ( i = 0; i < 8; ++i )
    {
      v7[i] = v9 / (int)*(&off_744888 + i);
      v9 %= (int)*(&off_744888 + i);
      if ( v6 == -1 && v7[i] )
        v6 = i;
    }
    result = sub_565C70(this);
    if ( result )
    {
      for ( i = 0; i < 8; ++i )
      {
        result = (*(int (__thiscall **)(_DWORD, _DWORD))(*(_DWORD *)*(this + i) + 176))(*(this + i), v7[7 - i]);
        v4 = 0;
        if ( v6 != -1 )
        {
          result = 7 - i;
          if ( 7 - i >= v6 )
            v4 = 1;
        }
        *((_BYTE *)this + i + 56) = v4;
      }
    }
    else
    {
      result = 8 - v6;
      v9 = 8 - v6;
      for ( i = 0; i < v9; ++i )
      {
        (*(void (__thiscall **)(_DWORD, _DWORD))(*(_DWORD *)*(this + i) + 176))(*(this + i), v7[v6]);
        result = i + (_BYTE)this;
        *((_BYTE *)this + i + 56) = 1;
        ++v6;
      }
    }
  }
  else
  {
    result = (*(int (__thiscall **)(_DWORD, _DWORD))(*(_DWORD *)*this + 176))(*this, 0);
    *((_BYTE *)this + 56) = 1;
  }
  for ( i = 0; i < 8; ++i )
  {
    result = i + (_BYTE)this;
    if ( *((_BYTE *)this + i + 56) )
    {
      v3 = sub_566170(this, i);
      result = (*(int (__thiscall **)(_DWORD, int))(*(_DWORD *)*(this + i) + 72))(*(this + i), v3);
    }
  }
  return result;
}


//======================================================================
// sub_5666E0
// entry 005666e0  size 50  status ok
//======================================================================

_DWORD *__thiscall sub_5666E0(_DWORD *this)
{
  *(this + 1) = 0;
  *(this + 2) = 0;
  *(this + 3) = 0;
  *(_BYTE *)this = 1;
  return this;
}


//======================================================================
// sub_566720
// entry 00566720  size 173  status ok
//======================================================================

int __thiscall sub_566720(int *this)
{
  int result; // eax
  void *v3; // [esp+14h] [ebp-14h]
  void (__thiscall ***v4)(_DWORD, int); // [esp+1Ch] [ebp-Ch]
  void (__thiscall ***v5)(_DWORD, int); // [esp+24h] [ebp-4h]

  v5 = (void (__thiscall ***)(_DWORD, int))*(this + 1);
  if ( v5 )
    (**v5)(v5, 1);
  v4 = (void (__thiscall ***)(_DWORD, int))*(this + 2);
  if ( v4 )
    (**v4)(v4, 1);
  result = *(this + 3);
  v3 = (void *)result;
  if ( result )
  {
    sub_565630(result);
    operator delete(v3);
    return (int)v3;
  }
  return result;
}


//======================================================================
// sub_5667D0
// entry 005667d0  size 410  status ok
//======================================================================

char __thiscall sub_5667D0(_DWORD *this)
{
  int v1; // eax
  int v2; // eax
  _DWORD *v4; // [esp+4h] [ebp-34h]
  int v5; // [esp+8h] [ebp-30h]
  int v6; // [esp+Ch] [ebp-2Ch]
  _DWORD *v8; // [esp+14h] [ebp-24h]
  void *v9; // [esp+1Ch] [ebp-1Ch]
  void *v10; // [esp+24h] [ebp-14h]

  v10 = operator new(0x178u);
  if ( v10 )
  {
    sub_5EAAF0(v10);
    v6 = v1;
  }
  else
  {
    v6 = 0;
  }
  *(this + 1) = v6;
  sub_5EAE80(3220059, 0, 0, 1802, -1);
  (*(void (__thiscall **)(_DWORD, _DWORD))(*(_DWORD *)*(this + 1) + 176))(*(this + 1), 0);
  v9 = operator new(0x178u);
  if ( v9 )
  {
    sub_5EAAF0(v9);
    v5 = v2;
  }
  else
  {
    v5 = 0;
  }
  *(this + 2) = v5;
  sub_5EAE80(3220060, 159, 288, 1803, -1);
  (*(void (__thiscall **)(_DWORD, _DWORD))(*(_DWORD *)*(this + 2) + 176))(*(this + 2), 0);
  v8 = operator new(0x40u);
  if ( v8 )
    v4 = sub_5655D0(v8);
  else
    v4 = 0;
  *(this + 3) = v4;
  sub_5656F0((_DWORD *)*(this + 3));
  sub_565A50((_DWORD *)*(this + 3), 5);
  return sub_5664C0((_DWORD *)*(this + 3), 0);
}


//======================================================================
// sub_566970
// entry 00566970  size 80  status ok
//======================================================================

int __thiscall sub_566970(int this, int a2)
{
  (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 4) + 108))(*(_DWORD *)(this + 4), a2);
  (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 8) + 108))(*(_DWORD *)(this + 8), a2 + 1);
  return sub_5658C0(*(_DWORD ***)(this + 12), a2 + 2);
}


//======================================================================
// sub_5669C0
// entry 005669c0  size 91  status ok
//======================================================================

int __thiscall sub_5669C0(_DWORD **this)
{
  if ( *(_BYTE *)this )
    (*(void (__thiscall **)(_DWORD))(**(this + 1) + 116))(*(this + 1));
  else
    (*(void (__thiscall **)(_DWORD))(**(this + 1) + 112))(*(this + 1));
  (*(void (__thiscall **)(_DWORD))(**(this + 2) + 116))(*(this + 2));
  return sub_566210((_DWORD **)*(this + 3));
}


//======================================================================
// sub_566A20
// entry 00566a20  size 62  status ok
//======================================================================

int __thiscall sub_566A20(int this)
{
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 4) + 112))(*(_DWORD *)(this + 4));
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 8) + 112))(*(_DWORD *)(this + 8));
  return sub_566310(*(_DWORD ***)(this + 12));
}


//======================================================================
// sub_566A60
// entry 00566a60  size 125  status ok
//======================================================================

int __thiscall sub_566A60(_DWORD **this, int a2)
{
  int result; // eax

  sub_565A50(*(this + 3), a2);
  if ( a2 == 5 )
  {
    result = (*(int (__thiscall **)(_DWORD, int, int))(**(this + 2) + 68))(*(this + 2), 159, 288);
    *(_BYTE *)this = 1;
  }
  else
  {
    (*(void (__thiscall **)(_DWORD, int, int))(**(this + 2) + 68))(*(this + 2), 159, 316);
    *(_BYTE *)this = 0;
    return (*(int (__thiscall **)(_DWORD))(**(this + 1) + 112))(*(this + 1));
  }
  return result;
}


//======================================================================
// sub_566AE0
// entry 00566ae0  size 28  status ok
//======================================================================

char __thiscall sub_566AE0(_DWORD **this, int a2)
{
  return sub_5664C0(*(this + 3), a2);
}


//======================================================================
// sub_566B00
// entry 00566b00  size 283  status ok
//======================================================================

int __thiscall sub_566B00(_DWORD **this, int a2)
{
  int v3; // [esp+0h] [ebp-18h]
  int v5; // [esp+8h] [ebp-10h]
  int v6; // [esp+Ch] [ebp-Ch]
  int v7; // [esp+10h] [ebp-8h]

  v6 = 0;
  v3 = *(_DWORD *)(dword_7947E0 + 20244);
  if ( v3 )
  {
    if ( v3 == 5 )
    {
      if ( a2 > 9 )
        sub_5E9F20((char)"handResult <= 9", "..\\Casino\\vpmdisplay.cpp", 2823);
      (*(void (__thiscall **)(_DWORD, int))(**(this + 2) + 176))(*(this + 2), dword_7448D4[a2]);
    }
    else
    {
      if ( v3 == 10 )
      {
        if ( a2 > 10 )
          sub_5E9F20((char)"handResult <= 10", "..\\Casino\\vpmdisplay.cpp", 2827);
        v6 = dword_7448A8[a2];
      }
      (*(void (__thiscall **)(_DWORD, int))(**(this + 2) + 176))(*(this + 2), v6);
    }
  }
  else
  {
    if ( a2 > 8 )
      sub_5E9F20((char)"handResult <= 8", "..\\Casino\\vpmdisplay.cpp", 2819);
    (*(void (__thiscall **)(_DWORD, int))(**(this + 2) + 176))(*(this + 2), dword_7448FC[a2]);
  }
  v5 = sub_5604B0(a2);
  v7 = sub_5603B0(v5);
  return (*(int (__thiscall **)(_DWORD, int))(**(this + 1) + 176))(*(this + 1), v7);
}


//======================================================================
// sub_566DA0
// entry 00566da0  size 70  status ok
//======================================================================

_DWORD *__thiscall sub_566DA0(_DWORD *this)
{
  sub_5D7B60(this);
  *this = &VPMultiRoom::`vftable';
  dword_793438 = (int)this;
  dword_79343C = 0;
  dword_793440 = 0;
  dword_793444 = 0;
  return this;
}


//======================================================================
// sub_566DF0
// entry 00566df0  size 267  status ok
//======================================================================

int __thiscall sub_566DF0(_DWORD *this)
{
  *this = &VPMultiRoom::`vftable';
  dword_793438 = 0;
  if ( dword_79343C )
    (**(void (__thiscall ***)(int, int))dword_79343C)(dword_79343C, 1);
  dword_79343C = 0;
  if ( dword_793440 )
    (**(void (__thiscall ***)(int, int))dword_793440)(dword_793440, 1);
  dword_793440 = 0;
  if ( dword_793444 )
    (**(void (__thiscall ***)(int, int))dword_793444)(dword_793444, 1);
  dword_793444 = 0;
  return sub_5D7BD0();
}


//======================================================================
// sub_566F00
// entry 00566f00  size 449  status ok
//======================================================================

int __thiscall sub_566F00(_DWORD **this)
{
  _DWORD *v2; // [esp+4h] [ebp-44h]
  int v3; // [esp+8h] [ebp-40h]
  ATL::CCRTHeap *v4; // [esp+Ch] [ebp-3Ch]
  int v5; // [esp+10h] [ebp-38h]
  _DWORD *v7; // [esp+1Ch] [ebp-2Ch]
  void *v8; // [esp+24h] [ebp-24h]
  ATL::CCRTHeap *v9; // [esp+2Ch] [ebp-1Ch]
  void *v10; // [esp+34h] [ebp-14h]

  sub_5D8230();
  v10 = operator new(0x40u);
  if ( v10 )
    v5 = sub_568320(v10);
  else
    v5 = 0;
  dword_79343C = v5;
  sub_5685C0();
  v9 = (ATL::CCRTHeap *)operator new(0xFCu);
  if ( v9 )
    v4 = sub_55F930(v9);
  else
    v4 = 0;
  dword_793440 = (int)v4;
  sub_560580((int)v4);
  v8 = operator new(0x1Cu);
  if ( v8 )
    v3 = sub_559230((int)v8);
  else
    v3 = 0;
  dword_793444 = v3;
  sub_569640(dword_79343C);
  v7 = operator new(0x20u);
  if ( v7 )
  {
    sub_5FC0D0(0);
    *v7 = &VPMultiRoomScript::`vftable';
    v2 = v7;
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
// sub_5670D0
// entry 005670d0  size 31  status ok
//======================================================================

_DWORD *__stdcall sub_5670D0(_DWORD *a1, _DWORD *a2)
{
  *a1 = 1;
  *a2 = 1000000000;
  return a1;
}


//======================================================================
// sub_5670F0
// entry 005670f0  size 16  status ok
//======================================================================

int sub_5670F0()
{
  return 3207000;
}


//======================================================================
// sub_567100
// entry 00567100  size 276  status ok
//======================================================================

int __stdcall sub_567100(int a1, int a2)
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
// sub_567220
// entry 00567220  size 49  status ok
//======================================================================

int __thiscall sub_567220(void *this)
{
  int v1; // eax

  v1 = sub_5DF2E0(dword_7947E0);
  sub_5F1E60(3220001, v1, 100035);
  return sub_64E430(this);
}


//======================================================================
// sub_567260
// entry 00567260  size 251  status ok
//======================================================================

int __stdcall sub_567260(int a1, int a2)
{
  int result; // eax

  if ( !dword_79343C || (result = dword_79343C, !*(_BYTE *)(dword_79343C + 24)) )
  {
    switch ( a1 )
    {
      case 3220002:
        result = sub_569580(0);
        break;
      case 3220003:
        result = sub_569580(1);
        break;
      case 3220004:
        result = sub_569580(2);
        break;
      case 3220005:
        result = sub_569580(3);
        break;
      case 3220006:
        result = sub_569580(4);
        break;
      case 3220007:
        result = sub_568FB0(3);
        break;
      case 3220008:
        result = sub_568FB0(1);
        break;
      case 3220009:
        result = sub_568FB0(0);
        break;
      case 3220010:
        result = sub_568FB0(4);
        break;
      case 3220011:
        result = sub_568FB0(5);
        break;
      default:
        result = sub_5DC7D0(a1, a2);
        break;
    }
  }
  return result;
}


//======================================================================
// sub_567390
// entry 00567390  size 850  status ok
//======================================================================

int __stdcall sub_567390(int a1)
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

  result = sub_5D7F40(a1);
  if ( dword_79343C
    && *(_BYTE *)(dword_79343C + 24)
    && ((result = a1, *(_DWORD *)(a1 + 24) == 1)
     || *(_DWORD *)(a1 + 24) == 4 && (result = tolower(*(char *)(a1 + 20)), result == 115)) )
  {
    *(_BYTE *)(dword_79343C + 25) = 1;
    *(_BYTE *)(a1 + 4) = 1;
  }
  else if ( !dword_79343C || (result = dword_79343C, !*(_BYTE *)(dword_79343C + 24)) )
  {
    if ( *(_DWORD *)(a1 + 24) == 4 )
    {
      result = a1;
      if ( !*(_BYTE *)(a1 + 4) )
      {
        if ( dword_79343C )
        {
          result = tolower(*(char *)(a1 + 20));
          switch ( result )
          {
            case '1':
              v2 = sub_5F2A60(3220002, 0);
              result = sub_6026D0(v2);
              if ( (_BYTE)result )
              {
                result = sub_569580(0);
                *(_BYTE *)(a1 + 4) = 1;
              }
              break;
            case '2':
              v3 = sub_5F2A60(3220003, 0);
              result = (unsigned __int8)sub_6026D0(v3);
              if ( (_BYTE)result )
              {
                result = sub_569580(1);
                *(_BYTE *)(a1 + 4) = 1;
              }
              break;
            case '3':
              v4 = sub_5F2A60(3220004, 0);
              result = sub_6026D0(v4);
              if ( (_BYTE)result )
              {
                sub_569580(2);
                result = a1;
                *(_BYTE *)(a1 + 4) = 1;
              }
              break;
            case '4':
              v5 = sub_5F2A60(3220005, 0);
              result = sub_6026D0(v5);
              if ( (_BYTE)result )
              {
                result = sub_569580(3);
                *(_BYTE *)(a1 + 4) = 1;
              }
              break;
            case '5':
              v6 = sub_5F2A60(3220006, 0);
              result = (unsigned __int8)sub_6026D0(v6);
              if ( (_BYTE)result )
              {
                result = sub_569580(4);
                *(_BYTE *)(a1 + 4) = 1;
              }
              break;
            case 'a':
              v7 = sub_5F2A60(3220007, 0);
              result = sub_6026D0(v7);
              if ( (_BYTE)result )
              {
                sub_568FB0(3);
                result = a1;
                *(_BYTE *)(a1 + 4) = 1;
              }
              break;
            case 'b':
              v8 = sub_5F2A60(3220008, 0);
              result = sub_6026D0(v8);
              if ( (_BYTE)result )
              {
                result = sub_568FB0(1);
                *(_BYTE *)(a1 + 4) = 1;
              }
              break;
            case 'c':
              v11 = sub_5F2A60(3220011, 0);
              result = sub_6026D0(v11);
              if ( (_BYTE)result )
              {
                result = sub_568FB0(5);
                *(_BYTE *)(a1 + 4) = 1;
              }
              break;
            case 'd':
              v10 = sub_5F2A60(3220010, 0);
              result = sub_6026D0(v10);
              if ( (_BYTE)result )
              {
                sub_568FB0(4);
                result = a1;
                *(_BYTE *)(a1 + 4) = 1;
              }
              break;
            case 'm':
              v9 = sub_5F2A60(3220009, 0);
              result = (unsigned __int8)sub_6026D0(v9);
              if ( (_BYTE)result )
              {
                result = sub_568FB0(0);
                *(_BYTE *)(a1 + 4) = 1;
              }
              break;
            case 't':
              v12 = sub_5F2A60(5009, 0);
              result = (unsigned __int8)sub_6026D0(v12);
              if ( (_BYTE)result )
              {
                result = sub_5DB240(dword_793438);
                *(_BYTE *)(a1 + 4) = 1;
              }
              break;
            default:
              return result;
          }
        }
      }
    }
  }
  return result;
}


//======================================================================
// sub_567760
// entry 00567760  size 35  status ok
//======================================================================

char __thiscall sub_567760(void *this)
{
  if ( dword_79343C )
    return sub_568760(dword_79343C, this);
  else
    return 1;
}


//======================================================================
// sub_567790
// entry 00567790  size 52  status ok
//======================================================================

int sub_567790()
{
  sub_56A7A0(49, 0);
  sub_568450(1);
  return sub_561950(dword_793440);
}


//======================================================================
// sub_5677D0
// entry 005677d0  size 164  status ok
//======================================================================

int __stdcall sub_5677D0(int a1)
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

  v1 = (int *)sub_5D0C30(v9, *(_DWORD *)(dword_79343C + 8));
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
  result = dword_79343C;
  *(_DWORD *)(dword_79343C + 8) = 0;
  return result;
}


