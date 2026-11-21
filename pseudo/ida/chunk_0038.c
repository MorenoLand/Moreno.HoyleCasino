//======================================================================
// sub_6520F0
// entry 006520f0  size 704  status ok
//======================================================================

int __thiscall sub_6520F0(_DWORD *this)
{
  int result; // eax
  _DWORD *v2; // [esp+4h] [ebp-A8h]
  int v3; // [esp+8h] [ebp-A4h]
  _DWORD *v5; // [esp+14h] [ebp-98h]
  _DWORD *v6; // [esp+1Ch] [ebp-90h]
  _DWORD v7[31]; // [esp+20h] [ebp-8Ch] BYREF
  int i; // [esp+9Ch] [ebp-10h]
  int v9; // [esp+A8h] [ebp-4h]

  for ( i = 0; i < 10; ++i )
    sub_5F87D0(*(this + i + 22));
  for ( i = 0; i < 10; ++i )
  {
    v7[3 * i] = 0;
    v7[3 * i + 1] = 0;
    v7[3 * i + 2] = 0;
  }
  result = (*(int (__thiscall **)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD *))(*(_DWORD *)*this + 556))(
             *this,
             *(_DWORD *)(*(this + 32) + 20 * *(this + 2)),
             *(_DWORD *)(*(this + 32) + 20 * *(this + 2) + 4),
             *(_DWORD *)(*(this + 32) + 20 * (*(this + 2) + 1) + 4),
             v7);
  for ( i = 0; i < 10; ++i )
  {
    result = v7[3 * i + 2];
    if ( result > 0 && result <= 3 )
    {
      v6 = (_DWORD *)sub_5FB2B0(*(this + i + 22), 0);
      v3 = v7[3 * i + 2];
      switch ( v3 )
      {
        case 1:
          sub_5EAF00((int)v6, 3400020);
          break;
        case 2:
          sub_5EAF00((int)v6, 3400021);
          break;
        case 3:
          sub_5EAF00((int)v6, 3400022);
          break;
      }
      (*(void (__thiscall **)(_DWORD *, int, int))(*v6 + 68))(v6, v7[3 * i] - 50, v7[3 * i + 1] - 42);
      (*(void (__thiscall **)(_DWORD *, _DWORD))(*v6 + 176))(v6, 0);
      v5 = operator new(0x1Cu);
      v9 = 0;
      if ( v5 )
        v2 = sub_600A70(v5, 0);
      else
        v2 = 0;
      v9 = -1;
      sub_5F5D50(v6, (int)v2);
      result = sub_5F85D0(*(this + i + 22));
    }
  }
  return result;
}


//======================================================================
// sub_6523B0
// entry 006523b0  size 50  status ok
//======================================================================

_DWORD *__thiscall sub_6523B0(_DWORD *this)
{
  _DWORD *result; // eax

  result = (_DWORD *)*(this + 32);
  if ( result[5 * *(this + 2)] )
  {
    ++*(this + 2);
    return this;
  }
  return result;
}


//======================================================================
// sub_652420
// entry 00652420  size 167  status ok
//======================================================================

char __thiscall sub_652420(int this, int a2)
{
  char result; // al
  int v3; // [esp+4h] [ebp-Ch]
  int i; // [esp+8h] [ebp-8h]
  int v5; // [esp+Ch] [ebp-4h]

  v5 = 0;
  v3 = -1;
  *(_BYTE *)(this + 16) = 0;
  for ( i = 0; ; ++i )
  {
    result = this;
    if ( !*(_DWORD *)(20 * i + *(_DWORD *)(this + 128)) )
      break;
    if ( *(_DWORD *)(20 * i + *(_DWORD *)(this + 128)) != v3 )
    {
      v3 = *(_DWORD *)(20 * i + *(_DWORD *)(this + 128));
      if ( v5 == a2 )
      {
        *(_DWORD *)(this + 8) = i;
        *(_DWORD *)(this + 20) = 0;
        return sub_651AF0((_DWORD *)this);
      }
      ++v5;
    }
  }
  return result;
}


//======================================================================
// sub_652500
// entry 00652500  size 196  status ok
//======================================================================

int __thiscall sub_652500(_DWORD *this, unsigned __int8 a2)
{
  int result; // eax
  bool v3; // [esp+0h] [ebp-Ch]

  result = a2;
  if ( a2 )
  {
    v3 = sub_650310((_DWORD *)*this) || sub_636CE0(dword_162EE84);
    result = *((unsigned __int8 *)this + 16);
    if ( !*((_BYTE *)this + 16) && v3 )
    {
      (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*this + 84))(*this);
      *((_BYTE *)this + 17) = 0;
      *((_BYTE *)this + 16) = 1;
      if ( (int)*(this + 2) > 0 )
        --*(this + 2);
      *(this + 5) = 0;
      sub_651AF0(this);
      return sub_652900(100);
    }
  }
  return result;
}


//======================================================================
// sub_6525D0
// entry 006525d0  size 262  status ok
//======================================================================

char __thiscall sub_6525D0(_DWORD *this)
{
  DWORD TickCount; // [esp+8h] [ebp-8h]

  if ( !sub_650310((_DWORD *)*this) )
    sub_636CE0(dword_162EE84);
  (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*this + 84))(*this);
  *((_BYTE *)this + 16) = 0;
  TickCount = GetTickCount();
  if ( (int)*(this + 2) > 0 )
    --*(this + 2);
  while ( (int)*(this + 2) > 0
       && (*(_DWORD *)(*(this + 32) + 20 * *(this + 2) + 8) == 1
        || *(_DWORD *)(*(this + 32) + 20 * *(this + 2) + 8) == 4
        || TickCount <= *(_DWORD *)(*(this + 32) + 20 * *(this + 2) + 16) + 2000) )
    --*(this + 2);
  *(this + 5) = 0;
  return sub_651AF0(this);
}


//======================================================================
// sub_6526E0
// entry 006526e0  size 377  status ok
//======================================================================

char __thiscall sub_6526E0(_DWORD *this)
{
  bool v2; // [esp+0h] [ebp-Ch]
  char v4; // [esp+Ah] [ebp-2h]

  v2 = sub_650310((_DWORD *)*this) || sub_636CE0(dword_162EE84);
  (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*this + 84))(*this);
  v4 = *((_BYTE *)this + 16);
  *((_BYTE *)this + 16) = 0;
  sub_652860(this);
  if ( *(_DWORD *)(20 * *(this + 2) + *(this + 32)) && *(_DWORD *)(20 * (*(this + 2) + 1) + *(this + 32)) && !v2 && !v4 )
  {
    if ( *(_DWORD *)(*(this + 32) + 20 * *(this + 2) + 8) == 3 )
    {
      (*(void (__thiscall **)(_DWORD, _DWORD, _DWORD))(*(_DWORD *)*this + 548))(
        *this,
        *(_DWORD *)(*(this + 32) + 20 * *(this + 2)),
        *(_DWORD *)(*(this + 32) + 20 * (*(this + 2) + 1) + 4));
      ++*(this + 2);
      return (char)this;
    }
    ++*(this + 2);
    if ( *(_DWORD *)(*(this + 32) + 20 * *(this + 2) + 8) == 1 )
      ++*(this + 2);
  }
  return sub_651AF0(this);
}


//======================================================================
// sub_652860
// entry 00652860  size 87  status ok
//======================================================================

int __thiscall sub_652860(_DWORD *this)
{
  int result; // eax
  int i; // [esp+4h] [ebp-4h]

  for ( i = 0; ; ++i )
  {
    result = *(this + 32);
    if ( !*(_DWORD *)(20 * i + result) )
      break;
    *(_DWORD *)(*(this + 32) + 20 * i + 16) = 0;
  }
  *(this + 5) = 0;
  return result;
}


//======================================================================
// sub_6528C0
// entry 006528c0  size 57  status ok
//======================================================================

int __thiscall sub_6528C0(_DWORD *this)
{
  (*(void (__thiscall **)(_DWORD, _DWORD, _DWORD))(*(_DWORD *)*this + 544))(*this, 0, 0);
  return (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*this + 528))(*this);
}


//======================================================================
// sub_652900
// entry 00652900  size 257  status ok
//======================================================================

void __thiscall sub_652900(_DWORD **this, int a2)
{
  _DWORD *v2; // [esp+4h] [ebp-20h]
  _DWORD *v4; // [esp+Ch] [ebp-18h]
  int i; // [esp+14h] [ebp-10h]

  for ( i = 0; i < 4; ++i )
  {
    sub_5F5D50(*(this + i + 18), 0);
    (*(void (__thiscall **)(_DWORD))(**(this + i + 18) + 112))(*(this + i + 18));
  }
  if ( a2 )
  {
    (*(void (__thiscall **)(_DWORD))(**(this + a2 - 82) + 116))(*(this + a2 - 82));
    v4 = operator new(0x28u);
    if ( v4 )
      v2 = sub_601110(v4, 0, 0, 1, 0, 0);
    else
      v2 = 0;
    sub_5F5D50(*(this + a2 - 82), (int)v2);
  }
}


//======================================================================
// sub_652A10
// entry 00652a10  size 88  status ok
//======================================================================

int __thiscall sub_652A10(_DWORD *this)
{
  if ( *(_DWORD *)(20 * *(this + 2) + *(this + 32)) && *(_DWORD *)(20 * (*(this + 2) + 1) + *(this + 32)) )
    return *(_DWORD *)(20 * *(this + 2) + *(this + 32));
  else
    return -1;
}


//======================================================================
// sub_652AD0
// entry 00652ad0  size 129  status ok
//======================================================================

int __thiscall sub_652AD0(_DWORD *this, int a2)
{
  int i; // [esp+4h] [ebp-4h]

  for ( i = 0; *(_DWORD *)(20 * i + *(this + 32)); ++i )
  {
    if ( *(_DWORD *)(*(this + 32) + 20 * i + 4) == a2 )
      return *(_DWORD *)(20 * i + *(this + 32));
  }
  sub_5E9F20("false", "..\\casinoShell\\tutorial.cpp", 486);
  return 0;
}


//======================================================================
// sub_652B60
// entry 00652b60  size 272  status ok
//======================================================================

char __thiscall sub_652B60(_DWORD *this, int a2, int *a3, _DWORD *a4)
{
  int v5; // [esp+8h] [ebp-10h]
  int v6; // [esp+Ch] [ebp-Ch]
  int i; // [esp+10h] [ebp-8h]
  int v8; // [esp+14h] [ebp-4h]

  v5 = -1;
  v8 = -1;
  v6 = 0;
  *a3 = 0;
  *a4 = 0;
  for ( i = 0; *(_DWORD *)(20 * i + *(this + 32)); ++i )
  {
    if ( *(_DWORD *)(20 * i + *(this + 32)) != v5 )
    {
      ++v8;
      v5 = *(_DWORD *)(20 * i + *(this + 32));
      v6 = 0;
    }
    if ( *(_DWORD *)(20 * i + *(this + 32)) == *(_DWORD *)(20 * *(this + 2) + *(this + 32)) )
    {
      if ( i == a2 )
      {
        *a4 = v6;
        *a3 = v8;
        return (char)a3;
      }
      ++v6;
    }
  }
  return sub_5E9F20("false", "..\\casinoShell\\tutorial.cpp", 518);
}


//======================================================================
// sub_652C70
// entry 00652c70  size 168  status ok
//======================================================================

int __thiscall sub_652C70(_DWORD *this, int a2)
{
  int v3; // [esp+4h] [ebp-Ch]
  int i; // [esp+8h] [ebp-8h]
  int v5; // [esp+Ch] [ebp-4h]

  v5 = 0;
  v3 = -1;
  for ( i = 0; *(_DWORD *)(20 * i + *(this + 32)); ++i )
  {
    if ( *(_DWORD *)(20 * i + *(this + 32)) != v3 )
    {
      ++v5;
      v3 = *(_DWORD *)(20 * i + *(this + 32));
    }
    if ( v5 - 1 == a2 )
      return v3;
  }
  sub_5E9F20("false", "..\\casinoShell\\tutorial.cpp", 536);
  return 0;
}


//======================================================================
// sub_652D20
// entry 00652d20  size 124  status ok
//======================================================================

int __thiscall sub_652D20(_DWORD *this)
{
  int v2; // [esp+4h] [ebp-Ch]
  int i; // [esp+8h] [ebp-8h]
  int v4; // [esp+Ch] [ebp-4h]

  v4 = 0;
  v2 = -1;
  for ( i = 0; *(_DWORD *)(20 * i + *(this + 32)); ++i )
  {
    if ( *(_DWORD *)(20 * i + *(this + 32)) != v2 )
    {
      ++v4;
      v2 = *(_DWORD *)(20 * i + *(this + 32));
    }
  }
  return v4;
}


//======================================================================
// sub_652DA0
// entry 00652da0  size 122  status ok
//======================================================================

int __thiscall sub_652DA0(_DWORD *this, int a2)
{
  int i; // [esp+4h] [ebp-8h]
  int v4; // [esp+8h] [ebp-4h]

  v4 = 0;
  for ( i = 0; *(_DWORD *)(20 * i + *(this + 32)); ++i )
  {
    if ( *(_DWORD *)(20 * i + *(this + 32)) == a2 )
    {
      if ( *(_DWORD *)(20 * (i + 1) + *(this + 32)) )
        ++v4;
    }
  }
  return v4;
}


//======================================================================
// sub_652E20
// entry 00652e20  size 240  status ok
//======================================================================

_DWORD *__thiscall sub_652E20(_DWORD *this, int a2, int a3)
{
  int v4; // [esp+0h] [ebp-24h]
  _BYTE *v5; // [esp+4h] [ebp-20h]
  _BYTE *v7; // [esp+Ch] [ebp-18h]
  int i; // [esp+14h] [ebp-10h]

  Concurrency::overwrite_buffer<enum Concurrency::agent_status>::overwrite_buffer<enum Concurrency::agent_status>(v4);
  *this = &TutorialButton::`vftable';
  *(this + 125) = a2;
  *(this + 119) = a3;
  for ( i = 0; i < 5; ++i )
  {
    v7 = operator new(0x5Cu);
    if ( v7 )
      v5 = sub_5F6130(v7);
    else
      v5 = 0;
    *(this + i + 120) = v5;
    sub_5F61D0((CPaneContainer *)*(this + i + 120), 0, 15, 0, 0, 0, (struct CPaneDivider *)0xFFFFFFFF);
  }
  return this;
}


//======================================================================
// sub_652F10
// entry 00652f10  size 182  status ok
//======================================================================

void __thiscall sub_652F10(_DWORD *this)
{
  int i; // [esp+14h] [ebp-10h]

  *this = &TutorialButton::`vftable';
  for ( i = 0; i < 5; ++i )
  {
    if ( *(this + i + 120) )
      (**(void (__thiscall ***)(_DWORD, int))*(this + i + 120))(*(this + i + 120), 1);
  }
  sub_601BA0((int)this);
}


//======================================================================
// sub_652FD0
// entry 00652fd0  size 96  status ok
//======================================================================

int __thiscall sub_652FD0(_DWORD **this, int a2)
{
  int result; // eax
  int i; // [esp+4h] [ebp-4h]

  result = sub_6024B0((int)this, a2 + 5);
  for ( i = 0; i < 5; ++i )
    result = (*(int (__thiscall **)(_DWORD, int))(**(this + i + 120) + 108))(*(this + i + 120), i + a2);
  return result;
}


//======================================================================
// sub_653030
// entry 00653030  size 112  status ok
//======================================================================

int __thiscall sub_653030(_DWORD **this, int a2, int a3)
{
  int result; // eax
  int i; // [esp+4h] [ebp-4h]

  result = unknown_libname_667(a2, a3);
  for ( i = 0; i < 5; ++i )
    result = (*(int (__thiscall **)(_DWORD, int, int))(**(this + i + 120) + 120))(
               *(this + i + 120),
               a2 - 2 * i,
               a3 - 2 * i);
  return result;
}


//======================================================================
// sub_6530A0
// entry 006530a0  size 106  status ok
//======================================================================

int __thiscall sub_6530A0(_DWORD *this, int a2, int a3)
{
  int result; // eax
  int i; // [esp+4h] [ebp-4h]

  result = sub_602470(this, a2, a3);
  for ( i = 0; i < 5; ++i )
    result = (*(int (__thiscall **)(_DWORD, int, int))(*(_DWORD *)*(this + i + 120) + 68))(
               *(this + i + 120),
               i + a2,
               i + a3);
  return result;
}


//======================================================================
// sub_653110
// entry 00653110  size 119  status ok
//======================================================================

int __thiscall sub_653110(_DWORD *this)
{
  int v1; // eax
  int result; // eax
  int i; // [esp+4h] [ebp-4h]

  v1 = sub_602810(this);
  (*(void (__thiscall **)(_DWORD *, int))(*this + 216))(this, v1);
  result = sub_602500((int)this);
  if ( (int)*(this + 119) < 100 )
  {
    for ( i = 0; i < 5; ++i )
      result = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*(this + i + 120) + 116))(*(this + i + 120));
  }
  return result;
}


//======================================================================
// sub_653190
// entry 00653190  size 80  status ok
//======================================================================

void __thiscall sub_653190(_DWORD **this)
{
  int i; // [esp+4h] [ebp-4h]

  sub_602550((int)this);
  for ( i = 0; i < 5; ++i )
    (*(void (__thiscall **)(_DWORD))(**(this + i + 120) + 112))(*(this + i + 120));
}


//======================================================================
// sub_6531E0
// entry 006531e0  size 289  status ok
//======================================================================

char __thiscall sub_6531E0(int *this)
{
  char result; // al

  if ( *(this + 119) < 100 )
  {
    sub_652860((_DWORD *)*(this + 125));
    return sub_652420(*(this + 125), *(this + 119));
  }
  else
  {
    sub_652900((_DWORD **)*(this + 125), 0);
    switch ( *(this + 119) )
    {
      case 'd':
        sub_652500((_DWORD *)*(this + 125), 0);
        *(_BYTE *)(*(this + 125) + 17) = 0;
        result = sub_6526E0((_DWORD *)*(this + 125));
        break;
      case 'e':
        sub_652500((_DWORD *)*(this + 125), 0);
        *(_BYTE *)(*(this + 125) + 17) = 0;
        result = sub_6525D0((_DWORD *)*(this + 125));
        break;
      case 'f':
        result = sub_652500((_DWORD *)*(this + 125), 1u);
        break;
      case 'g':
        result = sub_6528C0((_DWORD *)*(this + 125));
        break;
      default:
        result = sub_5E9F20("false", "..\\casinoShell\\tutorial.cpp", 676);
        break;
    }
  }
  return result;
}


//======================================================================
// sub_653320
// entry 00653320  size 647  status ok
//======================================================================

void __thiscall sub_653320(int this, int a2)
{
  int v2; // esi
  int v3; // esi
  int v4; // [esp-4h] [ebp-2Ch]
  bool v6; // [esp+17h] [ebp-11h]
  int v7; // [esp+18h] [ebp-10h]
  int v8; // [esp+1Ch] [ebp-Ch]
  bool v9; // [esp+23h] [ebp-5h]
  int i; // [esp+24h] [ebp-4h]

  v8 = 0;
  sub_6027D0((_DWORD *)this, a2);
  if ( *(int *)(this + 476) < 100 )
  {
    v2 = sub_652C70(*(_DWORD **)(this + 500), *(_DWORD *)(this + 476));
    v6 = v2 == sub_652A10(*(_DWORD **)(this + 500));
    v3 = sub_652C70(*(_DWORD **)(this + 500), *(_DWORD *)(this + 476));
    v9 = v3 < sub_652A10(*(_DWORD **)(this + 500));
    v7 = 94;
    switch ( a2 )
    {
      case 0:
        v8 = v6;
        if ( v6 )
          v7 = 95;
        if ( v9 )
        {
          v8 = 3;
          v7 = 97;
        }
        break;
      case 1:
        v8 = 2;
        break;
      case 2:
        v8 = 0;
        break;
      case 3:
        v8 = 2;
        v7 = 96;
        break;
      default:
        break;
    }
    for ( i = 0; i < 5; ++i )
    {
      sub_5F6410(*(_BYTE **)(this + 4 * i + 480));
      sub_5F6580(*(_BYTE **)(this + 4 * i + 480), 0, 0, 0);
      if ( i == 4 )
      {
        sub_5F6580(
          *(_BYTE **)(this + 496),
          dword_76D580[15 * v8 + 12],
          dword_76D584[15 * v8 + 12],
          dword_76D588[15 * v8 + 12]);
      }
      else if ( dword_76D580[15 * v8 + 3 * i] || dword_76D584[15 * v8 + 3 * i] || dword_76D588[15 * v8 + 3 * i] )
      {
        sub_5F6490(
          *(void **)(this + 4 * i + 480),
          dword_76D580[15 * v8 + 3 * i],
          dword_76D584[15 * v8 + 3 * i],
          dword_76D588[15 * v8 + 3 * i]);
      }
    }
    if ( *(_DWORD *)(this + 400) )
    {
      HIBYTE(v4) = HIBYTE(*(_DWORD *)(this + 400));
      LOWORD(v4) = word_75EE1C;
      BYTE2(v4) = byte_75EE1E;
      sub_5ECD00(*(_DWORD **)(this + 400), v7, -1, v4);
    }
  }
}


//======================================================================
// sub_6535F0
// entry 006535f0  size 160  status ok
//======================================================================

int __thiscall sub_6535F0(int this)
{
  sub_5F71F0((_DWORD *)this, 1, 0);
  *(_DWORD *)this = &StatisticsDialog::`vftable';
  sub_63A0C0((_DWORD *)(this + 448));
  sub_5F83D0((_DWORD *)this, 3200215, 0);
  *(_DWORD *)(this + 1388) = 0;
  *(_BYTE *)(this + 444) = 1;
  *(_DWORD *)(this + 1392) = 0;
  return this;
}


//======================================================================
// sub_653690
// entry 00653690  size 98  status ok
//======================================================================

int __thiscall sub_653690(void (__thiscall ****this)(_DWORD, int))
{
  *this = (void (__thiscall ***)(_DWORD, int))&StatisticsDialog::`vftable';
  sub_63A120((CNoTrackObject *)(this + 112));
  return sub_5F7260(this);
}


//======================================================================
// sub_653700
// entry 00653700  size 1219  status ok
//======================================================================

int __thiscall sub_653700(int this)
{
  int v1; // eax
  int v2; // eax
  _BYTE *v3; // eax
  _BYTE *v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int *v8; // eax
  int v10; // [esp-28h] [ebp-90h]
  int v11; // [esp+4h] [ebp-64h]
  int v12; // [esp+8h] [ebp-60h]
  _DWORD *v13; // [esp+Ch] [ebp-5Ch]
  int v14; // [esp+10h] [ebp-58h]
  LONG *p_top; // [esp+18h] [ebp-50h]
  CImageDisplay *v17; // [esp+1Ch] [ebp-4Ch]
  _DWORD *v18; // [esp+20h] [ebp-48h]
  _DWORD *v19; // [esp+28h] [ebp-40h]
  _BYTE v20[32]; // [esp+2Ch] [ebp-3Ch] BYREF
  int v21; // [esp+50h] [ebp-18h]
  int i; // [esp+54h] [ebp-14h]
  int v23; // [esp+58h] [ebp-10h]
  int v24; // [esp+64h] [ebp-4h]

  v1 = sub_630F40((int)"SID_SHELL_STATISTICS");
  sub_5FA5B0((void *)this, 0, 0, v1, 73, 505, 25, 5, 3, 1, 18, -1);
  for ( i = 0; i < 3; ++i )
  {
    v2 = sub_630F40((int)off_76D690[i]);
    sub_5F9DE0((void *)this, 0, i, i != 0 ? 3200222 : 3200229, 0, 0, 1, v2, 72, 75, 74, -1, 0);
    v14 = sub_5FB300(this, i);
    (*(void (__thiscall **)(int, int, int))(*(_DWORD *)v14 + 68))(v14, 90 * i + 244, 392);
  }
  v3 = (_BYTE *)sub_5FB300(this, 0);
  sub_6026F0(v3, 13);
  v4 = (_BYTE *)sub_5FB300(this, 1);
  sub_6026F0(v4, 27);
  sub_5FA880((void *)this, 0, 0, 514, 1, 3, 384, 1, 120, 124, 161, 0, 0, 0);
  sub_5FA880((void *)this, 0, 0, 514, 1, 4, 385, 1, 255, 255, 255, 0, 0, 0);
  v5 = sub_630F40((int)"SID_SHELL_PLAYER_COLON");
  sub_5FA5B0((void *)this, 0, -1, v5, 72, 200, 25, 21, 34, 2, 5, -1);
  v18 = operator new(0xCCu);
  v24 = 0;
  if ( v18 )
  {
    sub_6280D0((int)v18);
    *v18 = &StatisticsPlayersListBox::`vftable';
    v13 = v18;
  }
  else
  {
    v13 = 0;
  }
  v24 = -1;
  *(_DWORD *)(this + 1388) = sub_5FAC90(
                               (void *)this,
                               v13,
                               0,
                               3200216,
                               15,
                               32,
                               1,
                               0,
                               3200204,
                               211,
                               108,
                               3200203,
                               211,
                               22,
                               3200207,
                               210,
                               38,
                               88,
                               210,
                               39,
                               16,
                               67,
                               7,
                               24,
                               200,
                               16,
                               6,
                               31,
                               69,
                               66,
                               0,
                               0,
                               0,
                               3200217);
  v6 = sub_630F40((int)"SID_SHELL_GAME_COLON");
  v19 = sub_5FA5B0((void *)this, 0, -1, v6, 72, 136, 22, 318, 33, 1, 5, -1);
  v10 = (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 792))(dword_162EE84);
  v7 = (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 972))(dword_162EE84);
  sub_5FAEE0(
    (void *)this,
    0,
    3,
    v7,
    v10,
    57,
    1,
    (struct Concurrency::details::SchedulerBase *)0x138E,
    1,
    (int)&Source,
    31,
    69,
    66,
    -1);
  sub_6542C0(this);
  CImageDisplay::GetDisplayFormat((CImageDisplay *)(this + 448))->rcSource.left = 0;
  v23 = 0;
  v21 = (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 232))(dword_162EE84);
  if ( v21 )
  {
    *(_DWORD *)(this + 1392) = (*(int (__thiscall **)(int))(*(_DWORD *)v21 + 76))(v21);
    if ( *(_DWORD *)(this + 1392) == -1 )
      *(_DWORD *)(this + 1392) = Concurrency::details::ContextBase::GetExecutingCollection(dword_162EE84);
    v23 = (*(int (__thiscall **)(int))(*(_DWORD *)v21 + 80))(v21);
  }
  else
  {
    *(_DWORD *)(this + 1392) = 0;
    for ( *(_DWORD *)(this + 1392) = 0;
          *(_DWORD *)(this + 1392) < (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84
                                                                                                + 236))(dword_162EE84);
          ++*(_DWORD *)(this + 1392) )
    {
      v12 = (*(int (__thiscall **)(Concurrency::details::ContextBase *, _DWORD))(*(_DWORD *)dword_162EE84 + 224))(
              dword_162EE84,
              *(_DWORD *)(this + 1392));
      if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v12 + 68))(v12) )
        break;
    }
  }
  v8 = (int *)sub_5FB5E0(this, 3);
  sub_605EF0((int)v8, v8, v23, 1);
  if ( (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 236))(dword_162EE84) == 1 )
  {
    (*(void (__thiscall **)(Concurrency::details::ContextBase *, _DWORD, _BYTE *))(*(_DWORD *)dword_162EE84 + 824))(
      dword_162EE84,
      0,
      v20);
    (*(void (__thiscall **)(_DWORD *, _BYTE *))(*v19 + 180))(v19, v20);
    (*(void (__thiscall **)(_DWORD *, int, int))(*v19 + 68))(v19, 274, 63);
    v11 = sub_5FB5E0(this, 3);
    (*(void (__thiscall **)(int))(*(_DWORD *)v11 + 112))(v11);
  }
  v17 = (CImageDisplay *)sub_6375B0((_DWORD **)dword_162EE84);
  p_top = &CImageDisplay::GetDisplayFormat(v17)->rcSource.top;
  return sub_628F40(*(void **)(this + 1388), (int)p_top, 1);
}


//======================================================================
// sub_653BD0
// entry 00653bd0  size 358  status ok
//======================================================================

char __thiscall sub_653BD0(int this, int a2)
{
  int v2; // eax
  int v4; // [esp+0h] [ebp-Ch]
  int i; // [esp+8h] [ebp-4h]
  int j; // [esp+8h] [ebp-4h]

  v2 = sub_6352F0(dword_162EE84, a2);
  if ( v2 )
  {
    if ( a2 >= 0
      && a2 < (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 236))(dword_162EE84) )
    {
      *(_DWORD *)(this + 1392) = a2;
      for ( i = 1; i < 100; ++i )
        sub_5FBD40(this, 0, i);
      sub_5FBD10(this, 0, 0);
      sub_5FBDD0(this, 0, 1);
      sub_5FBE60(this, 0, 4);
      sub_5FBE30(this, 0, 0);
      sub_5FBE30(this, 0, 1);
      for ( j = 0; j < 5; ++j )
        sub_5FBE90(this, 0, j);
      *(_BYTE *)(this + 444) = 0;
      v4 = (*(int (__thiscall **)(Concurrency::details::ContextBase *, int))(*(_DWORD *)dword_162EE84 + 224))(
             dword_162EE84,
             a2);
      (*(void (__thiscall **)(int, int, int))(*(_DWORD *)v4 + 84))(v4, this, this + 448);
      *(_BYTE *)(this + 444) = 1;
      LOBYTE(v2) = sub_653E00(this);
      if ( (_BYTE)v2 )
        LOBYTE(v2) = sub_653D40(a2);
    }
    else
    {
      LOBYTE(v2) = sub_5E9F20("false", "..\\casinoShell\\statisticsdialog.cpp", 178);
    }
  }
  return v2;
}


//======================================================================
// sub_653D40
// entry 00653d40  size 144  status ok
//======================================================================

char __thiscall sub_653D40(void *this, int a2)
{
  int v2; // eax
  int v3; // eax

  v2 = sub_6352F0(dword_162EE84, a2);
  if ( v2 )
  {
    if ( a2 >= 0
      && a2 < (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 236))(dword_162EE84) )
    {
      v3 = (*(int (__thiscall **)(Concurrency::details::ContextBase *, int))(*(_DWORD *)dword_162EE84 + 224))(
             dword_162EE84,
             a2);
      LOBYTE(v2) = (*(int (__thiscall **)(int, void *))(*(_DWORD *)v3 + 88))(v3, this);
    }
    else
    {
      LOBYTE(v2) = sub_5E9F20("false", "..\\casinoShell\\statisticsdialog.cpp", 217);
    }
  }
  return v2;
}


//======================================================================
// sub_653E00
// entry 00653e00  size 42  status ok
//======================================================================

char __thiscall sub_653E00(int this)
{
  return *(_BYTE *)(*(_DWORD *)(sub_5E4390(*(Concurrency::details::UMSFreeVirtualProcessorRoot **)(this + 1388)) + 36)
                  + *(_DWORD *)(this + 1392));
}


//======================================================================
// sub_653E30
// entry 00653e30  size 38  status ok
//======================================================================

char __thiscall sub_653E30(Concurrency::details::UMSFreeVirtualProcessorRoot **this, int a2)
{
  return *(_BYTE *)(*(_DWORD *)(sub_5E4390(*(this + 347)) + 36) + a2);
}


//======================================================================
// sub_653E60
// entry 00653e60  size 65  status ok
//======================================================================

int __thiscall sub_653E60(void *this, int a2)
{
  int result; // eax

  result = a2;
  switch ( a2 )
  {
    case 0:
      result = sub_653EC0(this);
      break;
    case 1:
      result = sub_654100(this);
      break;
    case 2:
      result = sub_654120(this);
      break;
    default:
      return result;
  }
  return result;
}


//======================================================================
// sub_653EC0
// entry 00653ec0  size 561  status ok
//======================================================================

int __thiscall sub_653EC0(_DWORD *this)
{
  char *v1; // eax
  int v2; // eax
  int v6; // [esp+Ch] [ebp-30h]
  CImageDisplay *v7; // [esp+18h] [ebp-24h]
  int k; // [esp+2Ch] [ebp-10h]
  int j; // [esp+30h] [ebp-Ch]
  char v10; // [esp+37h] [ebp-5h]
  int i; // [esp+38h] [ebp-4h]

  for ( i = 0; i < (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 347) + 184))(*(this + 347)); ++i )
  {
    for ( j = 0;
          j < (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 236))(dword_162EE84);
          ++j )
    {
      if ( *(_BYTE *)(*(_DWORD *)(sub_60CA40((_DWORD *)(*(this + 347) + 112), i) + 36) + j) )
      {
        v10 = 0;
        for ( k = 0;
              k < (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 268))(dword_162EE84);
              ++k )
        {
          v7 = *(CImageDisplay **)(*((_DWORD *)dword_162EE84 + 22) + 4 * k);
          if ( CImageDisplay::GetDisplayFormat(v7)->rcSource.left == 2
            || CImageDisplay::GetDisplayFormat(v7)->rcSource.left == 3 )
          {
            v6 = sub_60CA40((_DWORD *)(*(this + 347) + 112), i);
            v1 = sub_520E60(*(CImageDisplay **)(*((_DWORD *)dword_162EE84 + 22) + 4 * k));
            if ( !strcmp((const char *)(v6 + 20), v1) )
            {
              v10 = 1;
              (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(*((_DWORD *)dword_162EE84 + 22) + 4 * k) + 4))(
                *(_DWORD *)(*((_DWORD *)dword_162EE84 + 22) + 4 * k),
                j);
              sub_63B0A0(*(_DWORD *)(*((_DWORD *)dword_162EE84 + 22) + 4 * k));
              break;
            }
          }
        }
        if ( !v10 )
        {
          v2 = sub_60CA40((_DWORD *)(*(this + 347) + 112), i);
          sub_63AB10((int)(this + 112), (char *)(v2 + 20));
          (*(void (__thiscall **)(_DWORD *, int))(*(this + 112) + 4))(this + 112, j);
          sub_63B0A0((int)(this + 112));
        }
      }
    }
  }
  return sub_654100(this);
}


//======================================================================
// sub_654100
// entry 00654100  size 22  status ok
//======================================================================

_BYTE *sub_654100()
{
  return sub_64F350();
}


//======================================================================
// sub_654120
// entry 00654120  size 106  status ok
//======================================================================

char __thiscall sub_654120(int this)
{
  const CHAR *v1; // eax
  int v2; // eax
  const CHAR *v4; // [esp-8h] [ebp-10h]

  v4 = (const CHAR *)sub_630F40((int)"SID_SHELL_CLEARSTATS");
  v1 = (const CHAR *)sub_630F40((int)"SID_SHELL_CONFIRMCLEARSTATISTICS");
  v2 = sub_62FF10(v1, v4, 4u);
  if ( v2 != 7 )
  {
    *(_BYTE *)(*(_DWORD *)(sub_5E4390(*(Concurrency::details::UMSFreeVirtualProcessorRoot **)(this + 1388)) + 36)
             + *(_DWORD *)(this + 1392)) = 1;
    LOBYTE(v2) = sub_653BD0(this, *(_DWORD *)(this + 1392));
  }
  return v2;
}


//======================================================================
// sub_654190
// entry 00654190  size 63  status ok
//======================================================================

int __thiscall sub_654190(int this, int a2)
{
  int result; // eax

  result = this;
  if ( *(_BYTE *)(this + 444) )
    return (*(int (__thiscall **)(Concurrency::details::ContextBase *, int, _DWORD))(*(_DWORD *)dword_162EE84 + 984))(
             dword_162EE84,
             a2,
             *(_DWORD *)(this + 1392));
  return result;
}


//======================================================================
// sub_6541D0
// entry 006541d0  size 63  status ok
//======================================================================

int __thiscall sub_6541D0(int this, int a2)
{
  int result; // eax

  result = this;
  if ( *(_BYTE *)(this + 444) )
    return (*(int (__thiscall **)(Concurrency::details::ContextBase *, int, _DWORD))(*(_DWORD *)dword_162EE84 + 980))(
             dword_162EE84,
             a2,
             *(_DWORD *)(this + 1392));
  return result;
}


//======================================================================
// sub_654210
// entry 00654210  size 167  status ok
//======================================================================

int __thiscall sub_654210(pairNode **this, int a2, char *Source)
{
  int v4; // [esp+4h] [ebp-20h]

  if ( operator new(0x28u) )
    v4 = ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>>>::operator+=();
  else
    v4 = 0;
  strcpy((char *)(v4 + 20), Source);
  return sub_628980(*(this + 347), (_DWORD *)v4, a2, -1, 0);
}


//======================================================================
// sub_6542C0
// entry 006542c0  size 153  status ok
//======================================================================

int __thiscall sub_6542C0(pairNode **this)
{
  const struct tagVIDEOINFO *DisplayFormat; // eax
  _DWORD *v2; // eax
  char Buffer[16]; // [esp+4h] [ebp-18h] BYREF
  int i; // [esp+18h] [ebp-4h]

  for ( i = 0; i < 100; ++i )
  {
    sprintf(Buffer, "user%d.log", i);
    if ( sub_63AB10((int)(this + 112), Buffer) )
    {
      DisplayFormat = CImageDisplay::GetDisplayFormat((CImageDisplay *)(this + 112));
      sub_654210(this, (int)&DisplayFormat->rcSource.top, Buffer);
    }
  }
  v2 = (_DWORD *)sub_5FB720((int)this, 0);
  return sub_628D80(v2);
}


//======================================================================
// sub_654360
// entry 00654360  size 39  status ok
//======================================================================

int __stdcall sub_654360(int a1, int a2)
{
  return (*(int (__thiscall **)(Concurrency::details::ContextBase *, int))(*(_DWORD *)dword_162EE84 + 976))(
           dword_162EE84,
           a1);
}


//======================================================================
// sub_654390
// entry 00654390  size 155  status ok
//======================================================================

char __thiscall sub_654390(void *this, int a2, int a3, int a4)
{
  if ( !a3 || !a4 )
    return sub_5E9F20("false", "..\\casinoShell\\statisticsdialog.cpp", 352);
  sub_5FA5B0(this, 0, 2 * a2 + 1, a3, 31, 145, 15, 270, 20 * a2 + 100, 1, 5, -1);
  return (unsigned __int8)sub_5FA5B0(this, 0, 2 * a2 + 2, a4, 31, 120, 15, 400, 20 * a2 + 100, 1, 5, -1);
}


//======================================================================
// sub_6546F0
// entry 006546f0  size 65  status ok
//======================================================================

char __thiscall sub_6546F0(Concurrency::details::UMSFreeVirtualProcessorRoot *this)
{
  int v1; // eax

  v1 = sub_5E4390(this);
  sub_63AB10(dword_163069C + 448, (char *)(v1 + 20));
  return sub_653BD0(dword_163069C, *(_DWORD *)(dword_163069C + 1392));
}


//======================================================================
// sub_654820
// entry 00654820  size 116  status ok
//======================================================================

void __thiscall sub_654820(void **this)
{
  *this = &StatisticsPlayersListBoxItem::`vftable';
  if ( *(this + 9) )
    operator delete(*(this + 9));
  sub_629B00(this);
}


//======================================================================
// sub_654930
// entry 00654930  size 129  status ok
//======================================================================

int __thiscall sub_654930(int this)
{
  sub_5F71F0((_DWORD *)this, 1, 0);
  *(_DWORD *)this = &EnvironmentDialog::`vftable';
  sub_5F83D0((_DWORD *)this, 3200215, 0);
  *(_DWORD *)(this + 444) = 0;
  *(_BYTE *)(this + 440) = 1;
  return this;
}


//======================================================================
// sub_6549C0
// entry 006549c0  size 136  status ok
//======================================================================

int __thiscall sub_6549C0(void (__thiscall ****this)(_DWORD, int))
{
  *this = (void (__thiscall ***)(_DWORD, int))&EnvironmentDialog::`vftable';
  if ( *(this + 111) )
    (***(this + 111))(*(this + 111), 1);
  return sub_5F7260(this);
}


//======================================================================
// sub_654A50
// entry 00654a50  size 16  status ok
//======================================================================

int sub_654A50()
{
  return 161;
}


//======================================================================
// sub_654A60
// entry 00654a60  size 2299  status ok
//======================================================================

int __thiscall sub_654A60(_DWORD *this)
{
  int v1; // eax
  int v2; // eax
  _BYTE *v3; // eax
  _BYTE *v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  char v8; // al
  char *v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  char v19; // al
  int v20; // eax
  int v21; // eax
  int v22; // eax
  char *v23; // eax
  int v25; // [esp-2Ch] [ebp-58h]
  int v26; // [esp-1Ch] [ebp-48h]
  int v27; // [esp-1Ch] [ebp-48h]
  int v28; // [esp-10h] [ebp-3Ch]
  int v29; // [esp-10h] [ebp-3Ch]
  int v30; // [esp-10h] [ebp-3Ch]
  _DWORD *v31; // [esp+8h] [ebp-24h]
  _DWORD *v33; // [esp+10h] [ebp-1Ch]
  int i; // [esp+18h] [ebp-14h]

  sub_5FA880(this, 0, (struct CPaneDivider *)0xFFFFFFFF, 1, 342, 259, 35, 1, 120, 124, 161, 0, 0, 0);
  sub_5FA880(this, 0, (struct CPaneDivider *)0xFFFFFFFF, 1, 342, 260, 36, 1, 255, 255, 255, 0, 0, 0);
  sub_5FA880(this, 0, (struct CPaneDivider *)0xFFFFFFFF, 514, 1, 3, 384, 1, 120, 124, 161, 0, 0, 0);
  sub_5FA880(this, 0, (struct CPaneDivider *)0xFFFFFFFF, 514, 1, 4, 385, 1, 255, 255, 255, 0, 0, 0);
  v1 = sub_630F40((int)"SID_SHELL_ENVIRONMENT");
  sub_5FA5B0(this, 0, -1, v1, 73, 115, 17, 395, 6, 1, 18, -1);
  for ( i = 0; i < 3; ++i )
  {
    v2 = sub_630F40((int)off_77082C[i]);
    sub_5F9DE0(this, 0, i, i != 0 ? 3200222 : 3200229, 90 * i + 244, 392, 1, v2, 72, 75, 74, -1, 0);
  }
  v3 = (_BYTE *)sub_5FB300((int)this, 0);
  sub_6026F0(v3, 13);
  v4 = (_BYTE *)sub_5FB300((int)this, 1);
  sub_6026F0(v4, 27);
  v5 = sub_630F40((int)"SID_SHELL_ANIMATIONS");
  sub_5F9EF0(this, 0, 4, 3200201, 14, 57, 1, v5, 31, 69, 66, -1, 20, 0);
  v6 = sub_630F40((int)"SID_SHELL_SOUNDEFFECTS");
  sub_5F9EF0(this, 0, 6, 3200201, 14, 82, 1, v6, 31, 69, 66, -1, 20, 0);
  if ( (*(unsigned __int8 (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 184))(dword_162EE84) )
  {
    v7 = sub_630F40((int)"SID_SHELL_BACKGROUNDNOISE");
    sub_5F9EF0(this, 0, 5, 3200201, 14, 107, 1, v7, 31, 69, 66, -1, 20, 0);
  }
  if ( (*(unsigned __int8 (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 180))(dword_162EE84) )
  {
    v26 = sub_630F40((int)"SID_SHELL_SHOWINTROMOVIE");
    v8 = (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 184))(dword_162EE84);
    sub_5F9EF0(this, 0, 7, 3200201, 14, 132 - (v8 != 0 ? 0 : 25), 1, v26, 31, 69, 66, -1, 20, 0);
  }
  v25 = 117
      - ((*(unsigned __int8 (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 184))(dword_162EE84) != 0
       ? 0
       : 25);
  v9 = (char *)sub_630F40((int)"SID_SHELL_GENERAL");
  sub_5FA790(this, 0, -1, v9, 72, 243, v25, 9, 44, 1, 120, 124, 161, 255, 255, 255, 0);
  if ( (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 360))(dword_162EE84) > 0 )
  {
    v10 = sub_630F40((int)"SID_SHELL_CHARACTERSPEECH");
    sub_5F9EF0(this, 0, 3, 3200201, 281, 50, 1, v10, 31, 69, 66, -1, 20, 0);
    v11 = sub_630F40((int)"SID_SHELL_ATTITUDE");
    sub_5FA5B0(this, 0, -1, v11, 72, 212, 20, 283, 73, 2, 48, -1);
    v12 = sub_630F40((int)"SID_SHELL_SERIOUS");
    sub_5FA5B0(this, 0, -1, v12, 31, 61, 15, 288, 114, 2, 17, -1);
    v13 = sub_630F40((int)"SID_SHELL_TALKATIVE");
    sub_5FA5B0(this, 0, -1, v13, 31, 100, 15, 392, 114, 2, 18, -1);
    sub_5FAA90(this, 0, 9, 3200211, 281, 71, 1, 3200212, 20, -2, 198, 1, 0, 10);
    sub_5FA790(this, 0, -1, (char *)&Source, 72, 243, 100, 267, 44, 1, 120, 124, 161, 255, 255, 255, 0);
  }
  if ( (*(unsigned __int8 (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 188))(dword_162EE84) )
  {
    v28 = (*(int (__thiscall **)(_DWORD *))(*this + 64))(this) + 2;
    v14 = sub_630F40((int)"SID_SHELL_SPEED");
    sub_5FA5B0(this, 0, -1, v14, 72, 212, 20, 283, v28, 2, 48, -1);
    v29 = (*(int (__thiscall **)(_DWORD *))(*this + 64))(this) + 43;
    v15 = sub_630F40((int)"SID_SHELL_SLOW");
    sub_5FA5B0(this, 0, -1, v15, 31, 61, 15, 288, v29, 2, 17, -1);
    v30 = (*(int (__thiscall **)(_DWORD *))(*this + 64))(this) + 43;
    v16 = sub_630F40((int)"SID_SHELL_FAST");
    sub_5FA5B0(this, 0, -1, v16, 31, 100, 15, 392, v30, 2, 18, -1);
    v17 = (*(int (__thiscall **)(_DWORD *))(*this + 64))(this);
    sub_5FAA90(this, 0, 10, 3200211, 281, v17, 1, 3200212, 20, -2, 198, 1, 0, 10);
    v18 = (*(int (__thiscall **)(_DWORD *))(*this + 64))(this);
    sub_5FA790(this, 0, -1, (char *)&Source, 72, 243, 81, 267, v18 - 8, 1, 120, 124, 161, 255, 255, 255, 0);
  }
  if ( (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 380))(dword_162EE84) )
  {
    v27 = sub_630F40((int)"SID_SHELL_BACKGROUNDMUSIC");
    v19 = sub_655A30(this);
    sub_5F9EF0(this, 0, 12, 3200201, 281, v19 != 0 ? -244 : -251, 2, v27, 31, 69, 66, -1, 20, 0);
    if ( (unsigned __int8)sub_655A30(this) )
    {
      sub_5FAC90(
        this,
        0,
        11,
        3200216,
        272,
        242,
        1,
        0,
        3200204,
        211,
        108,
        3200203,
        211,
        22,
        3200207,
        210,
        38,
        88,
        210,
        39,
        16,
        67,
        7,
        24,
        200,
        16,
        6,
        31,
        69,
        66,
        0,
        0,
        0,
        3200217);
    }
    else
    {
      v20 = sub_630F40((int)"SID_SHELL_VOLUME");
      sub_5FA5B0(this, 0, -1, v20, 72, 212, 20, 283, 273, 2, 48, -1);
      v21 = sub_630F40((int)"SID_SHELL_LOW");
      sub_5FA5B0(this, 0, -1, v21, 31, 61, 15, 288, 314, 2, 17, -1);
      v22 = sub_630F40((int)"SID_SHELL_HIGH");
      sub_5FA5B0(this, 0, -1, v22, 31, 100, 15, 392, 314, 2, 18, -1);
      sub_5FAA90(this, 0, 13, 3200211, 281, 271, 1, 3200212, 20, -2, 198, 1, 0, 10);
      sub_5FA790(this, 0, -1, (char *)&Source, 72, 243, 100, 267, 244, 1, 120, 124, 161, 255, 255, 255, 0);
    }
  }
  v33 = operator new(0x70u);
  if ( v33 )
  {
    sub_680B70();
    *v33 = &EnvironmentDialogHelpGroupBox::`vftable';
    v31 = v33;
  }
  else
  {
    v31 = 0;
  }
  *(this + 111) = v31;
  *(_DWORD *)(*(this + 111) + 4) = this;
  v23 = (char *)sub_630F40((int)"SID_GENERIC_HELP");
  sub_680CA0(9, 284, 1, 243, 83, 120, 124, 161, 255, 255, 255, v23, 72, 10, 10, 227, 71, 35, 0, -1);
  (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 111) + 116))(*(this + 111));
  return (*(int (__thiscall **)(_DWORD *))(*this + 68))(this);
}


//======================================================================
// sub_655360
// entry 00655360  size 870  status ok
//======================================================================

int __thiscall sub_655360(void *this)
{
  int v1; // eax
  int v2; // eax
  int v3; // eax
  int result; // eax
  int v5; // eax
  struct Concurrency::IVirtualProcessorRoot *v6; // [esp-8h] [ebp-34h]
  struct Concurrency::IVirtualProcessorRoot *v7; // [esp-8h] [ebp-34h]
  struct Concurrency::IVirtualProcessorRoot *v8; // [esp-8h] [ebp-34h]
  int v9; // [esp+4h] [ebp-28h]
  int v10; // [esp+8h] [ebp-24h]
  int v11; // [esp+Ch] [ebp-20h]
  int v12; // [esp+10h] [ebp-1Ch]
  int v13; // [esp+14h] [ebp-18h]
  int v14; // [esp+18h] [ebp-14h]
  int v15; // [esp+1Ch] [ebp-10h]
  int v16; // [esp+20h] [ebp-Ch]
  int v17; // [esp+24h] [ebp-8h]

  if ( (unsigned __int8)sub_655A30(this) )
    sub_655A60();
  if ( (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 360))(dword_162EE84) > 0
    && sub_637730((_DWORD **)dword_162EE84, 0) )
  {
    v17 = sub_5FB350((int)this, 3);
    (*(void (__thiscall **)(int))(*(_DWORD *)v17 + 244))(v17);
  }
  if ( sub_637630((_DWORD **)dword_162EE84) )
  {
    v16 = sub_5FB350((int)this, 4);
    (*(void (__thiscall **)(int))(*(_DWORD *)v16 + 244))(v16);
  }
  if ( (*(unsigned __int8 (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 56))(dword_162EE84) )
  {
    v15 = sub_5FB350((int)this, 6);
    (*(void (__thiscall **)(int))(*(_DWORD *)v15 + 244))(v15);
  }
  if ( (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 380))(dword_162EE84) )
  {
    if ( sub_637670((_DWORD **)dword_162EE84) )
    {
      v14 = sub_5FB350((int)this, 12);
      (*(void (__thiscall **)(int))(*(_DWORD *)v14 + 244))(v14);
    }
    if ( (unsigned __int8)sub_655A30(this) )
    {
      sub_655C30(this);
    }
    else
    {
      v6 = (struct Concurrency::IVirtualProcessorRoot *)sub_6377E0((_DWORD **)dword_162EE84);
      v1 = sub_5FB860((int)this, 13);
      sub_605110(v1, v6, 1u);
    }
  }
  if ( (*(unsigned __int8 (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 184))(dword_162EE84)
    && sub_6376D0((_DWORD **)dword_162EE84) )
  {
    v13 = sub_5FB350((int)this, 5);
    (*(void (__thiscall **)(int))(*(_DWORD *)v13 + 244))(v13);
  }
  if ( (*(unsigned __int8 (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 180))(dword_162EE84)
    && byte_7960C5 )
  {
    v12 = sub_5FB350((int)this, 7);
    (*(void (__thiscall **)(int))(*(_DWORD *)v12 + 244))(v12);
  }
  if ( (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 360))(dword_162EE84) > 0 )
  {
    v7 = (struct Concurrency::IVirtualProcessorRoot *)sub_6377B0((_DWORD **)dword_162EE84);
    v2 = sub_5FB860((int)this, 9);
    sub_605110(v2, v7, 1u);
  }
  if ( (*(unsigned __int8 (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 188))(dword_162EE84) )
  {
    v8 = (struct Concurrency::IVirtualProcessorRoot *)(10 - sub_637810((_DWORD **)dword_162EE84, 0));
    v3 = sub_5FB860((int)this, 10);
    sub_605110(v3, v8, 1u);
  }
  if ( byte_795F94 )
  {
    if ( sub_5FB350((int)this, 3) )
    {
      v11 = sub_5FB350((int)this, 3);
      (*(void (__thiscall **)(int))(*(_DWORD *)v11 + 208))(v11);
    }
    if ( sub_5FB350((int)this, 4) )
    {
      v10 = sub_5FB350((int)this, 4);
      (*(void (__thiscall **)(int))(*(_DWORD *)v10 + 208))(v10);
    }
    if ( sub_5FB350((int)this, 12) )
    {
      v9 = sub_5FB350((int)this, 12);
      (*(void (__thiscall **)(int))(*(_DWORD *)v9 + 208))(v9);
    }
  }
  result = sub_655A30(this);
  if ( (_BYTE)result )
  {
    if ( byte_795F94
      || !(*(unsigned __int8 (__thiscall **)(Concurrency::details::ContextBase *, int))(*(_DWORD *)dword_162EE84 + 828))(
            dword_162EE84,
            -1)
      || (result = (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)dword_162EE80 + 172))(dword_162EE80),
          (_BYTE)result) )
    {
      v5 = sub_5FB720((int)this, 11);
      return (*(int (__thiscall **)(int, int))(*(_DWORD *)v5 + 180))(v5, v5);
    }
  }
  return result;
}


//======================================================================
// sub_6556D0
// entry 006556d0  size 80  status ok
//======================================================================

_BYTE *__thiscall sub_6556D0(void *this, _BYTE *a2)
{
  _BYTE *result; // eax

  result = a2;
  if ( !a2 )
  {
    (*(void (__thiscall **)(void *))(*(_DWORD *)this + 72))(this);
    return sub_64EE40();
  }
  if ( a2 == (_BYTE *)1 )
    return sub_64EE40();
  if ( a2 == (_BYTE *)2 )
    return (_BYTE *)(*(int (__thiscall **)(void *))(*(_DWORD *)this + 72))(this);
  return result;
}


//======================================================================
// sub_655720
// entry 00655720  size 781  status ok
//======================================================================

int __thiscall sub_655720(void *this)
{
  _BYTE *v1; // eax
  _BYTE *v2; // eax
  Concurrency::details::VirtualProcessor *v3; // eax
  _BYTE *v4; // eax
  _BYTE *v5; // eax
  _BYTE *v6; // eax
  Concurrency::details::VirtualProcessor *v7; // eax
  Concurrency::details::VirtualProcessor *v8; // eax
  _BYTE *v9; // eax
  char v10; // al
  _BYTE *v11; // eax
  BYTE v14; // [esp+7h] [ebp-45h]
  CImageDisplay *v15; // [esp+8h] [ebp-44h]
  BYTE v16; // [esp+Fh] [ebp-3Dh]
  CImageDisplay *v17; // [esp+10h] [ebp-3Ch]
  BYTE v18; // [esp+17h] [ebp-35h]
  CImageDisplay *v19; // [esp+18h] [ebp-34h]
  BYTE v20; // [esp+1Fh] [ebp-2Dh]
  CImageDisplay *v21; // [esp+20h] [ebp-2Ch]
  BYTE v22; // [esp+27h] [ebp-25h]
  CImageDisplay *v23; // [esp+28h] [ebp-24h]
  RGBQUAD OwningRoot; // [esp+2Ch] [ebp-20h]
  CImageDisplay *v25; // [esp+30h] [ebp-1Ch]
  int v26; // [esp+34h] [ebp-18h]
  CImageDisplay *v27; // [esp+38h] [ebp-14h]
  BYTE v28; // [esp+3Fh] [ebp-Dh]
  CImageDisplay *v29; // [esp+40h] [ebp-Ch]
  BYTE v30; // [esp+47h] [ebp-5h]
  CImageDisplay *v31; // [esp+48h] [ebp-4h]

  if ( (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 360))(dword_162EE84) > 0 )
  {
    v1 = (_BYTE *)sub_5FB350((int)this, 3);
    v30 = sub_600230(v1);
    v31 = (CImageDisplay *)sub_6375B0((_DWORD **)dword_162EE84);
    CImageDisplay::GetDisplayFormat(v31)->bmiColors[0].rgbRed = v30;
  }
  v2 = (_BYTE *)sub_5FB350((int)this, 4);
  v28 = sub_600230(v2);
  v29 = (CImageDisplay *)sub_6375B0((_DWORD **)dword_162EE84);
  CImageDisplay::GetDisplayFormat(v29)->bmiColors[0].rgbBlue = v28;
  if ( (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 380))(dword_162EE84) )
  {
    if ( (unsigned __int8)sub_655A30(this) )
    {
      v26 = sub_655CE0(this);
      v27 = (CImageDisplay *)sub_6375B0((_DWORD **)dword_162EE84);
      CImageDisplay::GetDisplayFormat(v27)->TrueColorInfo.bmiColors[128] = (RGBQUAD)v26;
    }
    else
    {
      v3 = (Concurrency::details::VirtualProcessor *)sub_5FB860((int)this, 13);
      OwningRoot = (RGBQUAD)(char)Concurrency::details::VirtualProcessor::GetOwningRoot(v3);
      v25 = (CImageDisplay *)sub_6375B0((_DWORD **)dword_162EE84);
      CImageDisplay::GetDisplayFormat(v25)->bmiColors[130] = OwningRoot;
    }
    v4 = (_BYTE *)sub_5FB350((int)this, 12);
    v22 = sub_600230(v4);
    v23 = (CImageDisplay *)sub_6375B0((_DWORD **)dword_162EE84);
    CImageDisplay::GetDisplayFormat(v23)->bmiColors[129].rgbGreen = v22;
  }
  if ( (*(unsigned __int8 (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 184))(dword_162EE84) )
  {
    v5 = (_BYTE *)sub_5FB350((int)this, 5);
    v20 = sub_600230(v5);
    v21 = (CImageDisplay *)sub_6375B0((_DWORD **)dword_162EE84);
    CImageDisplay::GetDisplayFormat(v21)->bmiColors[200].rgbBlue = v20;
  }
  v6 = (_BYTE *)sub_5FB350((int)this, 6);
  v18 = sub_600230(v6);
  v19 = (CImageDisplay *)sub_6375B0((_DWORD **)dword_162EE84);
  CImageDisplay::GetDisplayFormat(v19)->bmiColors[0].rgbGreen = v18;
  if ( (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 360))(dword_162EE84) > 0 )
  {
    v7 = (Concurrency::details::VirtualProcessor *)sub_5FB860((int)this, 9);
    v16 = (unsigned __int8)Concurrency::details::VirtualProcessor::GetOwningRoot(v7);
    v17 = (CImageDisplay *)sub_6375B0((_DWORD **)dword_162EE84);
    CImageDisplay::GetDisplayFormat(v17)->bmiColors[1].rgbBlue = v16;
  }
  if ( (*(unsigned __int8 (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 188))(dword_162EE84) )
  {
    v8 = (Concurrency::details::VirtualProcessor *)sub_5FB860((int)this, 10);
    v14 = 10 - (unsigned __int8)Concurrency::details::VirtualProcessor::GetOwningRoot(v8);
    v15 = (CImageDisplay *)sub_6375B0((_DWORD **)dword_162EE84);
    CImageDisplay::GetDisplayFormat(v15)->bmiColors[0].rgbReserved = v14;
  }
  if ( (*(unsigned __int8 (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 180))(dword_162EE84) )
  {
    v9 = (_BYTE *)sub_5FB350((int)this, 7);
    v10 = sub_600230(v9);
    sub_6079D0(*(void **)(dword_7960D8 + 20), (int)"SkipMovie", v10 == 0);
    v11 = (_BYTE *)sub_5FB350((int)this, 7);
    byte_7960C5 = sub_600230(v11);
  }
  (*(void (__thiscall **)(void *))(*(_DWORD *)this + 76))(this);
  sub_637610((_DWORD **)dword_162EE84);
  (*(void (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 900))(dword_162EE84);
  return (*(int (__thiscall **)(int))(*(_DWORD *)dword_162EE80 + 160))(dword_162EE80);
}


//======================================================================
// sub_655A30
// entry 00655a30  size 42  status ok
//======================================================================

bool __thiscall sub_655A30(void *this)
{
  return (*(int (__thiscall **)(Concurrency::details::ContextBase *, void *))(*(_DWORD *)dword_162EE84 + 380))(
           dword_162EE84,
           this) > 1;
}


//======================================================================
// sub_655A60
// entry 00655a60  size 453  status ok
//======================================================================

int __thiscall sub_655A60(void *this)
{
  pairNode *v1; // eax
  _DWORD *v2; // eax
  pairNode *v3; // eax
  int v5; // [esp-Ch] [ebp-40h]
  int v6; // [esp-Ch] [ebp-40h]
  int v7; // [esp-8h] [ebp-3Ch]
  int v8; // [esp+0h] [ebp-34h]
  _DWORD *v9; // [esp+4h] [ebp-30h]
  _DWORD *v10; // [esp+8h] [ebp-2Ch]
  _DWORD *v12; // [esp+10h] [ebp-24h]
  _DWORD *v13; // [esp+18h] [ebp-1Ch]
  int i; // [esp+24h] [ebp-10h]

  if ( !sub_5FB720((int)this, 11) )
    sub_5E9F20("GetListBox(ED_LISTBOX_BACKGROUDMUSIC)", "..\\casinoShell\\environmentdialog.cpp", 433);
  for ( i = 0;
        i < (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 380))(dword_162EE84);
        ++i )
  {
    v13 = operator new(0x18u);
    if ( v13 )
    {
      sub_629AB0((int)v13);
      *v13 = &MusicListText::`vftable';
      v10 = v13;
    }
    else
    {
      v10 = 0;
    }
    v10[5] = (*(int (__thiscall **)(Concurrency::details::ContextBase *, int, int))(*(_DWORD *)dword_162EE84 + 384))(
               dword_162EE84,
               i,
               v8);
    v8 = 0;
    v7 = v10[5];
    v5 = (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 400))(dword_162EE84);
    v1 = (pairNode *)sub_5FB720((int)this, 11);
    sub_628980(v1, v10, v5, v7, -1);
  }
  v2 = (_DWORD *)sub_5FB720((int)this, 11);
  sub_628D80(v2);
  v12 = operator new(0x18u);
  if ( v12 )
  {
    sub_629AB0((int)v12);
    *v12 = &MusicListText::`vftable';
    v9 = v12;
  }
  else
  {
    v9 = 0;
  }
  v9[5] = -1;
  v6 = sub_630F40((int)"SID_SHELL_RANDOM");
  v3 = (pairNode *)sub_5FB720((int)this, 11);
  return sub_628980(v3, v9, v6, -1, 0);
}


//======================================================================
// sub_655C30
// entry 00655c30  size 164  status ok
//======================================================================

int __thiscall sub_655C30(void *this)
{
  int i; // eax
  int result; // eax
  CImageDisplay *v3; // eax
  int v4; // [esp+0h] [ebp-1Ch]
  int v6; // [esp+10h] [ebp-Ch]
  int v7; // [esp+14h] [ebp-8h]
  int v8; // [esp+18h] [ebp-4h]

  v8 = 0;
  for ( i = sub_5FB720((int)this, 11); ; i = sub_5FB720((int)this, 11) )
  {
    result = (*(int (__thiscall **)(int))(*(_DWORD *)i + 184))(i);
    if ( v8 >= result )
      break;
    v6 = sub_5FB720((int)this, 11);
    v7 = sub_60CA40((_DWORD *)(v6 + 112), v8);
    v3 = (CImageDisplay *)sub_6375B0((_DWORD **)dword_162EE84);
    if ( *(_DWORD *)(v7 + 20) == sub_639F50(v3) )
    {
      v4 = sub_5FB720((int)this, 11);
      return (*(int (__thiscall **)(int, int, int))(*(_DWORD *)v4 + 192))(v4, v8, 1);
    }
    ++v8;
  }
  return result;
}


//======================================================================
// sub_655CE0
// entry 00655ce0  size 33  status ok
//======================================================================

int __thiscall sub_655CE0(void *this)
{
  Concurrency::details::UMSFreeVirtualProcessorRoot *v1; // eax

  v1 = (Concurrency::details::UMSFreeVirtualProcessorRoot *)sub_5FB720((int)this, 11);
  return *(_DWORD *)(sub_5E4390(v1) + 20);
}


//======================================================================
// sub_655D10
// entry 00655d10  size 1311  status ok
//======================================================================

char __thiscall sub_655D10(_DWORD *this, int a2)
{
  int v2; // eax
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
  int v17; // [esp+4h] [ebp-70h]
  int v18; // [esp+Ch] [ebp-68h]
  int v19; // [esp+14h] [ebp-60h]
  int v20; // [esp+1Ch] [ebp-58h]
  int v21; // [esp+24h] [ebp-50h]
  int v22; // [esp+2Ch] [ebp-48h]
  int v23; // [esp+34h] [ebp-40h]
  int v24; // [esp+3Ch] [ebp-38h]
  int v25; // [esp+44h] [ebp-30h]
  int v26; // [esp+4Ch] [ebp-28h]
  int v27; // [esp+54h] [ebp-20h]
  int v28; // [esp+5Ch] [ebp-18h]
  int v29; // [esp+64h] [ebp-10h]
  int v30; // [esp+6Ch] [ebp-8h]

  v2 = sub_5FB300((int)this, 0);
  if ( (unsigned __int8)sub_656230(a2, v2) )
  {
    v30 = sub_630F40((int)"SID_SHELL_ENVIRONMENT_ROLLOVER_OK");
    (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(*(this + 111) + 108) + 180))(
      *(_DWORD *)(*(this + 111) + 108),
      v30);
    return 1;
  }
  else
  {
    v4 = sub_5FB300((int)this, 1);
    if ( (unsigned __int8)sub_656230(a2, v4) )
    {
      v29 = sub_630F40((int)"SID_SHELL_ENVIRONMENT_ROLLOVER_CANCEL");
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(*(this + 111) + 108) + 180))(
        *(_DWORD *)(*(this + 111) + 108),
        v29);
      return 1;
    }
    else
    {
      v5 = sub_5FB300((int)this, 2);
      if ( (unsigned __int8)sub_656230(a2, v5) )
      {
        v28 = sub_630F40((int)"SID_SHELL_ENVIRONMENT_ROLLOVER_APPLY");
        (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(*(this + 111) + 108) + 180))(
          *(_DWORD *)(*(this + 111) + 108),
          v28);
        return 1;
      }
      else
      {
        v6 = sub_5FB350((int)this, 3);
        if ( (unsigned __int8)sub_656230(a2, v6) )
        {
          v27 = sub_630F40((int)"SID_SHELL_ENVIRONMENT_ROLLOVER_SPEECH");
          (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(*(this + 111) + 108) + 180))(
            *(_DWORD *)(*(this + 111) + 108),
            v27);
          return 1;
        }
        else
        {
          v7 = sub_5FB350((int)this, 4);
          if ( (unsigned __int8)sub_656230(a2, v7) )
          {
            v26 = sub_630F40((int)"SID_SHELL_ENVIRONMENT_ROLLOVER_ANIMATIONS");
            (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(*(this + 111) + 108) + 180))(
              *(_DWORD *)(*(this + 111) + 108),
              v26);
            return 1;
          }
          else
          {
            v8 = sub_5FB350((int)this, 12);
            if ( (unsigned __int8)sub_656230(a2, v8) )
            {
              v25 = sub_630F40((int)"SID_SHELL_ENVIRONMENT_ROLLOVER_MUSIC");
              (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(*(this + 111) + 108) + 180))(
                *(_DWORD *)(*(this + 111) + 108),
                v25);
              return 1;
            }
            else
            {
              v9 = sub_5FB350((int)this, 5);
              if ( (unsigned __int8)sub_656230(a2, v9) )
              {
                v24 = sub_630F40((int)"SID_SHELL_ENVIRONMENT_ROLLOVER_NOISE");
                (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(*(this + 111) + 108) + 180))(
                  *(_DWORD *)(*(this + 111) + 108),
                  v24);
                return 1;
              }
              else
              {
                v10 = sub_5FB350((int)this, 6);
                if ( (unsigned __int8)sub_656230(a2, v10) )
                {
                  v23 = sub_630F40((int)"SID_SHELL_ENVIRONMENT_ROLLOVER_SOUNDS");
                  (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(*(this + 111) + 108) + 180))(
                    *(_DWORD *)(*(this + 111) + 108),
                    v23);
                  return 1;
                }
                else
                {
                  v11 = sub_5FB350((int)this, 7);
                  if ( (unsigned __int8)sub_656230(a2, v11) )
                  {
                    v22 = sub_630F40((int)"SID_SHELL_ENVIRONMENT_ROLLOVER_MOVIE");
                    (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(*(this + 111) + 108) + 180))(
                      *(_DWORD *)(*(this + 111) + 108),
                      v22);
                    return 1;
                  }
                  else
                  {
                    v12 = sub_5FB860((int)this, 9);
                    if ( (unsigned __int8)sub_656230(a2, v12) )
                    {
                      v21 = sub_630F40((int)"SID_SHELL_ENVIRONMENT_ROLLOVER_ATTITUDE");
                      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(*(this + 111) + 108) + 180))(
                        *(_DWORD *)(*(this + 111) + 108),
                        v21);
                      return 1;
                    }
                    else
                    {
                      v13 = sub_5FB860((int)this, 10);
                      if ( (unsigned __int8)sub_656230(a2, v13) )
                      {
                        v20 = sub_630F40((int)"SID_SHELL_ENVIRONMENT_ROLLOVER_SPEED");
                        (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(*(this + 111) + 108) + 180))(
                          *(_DWORD *)(*(this + 111) + 108),
                          v20);
                        return 1;
                      }
                      else
                      {
                        v14 = sub_5FB860((int)this, 13);
                        if ( (unsigned __int8)sub_656230(a2, v14) )
                        {
                          v19 = sub_630F40((int)"SID_SHELL_ENVIRONMENT_ROLLOVER_VOLUME");
                          (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(*(this + 111) + 108) + 180))(
                            *(_DWORD *)(*(this + 111) + 108),
                            v19);
                          return 1;
                        }
                        else
                        {
                          v15 = sub_5FB720((int)this, 11);
                          if ( (unsigned __int8)sub_656230(a2, v15) )
                          {
                            if ( (*(unsigned __int8 (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 376))(dword_162EE84) )
                            {
                              v18 = sub_630F40((int)"SID_SHELL_ENVIRONMENT_ROLLOVER_MUSIC_CHOICE_SOMEGAMES");
                              (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(*(this + 111) + 108) + 180))(
                                *(_DWORD *)(*(this + 111) + 108),
                                v18);
                            }
                            else
                            {
                              v17 = sub_630F40((int)"SID_SHELL_ENVIRONMENT_ROLLOVER_MUSIC_CHOICE");
                              (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(*(this + 111) + 108) + 180))(
                                *(_DWORD *)(*(this + 111) + 108),
                                v17);
                            }
                            return 1;
                          }
                          else
                          {
                            return 0;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
}


//======================================================================
// sub_656230
// entry 00656230  size 67  status ok
//======================================================================

bool __stdcall sub_656230(int a1, int a2)
{
  return a2 && (*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)a2 + 132))(a2, a1);
}


//======================================================================
// sub_656280
// entry 00656280  size 94  status ok
//======================================================================

void __thiscall sub_656280(_DWORD **this, int a2)
{
  if ( dword_16306A0
    && !(*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)dword_16306A0 + 80))(dword_16306A0, a2)
    && *(_DWORD *)(a2 + 24) == 3 )
  {
    (*(void (__thiscall **)(_DWORD, const char *))(**(this + 27) + 180))(*(this + 27), &Source);
  }
}


//======================================================================
// sub_656340
// entry 00656340  size 506  status ok
//======================================================================

int __thiscall sub_656340(int this, int a2, char *Source)
{
  int i; // [esp+8h] [ebp-10h]
  int j; // [esp+8h] [ebp-10h]
  int k; // [esp+8h] [ebp-10h]
  int m; // [esp+8h] [ebp-10h]

  sub_5F71F0((_DWORD *)this, 1, 0);
  *(_DWORD *)this = &FaceMakerDialog::`vftable';
  sub_5EAAF0((_DWORD *)(this + 668));
  sub_5EC5A0((void *)(this + 1068));
  sub_5F83D0((_DWORD *)this, 2000017, 0);
  *(_BYTE *)(this + 440) = 1;
  *(_DWORD *)(this + 1596) = a2;
  if ( Source )
    strcpy((char *)(this + 444), Source);
  else
    strcpy((char *)(this + 444), &::Source);
  *(_DWORD *)(this + 632) = 0;
  *(_DWORD *)(this + 636) = 0;
  *(_BYTE *)(this + 640) = 0;
  *(_DWORD *)(this + 472) = 0;
  *(_DWORD *)(this + 476) = 0;
  for ( i = 0; i < 2; ++i )
    *(_DWORD *)(this + 4 * i + 644) = 0;
  for ( j = 0; j < 4; ++j )
    *(_DWORD *)(this + 4 * j + 652) = 0;
  for ( k = 0; k < 4; ++k )
    *(_DWORD *)(this + 4 * k + 1044) = 0;
  *(_DWORD *)(this + 1060) = 0;
  *(_DWORD *)(this + 1064) = 0;
  *(_DWORD *)(this + 1532) = 0;
  *(_DWORD *)(this + 1544) = 0;
  for ( m = 0; m < 12; ++m )
    *(_DWORD *)(this + 4 * m + 1548) = 0;
  return this;
}


//======================================================================
// sub_656540
// entry 00656540  size 461  status ok
//======================================================================

int __thiscall sub_656540(int this)
{
  int i; // [esp+38h] [ebp-10h]

  *(_DWORD *)this = &FaceMakerDialog::`vftable';
  if ( *(_DWORD *)(this + 1544) )
  {
    sub_606830(*(char **)(this + 1544));
    if ( *(_DWORD *)(this + 1544) )
      (***(void (__thiscall ****)(_DWORD, int))(this + 1544))(*(_DWORD *)(this + 1544), 1);
    *(_DWORD *)(this + 1544) = 0;
  }
  for ( i = 0; i < 12; ++i )
  {
    if ( *(_DWORD *)(this + 4 * i + 1548) )
    {
      (***(void (__thiscall ****)(_DWORD, int))(this + 4 * i + 1548))(*(_DWORD *)(this + 4 * i + 1548), 1);
      *(_DWORD *)(this + 4 * i + 1548) = 0;
    }
  }
  if ( *(_DWORD *)(this + 1596) )
    (***(void (__thiscall ****)(_DWORD, int))(this + 1596))(*(_DWORD *)(this + 1596), 1);
  if ( *(_DWORD *)(this + 472) )
  {
    (***(void (__thiscall ****)(_DWORD, int))(this + 472))(*(_DWORD *)(this + 472), 1);
    *(_DWORD *)(this + 472) = 0;
  }
  sub_5EC760((void **)(this + 1068));
  sub_5EAC00((_DWORD *)(this + 668));
  return sub_5F7260((void (__thiscall ****)(_DWORD, int))this);
}


//======================================================================
// sub_656710
// entry 00656710  size 620  status ok
//======================================================================

int __thiscall sub_656710(int this)
{
  _BYTE *v1; // eax
  int result; // eax
  const CHAR *v3; // eax
  const CHAR *v4; // [esp-8h] [ebp-28h]
  int v5; // [esp+8h] [ebp-18h]
  int v6; // [esp+Ch] [ebp-14h]
  int i; // [esp+1Ch] [ebp-4h]

  CMFCTabCtrl::HideInactiveWindow((CMFCTabCtrl *)this, 0);
  sub_656980();
  for ( i = 0; i < 12; ++i )
  {
    *(_DWORD *)(this + 1532) = sub_5F9FF0(
                                 this,
                                 0,
                                 0,
                                 i + 1239,
                                 0,
                                 2000080,
                                 103 * (i % 6) + 12,
                                 i >= 6 ? 91 : 4,
                                 3,
                                 (int)&Source,
                                 -1,
                                 -1,
                                 -1,
                                 -1,
                                 20,
                                 0);
    v1 = (_BYTE *)sub_606350(*(void **)(this + 1532), i);
    sub_5EB700(v1, 1);
  }
  if ( !*(_DWORD *)(this + 472) )
  {
    *(_DWORD *)(this + 472) = (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 796))(dword_162EE84);
    sub_63A3E0(*(_DWORD *)(this + 472), -1, 0);
    sub_63A8D0(*(_DWORD *)(this + 472), -1, this, 0, 0, 0);
    CImageDisplay::GetDisplayFormat(*(CImageDisplay **)(this + 472))->rcSource.left = 3;
    sub_646380(*(_DWORD *)(*(_DWORD *)(this + 472) + 32), 1);
    sub_646150(*(_DWORD *)(*(_DWORD *)(this + 472) + 32), 270, 298);
  }
  *(_DWORD *)(this + 476) = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(this + 472) + 32) + 20);
  sub_657430(this);
  if ( *(_BYTE *)(this + 444) )
    sub_65A0B0((char *)(this + 444));
  if ( sub_5FB5E0(this, 1024) )
  {
    if ( *(_BYTE *)(this + 444) )
      v6 = sub_665800(this + 444);
    else
      v6 = 33;
    v5 = sub_5FB5E0(this, 1024);
    (*(void (__thiscall **)(int, int, int))(*(_DWORD *)v5 + 240))(v5, v6 + 100031, 1);
  }
  qmemcpy((void *)(this + 480), (const void *)(*(_DWORD *)(this + 476) + 16), 0x4Cu);
  memset((void *)(this + 556), 0, 0x4Cu);
  result = (unsigned __int8)byte_795F95;
  if ( byte_795F95 )
  {
    v4 = (const CHAR *)sub_630F40((int)"SID_SHELL_FAMEMAKER_TM");
    v3 = (const CHAR *)sub_630F40((int)"SID_SHELL_FACEMAKER_CANNOT_SAVE");
    return sub_62FF10(v3, v4, 0);
  }
  return result;
}


//======================================================================
// sub_656980
// entry 00656980  size 2088  status ok
//======================================================================

int __thiscall sub_656980(int this)
{
  _DWORD *v1; // eax
  _DWORD *v2; // eax
  int result; // eax
  int v4; // [esp+4h] [ebp-90h]
  int v5; // [esp+8h] [ebp-8Ch]
  int v6; // [esp+Ch] [ebp-88h]
  int v7; // [esp+10h] [ebp-84h]
  _DWORD *v9; // [esp+18h] [ebp-7Ch]
  _DWORD v10[4]; // [esp+20h] [ebp-74h]
  _DWORD **v11; // [esp+30h] [ebp-64h]
  _DWORD v12[10]; // [esp+34h] [ebp-60h]
  char Buffer[4]; // [esp+5Ch] [ebp-38h] BYREF
  _DWORD *v14; // [esp+60h] [ebp-34h]
  int i; // [esp+64h] [ebp-30h]
  _DWORD v16[4]; // [esp+68h] [ebp-2Ch]
  _DWORD v17[4]; // [esp+78h] [ebp-1Ch]
  int v18; // [esp+90h] [ebp-4h]

  v16[0] = 2000090;
  v16[1] = 2000091;
  v16[2] = 2000092;
  v16[3] = 2000093;
  v17[0] = 2000025;
  v17[1] = 2000026;
  v17[2] = 2000027;
  v17[3] = 2000028;
  v12[0] = 0;
  v12[1] = 1;
  v12[2] = 2;
  v12[3] = 3;
  v12[4] = 5;
  v12[5] = 6;
  v12[6] = 7;
  v12[7] = 8;
  v12[8] = 10;
  v12[9] = 11;
  sub_5F9DE0((void *)this, 0, 1000, 2000035, 0, 0, 2, (int)&Source, -1, -1, -1, -1, 0);
  sub_5F9DE0((void *)this, 0, 1001, 2000036, 0, 0, 2, (int)&Source, -1, -1, -1, -1, 0);
  sub_5F9DE0((void *)this, 0, 1002, 2000021, 0, 0, 2, (int)&Source, -1, -1, -1, -1, 0);
  sub_5F9DE0((void *)this, 0, 1003, 2000010, 0, 0, 2, (int)&Source, -1, -1, -1, -1, 0);
  sub_5F9DE0((void *)this, 0, 1004, 2000059, 0, 0, 2, (int)&Source, -1, -1, -1, -1, 0);
  sub_5F9DE0((void *)this, 0, 1006, 2000013, 0, 0, 4, (int)&Source, -1, -1, -1, -1, 0);
  sub_5F9DE0((void *)this, 0, 1005, 2000016, 0, 0, 3, (int)&Source, -1, -1, -1, -1, 0);
  v14 = sub_5F9DE0((void *)this, 0, 1007, 2000005, 0, 0, 5, (int)&Source, -1, -1, -1, -1, 0);
  *(_DWORD *)(this + 644) = sub_5F9DE0((void *)this, 0, 1008, 2000042, 0, 0, 3, (int)&Source, -1, -1, -1, -1, 0);
  sub_602EF0(*(_DWORD **)(this + 644), 10, 10);
  *(_DWORD *)(this + 648) = sub_5F9DE0((void *)this, 0, 1009, 2000043, 0, 0, 3, (int)&Source, -1, -1, -1, -1, 0);
  sub_602EF0(*(_DWORD **)(this + 648), 10, 10);
  v10[0] = 1;
  v10[1] = 2;
  v10[2] = 3;
  v10[3] = 4;
  for ( i = 0; i < 4; ++i )
  {
    v1 = sub_5F9DE0((void *)this, 0, i + 1010, v16[i], 0, -10, i + 2, (int)&Source, -1, -1, -1, -1, 0);
    *(_DWORD *)(this + 4 * i + 652) = v1;
    sub_6026F0(*(_BYTE **)(this + 4 * i + 652), v10[i]);
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 4 * i + 652) + 208))(*(_DWORD *)(this + 4 * i + 652));
    sub_602EF0(*(_DWORD **)(this + 4 * i + 652), 10, 10);
  }
  for ( i = 0; i < 4; ++i )
  {
    if ( !*(_DWORD *)(this + 4 * i + 1044) )
    {
      v2 = sub_5F9DE0((void *)this, 0, i + 1014, v17[i], 0, 0, 2, (int)&Source, -1, -1, -1, -1, 0);
      *(_DWORD *)(this + 4 * i + 1044) = v2;
      (*(void (__thiscall **)(_DWORD, _DWORD, int))(**(_DWORD **)(this + 4 * i + 1044) + 68))(
        *(_DWORD *)(this + 4 * i + 1044),
        0,
        -10);
    }
  }
  for ( i = 0; i < 10; ++i )
    *(_DWORD *)(this + 1060) = sub_5F9FF0(
                                 this,
                                 0,
                                 0,
                                 v12[i] + 1027,
                                 (struct CPaneDivider *)0x3FA,
                                 i + 2000300,
                                 0,
                                 0,
                                 6,
                                 (int)&Source,
                                 -1,
                                 -1,
                                 -1,
                                 -1,
                                 20,
                                 0);
  (*(void (__thiscall **)(int, int))(*(_DWORD *)(this + 668) + 152))(this + 668, this);
  sub_5EAE80(2000094, 0, 0, 5, -1);
  (*(void (__thiscall **)(int, int))(*(_DWORD *)(this + 668) + 176))(this + 668, dword_77089C);
  (*(void (__thiscall **)(int))(*(_DWORD *)(this + 668) + 116))(this + 668);
  for ( i = 0; i < 21; ++i )
  {
    sprintf(Buffer, "%d", i + 1);
    v9 = operator new(0x210u);
    v18 = 0;
    if ( v9 )
    {
      sub_6060A0(v9);
      *v9 = &FaceMakerDialogPageRadioButton::`vftable';
      v7 = (int)v9;
    }
    else
    {
      v7 = 0;
    }
    v18 = -1;
    *(_DWORD *)(this + 1064) = sub_5F9FF0(
                                 this,
                                 v7,
                                 0,
                                 i + 1139,
                                 (struct CPaneDivider *)0x3FC,
                                 2000077,
                                 28 * i + 26,
                                 178,
                                 2,
                                 (int)Buffer,
                                 80,
                                 -1,
                                 -1,
                                 -1,
                                 20,
                                 0);
  }
  (*(void (__thiscall **)(int, int))(*(_DWORD *)(this + 1068) + 152))(this + 1068, this);
  sub_5EC8F0((void *)(this + 1068), (int)&Source, 80, 98, 18, 271, 202, 3, 48, -1);
  (*(void (__thiscall **)(int))(*(_DWORD *)(this + 1068) + 116))(this + 1068);
  *(_DWORD *)(this + 1540) = sub_5F9CE0((void *)this, 0, -1, 2000095, 0, 0, 1, 0, 0xFFu, 0);
  for ( i = 0; i < 3; ++i )
    *(_DWORD *)(this + 1536) = sub_5F9FF0(
                                 this,
                                 0,
                                 0,
                                 i + 1021,
                                 (struct CPaneDivider *)0x402,
                                 2000096,
                                 0,
                                 0,
                                 2,
                                 (int)&Source,
                                 4,
                                 -1,
                                 -1,
                                 -1,
                                 20,
                                 0);
  v6 = sub_606350(*(void **)(this + 1536), 0);
  (*(void (__thiscall **)(int, int))(*(_DWORD *)v6 + 200))(v6, 2000096);
  v5 = sub_606350(*(void **)(this + 1536), 1);
  (*(void (__thiscall **)(int, int))(*(_DWORD *)v5 + 200))(v5, 2000097);
  v4 = sub_606350(*(void **)(this + 1536), 2);
  (*(void (__thiscall **)(int, int))(*(_DWORD *)v4 + 200))(v4, 2000098);
  sub_6064E0(*(void **)(this + 1536), 2);
  result = (*(unsigned __int8 (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 200))(dword_162EE84);
  if ( (_BYTE)result )
  {
    v11 = (_DWORD **)sub_5FAEE0(
                       (void *)this,
                       0,
                       1024,
                       2300641,
                       260,
                       417,
                       1,
                       (struct Concurrency::details::SchedulerBase *)0x1390,
                       1,
                       (int)&Source,
                       31,
                       31,
                       31,
                       31);
    sub_5F9DE0((void *)this, 0, 1025, 2300640, 235, 389, 2, (int)&Source, -1, -1, -1, -1, 0);
    result = sub_602E30(v11, 5, 0);
    if ( byte_795F95 )
    {
      for ( i = 100065; i <= 100068; ++i )
        result = sub_5F2BA0((void *)dword_162EE80, i);
      for ( i = 100070; i <= 100073; ++i )
        result = sub_5F2BA0((void *)dword_162EE80, i);
    }
  }
  return result;
}


//======================================================================
// sub_6571B0
// entry 006571b0  size 39  status ok
//======================================================================

int __thiscall sub_6571B0(_DWORD *this)
{
  sub_5F85D0((int)this);
  return sub_664630(*(_DWORD *)(*(_DWORD *)(*(this + 118) + 32) + 20));
}


//======================================================================
// sub_6571E0
// entry 006571e0  size 236  status ok
//======================================================================

char __thiscall sub_6571E0(_BYTE *this, int a2)
{
  _BYTE *v2; // eax
  _BYTE *v5; // [esp+4h] [ebp-Ch]
  _BYTE *v6; // [esp+8h] [ebp-8h]
  int i; // [esp+Ch] [ebp-4h]

  LOBYTE(v2) = sub_5F72F0(this, a2);
  if ( *(_DWORD *)(a2 + 24) == 3 )
  {
    for ( i = 1239; i < 1251; ++i )
    {
      v2 = (_BYTE *)sub_5FB3F0(this, i, 0);
      v6 = v2;
      if ( v2 )
      {
        v2 = (_BYTE *)*((_DWORD *)this + i - 852);
        v5 = v2;
        if ( v2 )
        {
          LOBYTE(v2) = sub_600230(v2);
          if ( !(_BYTE)v2 )
          {
            if ( (*(unsigned __int8 (__thiscall **)(_BYTE *, int))(*(_DWORD *)v6 + 132))(v6, a2)
              || (*(unsigned __int8 (__thiscall **)(_BYTE *, int))(*(_DWORD *)v5 + 132))(v5, a2) )
            {
              LOBYTE(v2) = (*(int (__thiscall **)(_BYTE *, int))(*(_DWORD *)v5 + 176))(v5, 3);
            }
            else
            {
              LOBYTE(v2) = (*(int (__thiscall **)(_BYTE *, _DWORD))(*(_DWORD *)v5 + 176))(v5, 0);
            }
          }
        }
      }
    }
  }
  return (char)v2;
}


//======================================================================
// sub_6572D0
// entry 006572d0  size 347  status ok
//======================================================================

void __thiscall sub_6572D0(int this, int a2)
{
  if ( a2 < 1027 || a2 >= 1039 )
  {
    if ( a2 < 1127 || a2 >= 1139 )
    {
      if ( a2 >= 1021 && a2 <= 1023 )
      {
        if ( a2 == 1021 || a2 == 1023 )
        {
          if ( *(_DWORD *)(this + 632) == 3 || *(_DWORD *)(this + 632) == 4 )
          {
            sub_657500(3);
          }
          else if ( *(_DWORD *)(this + 632) == 8 || *(_DWORD *)(this + 632) == 9 )
          {
            sub_657500(8);
          }
        }
        if ( a2 == 1022 )
        {
          if ( *(_DWORD *)(this + 632) == 3 || *(_DWORD *)(this + 632) == 4 )
          {
            sub_657500(4);
          }
          else if ( *(_DWORD *)(this + 632) == 8 || *(_DWORD *)(this + 632) == 9 )
          {
            sub_657500(9);
          }
        }
        sub_657B10(this);
      }
    }
    else if ( sub_606570(*(void **)(this + 1060)) != a2 - 100 )
    {
      sub_6065D0(*(void **)(this + 1060), a2 - 100);
    }
  }
  else if ( sub_606570(*(void **)(this + 1060)) == a2 )
  {
    sub_657500(a2 - 1027);
  }
}


//======================================================================
// sub_657430
// entry 00657430  size 207  status ok
//======================================================================

int __thiscall sub_657430(int this)
{
  int v1; // eax
  int v2; // eax
  int v3; // eax
  int v4; // eax

  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 476) + 4))(*(_DWORD *)(this + 476));
  v1 = sub_675B40(0, 0, 0);
  sub_664730(0, v1);
  v2 = sub_675B40(0, 0, 0);
  v3 = sub_675B40(1, 0, v2);
  sub_664730(1, v3);
  v4 = sub_675B40(2, 0, 0);
  sub_664730(2, v4);
  sub_6065D0(*(void **)(this + 1060), 1027);
  sub_657500(0);
  return sub_6595E0(1);
}


//======================================================================
// sub_657500
// entry 00657500  size 652  status ok
//======================================================================

int __thiscall sub_657500(int this, int a2)
{
  int v2; // eax
  int v4; // [esp+4h] [ebp-18h]
  int v5; // [esp+8h] [ebp-14h]
  int v6; // [esp+Ch] [ebp-10h]
  int v8; // [esp+18h] [ebp-4h]

  sub_6067E0(*(void **)(this + 1532));
  (*(void (__thiscall **)(int, int))(*(_DWORD *)(this + 668) + 176))(this + 668, dword_77089C[a2]);
  switch ( a2 )
  {
    case 0:
    case 1:
    case 2:
    case 5:
    case 6:
    case 7:
    case 10:
    case 11:
      *(_DWORD *)(this + 632) = a2;
      break;
    case 3:
      if ( sub_6651E0(3) || !sub_6651E0(4) )
        *(_DWORD *)(this + 632) = 3;
      else
        *(_DWORD *)(this + 632) = 4;
      break;
    case 8:
      if ( sub_6651E0(8) || !sub_6651E0(9) )
        *(_DWORD *)(this + 632) = 8;
      else
        *(_DWORD *)(this + 632) = 9;
      break;
    default:
      break;
  }
  if ( (unsigned __int8)sub_657820(this) )
  {
    sub_606660(*(void **)(this + 1532));
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 1540) + 116))(*(_DWORD *)(this + 1540));
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 1536) + 116))(*(_DWORD *)(this + 1536));
  }
  else
  {
    sub_606720(*(void **)(this + 1532));
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 1540) + 112))(*(_DWORD *)(this + 1540));
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 1536) + 112))(*(_DWORD *)(this + 1536));
  }
  *(_DWORD *)(this + 636) = sub_6577B0(-1);
  sub_657B10(this);
  v6 = sub_5FB300(this, 1002);
  (*(void (__thiscall **)(int))(*(_DWORD *)v6 + 204))(v6);
  v5 = sub_5FB300(this, 1001);
  (*(void (__thiscall **)(int))(*(_DWORD *)v5 + 204))(v5);
  if ( !*(_DWORD *)(this + 632) || *(_DWORD *)(this + 632) == 2 )
  {
    v4 = sub_5FB300(this, 1001);
    (*(void (__thiscall **)(int))(*(_DWORD *)v4 + 208))(v4);
  }
  if ( *(_DWORD *)(this + 632) <= 1u )
  {
    v2 = sub_5FB300(this, 1002);
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v2 + 208))(v2, v2);
  }
  v8 = 12 * (*(_DWORD *)(this + 636) / 12);
  if ( v8 < 0 )
    v8 = 0;
  return sub_657E60(v8, 0);
}


//======================================================================
// sub_6577B0
// entry 006577b0  size 112  status ok
//======================================================================

int __thiscall sub_6577B0(_DWORD *this, int a2)
{
  int v3; // eax
  int v4; // [esp-4h] [ebp-8h]

  if ( a2 == -1 )
    a2 = *(this + 158);
  if ( !sub_6651E0(a2) )
    return -1;
  v4 = sub_6651E0(0);
  v3 = sub_6651E0(a2);
  return sub_675F70(a2, v3, v4);
}


//======================================================================
// sub_657820
// entry 00657820  size 100  status ok
//======================================================================

bool sub_657820()
{
  return (unsigned __int8)sub_657890(3)
      || (unsigned __int8)sub_657890(4)
      || (unsigned __int8)sub_657890(8)
      || (unsigned __int8)sub_657890(9);
}


//======================================================================
// sub_657890
// entry 00657890  size 30  status ok
//======================================================================

BOOL __thiscall sub_657890(_DWORD *this, int a2)
{
  return *(this + 158) == a2;
}


//======================================================================
// sub_6578B0
// entry 006578b0  size 594  status ok
//======================================================================

char __thiscall sub_6578B0(int this)
{
  int v2; // [esp+0h] [ebp-8h]

  if ( sub_657890((_DWORD *)this, 0) || sub_657890((_DWORD *)this, 1) )
    return 0;
  if ( !sub_657820() )
    return *(_DWORD *)(this + 632) > 1u;
  v2 = sub_606570(*(void **)(this + 1536));
  switch ( v2 )
  {
    case 1021:
      return (sub_657890((_DWORD *)this, 3) || sub_657890((_DWORD *)this, 4)) && sub_6651E0(3)
          || (sub_657890((_DWORD *)this, 8) || sub_657890((_DWORD *)this, 9)) && sub_6651E0(8);
    case 1022:
      return (sub_657890((_DWORD *)this, 3) || sub_657890((_DWORD *)this, 4)) && sub_6651E0(4)
          || (sub_657890((_DWORD *)this, 8) || sub_657890((_DWORD *)this, 9)) && sub_6651E0(9);
    case 1023:
      return (sub_657890((_DWORD *)this, 3) || sub_657890((_DWORD *)this, 4)) && (sub_6651E0(3) || sub_6651E0(4))
          || (sub_657890((_DWORD *)this, 8) || sub_657890((_DWORD *)this, 9)) && (sub_6651E0(8) || sub_6651E0(9));
    default:
      return 1;
  }
}


//======================================================================
// sub_657B10
// entry 00657b10  size 156  status ok
//======================================================================

int __thiscall sub_657B10(_DWORD **this)
{
  int result; // eax
  int i; // [esp+4h] [ebp-4h]
  int j; // [esp+4h] [ebp-4h]

  result = (unsigned __int8)sub_6578B0((int)this);
  if ( (_BYTE)result )
  {
    for ( i = 0; i < 4; ++i )
      result = (*(int (__thiscall **)(_DWORD))(**(this + i + 163) + 204))(*(this + i + 163));
  }
  else
  {
    for ( j = 0; j < 4; ++j )
    {
      (*(void (__thiscall **)(_DWORD))(**(this + j + 163) + 208))(*(this + j + 163));
      result = j + 1;
    }
  }
  return result;
}


//======================================================================
// sub_657BB0
// entry 00657bb0  size 21  status ok
//======================================================================

int __thiscall sub_657BB0(char *this)
{
  return *(this + 640);
}


//======================================================================
// sub_657BD0
// entry 00657bd0  size 99  status ok
//======================================================================

int __thiscall sub_657BD0(_DWORD *this)
{
  int v1; // eax
  int v4; // [esp+4h] [ebp-4h]

  v1 = sub_6651E0(0);
  v4 = sub_675E40(*(this + 158), v1);
  if ( v4 % 12 )
    return v4 / 12 + 1;
  else
    return v4 / 12;
}


//======================================================================
// sub_657C40
// entry 00657c40  size 168  status ok
//======================================================================

int __thiscall sub_657C40(int this)
{
  int v1; // esi

  if ( sub_657BB0((char *)this) )
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 644) + 204))(*(_DWORD *)(this + 644));
  else
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 644) + 208))(*(_DWORD *)(this + 644));
  v1 = sub_657BB0((char *)this);
  if ( v1 == sub_657BD0((_DWORD *)this) - 1 )
    return (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 648) + 208))(*(_DWORD *)(this + 648));
  else
    return (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 648) + 204))(*(_DWORD *)(this + 648));
}


//======================================================================
// sub_657CF0
// entry 00657cf0  size 365  status ok
//======================================================================

void __thiscall sub_657CF0(int this)
{
  pairNode *v1; // eax
  pairNode *v2; // eax
  CPaneContainer *v3; // eax
  struct CPaneDivider *v4; // [esp-4h] [ebp-2Ch]
  int v5; // [esp+0h] [ebp-28h]
  int v6; // [esp+4h] [ebp-24h]
  int v7; // [esp+8h] [ebp-20h]
  char Buffer[4]; // [esp+10h] [ebp-18h] BYREF
  int i; // [esp+14h] [ebp-14h]
  int v11; // [esp+18h] [ebp-10h]
  int v12; // [esp+1Ch] [ebp-Ch]
  int v13; // [esp+20h] [ebp-8h]
  int v14; // [esp+24h] [ebp-4h]

  v13 = sub_657BB0((char *)this) + 1;
  v14 = sub_657BD0((_DWORD *)this);
  v1 = (pairNode *)sub_606350(*(void **)(this + 1064), 0);
  v11 = pairNode::raw_length(v1) - 1138;
  v2 = (pairNode *)sub_606350(*(void **)(this + 1064), 9);
  v12 = pairNode::raw_length(v2) - 1138;
  if ( v14 > 21 )
  {
    if ( v13 >= v11 )
    {
      if ( v13 <= v12 )
        return;
      if ( v14 >= v13 + 5 )
        v6 = v13 + 5;
      else
        v6 = v14;
      v12 = v6;
      v11 = v6 - 9;
    }
    else
    {
      if ( v13 - 4 >= 1 )
        v7 = v13 - 4;
      else
        v7 = 1;
      v11 = v7;
      v12 = v7 + 9;
    }
  }
  else
  {
    v11 = 1;
    v12 = 21;
  }
  for ( i = 0; i < 21; ++i )
  {
    sprintf(Buffer, "%d", i + v11);
    v5 = sub_606350(*(void **)(this + 1064), i);
    (*(void (__thiscall **)(int, char *))(*(_DWORD *)v5 + 224))(v5, Buffer);
    v4 = (struct CPaneDivider *)(v11 + i + 1138);
    v3 = (CPaneContainer *)sub_606350(*(void **)(this + 1064), i);
    CPaneContainer::SetPaneDivider(v3, v4);
  }
}


//======================================================================
// sub_657E60
// entry 00657e60  size 2376  status ok
//======================================================================

int __thiscall sub_657E60(int this, int a2, char a3)
{
  int v3; // eax
  pairNode *v4; // eax
  int v5; // esi
  pairNode *v6; // eax
  int v7; // eax
  pairNode *v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v13; // [esp-4h] [ebp-158h]
  int v14; // [esp+4h] [ebp-150h]
  int v15; // [esp+8h] [ebp-14Ch]
  int v16; // [esp+Ch] [ebp-148h]
  int v17; // [esp+10h] [ebp-144h]
  int v18; // [esp+14h] [ebp-140h]
  int v19; // [esp+18h] [ebp-13Ch]
  int v20; // [esp+1Ch] [ebp-138h]
  int v21; // [esp+20h] [ebp-134h]
  int v22; // [esp+24h] [ebp-130h]
  int v23; // [esp+28h] [ebp-12Ch]
  char v25; // [esp+32h] [ebp-122h]
  char v26; // [esp+33h] [ebp-121h]
  int v27; // [esp+34h] [ebp-120h]
  int v28; // [esp+3Ch] [ebp-118h]
  int i; // [esp+40h] [ebp-114h]
  int j; // [esp+40h] [ebp-114h]
  int k; // [esp+40h] [ebp-114h]
  int m; // [esp+40h] [ebp-114h]
  int n; // [esp+40h] [ebp-114h]
  int ii; // [esp+40h] [ebp-114h]
  char Buffer[260]; // [esp+44h] [ebp-110h] BYREF
  int v36; // [esp+14Ch] [ebp-8h]
  int v37; // [esp+150h] [ebp-4h]

  v28 = a2;
  LOBYTE(v3) = sub_657820();
  sub_658F80(v3);
  sub_6067E0(*(void **)(this + 1532));
  for ( i = 0; i < 12; ++i )
  {
    if ( *(_DWORD *)(this + 632) == 5 )
    {
      v23 = sub_606350(*(void **)(this + 1532), i);
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v23 + 108))(v23, 6);
    }
    else
    {
      v22 = sub_606350(*(void **)(this + 1532), i);
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v22 + 108))(v22, 3);
    }
  }
  if ( a2 == -1 )
  {
    if ( sub_6651E0(*(_DWORD *)(this + 632)) )
      v28 = 12 * (sub_6577B0((_DWORD *)this, -1) / 12);
    else
      v28 = 0;
  }
  if ( !a3 )
  {
    sub_6067E0(*(void **)(this + 1064));
    *(_BYTE *)(this + 640) = v28 / 12;
    sub_657CF0(this);
    for ( j = 0; j < 21; ++j )
    {
      v4 = (pairNode *)sub_606350(*(void **)(this + 1064), j);
      v5 = pairNode::raw_length(v4) - 1139;
      if ( v5 == sub_657BB0((char *)this) )
      {
        v6 = (pairNode *)sub_606350(*(void **)(this + 1064), j);
        v7 = pairNode::raw_length(v6);
        sub_6065D0(*(void **)(this + 1064), v7);
        break;
      }
    }
  }
  v37 = sub_657BD0((_DWORD *)this);
  for ( k = 0; k < 21; ++k )
  {
    v8 = (pairNode *)sub_606350(*(void **)(this + 1064), k);
    if ( pairNode::raw_length(v8) - 1139 >= v37 )
    {
      v20 = sub_606350(*(void **)(this + 1064), k);
      (*(void (__thiscall **)(int))(*(_DWORD *)v20 + 112))(v20);
    }
    else
    {
      v21 = sub_606350(*(void **)(this + 1064), k);
      (*(void (__thiscall **)(int))(*(_DWORD *)v21 + 116))(v21);
    }
  }
  sub_657C40(this);
  if ( sub_657820() )
  {
    v26 = 0;
    v25 = 0;
    v19 = sub_606570(*(void **)(this + 1536));
    switch ( v19 )
    {
      case 1021:
        v26 = 1;
        v25 = 0;
        break;
      case 1022:
        v26 = 0;
        v25 = 1;
        break;
      case 1023:
        v26 = 1;
        v25 = 1;
        break;
    }
    if ( sub_657890((_DWORD *)this, 3) || sub_657890((_DWORD *)this, 4) )
    {
      v27 = 3;
      v36 = 4;
    }
    else
    {
      v27 = 8;
      v36 = 9;
    }
    for ( m = 0; m < 12; ++m )
    {
      v9 = sub_6651E0(0);
      if ( sub_675B40(v27, m + v28, v9) == -1 )
      {
        (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 4 * m + 1548) + 112))(*(_DWORD *)(this + 4 * m + 1548));
        v17 = sub_606350(*(void **)(this + 1532), m);
        (*(void (__thiscall **)(int))(*(_DWORD *)v17 + 112))(v17);
      }
      else
      {
        sub_65B1B0(v27, m + v28);
        if ( sub_6577B0((_DWORD *)this, v27) == m + v28 && v26 )
          (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 4 * m + 1548) + 244))(*(_DWORD *)(this + 4 * m + 1548));
        if ( sub_6577B0((_DWORD *)this, v36) == m + v28 && v25 )
          (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 4 * m + 1548) + 244))(*(_DWORD *)(this + 4 * m + 1548));
        v18 = sub_606350(*(void **)(this + 1532), m);
        (*(void (__thiscall **)(int))(*(_DWORD *)v18 + 116))(v18);
      }
    }
  }
  else
  {
    for ( n = 0; n < 12; ++n )
    {
      v10 = sub_6651E0(0);
      if ( sub_675B40(*(_DWORD *)(this + 632), n + v28, v10) == -1 )
      {
        (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 4 * n + 1548) + 112))(*(_DWORD *)(this + 4 * n + 1548));
        v14 = sub_606350(*(void **)(this + 1532), n);
        (*(void (__thiscall **)(int))(*(_DWORD *)v14 + 112))(v14);
      }
      else
      {
        sub_65B1B0(*(_DWORD *)(this + 632), n + v28);
        if ( sub_6577B0((_DWORD *)this, -1) == n + v28 )
          (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 4 * n + 1548) + 244))(*(_DWORD *)(this + 4 * n + 1548));
        if ( !*(_DWORD *)(this + 632) || *(_DWORD *)(this + 632) == 2 )
        {
          v15 = sub_606350(*(void **)(this + 1532), n);
          (*(void (__thiscall **)(int))(*(_DWORD *)v15 + 112))(v15);
        }
        else
        {
          v16 = sub_606350(*(void **)(this + 1532), n);
          (*(void (__thiscall **)(int))(*(_DWORD *)v16 + 116))(v16);
        }
      }
    }
  }
  if ( !sub_657890((_DWORD *)this, 0) )
  {
    for ( ii = 0; ii < 12; ++ii )
    {
      if ( *(_DWORD *)(this + 4 * ii + 1548) )
      {
        if ( *(_DWORD *)(*(_DWORD *)(this + 4 * ii + 1548) + 560) )
        {
          (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(*(_DWORD *)(this + 4 * ii + 1548) + 560) + 112))(*(_DWORD *)(*(_DWORD *)(this + 4 * ii + 1548) + 560));
          (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(*(_DWORD *)(this + 4 * ii + 1548) + 564) + 112))(*(_DWORD *)(*(_DWORD *)(this + 4 * ii + 1548) + 564));
        }
        if ( *(_DWORD *)(*(_DWORD *)(this + 4 * ii + 1548) + 568) )
          (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(*(_DWORD *)(this + 4 * ii + 1548) + 568) + 112))(*(_DWORD *)(*(_DWORD *)(this + 4 * ii + 1548) + 568));
      }
    }
  }
  v13 = sub_657BD0((_DWORD *)this);
  v11 = sub_657BB0((char *)this);
  sprintf(Buffer, "Page %i of %i", v11 + 1, v13);
  return (*(int (__thiscall **)(int, char *))(*(_DWORD *)(this + 1068) + 180))(this + 1068, Buffer);
}


//======================================================================
// sub_6587B0
// entry 006587b0  size 199  status ok
//======================================================================

int __thiscall sub_6587B0(_DWORD *this)
{
  int result; // eax
  char v2; // al
  int i; // [esp+4h] [ebp-4h]

  result = sub_657890(this, 0);
  if ( (_BYTE)result || (result = sub_657890(this, 2), (_BYTE)result) )
  {
    for ( i = 0; i < 12; ++i )
    {
      result = i;
      if ( *(_DWORD *)(*(this + i + 387) + 536) )
      {
        result = sub_5F54A0(*(unsigned __int8 **)(*(this + i + 387) + 536));
        if ( (_BYTE)result )
        {
          v2 = std::ios::fill(*(this + 119));
          result = (*(int (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(*(this + i + 387) + 536) + 176))(
                     *(_DWORD *)(*(this + i + 387) + 536),
                     v2);
        }
      }
    }
  }
  return result;
}


//======================================================================
// sub_658880
// entry 00658880  size 647  status ok
//======================================================================

int __fastcall sub_658880(int a1, int a2, int a3)
{
  int result; // eax
  int v5; // [esp+18h] [ebp-10h]
  int v6; // [esp+1Ch] [ebp-Ch]
  char v7; // [esp+22h] [ebp-6h]
  char v8; // [esp+23h] [ebp-5h]
  int v9; // [esp+24h] [ebp-4h]

  result = a1;
  if ( *(int *)(a1 + 632) >= 2 )
  {
    v8 = 1;
    v7 = 0;
    v5 = *(_DWORD *)(a1 + 632);
    v6 = v5;
    v9 = v5 + 1;
    LOBYTE(result) = sub_657820();
    if ( (_BYTE)result )
    {
      result = sub_606570(*(void **)(a1 + 1536));
      switch ( result )
      {
        case 1021:
          v8 = 1;
          v7 = 0;
          if ( v5 == 4 )
          {
            v5 = 3;
          }
          else if ( v5 == 9 )
          {
            v5 = 8;
          }
          break;
        case 1022:
          v8 = 0;
          v7 = 1;
          if ( v5 == 3 )
          {
            v5 = 4;
          }
          else if ( v5 == 8 )
          {
            v5 = 9;
          }
          result = v5;
          v9 = v5;
          break;
        case 1023:
          v8 = 1;
          v7 = 1;
          if ( v5 == 4 )
          {
            v5 = 3;
          }
          else if ( v5 == 9 )
          {
            v5 = 8;
          }
          break;
      }
    }
    switch ( a3 )
    {
      case 0:
        result = (unsigned __int8)sub_658D40(a3, v5);
        if ( (_BYTE)result )
        {
          if ( v8 )
            result = sub_665140(v6, 0, -1);
          if ( v7 )
            result = sub_665140(v9, 0, -1);
        }
        break;
      case 1:
        result = (unsigned __int8)sub_658D40(a3, v5);
        if ( (_BYTE)result )
        {
          if ( v8 )
            result = sub_665140(v6, 1, 1);
          if ( v7 )
            result = sub_665140(v9, 1, 1);
        }
        break;
      case 2:
        result = (unsigned __int8)sub_658D40(a3, v5);
        if ( (_BYTE)result )
        {
          if ( v8 )
            result = sub_665140(v6, 0, 1);
          if ( v7 )
            result = sub_665140(v9, 0, 1);
        }
        break;
      case 3:
        result = (unsigned __int8)sub_658D40(a3, v5);
        if ( (_BYTE)result )
        {
          if ( v8 )
            result = sub_665140(v6, 1, -1);
          if ( v7 )
            result = sub_665140(v9, 1, -1);
        }
        break;
      default:
        return result;
    }
  }
  return result;
}


//======================================================================
// sub_658B20
// entry 00658b20  size 478  status ok
//======================================================================

char __thiscall sub_658B20(int this)
{
  int v1; // eax

  if ( sub_657820() )
  {
    v1 = sub_606570(*(void **)(this + 1536));
    switch ( v1 )
    {
      case 1021:
        switch ( *(_DWORD *)(this + 632) )
        {
          case 3:
          case 4:
            LOBYTE(v1) = sub_665190(3);
            break;
          case 8:
          case 9:
            LOBYTE(v1) = sub_665190(8);
            break;
          default:
            LOBYTE(v1) = sub_5E9F20("false", "..\\casinoShell\\facemakerdialog.cpp", 918);
            break;
        }
        break;
      case 1022:
        switch ( *(_DWORD *)(this + 632) )
        {
          case 3:
          case 4:
            LOBYTE(v1) = sub_665190(4);
            break;
          case 8:
          case 9:
            LOBYTE(v1) = sub_665190(9);
            break;
          default:
            LOBYTE(v1) = sub_5E9F20("false", "..\\casinoShell\\facemakerdialog.cpp", 932);
            break;
        }
        break;
      case 1023:
        switch ( *(_DWORD *)(this + 632) )
        {
          case 3:
          case 4:
            sub_665190(3);
            LOBYTE(v1) = sub_665190(4);
            break;
          case 8:
          case 9:
            sub_665190(8);
            LOBYTE(v1) = sub_665190(9);
            break;
          default:
            LOBYTE(v1) = sub_5E9F20("false", "..\\casinoShell\\facemakerdialog.cpp", 948);
            break;
        }
        break;
    }
  }
  else
  {
    LOBYTE(v1) = sub_665190(*(_DWORD *)(this + 632));
  }
  return v1;
}


//======================================================================
// sub_658D40
// entry 00658d40  size 532  status ok
//======================================================================

char __thiscall sub_658D40(_DWORD *this, char a2, int a3)
{
  char result; // al
  int v4; // esi
  int v5; // esi
  int v6; // esi
  int v7; // esi

  if ( a3 == -1 )
    a3 = *(this + 158);
  if ( !sub_6651C0(a3) )
    return 0;
  if ( (unsigned __int8)sub_6596D0(this) )
  {
    switch ( a2 )
    {
      case 0:
        if ( *(char *)(*(this + 119) + a3 + 78) < *(char *)(*(this + 119) + a3 + 77) )
          ++a3;
        break;
      case 1:
        if ( *(char *)(*(this + 119) + a3 + 65) <= *(char *)(*(this + 119) + a3 + 66) )
          ++a3;
        break;
      case 2:
        if ( *(char *)(*(this + 119) + a3 + 78) > *(char *)(*(this + 119) + a3 + 77) )
          ++a3;
        break;
      case 3:
        if ( *(char *)(*(this + 119) + a3 + 66) < *(char *)(*(this + 119) + a3 + 65) )
          ++a3;
        break;
      default:
        break;
    }
  }
  switch ( a2 )
  {
    case 0:
      v4 = *(char *)(*(this + 119) + a3 + 77) - 1;
      if ( v4 < sub_664D40(a3) )
        goto LABEL_30;
      result = 1;
      break;
    case 1:
      v6 = *(char *)(*(this + 119) + a3 + 65) + 1;
      if ( v6 > sub_664F50(a3) )
        goto LABEL_30;
      result = 1;
      break;
    case 2:
      v5 = *(char *)(*(this + 119) + a3 + 77) + 1;
      if ( v5 > sub_664DD0(a3) )
        goto LABEL_30;
      result = 1;
      break;
    case 3:
      v7 = *(char *)(*(this + 119) + a3 + 65) - 1;
      if ( v7 < sub_664EC0(a3) )
        goto LABEL_30;
      result = 1;
      break;
    default:
LABEL_30:
      result = 0;
      break;
  }
  return result;
}


//======================================================================
// sub_658F80
// entry 00658f80  size 553  status ok
//======================================================================

int __thiscall sub_658F80(void **this, int a2)
{
  int v3; // [esp+0h] [ebp-30h]
  int v4; // [esp+4h] [ebp-2Ch]
  _DWORD *v5; // [esp+8h] [ebp-28h]
  void *v7; // [esp+10h] [ebp-20h]
  _DWORD *v8; // [esp+18h] [ebp-18h]
  int i; // [esp+20h] [ebp-10h]

  if ( !*(this + 386) )
  {
    v8 = operator new(0x58u);
    if ( v8 )
      v5 = sub_6061C0(v8);
    else
      v5 = 0;
    *(this + 386) = v5;
    *((_DWORD *)*(this + 386) + 1) = this;
    (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 386) + 64))(*(this + 386));
  }
  (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 386) + 112))(*(this + 386));
  sub_6067E0(*(this + 386));
  sub_606830((char *)*(this + 386));
  for ( i = 0; i < 12; ++i )
  {
    if ( !*(this + i + 387) )
    {
      v7 = operator new(0x23Cu);
      if ( v7 )
        v4 = sub_65A750(v7);
      else
        v4 = 0;
      *(this + i + 387) = (void *)v4;
    }
    CPaneContainer::SetPaneDivider((CPaneContainer *)*(this + i + 387), (struct CPaneDivider *)i);
    sub_6062A0(*(this + 386), (int)*(this + i + 387));
    sub_5EAE80(2000037, 103 * (i % 6) + 12, i >= 6 ? 91 : 4, 2, i);
    sub_5FFF90(*(this + i + 387), 0, 1, 2, 3, 1, 1, 1, 1);
    sub_65ADB0(v3, v4);
  }
  return (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 386) + 116))(*(this + 386));
}


//======================================================================
// sub_6591B0
// entry 006591b0  size 260  status ok
//======================================================================

int __thiscall sub_6591B0(int this, int a2)
{
  int v2; // eax
  int v4; // esi
  int v5; // eax

  if ( a2 )
  {
    ++*(_BYTE *)(this + 640);
    v4 = sub_657BB0((char *)this);
    if ( v4 == sub_657BD0((_DWORD *)this) - 1 )
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 648) + 208))(*(_DWORD *)(this + 648));
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 644) + 204))(*(_DWORD *)(this + 644));
    v5 = sub_657BB0((char *)this);
    return sub_657E60(this, 12 * v5, 0);
  }
  else
  {
    --*(_BYTE *)(this + 640);
    if ( !sub_657BB0((char *)this) )
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 644) + 208))(*(_DWORD *)(this + 644));
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 648) + 204))(*(_DWORD *)(this + 648));
    v2 = sub_657BB0((char *)this);
    return sub_657E60(this, 12 * v2, 0);
  }
}


//======================================================================
// sub_6592C0
// entry 006592c0  size 735  status ok
//======================================================================

int __thiscall sub_6592C0(int this, int a2)
{
  int v2; // eax
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v8; // [esp+Ch] [ebp-8h]

  if ( *(int *)(this + 632) <= 2 )
  {
    v2 = sub_6651E0(0);
    v3 = sub_675B40(*(_DWORD *)(this + 632), 0, v2);
    sub_664730(*(_DWORD *)(this + 632), v3);
    if ( !*(_DWORD *)(this + 632) )
    {
      v4 = sub_6651E0(0);
      v5 = sub_675B40(1, 0, v4);
      sub_664730(1, v5);
    }
    *(_DWORD *)(this + 636) = 0;
  }
  else
  {
    if ( sub_657820() )
    {
      v8 = sub_606570(*(void **)(this + 1536));
      switch ( v8 )
      {
        case 1021:
          switch ( *(_DWORD *)(this + 632) )
          {
            case 3:
            case 4:
              sub_664730(3, 0);
              break;
            case 8:
            case 9:
              sub_664730(8, 0);
              break;
            default:
              sub_5E9F20("false", "..\\casinoShell\\facemakerdialog.cpp", 1082);
              break;
          }
          break;
        case 1022:
          switch ( *(_DWORD *)(this + 632) )
          {
            case 3:
            case 4:
              sub_664730(4, 0);
              break;
            case 8:
            case 9:
              sub_664730(9, 0);
              break;
            default:
              sub_5E9F20("false", "..\\casinoShell\\facemakerdialog.cpp", 1096);
              break;
          }
          break;
        case 1023:
          switch ( *(_DWORD *)(this + 632) )
          {
            case 3:
            case 4:
              sub_664730(3, 0);
              sub_664730(4, 0);
              break;
            case 8:
            case 9:
              sub_664730(8, 0);
              sub_664730(9, 0);
              break;
            default:
              sub_5E9F20("false", "..\\casinoShell\\facemakerdialog.cpp", 1112);
              break;
          }
          break;
      }
    }
    else
    {
      sub_664730(*(_DWORD *)(this + 632), 0);
    }
    sub_6067E0(*(void **)(this + 1532));
    sub_6067E0(*(void **)(this + 1544));
    *(_DWORD *)(this + 636) = -1;
  }
  v6 = sub_657BB0((char *)this);
  sub_657E60(this, 12 * v6, 0);
  return sub_657B10((_DWORD **)this);
}


//======================================================================
// sub_6595E0
// entry 006595e0  size 225  status ok
//======================================================================

int __thiscall sub_6595E0(int this, int a2)
{
  _DWORD *v2; // eax
  int i; // [esp+4h] [ebp-4h]
  int j; // [esp+4h] [ebp-4h]

  sub_664C90(a2);
  sub_6023D0(*(_DWORD **)(this + 4 * a2 + 1044), 4, 5, 6, 7);
  for ( i = 0; i < 4; ++i )
  {
    if ( a2 != i )
      sub_6023D0(*(_DWORD **)(this + 4 * i + 1044), 0, 1, 2, 3);
  }
  for ( j = 0; j < 12; ++j )
  {
    v2 = (_DWORD *)sub_606350(*(void **)(this + 1532), j);
    sub_5FFF90(v2, a2, a2, a2, a2 + 8, a2 + 4, a2 + 4, a2 + 4, a2 + 4);
  }
  return sub_6587B0((_DWORD *)this);
}


//======================================================================
// sub_6596D0
// entry 006596d0  size 239  status ok
//======================================================================

char __thiscall sub_6596D0(void **this)
{
  unsigned __int8 *v2; // eax
  _BYTE *v3; // eax
  _BYTE *v4; // eax
  int i; // [esp+4h] [ebp-4h]
  int j; // [esp+4h] [ebp-4h]

  for ( i = 0; i < 12; ++i )
  {
    if ( *(this + i + 387) && sub_600230(*(this + i + 387)) )
      return 0;
  }
  for ( j = 0; j < 12; ++j )
  {
    v2 = (unsigned __int8 *)sub_606350(*(this + 383), j);
    if ( sub_5F54A0(v2) )
    {
      v3 = (_BYTE *)sub_606350(*(this + 383), j);
      if ( sub_6026D0(v3) )
      {
        v4 = (_BYTE *)sub_606350(*(this + 383), j);
        if ( sub_600230(v4) )
        {
          if ( sub_606570(*(this + 384)) == 1023 )
            return 1;
        }
      }
    }
  }
  return 0;
}


//======================================================================
// sub_6597C0
// entry 006597c0  size 578  status ok
//======================================================================

char __thiscall sub_6597C0(int this, int a2)
{
  char result; // al
  int v3; // edx
  int v4; // [esp+4h] [ebp-28h]
  _DWORD v6[4]; // [esp+Ch] [ebp-20h] BYREF
  double v7; // [esp+1Ch] [ebp-10h]
  double v8; // [esp+24h] [ebp-8h]

  if ( a2 < 1139 || a2 >= 1239 )
  {
    if ( a2 < 1239 || a2 >= 1251 )
    {
      if ( byte_795F95 )
      {
LABEL_10:
        result = a2;
        v3 = a2 - 1000;
        switch ( a2 )
        {
          case 1000:
            result = sub_65A2F0(this);
            break;
          case 1001:
            result = sub_6592C0(this, 0);
            break;
          case 1002:
            result = sub_658B20(this);
            break;
          case 1003:
            result = sub_65A290(this);
            break;
          case 1004:
            result = sub_65A730(this);
            break;
          case 1005:
            result = sub_65A540(a2 - 1000, v4);
            break;
          case 1006:
            result = sub_659AD0(0, -1);
            break;
          case 1007:
            result = sub_65A710(this);
            break;
          case 1008:
            result = sub_6591B0(this, 0);
            break;
          case 1009:
            result = sub_6591B0(this, 1);
            break;
          case 1010:
            result = sub_658880(this, v3, 0);
            break;
          case 1011:
            result = sub_658880(this, v3, 2);
            break;
          case 1012:
            result = sub_658880(this, v3, 3);
            break;
          case 1013:
            result = sub_658880(this, v3, 1);
            break;
          case 1014:
            result = sub_6595E0(this, 0);
            break;
          case 1015:
            result = sub_6595E0(this, 1);
            break;
          case 1016:
            result = sub_6595E0(this, 2);
            break;
          case 1017:
            result = sub_6595E0(this, 3);
            break;
          case 1025:
            v6[1] = 6000;
            v6[2] = -1;
            v7 = 0.0;
            v8 = 1.0;
            v6[0] = -1;
            result = sub_6476F0(*(_DWORD *)(*(_DWORD *)(this + 472) + 32), (int)v6, 0, -1, 1);
            break;
          default:
            return result;
        }
      }
      else
      {
        v4 = a2 - 1000;
        switch ( a2 )
        {
          case 1000:
          case 1003:
          case 1005:
          case 1007:
            result = sub_659AD0(1, a2);
            if ( result )
              goto LABEL_10;
            break;
          default:
            goto LABEL_10;
        }
      }
    }
    else
    {
      sub_6067E0(*(void **)(this + 1544));
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 4 * a2 - 3408) + 244))(*(_DWORD *)(this + 4 * a2 - 3408));
      return sub_65A9A0(*(_DWORD *)(this + 4 * a2 - 3408));
    }
  }
  else
  {
    *(_BYTE *)(this + 640) = a2 - 115;
    return sub_657E60(this, 12 * *(char *)(this + 640), 1);
  }
  return result;
}


//======================================================================
// sub_659A80
// entry 00659a80  size 80  status ok
//======================================================================

char *__thiscall sub_659A80(int this, int a2, int a3)
{
  if ( *(_BYTE *)(this + 444) )
    sub_6659E0(this + 444, a2 + 65);
  return sub_63B490(*(CImageDisplay **)(this + 472), (char *)(a2 - 100031));
}


//======================================================================
// sub_659AD0
// entry 00659ad0  size 481  status ok
//======================================================================

char __thiscall sub_659AD0(int this, char a2, int a3)
{
  const CHAR *v4; // eax
  const CHAR *v5; // eax
  const CHAR *v6; // eax
  const CHAR *v7; // [esp-8h] [ebp-3Ch]
  const CHAR *v8; // [esp-8h] [ebp-3Ch]
  const CHAR *v9; // [esp-8h] [ebp-3Ch]
  bool v10; // [esp+0h] [ebp-34h]
  char Source[28]; // [esp+8h] [ebp-2Ch] BYREF
  char v13; // [esp+2Bh] [ebp-9h]
  int v14; // [esp+2Ch] [ebp-8h]
  bool v15; // [esp+32h] [ebp-2h]
  bool v16; // [esp+33h] [ebp-1h]

  v10 = a2
     && !*(_BYTE *)(this + 444)
     && !memcmp((const void *)(this + 556), (const void *)(*(_DWORD *)(this + 476) + 16), 0x4Cu);
  v16 = v10;
  if ( (a2 || *(_BYTE *)(this + 444))
    && !memcmp((const void *)(this + 480), (const void *)(*(_DWORD *)(this + 476) + 16), 0x4Cu)
    && (a3 == 1000 || !v16) )
  {
    return 1;
  }
  if ( byte_795F95 )
  {
    if ( !a2 )
    {
      v7 = (const CHAR *)sub_630F40((int)"SID_SHELL_FAMEMAKER_TM");
      v4 = (const CHAR *)sub_630F40((int)"SID_SHELL_FACEMAKER_CANNOT_SAVE");
      sub_62FF10(v4, v7, 0);
    }
    return 0;
  }
  else
  {
    if ( !a2 )
      goto LABEL_31;
    v8 = (const CHAR *)sub_630F40((int)"SID_SHELL_SAVEFACE_TITLE");
    v5 = (const CHAR *)sub_630F40((int)"SID_SHELL_SAVEFACE_QUESTION");
    v14 = sub_62FF10(v5, v8, 8u);
    if ( v14 == 2 )
      return 0;
    if ( v14 == 7 )
    {
      return 1;
    }
    else
    {
LABEL_31:
      if ( *(_BYTE *)(this + 444) )
      {
        sub_65A630(a3);
        return 0;
      }
      else if ( (unsigned __int8)sub_659FA0(Source) )
      {
        v15 = *(_BYTE *)(this + 444) != 0;
        v13 = sub_659D30(Source);
        if ( v13 && !v15 )
        {
          v9 = (const CHAR *)sub_630F40((int)"SID_SHELL_FACEMAKER");
          v6 = (const CHAR *)sub_630F40((int)"SID_SHELL_FACESAVED");
          sub_62FF10(v6, v9, 0);
        }
        return v13;
      }
      else
      {
        return 0;
      }
    }
  }
}


//======================================================================
// sub_659CC0
// entry 00659cc0  size 99  status ok
//======================================================================

char __thiscall sub_659CC0(const char *this, char a2)
{
  char Destination[28]; // [esp+4h] [ebp-20h] BYREF

  strcpy(Destination, this + 444);
  if ( !a2 || (unsigned __int8)sub_659FA0(Destination) )
    return sub_659D30(Destination);
  else
    return 0;
}


//======================================================================
// sub_659D30
// entry 00659d30  size 619  status ok
//======================================================================

char __thiscall sub_659D30(int this, char *Source)
{
  const struct tagVIDEOINFO *DisplayFormat; // eax
  CImageDisplay *v5; // [esp+Ch] [ebp-428h]
  CImageDisplay *v6; // [esp+10h] [ebp-424h]
  int j; // [esp+18h] [ebp-41Ch]
  int i; // [esp+1Ch] [ebp-418h]
  FILE *Stream; // [esp+24h] [ebp-410h]
  int v10; // [esp+28h] [ebp-40Ch]
  char Buffer[1028]; // [esp+2Ch] [ebp-408h] BYREF

  memset(Buffer, 0, 1024);
  sprintf(Buffer, "%s%s%s", &Path, "\\", Source);
  Stream = sub_5EA9C0(Buffer, "wb");
  if ( !Stream )
    return 0;
  for ( i = 0; i < 12; ++i )
    ;
  fwrite((const void *)(*(_DWORD *)(this + 476) + 16), 0x4Cu, 1u, Stream);
  fclose(Stream);
  for ( j = 0; j < 12; ++j )
    ;
  if ( sub_5FB5E0(this, 1024) )
  {
    v10 = *(_DWORD *)(sub_5FB5E0(this, 1024) + 496);
    sub_6659E0(Source, v10 + 65);
  }
  strcpy((char *)(this + 444), Source);
  qmemcpy((void *)(this + 480), (const void *)(*(_DWORD *)(this + 476) + 16), 0x4Cu);
  if ( dword_16306B0 || dword_1630690 )
  {
    if ( dword_16306B0 )
      sub_65C1F0((char *)(this + 444));
    if ( dword_1630690 )
      sub_65C1F0((char *)(this + 444));
  }
  else
  {
    v6 = (CImageDisplay *)sub_6375B0((_DWORD **)dword_162EE84);
    DisplayFormat = CImageDisplay::GetDisplayFormat(v6);
    strcpy((char *)&DisplayFormat->bmiHeader.biHeight, (const char *)(this + 444));
    v5 = (CImageDisplay *)sub_6375B0((_DWORD **)dword_162EE84);
    CImageDisplay::GetDisplayFormat(v5)->rcSource.left = 3;
    sub_637610((_DWORD **)dword_162EE84);
  }
  return 1;
}


//======================================================================
// sub_659FA0
// entry 00659fa0  size 269  status ok
//======================================================================

char __stdcall sub_659FA0(char *Buffer)
{
  const CHAR *v2; // eax
  const CHAR *v3; // [esp-8h] [ebp-41Ch]
  FILE *Stream; // [esp+4h] [ebp-410h]
  int i; // [esp+8h] [ebp-40Ch]
  char Str[1028]; // [esp+Ch] [ebp-408h] BYREF

  memset(Str, 0, 1024);
  for ( i = 0; i < 1000; ++i )
  {
    sprintf(Buffer, "%07d.fac", i);
    sprintf(Str, "%s%s%s", &Path, "\\", Buffer);
    Stream = sub_5EA9C0(Str, "rb");
    if ( !Stream )
      return 1;
    fclose(Stream);
  }
  v3 = (const CHAR *)sub_630F40((int)"SID_SHELL_FAMEMAKER_TM");
  v2 = (const CHAR *)sub_630F40((int)"SID_SHELL_TOOMANYFACES_MESSAGE");
  sub_62FF10(v2, v3, 0);
  return 0;
}


//======================================================================
// sub_65A0B0
// entry 0065a0b0  size 480  status ok
//======================================================================

char __thiscall sub_65A0B0(int this, char *Source)
{
  int v3; // eax
  int v4; // [esp+8h] [ebp-418h]
  int i; // [esp+10h] [ebp-410h]
  FILE *Stream; // [esp+14h] [ebp-40Ch]
  char Buffer[1028]; // [esp+18h] [ebp-408h] BYREF

  memset(Buffer, 0, 1024);
  sprintf(Buffer, "%s%s%s", &Path, "\\", Source);
  Stream = sub_5EA9C0(Buffer, "rb");
  if ( !Stream )
    return 0;
  fread((void *)(*(_DWORD *)(this + 476) + 16), 0x4Cu, 1u, Stream);
  fclose(Stream);
  for ( i = 0; i < 12; ++i )
    ;
  sub_657500(this, *(_DWORD *)(this + 632));
  sub_664630(*(_DWORD *)(this + 476));
  sub_6595E0(this, *(char *)(*(_DWORD *)(this + 476) + 64));
  if ( sub_5FB5E0(this, 1024) )
  {
    v4 = sub_5FB5E0(this, 1024);
    v3 = sub_665800(Source);
    (*(void (__thiscall **)(int, int, int))(*(_DWORD *)v4 + 240))(v4, v3 + 100031, 1);
  }
  strcpy((char *)(this + 444), Source);
  qmemcpy((void *)(this + 480), (const void *)(*(_DWORD *)(this + 476) + 16), 0x4Cu);
  memset((void *)(this + 556), 0, 0x4Cu);
  return 1;
}


//======================================================================
// sub_65A290
// entry 0065a290  size 83  status ok
//======================================================================

void *__thiscall sub_65A290(int this)
{
  sub_657430(this);
  *(_BYTE *)(this + 444) = 0;
  qmemcpy((void *)(this + 480), (const void *)(*(_DWORD *)(this + 476) + 16), 0x4Cu);
  return memset((void *)(this + 556), 0, 0x4Cu);
}


//======================================================================
// sub_65A2F0
// entry 0065a2f0  size 582  status ok
//======================================================================

int __thiscall sub_65A2F0(int this)
{
  char v1; // al
  int v2; // eax
  char v3; // al
  int result; // eax
  int v5; // eax
  int v7; // [esp+10h] [ebp-18h]
  int v8; // [esp+14h] [ebp-14h]
  int v9; // [esp+18h] [ebp-10h]
  int i; // [esp+1Ch] [ebp-Ch]
  signed int j; // [esp+20h] [ebp-8h]
  int v12; // [esp+24h] [ebp-4h]

  v12 = 0;
  sub_657430(this);
  v1 = sub_62FBF0(4);
  sub_664C90(v1);
  for ( i = 0; i < 12; ++i )
  {
    if ( !sub_62FBF0(2) || i != 10 && i != 11 )
    {
      if ( i == 1 )
      {
        v9 = sub_675CA0(1, v12);
        v12 = sub_675B40(1, v9, v12);
        sub_664730(1, v12);
      }
      else
      {
        v9 = sub_675CA0(i, 0);
        v12 = sub_675B40(i, v9, 0);
        sub_664730(i, v12);
      }
      if ( i == 3 || i == 8 )
      {
        v2 = sub_675B40(++i, v9, 0);
        sub_664730(i, v2);
      }
    }
  }
  sub_657E60(this, -1, 0);
  v3 = std::ios::fill(*(_DWORD *)(this + 476));
  sub_6595E0(this, v3);
  *(_BYTE *)(this + 444) = 0;
  qmemcpy((void *)(this + 480), (const void *)(*(_DWORD *)(this + 476) + 16), 0x4Cu);
  qmemcpy((void *)(this + 556), (const void *)(*(_DWORD *)(this + 476) + 16), 0x4Cu);
  result = sub_5FB5E0(this, 1024);
  if ( result )
  {
    v7 = 33;
    v8 = (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 372))(dword_162EE84);
    if ( v8 )
    {
      for ( j = 0; *(_DWORD *)(v8 + 4 * j); ++j )
        ;
      if ( j )
        v7 = *(_DWORD *)(v8 + 4 * sub_62FBF0(j));
    }
    v5 = sub_5FB5E0(this, 1024);
    return (*(int (__thiscall **)(int, int, int))(*(_DWORD *)v5 + 240))(v5, v7 + 100031, 1);
  }
  return result;
}


//======================================================================
// sub_65A540
// entry 0065a540  size 174  status ok
//======================================================================

int sub_65A540()
{
  int result; // eax
  int v1; // [esp+4h] [ebp-1Ch]

  if ( !dword_16306A8 )
  {
    if ( operator new(0x1C8u) )
      v1 = sub_65D1E0();
    else
      v1 = 0;
    dword_16306A8 = v1;
  }
  result = (*(int (__thiscall **)(int))(*(_DWORD *)dword_16306A8 + 60))(dword_16306A8);
  if ( dword_16306A8 )
    return sub_65C4D0(dword_16306A8);
  return result;
}


//======================================================================
// sub_65A5F0
// entry 0065a5f0  size 63  status ok
//======================================================================

_BYTE *__thiscall sub_65A5F0(void *this, char *Source)
{
  _BYTE *result; // eax

  if ( Source )
    sub_65A0B0((int)this, Source);
  sub_5F87D0(dword_16306A8);
  result = sub_5F8990((_BYTE *)dword_16306A8);
  dword_16306A8 = 0;
  return result;
}


//======================================================================
// sub_65A630
// entry 0065a630  size 170  status ok
//======================================================================

int __stdcall sub_65A630(int a1)
{
  int v2; // [esp+4h] [ebp-1Ch]

  if ( !dword_16306AC )
  {
    if ( operator new(0x1C8u) )
      v2 = sub_65D520(a1);
    else
      v2 = 0;
    dword_16306AC = v2;
  }
  (*(void (__thiscall **)(int))(*(_DWORD *)dword_16306AC + 60))(dword_16306AC);
  return sub_5F85D0(dword_16306AC);
}


//======================================================================
// sub_65A6E0
// entry 0065a6e0  size 43  status ok
//======================================================================

_BYTE *sub_65A6E0()
{
  _BYTE *result; // eax

  sub_5F87D0(dword_16306AC);
  result = sub_5F8990((_BYTE *)dword_16306AC);
  dword_16306AC = 0;
  return result;
}


//======================================================================
// sub_65A710
// entry 0065a710  size 22  status ok
//======================================================================

_BYTE *sub_65A710()
{
  return sub_64F600();
}


//======================================================================
// sub_65A730
// entry 0065a730  size 21  status ok
//======================================================================

HINSTANCE sub_65A730()
{
  return sub_60CCE0();
}


//======================================================================
// sub_65A750
// entry 0065a750  size 145  status ok
//======================================================================

_DWORD *__thiscall sub_65A750(_DWORD *this)
{
  int i; // [esp+4h] [ebp-4h]

  sub_6060A0(this);
  *this = &PieceSelectButton::`vftable';
  for ( i = 0; i < 3; ++i )
  {
    *(this + i + 134) = 0;
    *(this + i + 137) = 0;
  }
  *(this + 140) = 0;
  *(this + 141) = 0;
  *(this + 142) = 0;
  *(this + 132) = -1;
  return this;
}


//======================================================================
// sub_65A7F0
// entry 0065a7f0  size 370  status ok
//======================================================================

int __thiscall sub_65A7F0(void (__thiscall ****this)(_DWORD, int))
{
  int i; // [esp+44h] [ebp-10h]

  *this = (void (__thiscall ***)(_DWORD, int))&PieceSelectButton::`vftable';
  for ( i = 0; i < 3; ++i )
  {
    if ( *(this + i + 134) )
      (***(this + i + 134))(*(this + i + 134), 1);
    if ( *(this + i + 137) )
      (***(this + i + 137))(*(this + i + 137), 1);
  }
  if ( *(this + 140) )
    (***(this + 140))(*(this + 140), 1);
  if ( *(this + 141) )
    (***(this + 141))(*(this + 141), 1);
  if ( *(this + 142) )
    (***(this + 142))(*(this + 142), 1);
  return CExpandoObject::~CExpandoObject(this);
}


//======================================================================
// sub_65A970
// entry 0065a970  size 35  status ok
//======================================================================

int __thiscall sub_65A970(void *this)
{
  sub_65A9A0(this);
  return sub_6067E0(*(void **)(dword_16306A4 + 1532));
}


//======================================================================
// sub_65A9A0
// entry 0065a9a0  size 973  status ok
//======================================================================

int __thiscall sub_65A9A0(int this)
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
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // eax
  int v21; // eax
  int v22; // [esp+Ch] [ebp-Ch]

  result = dword_16306A4;
  if ( *(_DWORD *)(this + 536) )
  {
    result = sub_5F54A0(*(unsigned __int8 **)(this + 536));
    if ( (_BYTE)result )
    {
      if ( sub_657820() )
      {
        v22 = sub_606570(*(void **)(dword_16306A4 + 1536));
        switch ( v22 )
        {
          case 1021:
            switch ( *(_DWORD *)(this + 532) )
            {
              case 3:
              case 4:
                v2 = sub_6651E0(0);
                v3 = sub_675B40(3, *(_DWORD *)(this + 528), v2);
                sub_664730(3, v3);
                break;
              case 8:
              case 9:
                v4 = sub_6651E0(0);
                v5 = sub_675B40(8, *(_DWORD *)(this + 528), v4);
                sub_664730(8, v5);
                break;
              default:
                sub_5E9F20("false", "..\\casinoShell\\facemakerdialog.cpp", 1602);
                break;
            }
            break;
          case 1022:
            switch ( *(_DWORD *)(this + 532) )
            {
              case 3:
              case 4:
                v6 = sub_6651E0(0);
                v7 = sub_675B40(4, *(_DWORD *)(this + 528), v6);
                sub_664730(4, v7);
                break;
              case 8:
              case 9:
                v8 = sub_6651E0(0);
                v9 = sub_675B40(9, *(_DWORD *)(this + 528), v8);
                sub_664730(9, v9);
                break;
              default:
                sub_5E9F20("false", "..\\casinoShell\\facemakerdialog.cpp", 1618);
                break;
            }
            break;
          case 1023:
            switch ( *(_DWORD *)(this + 532) )
            {
              case 3:
              case 4:
                v10 = sub_6651E0(0);
                v11 = sub_675B40(3, *(_DWORD *)(this + 528), v10);
                sub_664730(3, v11);
                v12 = sub_6651E0(0);
                v13 = sub_675B40(4, *(_DWORD *)(this + 528), v12);
                sub_664730(4, v13);
                break;
              case 8:
              case 9:
                v14 = sub_6651E0(0);
                v15 = sub_675B40(8, *(_DWORD *)(this + 528), v14);
                sub_664730(8, v15);
                v16 = sub_6651E0(0);
                v17 = sub_675B40(9, *(_DWORD *)(this + 528), v16);
                sub_664730(9, v17);
                break;
              default:
                sub_5E9F20("false", "..\\casinoShell\\facemakerdialog.cpp", 1638);
                break;
            }
            break;
        }
      }
      else
      {
        v18 = sub_6651E0(0);
        v19 = sub_675B40(*(_DWORD *)(this + 532), *(_DWORD *)(this + 528), v18);
        sub_664730(*(_DWORD *)(this + 532), v19);
        if ( !*(_DWORD *)(this + 532) )
        {
          v20 = sub_6651E0(0);
          v21 = sub_675B40(1, 0, v20);
          sub_664730(1, v21);
        }
      }
      *(_DWORD *)(dword_16306A4 + 632) = *(_DWORD *)(this + 532);
      *(_DWORD *)(dword_16306A4 + 636) = *(_DWORD *)(this + 528);
      return sub_657B10((_DWORD **)dword_16306A4);
    }
  }
  return result;
}


//======================================================================
// sub_65ADB0
// entry 0065adb0  size 1012  status ok
//======================================================================

CMediaType *__thiscall sub_65ADB0(CMediaType *this)
{
  int v1; // eax
  int v2; // eax
  int v3; // eax
  int IsFixedSize; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  CMediaType *result; // eax
  int v11; // eax
  int v12; // eax
  int v13; // [esp+4h] [ebp-50h]
  int v14; // [esp+8h] [ebp-4Ch]
  int v15; // [esp+Ch] [ebp-48h]
  int v16; // [esp+10h] [ebp-44h]
  int v17; // [esp+14h] [ebp-40h]
  _DWORD *v19; // [esp+1Ch] [ebp-38h]
  _DWORD *v20; // [esp+24h] [ebp-30h]
  _DWORD *v21; // [esp+2Ch] [ebp-28h]
  _DWORD *v22; // [esp+34h] [ebp-20h]
  _DWORD *v23; // [esp+3Ch] [ebp-18h]
  int i; // [esp+44h] [ebp-10h]

  for ( i = 0; i < 3; ++i )
  {
    if ( !*((_DWORD *)this + i + 134) )
    {
      v23 = operator new(0x178u);
      if ( v23 )
      {
        sub_5EAAF0(v23);
        v17 = v1;
      }
      else
      {
        v17 = 0;
      }
      *((_DWORD *)this + i + 134) = v17;
      *(_DWORD *)(*((_DWORD *)this + i + 134) + 4) = *((_DWORD *)this + 1);
      (*(void (__thiscall **)(_DWORD))(**((_DWORD **)this + i + 134) + 64))(*((_DWORD *)this + i + 134));
    }
    (*(void (__thiscall **)(_DWORD, _DWORD))(**((_DWORD **)this + i + 134) + 176))(*((_DWORD *)this + i + 134), 0);
    v2 = (*(int (__thiscall **)(CMediaType *))(*(_DWORD *)this + 84))(this);
    v3 = (*(int (__thiscall **)(CMediaType *, int))(*(_DWORD *)this + 76))(this, v2 + 1);
    (*(void (__thiscall **)(_DWORD, int))(**((_DWORD **)this + i + 134) + 68))(*((_DWORD *)this + i + 134), v3 + 1);
    IsFixedSize = CMediaType::IsFixedSize(this);
    (*(void (__thiscall **)(_DWORD, int))(**((_DWORD **)this + i + 134) + 108))(
      *((_DWORD *)this + i + 134),
      IsFixedSize + 5 - i);
    if ( !*((_DWORD *)this + i + 137) )
    {
      v22 = operator new(0x178u);
      if ( v22 )
      {
        sub_5EAAF0(v22);
        v16 = v5;
      }
      else
      {
        v16 = 0;
      }
      *((_DWORD *)this + i + 137) = v16;
      *(_DWORD *)(*((_DWORD *)this + i + 137) + 4) = *((_DWORD *)this + 1);
      (*(void (__thiscall **)(_DWORD))(**((_DWORD **)this + i + 137) + 64))(*((_DWORD *)this + i + 137));
    }
    (*(void (__thiscall **)(_DWORD, _DWORD))(**((_DWORD **)this + i + 137) + 176))(*((_DWORD *)this + i + 137), 0);
    v6 = (*(int (__thiscall **)(CMediaType *))(*(_DWORD *)this + 84))(this);
    v7 = (*(int (__thiscall **)(CMediaType *, int))(*(_DWORD *)this + 76))(this, v6 + 1);
    (*(void (__thiscall **)(_DWORD, int))(**((_DWORD **)this + i + 137) + 68))(*((_DWORD *)this + i + 137), v7 + 1);
    v8 = CMediaType::IsFixedSize(this);
    (*(void (__thiscall **)(_DWORD, int))(**((_DWORD **)this + i + 137) + 108))(*((_DWORD *)this + i + 137), v8 + 5 - i);
  }
  if ( !*((_DWORD *)this + 140) )
  {
    v21 = operator new(0x178u);
    if ( v21 )
    {
      sub_5EAAF0(v21);
      v15 = v9;
    }
    else
    {
      v15 = 0;
    }
    *((_DWORD *)this + 140) = v15;
    *(_DWORD *)(*((_DWORD *)this + 140) + 4) = *((_DWORD *)this + 1);
  }
  result = this;
  if ( !*((_DWORD *)this + 141) )
  {
    v20 = operator new(0x178u);
    if ( v20 )
    {
      sub_5EAAF0(v20);
      v14 = v11;
    }
    else
    {
      v14 = 0;
    }
    *((_DWORD *)this + 141) = v14;
    result = this;
    *(_DWORD *)(*((_DWORD *)this + 141) + 4) = *((_DWORD *)this + 1);
  }
  if ( !*((_DWORD *)this + 142) )
  {
    v19 = operator new(0x178u);
    if ( v19 )
    {
      sub_5EAAF0(v19);
      v13 = v12;
    }
    else
    {
      v13 = 0;
    }
    *((_DWORD *)this + 142) = v13;
    result = (CMediaType *)*((_DWORD *)this + 1);
    *(_DWORD *)(*((_DWORD *)this + 142) + 4) = result;
  }
  return result;
}


//======================================================================
// sub_65B1B0
// entry 0065b1b0  size 1609  status ok
//======================================================================

int __thiscall sub_65B1B0(int *this, int a2, int a3)
{
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  char v11; // al
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
  int v27; // [esp-10h] [ebp-1Ch]
  int v28; // [esp-Ch] [ebp-18h]
  int v29; // [esp-Ch] [ebp-18h]
  int v30; // [esp-Ch] [ebp-18h]
  int v31; // [esp-8h] [ebp-14h]
  int v33; // [esp+4h] [ebp-8h]
  int i; // [esp+8h] [ebp-4h]

  v33 = *(_DWORD *)(dword_16306A4 + 476);
  *(this + 132) = a3;
  *(this + 133) = a2;
  for ( i = 0; i < sub_6647C0(*(this + 133)); ++i )
  {
    if ( i == 1 && (*(this + 133) == 5 || !*(this + 133) || *(this + 133) == 2) )
    {
      if ( *(this + 133) == 5 )
      {
        v3 = sub_6651E0(0);
        v4 = sub_675B40(*(this + 133), *(this + 132), v3);
        sub_5EAF00(*(this + 136), v4);
        (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)*(this + 136) + 176))(*(this + 136), 1);
      }
      else
      {
        v5 = sub_6651E0(0);
        v6 = sub_675B40(*(this + 133), *(this + 132), v5);
        sub_5EAF00(*(this + 135), v6);
        (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)*(this + 135) + 176))(*(this + 135), 4);
      }
    }
    else if ( *(this + 133) == 5 )
    {
      v7 = sub_6651E0(0);
      v8 = sub_675B40(*(this + 133), *(this + 132), v7);
      sub_5EAF00(*(this + i + 134), v8);
      if ( i == 2 )
        (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)*(this + 136) + 176))(*(this + 136), 1);
    }
    else
    {
      v9 = sub_6651E0(0);
      v10 = sub_675B40(*(this + 133), *(this + 132), v9);
      sub_5EAF00(*(this + i + 134), i + v10);
      if ( *(this + 133) && *(this + 133) != 2 )
      {
        if ( *(this + 133) == 3 )
        {
          v12 = sub_6651E0(0);
          v13 = sub_675B40(4, *(this + 132), v12);
          sub_5EAF00(*(this + i + 137), i + v13);
        }
        else if ( *(this + 133) == 8 )
        {
          v14 = sub_6651E0(0);
          v15 = sub_675B40(9, *(this + 132), v14);
          sub_5EAF00(*(this + i + 137), i + v15);
        }
      }
      else
      {
        v11 = std::ios::fill(v33);
        (*(void (__thiscall **)(_DWORD, _DWORD))(*(_DWORD *)*(this + i + 134) + 176))(*(this + i + 134), v11);
      }
    }
    v16 = (*(int (__thiscall **)(int *))(*this + 84))(this);
    v17 = (*(int (__thiscall **)(int *, int))(*this + 76))(this, v16 + 1);
    (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)*(this + i + 134) + 68))(*(this + i + 134), v17 + 1);
    (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + i + 134) + 116))(*(this + i + 134));
    if ( i == 1 && *(this + 133) == 5 )
    {
      (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 135) + 112))(*(this + 135));
      (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 136) + 116))(*(this + 136));
    }
    if ( *(this + 133) == 3 || *(this + 133) == 8 )
    {
      v18 = (*(int (__thiscall **)(int *))(*this + 84))(this);
      v19 = (*(int (__thiscall **)(int *, int))(*this + 76))(this, v18 + 1);
      (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)*(this + i + 137) + 68))(*(this + i + 137), v19 + 1);
      (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + i + 137) + 116))(*(this + i + 137));
    }
    else
    {
      (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + i + 137) + 112))(*(this + i + 137));
    }
  }
  if ( *(this + 133) )
  {
    (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 140) + 112))(*(this + 140));
    (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 141) + 112))(*(this + 141));
    return (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 142) + 112))(*(this + 142));
  }
  else
  {
    v31 = CMediaType::IsFixedSize((CMediaType *)this) + 10;
    v28 = (*(int (__thiscall **)(int *))(*this + 84))(this);
    v20 = (*(int (__thiscall **)(int *))(*this + 76))(this);
    sub_5EAE80(2000076, v20 + 1, v28, v31, -1);
    (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 140) + 176))(*(this + 140));
    (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 140) + 116))(*(this + 140));
    v29 = CMediaType::IsFixedSize((CMediaType *)this) + 4;
    v21 = (*(int (__thiscall **)(int *))(*this + 84))(this);
    v22 = (*(int (__thiscall **)(int *, int))(*this + 76))(this, v21);
    sub_5EAE80(2000076, v22 + 1, v29, -1, 0);
    (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 141) + 176))(*(this + 141));
    (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 141) + 116))(*(this + 141));
    v30 = CMediaType::IsFixedSize((CMediaType *)this) + 9;
    v23 = (*(int (__thiscall **)(int *))(*this + 84))(this);
    v27 = (*(int (__thiscall **)(int *, int))(*this + 76))(this, v23 + 1) + 1;
    v24 = CDrawImage::UsingImageAllocator((CDrawImage *)*(this + 134));
    v25 = sub_675B40(1, 0, v24);
    sub_5EAE80(v25, v27, v30, -1, 1);
    return (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 142) + 116))(*(this + 142));
  }
}


//======================================================================
// sub_65B800
// entry 0065b800  size 145  status ok
//======================================================================

void __thiscall sub_65B800(_DWORD **this)
{
  int i; // [esp+4h] [ebp-4h]

  sub_602550((int)this);
  for ( i = 0; i < 3; ++i )
  {
    if ( *(this + i + 134) )
      (*(void (__thiscall **)(_DWORD))(**(this + i + 134) + 112))(*(this + i + 134));
    if ( *(this + i + 137) )
      (*(void (__thiscall **)(_DWORD))(**(this + i + 137) + 112))(*(this + i + 137));
  }
}


//======================================================================
// sub_65B8A0
// entry 0065b8a0  size 463  status ok
//======================================================================

int __thiscall sub_65B8A0(int this)
{
  int v1; // esi
  int v2; // eax
  int v3; // esi
  int v4; // eax

  *(_DWORD *)(this + 440) = 3;
  *(_DWORD *)(this + 448) = *(_DWORD *)(this + 440) + 20;
  *(_DWORD *)(this + 444) = 2;
  *(_DWORD *)(this + 452) = *(_DWORD *)(this + 444) + 12;
  sub_5EF310(*(_DWORD **)(this + 400), 48);
  sub_5ECC60(*(_DWORD **)(this + 400), *(_DWORD *)(this + 448) - *(_DWORD *)(this + 440) + 1);
  sub_5ECCB0(*(_DWORD **)(this + 400), *(_DWORD *)(this + 452) - *(_DWORD *)(this + 444) + 1);
  v1 = *(_DWORD *)(this + 444) + (*(int (__thiscall **)(int))(*(_DWORD *)this + 84))(this);
  v2 = sub_5EB470((_DWORD *)this);
  v3 = *(_DWORD *)(this + 440) + (*(int (__thiscall **)(int, int))(*(_DWORD *)this + 76))(this, v2 + v1);
  v4 = sub_5EB470((_DWORD *)this);
  return (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 400) + 68))(*(_DWORD *)(this + 400), v4 + v3);
}


//======================================================================
// sub_65BA70
// entry 0065ba70  size 98  status ok
//======================================================================

int __thiscall sub_65BA70(int this)
{
  sub_5F71F0((_DWORD *)this, 1, 0);
  *(_DWORD *)this = &FaceChoiceDialog::`vftable';
  *(_DWORD *)(this + 444) = 0;
  *(_BYTE *)(this + 448) = 0;
  *(_BYTE *)(this + 449) = 1;
  *(_BYTE *)(this + 450) = 0;
  *(_BYTE *)(this + 451) = 0;
  *(_BYTE *)(this + 452) = 0;
  return this;
}


//======================================================================
// sub_65BB00
// entry 0065bb00  size 1470  status ok
//======================================================================

int __thiscall sub_65BB00(_DWORD *this)
{
  int v1; // eax
  int v2; // eax
  int v3; // eax
  int v4; // eax
  int v5; // esi
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int result; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // [esp-44h] [ebp-A0h]
  int v15; // [esp-2Ch] [ebp-88h]
  int v16; // [esp-28h] [ebp-84h]
  int v17; // [esp-24h] [ebp-80h]
  int v18; // [esp-24h] [ebp-80h]
  int v19; // [esp-24h] [ebp-80h]
  int v20; // [esp-20h] [ebp-7Ch]
  int v21; // [esp-20h] [ebp-7Ch]
  int v22; // [esp-18h] [ebp-74h]
  int v23; // [esp-18h] [ebp-74h]
  int v24; // [esp-14h] [ebp-70h]
  int v25; // [esp-10h] [ebp-6Ch]
  int v26; // [esp-10h] [ebp-6Ch]
  char v27; // [esp+0h] [ebp-5Ch]
  int v28; // [esp+4h] [ebp-58h]
  _DWORD *v29; // [esp+Ch] [ebp-50h]
  int v30; // [esp+10h] [ebp-4Ch]
  int v31; // [esp+14h] [ebp-48h]
  int v32; // [esp+18h] [ebp-44h]
  int v33; // [esp+1Ch] [ebp-40h]
  int v34; // [esp+20h] [ebp-3Ch]
  int v35; // [esp+24h] [ebp-38h]
  int v36; // [esp+28h] [ebp-34h]
  int v38; // [esp+34h] [ebp-28h]
  int v39; // [esp+40h] [ebp-1Ch]
  _DWORD *v40; // [esp+44h] [ebp-18h]
  int i; // [esp+4Ch] [ebp-10h]
  int j; // [esp+4Ch] [ebp-10h]
  int k; // [esp+4Ch] [ebp-10h]

  v22 = sub_630F40((int)"SID_SHELL_GOTOFACEMAKER");
  v20 = (*(int (__thiscall **)(_DWORD *))(*this + 72))(this);
  v17 = (*(int (__thiscall **)(_DWORD *))(*this + 68))(this);
  v1 = (*(int (__thiscall **)(_DWORD *))(*this + 64))(this);
  v38 = sub_5F9DE0(this, 0, 90, v1, v17, v20, 1, v22, 72, 75, 74, -1, 0)[100];
  *(_DWORD *)(v38 + 168) = (*(int (__thiscall **)(_DWORD *))(*this + 76))(this);
  if ( !(*(int (__thiscall **)(_DWORD *))(*this + 68))(this) )
  {
    v36 = sub_5FB300((int)this, 90);
    (*(void (__thiscall **)(int))(*(_DWORD *)v36 + 112))(v36);
  }
  if ( (*(int (__thiscall **)(_DWORD *))(*this + 88))(this) )
  {
    v18 = (*(int (__thiscall **)(_DWORD *))(*this + 92))(this);
    v16 = (*(int (__thiscall **)(_DWORD *))(*this + 88))(this);
    v15 = (*(int (__thiscall **)(_DWORD *))(*this + 84))(this);
    v2 = (*(int (__thiscall **)(_DWORD *))(*this + 80))(this);
    sub_5FA790(this, 0, -1, (char *)&Source, 31, v2, v15, v16, v18, 1, 120, 124, 161, 255, 255, 255, 0);
    v25 = (*(int (__thiscall **)(_DWORD *))(*this + 92))(this) + 6;
    v24 = (*(int (__thiscall **)(_DWORD *))(*this + 88))(this) + 10;
    v3 = sub_630F40((int)"SID_SHELL_FACEMAKER_BUTTON_DIRECTIONS");
    sub_5FA5B0(this, 0, -1, v3, 31, 120, 40, v24, v25, 1, 5, -1);
  }
  v23 = sub_630F40((int)"SID_GENERIC_DELETE");
  v21 = (*(int (__thiscall **)(_DWORD *))(*this + 100))(this);
  v4 = (*(int (__thiscall **)(_DWORD *))(*this + 96))(this);
  sub_5F9DE0(this, 0, 99, 3200222, v4, v21, 1, v23, 72, 75, 74, -1, 0);
  if ( !(*(int (__thiscall **)(_DWORD *))(*this + 96))(this) )
  {
    v35 = sub_5FB300((int)this, 99);
    (*(void (__thiscall **)(int))(*(_DWORD *)v35 + 112))(v35);
  }
  for ( i = 0; i < 2; ++i )
  {
    if ( i )
    {
      if ( (*(unsigned __int8 (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 200))(dword_162EE84) )
        v32 = sub_630F40((int)"SID_SHELL_FACEMAKERFACE");
      else
        v32 = sub_630F40((int)"SID_SHELL_FACEMAKERFACE_NONTALKING");
      v33 = v32;
    }
    else
    {
      if ( (*(unsigned __int8 (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 200))(dword_162EE84) )
        v34 = sub_630F40((int)"SID_SHELL_PREMADEFACE");
      else
        v34 = sub_630F40((int)"SID_SHELL_PREMADEFACE_NONTALKING");
      v33 = v34;
    }
    v5 = (*(int (__thiscall **)(_DWORD *))(*this + 108))(this);
    v19 = (*(int (__thiscall **)(_DWORD *))(*this + 112))(this) * (i == 0) + v5;
    v6 = (*(int (__thiscall **)(_DWORD *))(*this + 104))(this);
    sub_5F9FF0((int)this, 0, 0, i + 95, 0, 3200202, v6, v19, 1, v33, 31, 69, 66, -1, 20, 0);
  }
  if ( !(*(int (__thiscall **)(_DWORD *))(*this + 104))(this) )
  {
    v31 = sub_5FB3F0(this, 95, 0);
    (*(void (__thiscall **)(int))(*(_DWORD *)v31 + 112))(v31);
    v30 = sub_5FB3F0(this, 96, 0);
    (*(void (__thiscall **)(int))(*(_DWORD *)v30 + 112))(v30);
  }
  v26 = (*(int (__thiscall **)(_DWORD *))(*this + 120))(this) + 5;
  v7 = (*(int (__thiscall **)(_DWORD *))(*this + 116))(this);
  sub_5FA5B0(this, 0, 2, (int)&Source, 31, 153, 17, v7 + 2, v26, 5, 48, -1);
  if ( operator new(0x90u) )
    v29 = (_DWORD *)sub_65CB60(this);
  else
    v29 = 0;
  v14 = (*(int (__thiscall **)(_DWORD *))(*this + 120))(this);
  v8 = (*(int (__thiscall **)(_DWORD *))(*this + 116))(this);
  *(this + 111) = sub_5FAB80(
                    this,
                    v29,
                    98,
                    3200218,
                    v8,
                    v14,
                    1,
                    1,
                    3200206,
                    138,
                    113,
                    3200205,
                    4,
                    113,
                    3200208,
                    112,
                    18,
                    118,
                    20,
                    112,
                    116,
                    16);
  result = (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 200))(dword_162EE84);
  if ( (_BYTE)result )
  {
    result = (*(int (__thiscall **)(_DWORD *))(*this + 124))(this);
    if ( result )
    {
      v10 = (*(int (__thiscall **)(_DWORD *))(*this + 128))(this);
      v11 = (*(int (__thiscall **)(_DWORD *, int))(*this + 124))(this, v10);
      sub_5F9DE0(this, 0, 91, 2300640, v11, 2, (int)&Source, -1, -1, -1, -1, 0, v27);
      v12 = (*(int (__thiscall **)(_DWORD *))(*this + 128))(this);
      v13 = (*(int (__thiscall **)(_DWORD *, int))(*this + 124))(this, v12);
      v40 = sub_5FAEE0(
              this,
              0,
              92,
              2300641,
              v13 + 34,
              1,
              5007,
              (struct Concurrency::details::SchedulerBase *)1,
              (char)&Source,
              31,
              31,
              31,
              31,
              v28);
      sub_602E30((_DWORD **)v40, 5, 0);
      v39 = sub_65D150(*(this + 111));
      result = (*(int (__thiscall **)(_DWORD *, int, int))(*v40 + 240))(v40, v39 + 100031, 1);
      if ( byte_795F95 )
      {
        for ( j = 100065; j <= 100068; ++j )
          result = sub_5F2BA0((void *)dword_162EE80, j);
        for ( k = 100070; k <= 100073; ++k )
          result = sub_5F2BA0((void *)dword_162EE80, k);
      }
    }
  }
  return result;
}


//======================================================================
// sub_65C0C0
// entry 0065c0c0  size 298  status ok
//======================================================================

int __thiscall sub_65C0C0(char *this)
{
  const char *v1; // eax
  const CHAR *v2; // eax
  int result; // eax
  const CHAR *v4; // eax
  struct Concurrency::details::UMSThreadProxy *v5; // esi
  char v6; // al
  struct Concurrency::details::UMSThreadProxy *ExecutingProxy; // eax
  const CHAR *v8; // [esp-8h] [ebp-30h]
  const CHAR *v9; // [esp-8h] [ebp-30h]
  char Destination[28]; // [esp+8h] [ebp-20h] BYREF

  v1 = (const char *)sub_65D130(*((_DWORD *)this + 111));
  strcpy(Destination, v1);
  if ( (*(unsigned __int8 (__thiscall **)(char *, char *))(*(_DWORD *)this + 132))(this, Destination) )
  {
    v8 = (const CHAR *)sub_630F40((int)"SID_SHELL_FACEINUSE");
    v2 = (const CHAR *)sub_630F40((int)"SID_SHELL_FACEINUSEMESSAGE");
    result = sub_62FF10(v2, v8, 4u);
    if ( result != 6 )
      return result;
  }
  else
  {
    v9 = (const CHAR *)sub_630F40((int)"SID_SHELL_DELETEFACE");
    v4 = (const CHAR *)sub_630F40((int)"SID_SHELL_CONFIRMDELETEFACE");
    result = sub_62FF10(v4, v9, 4u);
    if ( result != 6 )
      return result;
  }
  v5 = (struct Concurrency::details::UMSThreadProxy *)*(this + 450);
  if ( v5 == Concurrency::details::UMSFreeVirtualProcessorRoot::GetExecutingProxy(*((Concurrency::details::UMSFreeVirtualProcessorRoot **)this
                                                                                  + 111)) )
  {
    CDaoIndexFieldInfo::~CDaoIndexFieldInfo((CDaoIndexFieldInfo *)(*((_DWORD *)this + 111) + 116));
    *(this + 450) = v6 - 1;
  }
  ExecutingProxy = Concurrency::details::UMSFreeVirtualProcessorRoot::GetExecutingProxy(*((Concurrency::details::UMSFreeVirtualProcessorRoot **)this
                                                                                        + 111));
  sub_65CFE0(ExecutingProxy);
  (*(void (__thiscall **)(char *, char *))(*(_DWORD *)this + 148))(this, Destination);
  return sub_65C300(this);
}


//======================================================================
// sub_65C1F0
// entry 0065c1f0  size 52  status ok
//======================================================================

int __stdcall sub_65C1F0(char *Source)
{
  sub_663650(Source);
  return sub_65C820(3, 0, Source, 1);
}


//======================================================================
// sub_65C230
// entry 0065c230  size 205  status ok
//======================================================================

int __thiscall sub_65C230(int this, char *Str2)
{
  int result; // eax
  char *v3; // eax
  int v5; // [esp+4h] [ebp-4h]

  v5 = sub_6639D0(Str2);
  sub_663D10(Str2);
  result = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 444) + 184))(*(_DWORD *)(this + 444));
  if ( !result )
    return sub_65C820(2, 0, (char *)&Source, 1);
  if ( *(char *)(this + 450) >= v5 )
  {
    if ( *(_BYTE *)(this + 450) )
      --*(_BYTE *)(this + 450);
    v3 = (char *)sub_6639A0(*(char *)(this + 450));
    return sub_65C820(3, 0, v3, 1);
  }
  return result;
}


//======================================================================
// sub_65C300
// entry 0065c300  size 456  status ok
//======================================================================

int __thiscall sub_65C300(_DWORD *this)
{
  int result; // eax
  void *v2; // eax
  int v3; // ecx
  int v4; // eax
  void *v5; // eax
  int v6; // [esp+0h] [ebp-2Ch]
  int v7; // [esp+4h] [ebp-28h]
  int v8; // [esp+8h] [ebp-24h]
  int v9; // [esp+Ch] [ebp-20h]
  int v10; // [esp+10h] [ebp-1Ch]
  int v11; // [esp+14h] [ebp-18h]
  bool v12; // [esp+18h] [ebp-14h]
  bool v14; // [esp+23h] [ebp-9h]
  int v15; // [esp+24h] [ebp-8h]
  int v16; // [esp+28h] [ebp-4h]

  result = sub_5FB300((int)this, 99);
  v16 = result;
  if ( result )
  {
    result = (int)this;
    if ( *(this + 111) )
    {
      result = sub_5FB3A0((int)this, 0);
      if ( result )
      {
        v2 = (void *)sub_5FB3A0((int)this, 0);
        v12 = 0;
        if ( sub_606570(v2) == 96 )
        {
          CDaoIndexFieldInfo::~CDaoIndexFieldInfo((CDaoIndexFieldInfo *)(*(this + 111) + 116));
          if ( v4 )
            v12 = 1;
        }
        v14 = v12;
        if ( byte_795F95 )
          v14 = 0;
        LOBYTE(v3) = v14;
        (*(void (__thiscall **)(int, int))(*(_DWORD *)v16 + 212))(v16, v3);
        result = (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 200))(dword_162EE84);
        if ( (_BYTE)result )
        {
          result = (*(int (__thiscall **)(_DWORD *))(*this + 124))(this);
          if ( result )
          {
            v5 = (void *)sub_5FB3A0((int)this, 0);
            if ( sub_606570(v5) == 96 )
            {
              v11 = sub_5FB300((int)this, 91);
              (*(void (__thiscall **)(int))(*(_DWORD *)v11 + 204))(v11);
              v10 = sub_5FB5E0((int)this, 92);
              (*(void (__thiscall **)(int))(*(_DWORD *)v10 + 204))(v10);
            }
            else
            {
              v9 = sub_5FB300((int)this, 91);
              (*(void (__thiscall **)(int))(*(_DWORD *)v9 + 208))(v9);
              v8 = sub_5FB5E0((int)this, 92);
              (*(void (__thiscall **)(int))(*(_DWORD *)v8 + 208))(v8);
            }
            if ( v14 )
            {
              v15 = sub_65D150(*(this + 111));
              v7 = sub_5FB5E0((int)this, 92);
              return (*(int (__thiscall **)(int, int, int))(*(_DWORD *)v7 + 240))(v7, v15 + 100031, 1);
            }
            else
            {
              v6 = sub_5FB5E0((int)this, 92);
              return (*(int (__thiscall **)(int, int, int))(*(_DWORD *)v6 + 240))(v6, 100064, 1);
            }
          }
        }
      }
    }
  }
  return result;
}


//======================================================================
// sub_65C4D0
// entry 0065c4d0  size 141  status ok
//======================================================================

int __thiscall sub_65C4D0(int this)
{
  int result; // eax
  int v2; // eax
  void *v3; // eax
  void *v4; // eax

  sub_5F85D0(this);
  sub_5FB300(this, 99);
  result = this;
  if ( *(_DWORD *)(this + 444) )
  {
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 444) + 116))(*(_DWORD *)(this + 444));
    CDaoIndexFieldInfo::~CDaoIndexFieldInfo((CDaoIndexFieldInfo *)(*(_DWORD *)(this + 444) + 116));
    if ( !v2 )
    {
      v3 = (void *)sub_5FB3A0(this, 0);
      if ( sub_606570(v3) == 96 )
      {
        v4 = (void *)sub_5FB3A0(this, 0);
        sub_6065D0(v4, 95);
      }
    }
    return sub_65C300((_DWORD *)this);
  }
  return result;
}


//======================================================================
// sub_65C560
// entry 0065c560  size 246  status ok
//======================================================================

int __thiscall sub_65C560(int this, int a2)
{
  int result; // eax
  void *v3; // eax
  int v4; // eax
  char *v5; // eax

  result = this;
  if ( !*(_BYTE *)(this + 448) && a2 >= 95 && a2 <= 96 )
  {
    v3 = (void *)sub_5FB3A0(this, 0);
    result = sub_606570(v3);
    if ( a2 == result )
    {
      sub_65C300((_DWORD *)this);
      Concurrency::details::_NonReentrantPPLLock::_Acquire(
        *(Concurrency::details::_NonReentrantPPLLock **)(this + 444),
        (void *)0xFFFFFFFF);
      if ( a2 == 95 )
      {
        return sub_65C820(2, *(_BYTE *)(this + 451), (char *)&Source, 0);
      }
      else if ( !*(_DWORD *)(this + 444)
             || (CDaoIndexFieldInfo::~CDaoIndexFieldInfo((CDaoIndexFieldInfo *)(*(_DWORD *)(this + 444) + 116)), v4) )
      {
        v5 = (char *)sub_6639A0(*(char *)(this + 450));
        return sub_65C820(3, 0, v5, 0);
      }
      else
      {
        sub_5F87D0(this);
        return sub_64F470(0);
      }
    }
  }
  return result;
}


//======================================================================
// sub_65C660
// entry 0065c660  size 235  status ok
//======================================================================

char __thiscall sub_65C660(int this, int a2)
{
  int v2; // eax
  void *v3; // eax
  char *v4; // eax
  _DWORD v7[4]; // [esp+8h] [ebp-20h] BYREF
  double v8; // [esp+18h] [ebp-10h]
  double v9; // [esp+20h] [ebp-8h]

  LOBYTE(v2) = a2;
  switch ( a2 )
  {
    case 'Z':
      sub_5F87D0(this);
      v3 = (void *)sub_5FB3A0(this, 0);
      if ( sub_606570(v3) == 95 )
      {
        LOBYTE(v2) = sub_64F470(0);
      }
      else
      {
        v4 = (char *)sub_6639A0(*(char *)(this + 450));
        LOBYTE(v2) = sub_64F470(v4);
      }
      break;
    case '[':
      if ( *(_DWORD *)(this + 444) )
      {
        v2 = *(_DWORD *)(this + 444);
        if ( *(_DWORD *)(v2 + 112) )
        {
          v7[1] = 6000;
          v7[2] = -1;
          v8 = 0.0;
          v9 = 1.0;
          v7[0] = -1;
          LOBYTE(v2) = sub_6476F0(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(this + 444) + 112) + 32), (int)v7, 0, -1, 1);
        }
      }
      break;
    case 'c':
      LOBYTE(v2) = sub_65C0C0((char *)this);
      break;
  }
  return v2;
}


//======================================================================
// sub_65C750
// entry 0065c750  size 146  status ok
//======================================================================

void __thiscall sub_65C750(_DWORD *this, int a2, int a3)
{
  void *v3; // eax
  int v4; // eax
  bool v5; // [esp+0h] [ebp-10h]

  v3 = (void *)sub_5FB3A0((int)this, 0);
  v5 = 0;
  if ( sub_606570(v3) == 96 )
  {
    CDaoIndexFieldInfo::~CDaoIndexFieldInfo((CDaoIndexFieldInfo *)(*(this + 111) + 116));
    if ( v4 )
      v5 = 1;
  }
  if ( v5 && *(this + 111) )
  {
    if ( *(_DWORD *)(*(this + 111) + 112) )
      sub_65D190(a2 - 100031);
  }
}


//======================================================================
// sub_65C7F0
// entry 0065c7f0  size 38  status ok
//======================================================================

bool __thiscall sub_65C7F0(void *this)
{
  void *v1; // eax

  v1 = (void *)sub_5FB3A0((int)this, 0);
  return sub_606570(v1) == 96;
}


//======================================================================
// sub_65C820
// entry 0065c820  size 404  status ok
//======================================================================

void __fastcall sub_65C820(int a1, int a2, char a3, char a4, char *Str2, char a6)
{
  int v6; // eax
  unsigned __int8 v7; // al
  void *v8; // eax
  void *v9; // eax
  void *v10; // eax
  int v11; // eax
  int v12; // [esp+0h] [ebp-4h]

  v12 = a1;
  if ( a3 == 3 )
  {
    CDaoIndexFieldInfo::~CDaoIndexFieldInfo((CDaoIndexFieldInfo *)(*(_DWORD *)(a1 + 444) + 116));
    if ( v6 )
    {
      v7 = sub_663B50(Str2);
      a1 = v7;
      if ( !v7 )
        Str2 = (char *)sub_6639A0(0);
    }
    else
    {
      a3 = 2;
      a4 = 0;
    }
  }
  LOBYTE(a1) = a4;
  (*(void (__thiscall **)(int, char, int, char *))(*(_DWORD *)v12 + 140))(v12, a3, a1, Str2);
  if ( a3 == 2 )
  {
    *(_BYTE *)(v12 + 449) = 1;
    if ( a6 )
    {
      *(_BYTE *)(v12 + 448) = 1;
      v8 = (void *)sub_5FB3A0(v12, 0);
      sub_6065D0(v8, 95);
      *(_BYTE *)(v12 + 448) = 0;
      Concurrency::details::_NonReentrantPPLLock::_Acquire(
        *(Concurrency::details::_NonReentrantPPLLock **)(v12 + 444),
        (void *)0xFFFFFFFF);
    }
    Concurrency::details::_NonReentrantPPLLock::_Acquire(
      *(Concurrency::details::_NonReentrantPPLLock **)(v12 + 444),
      (void *)a4);
  }
  else
  {
    *(_BYTE *)(v12 + 449) = 0;
    if ( a6 )
    {
      *(_BYTE *)(v12 + 448) = 1;
      v9 = (void *)sub_5FB3A0(v12, 0);
      sub_6065D0(v9, 96);
      *(_BYTE *)(v12 + 448) = 0;
      Concurrency::details::_NonReentrantPPLLock::_Acquire(
        *(Concurrency::details::_NonReentrantPPLLock **)(v12 + 444),
        (void *)0xFFFFFFFF);
    }
    v10 = (void *)sub_6639D0(Str2);
    Concurrency::details::_NonReentrantPPLLock::_Acquire(
      *(Concurrency::details::_NonReentrantPPLLock **)(v12 + 444),
      v10);
  }
  CDaoIndexFieldInfo::~CDaoIndexFieldInfo((CDaoIndexFieldInfo *)(*(_DWORD *)(v12 + 444) + 116));
  if ( !v11 && !*(_BYTE *)(v12 + 452) )
  {
    (*(void (__thiscall **)(int))(*(_DWORD *)v12 + 152))(v12);
    *(_BYTE *)(v12 + 452) = 1;
  }
}


//======================================================================
// sub_65C9C0
// entry 0065c9c0  size 120  status ok
//======================================================================

int __thiscall sub_65C9C0(void *this, int a2)
{
  int result; // eax
  int v3; // eax

  sub_65D190(a2);
  result = (*(unsigned __int8 (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 200))(dword_162EE84);
  if ( (_BYTE)result )
  {
    result = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 124))(this);
    if ( result )
    {
      v3 = sub_5FB5E0((int)this, 92);
      return (*(int (__thiscall **)(int, int, int))(*(_DWORD *)v3 + 240))(v3, a2 + 100031, 1);
    }
  }
  return result;
}


//======================================================================
// sub_65CA40
// entry 0065ca40  size 61  status ok
//======================================================================

int __thiscall sub_65CA40(_DWORD *this)
{
  void *v1; // eax
  int result; // eax

  v1 = (void *)sub_5FB3A0((int)this, 0);
  result = sub_606570(v1);
  if ( result == 96 )
  {
    result = (int)this;
    if ( *(this + 111) )
      return sub_65D080(*(this + 111));
  }
  return result;
}


//======================================================================
// sub_65CA80
// entry 0065ca80  size 218  status ok
//======================================================================

char __thiscall sub_65CA80(void *this, char *Str2)
{
  LONG *v2; // eax
  char Buffer[16]; // [esp+8h] [ebp-1Ch] BYREF
  int i; // [esp+1Ch] [ebp-8h]
  CImageDisplay *v6; // [esp+20h] [ebp-4h]

  v6 = (CImageDisplay *)(*(int (__thiscall **)(Concurrency::details::ContextBase *, void *))(*(_DWORD *)dword_162EE84
                                                                                           + 796))(
                          dword_162EE84,
                          this);
  sub_63A3E0((int)v6, -1, 0);
  CImageDisplay::GetDisplayFormat(v6)->rcSource.left = 2;
  for ( i = 0; i < 100; ++i )
  {
    sprintf(Buffer, "user%d.log", i);
    if ( sub_63AB10((int)v6, Buffer) )
    {
      if ( !(*(unsigned __int8 (__thiscall **)(Concurrency::details::ContextBase *, CImageDisplay *))(*(_DWORD *)dword_162EE84 + 872))(
              dword_162EE84,
              v6) )
      {
        v2 = sub_57A470(v6);
        if ( !strcmp((const char *)v2, Str2) )
          return 1;
      }
    }
  }
  return 0;
}


//======================================================================
// sub_65CB60
// entry 0065cb60  size 289  status ok
//======================================================================

int __thiscall sub_65CB60(_DWORD *this, int a2)
{
  int v2; // eax
  int v3; // eax
  int v4; // eax
  int v7; // [esp+4h] [ebp-14h]
  int v8; // [esp+4h] [ebp-14h]
  int v9; // [esp+10h] [ebp-8h]

  sub_614810(this);
  *this = &FacePictureScroll::`vftable';
  CMFCComObject<ATL::CAccessibleProxy>::CMFCComObject<ATL::CAccessibleProxy>();
  *(this + 35) = a2;
  v2 = (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 796))(dword_162EE84);
  *(_DWORD *)(v7 + 112) = v2;
  sub_63A3E0(*(_DWORD *)(v7 + 112), -1, 0);
  sub_63A8D0(MEMORY[0x70], -1, a2, 0, 0, 0);
  CImageDisplay::GetDisplayFormat(*(CImageDisplay **)(v8 + 112))->rcSource.left = 3;
  v3 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(v8 + 140) + 120))(*(_DWORD *)(v8 + 140));
  v4 = (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(v8 + 140) + 116))(*(_DWORD *)(v8 + 140), v3 + 24);
  sub_646150(*(_DWORD *)(*(_DWORD *)(v8 + 112) + 32), v4 + 28, v9);
  sub_663A30(v8 + 116);
  return v8;
}


//======================================================================
// sub_65CC90
// entry 0065cc90  size 167  status ok
//======================================================================

void __thiscall sub_65CC90(CNoTrackObject *this)
{
  *(_DWORD *)this = &FacePictureScroll::`vftable';
  if ( *((_DWORD *)this + 28) )
  {
    (***((void (__thiscall ****)(_DWORD, int))this + 28))(*((_DWORD *)this + 28), 1);
    *((_DWORD *)this + 28) = 0;
  }
  Concurrency::call<unsigned int,std::function<void __cdecl (unsigned int const &)>>::~call<unsigned int,std::function<void __cdecl (unsigned int const &)>>();
  sub_614A10(this);
}


//======================================================================
// sub_65CD50
// entry 0065cd50  size 129  status ok
//======================================================================

void __thiscall sub_65CD50(_DWORD *this)
{
  if ( *(_BYTE *)(*(this + 35) + 449) )
  {
    if ( byte_795FBE )
    {
      (*(void (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 500))(dword_162EE84);
      (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 504))(dword_162EE84);
    }
    else
    {
      (*(void (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 500))(dword_162EE84);
    }
  }
  else
  {
    CDaoIndexFieldInfo::~CDaoIndexFieldInfo((CDaoIndexFieldInfo *)(this + 29));
  }
}


//======================================================================
// sub_65CE00
// entry 0065ce00  size 25  status ok
//======================================================================

void __thiscall sub_65CE00(Concurrency::details::_NonReentrantPPLLock *this, void *a2, int a3)
{
  Concurrency::details::_NonReentrantPPLLock::_Acquire(this, a2);
}


//======================================================================
// sub_65CE20
// entry 0065ce20  size 349  status ok
//======================================================================

int __thiscall sub_65CE20(int this)
{
  struct Concurrency::details::UMSThreadProxy *ExecutingProxy; // eax
  struct Concurrency::details::UMSThreadProxy *v2; // eax
  struct Concurrency::details::UMSThreadProxy *v3; // eax
  int v5; // [esp-4h] [ebp-18h]
  int v6; // [esp-4h] [ebp-18h]
  struct Concurrency::details::UMSThreadProxy *v8; // [esp+8h] [ebp-Ch]

  if ( *(_DWORD *)(*(_DWORD *)(this + 140) + 444) )
  {
    ExecutingProxy = Concurrency::details::UMSFreeVirtualProcessorRoot::GetExecutingProxy((Concurrency::details::UMSFreeVirtualProcessorRoot *)this);
    v5 = sub_6639A0(ExecutingProxy);
    v2 = Concurrency::details::UMSFreeVirtualProcessorRoot::GetExecutingProxy((Concurrency::details::UMSFreeVirtualProcessorRoot *)this);
    (*(void (__thiscall **)(_DWORD, struct Concurrency::details::UMSThreadProxy *, int))(**(_DWORD **)(this + 140) + 136))(
      *(_DWORD *)(this + 140),
      v2,
      v5);
  }
  sub_648270(*(_DWORD *)(*(_DWORD *)(this + 112) + 32), 1);
  if ( *(_BYTE *)(*(_DWORD *)(this + 140) + 449) )
  {
    *(_BYTE *)(*(_DWORD *)(this + 140) + 451) = (unsigned __int8)Concurrency::details::UMSFreeVirtualProcessorRoot::GetExecutingProxy((Concurrency::details::UMSFreeVirtualProcessorRoot *)this);
    CImageDisplay::GetDisplayFormat(*(CImageDisplay **)(this + 112))->rcSource.left = 2;
    v8 = Concurrency::details::UMSFreeVirtualProcessorRoot::GetExecutingProxy((Concurrency::details::UMSFreeVirtualProcessorRoot *)this);
    CImageDisplay::GetDisplayFormat(*(CImageDisplay **)(this + 112))->bmiHeader.biClrImportant = (DWORD)v8;
  }
  else
  {
    *(_BYTE *)(*(_DWORD *)(this + 140) + 450) = (unsigned __int8)Concurrency::details::UMSFreeVirtualProcessorRoot::GetExecutingProxy((Concurrency::details::UMSFreeVirtualProcessorRoot *)this);
    CImageDisplay::GetDisplayFormat(*(CImageDisplay **)(this + 112))->rcSource.left = 3;
    v6 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(this + 112) + 32) + 20) + 16;
    v3 = Concurrency::details::UMSFreeVirtualProcessorRoot::GetExecutingProxy((Concurrency::details::UMSFreeVirtualProcessorRoot *)this);
    sub_663C70(v3, v6);
  }
  sub_6464D0(*(_DWORD *)(*(_DWORD *)(this + 112) + 32), 0, 0);
  sub_65C300(*(_DWORD **)(this + 140));
  return (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 140) + 144))(*(_DWORD *)(this + 140));
}


//======================================================================
// sub_65CF80
// entry 0065cf80  size 37  status ok
//======================================================================

int __thiscall sub_65CF80(_DWORD *this)
{
  sub_614F40((int)this);
  return sub_6464D0(*(_DWORD *)(*(this + 28) + 32), 0, 0);
}


//======================================================================
// sub_65CFB0
// entry 0065cfb0  size 35  status ok
//======================================================================

int __thiscall sub_65CFB0(CWnd *this)
{
  sub_614FD0(this);
  return sub_646C20(*(_DWORD *)(*((_DWORD *)this + 28) + 32), 1);
}


//======================================================================
// sub_65CFE0
// entry 0065cfe0  size 156  status ok
//======================================================================

void __thiscall sub_65CFE0(int *this, int a2)
{
  int v2; // edx
  char *v3; // eax
  char *v4; // eax
  int v5; // edx

  sub_663D40(a2);
  if ( (*(int (__thiscall **)(int *))(*this + 184))(this) )
  {
    if ( a2 )
    {
      v4 = (char *)sub_6639A0(a2 - 1);
      sub_65C820(*(this + 35), v5, 3, 0, v4, 1);
    }
    else
    {
      v3 = (char *)sub_6639A0(0);
      sub_65C820(*(this + 35), (int)this, 3, 0, v3, 1);
    }
  }
  else
  {
    sub_65C820(*(this + 35), v2, 2, 0, (char *)&Source, 1);
  }
}


//======================================================================
// sub_65D080
// entry 0065d080  size 164  status ok
//======================================================================

void __thiscall sub_65D080(int *this)
{
  int v1; // eax
  int v2; // eax
  char *v3; // eax
  int v4; // edx
  int i; // [esp+4h] [ebp-4h]

  for ( i = 0; ; ++i )
  {
    CDaoIndexFieldInfo::~CDaoIndexFieldInfo((CDaoIndexFieldInfo *)(this + 29));
    if ( i >= v1 )
      break;
    v2 = sub_6639A0(i);
    if ( !(unsigned __int8)sub_663BB0(v2) )
    {
      v3 = (char *)sub_6639A0(i);
      sub_65C230(*(this + 35), v3);
      --i;
    }
  }
  if ( !(*(int (__thiscall **)(int *))(*this + 184))(this) )
    sub_65C820(*(this + 35), v4, 2, 0, (char *)&Source, 1);
}


//======================================================================
// sub_65D130
// entry 0065d130  size 31  status ok
//======================================================================

int __thiscall sub_65D130(Concurrency::details::UMSFreeVirtualProcessorRoot *this)
{
  struct Concurrency::details::UMSThreadProxy *ExecutingProxy; // eax

  ExecutingProxy = Concurrency::details::UMSFreeVirtualProcessorRoot::GetExecutingProxy(this);
  return sub_6639A0(ExecutingProxy);
}


//======================================================================
// sub_65D150
// entry 0065d150  size 55  status ok
//======================================================================

int __thiscall sub_65D150(Concurrency::details::UMSFreeVirtualProcessorRoot *this)
{
  int v2; // eax

  if ( *(_BYTE *)(*((_DWORD *)this + 35) + 449) )
    return 33;
  v2 = sub_65D130(this);
  return sub_665800(v2);
}


//======================================================================
// sub_65D190
// entry 0065d190  size 71  status ok
//======================================================================

char *__thiscall sub_65D190(int this, char *a2)
{
  char *result; // eax
  int v3; // eax

  result = (char *)this;
  if ( !*(_BYTE *)(*(_DWORD *)(this + 140) + 449) )
  {
    v3 = sub_65D130((Concurrency::details::UMSFreeVirtualProcessorRoot *)this);
    sub_6659E0(v3, (char)a2);
    return sub_63B490(*(CImageDisplay **)(this + 112), a2);
  }
  return result;
}


//======================================================================
// sub_65D1E0
// entry 0065d1e0  size 123  status ok
//======================================================================

_DWORD *__thiscall sub_65D1E0(_DWORD *this)
{
  sub_65BA70((int)this);
  *this = &LoadFaceDialog::`vftable';
  sub_5F83D0(this, 3200242, 0);
  sub_5F7340((_DWORD **)this, 0, 0);
  dword_16306A8 = (int)this;
  return this;
}


//======================================================================
// sub_65D260
// entry 0065d260  size 38  status ok
//======================================================================

int __thiscall sub_65D260(_DWORD *this)
{
  *this = &LoadFaceDialog::`vftable';
  dword_16306A8 = 0;
  return CExpandoObject::~CExpandoObject(this, this);
}


//======================================================================
// sub_65D290
// entry 0065d290  size 16  status ok
//======================================================================

int sub_65D290()
{
  return 122;
}


//======================================================================
// sub_65D2A0
// entry 0065d2a0  size 16  status ok
//======================================================================

int sub_65D2A0()
{
  return 185;
}


//======================================================================
// sub_65D2B0
// entry 0065d2b0  size 16  status ok
//======================================================================

int sub_65D2B0()
{
  return 85;
}


//======================================================================
// sub_65D2C0
// entry 0065d2c0  size 16  status ok
//======================================================================

int sub_65D2C0()
{
  return 43;
}


//======================================================================
// sub_65D2D0
// entry 0065d2d0  size 284  status ok
//======================================================================

void __thiscall sub_65D2D0(_DWORD *this)
{
  int v1; // eax
  int v2; // eax
  int v3; // eax
  int v4; // edx

  sub_65BB00(this);
  v1 = sub_630F40((int)"SID_SHELL_LOADFACE");
  sub_5FA5B0(this, 0, 0, v1, 73, 322, 25, 3, 3, 1, 18, -1);
  sub_5FA880(this, 0, 0, 329, 1, 3, 218, 1, 120, 124, 161, 0, 0, 0);
  sub_5FA880(this, 0, 0, 329, 1, 4, 219, 1, 255, 255, 255, 0, 0, 0);
  v2 = sub_630F40((int)"SID_SHELL_LOAD");
  sub_5F9DE0(this, 0, 0, 3200229, 80, 225, 1, v2, 72, 75, 74, -1, 13);
  v3 = sub_630F40((int)"SID_GENERIC_CANCEL");
  sub_5F9DE0(this, 0, 1, 3200222, 170, 225, 1, v3, 72, 75, 74, -1, 27);
  sub_65C820((int)this, v4, 3, 0, (char *)(dword_16306A4 + 444), 1);
}


//======================================================================
// sub_65D3F0
// entry 0065d3f0  size 136  status ok
//======================================================================

_BYTE *__thiscall sub_65D3F0(Concurrency::details::UMSFreeVirtualProcessorRoot **this, int a2)
{
  int v2; // eax
  _BYTE *result; // eax
  char *v4; // eax

  sub_65C660((int)this, a2);
  if ( Concurrency::details::UMSFreeVirtualProcessorRoot::GetExecutingProxy(*(this + 111)) == (struct Concurrency::details::UMSThreadProxy *)-1 )
  {
    v2 = sub_5FB300((int)this, 0);
    (*(void (__thiscall **)(int))(*(_DWORD *)v2 + 208))(v2);
  }
  result = (_BYTE *)a2;
  if ( a2 )
  {
    if ( a2 == 1 )
      return sub_65A5F0((void *)dword_16306A4, 0);
  }
  else
  {
    v4 = (char *)sub_65D130(*(this + 111));
    return sub_65A5F0((void *)dword_16306A4, v4);
  }
  return result;
}


//======================================================================
// sub_65D480
// entry 0065d480  size 94  status ok
//======================================================================

void *__stdcall sub_65D480(char *String2)
{
  void *result; // eax

  if ( dword_16306B0 )
    sub_65CA40((_DWORD *)dword_16306B0);
  if ( dword_1630690 )
    sub_65CA40((_DWORD *)dword_1630690);
  result = (void *)stricmp((const char *)(dword_16306A4 + 444), String2);
  if ( !result )
    return sub_65A290(dword_16306A4);
  return result;
}


//======================================================================
// sub_65D4E0
// entry 0065d4e0  size 64  status ok
//======================================================================

int __thiscall sub_65D4E0(void *this)
{
  const CHAR *v1; // eax
  const CHAR *v3; // [esp-8h] [ebp-Ch]

  v3 = (const CHAR *)sub_630F40((int)"SID_SHELL_LOADFACE");
  v1 = (const CHAR *)sub_630F40((int)"SID_SHELL_NOFACES");
  sub_62FF10(v1, v3, 0);
  return (*(int (__thiscall **)(void *, int))(*(_DWORD *)this + 24))(this, 1);
}


//======================================================================
// sub_65D520
// entry 0065d520  size 167  status ok
//======================================================================

_DWORD *__thiscall sub_65D520(_DWORD *this, int a2)
{
  sub_5F71F0(this, 1, 0);
  *this = &WhichFaceVersionDialog::`vftable';
  sub_5F83D0(this, 3200242, 0);
  sub_5F7340((_DWORD **)this, 0, 0);
  *(this + 111) = a2;
  *(this + 112) = 0;
  *(this + 113) = 0;
  dword_16306AC = (int)this;
  return this;
}


//======================================================================
// sub_65D5D0
// entry 0065d5d0  size 196  status ok
//======================================================================

int __thiscall sub_65D5D0(void (__thiscall ****this)(_DWORD, int))
{
  *this = (void (__thiscall ***)(_DWORD, int))&WhichFaceVersionDialog::`vftable';
  if ( *(this + 112) )
    (***(this + 112))(*(this + 112), 1);
  if ( *(this + 113) )
    (***(this + 113))(*(this + 113), 1);
  dword_16306AC = 0;
  return sub_5F7260(this);
}


//======================================================================
// sub_65D6A0
// entry 0065d6a0  size 877  status ok
//======================================================================

_DWORD *__thiscall sub_65D6A0(_DWORD *this)
{
  int v1; // eax
  int v2; // eax
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v9; // [esp+Ch] [ebp-28h]
  int v10; // [esp+10h] [ebp-24h]
  void *v12; // [esp+18h] [ebp-1Ch]
  void *v13; // [esp+20h] [ebp-14h]

  v1 = sub_630F40((int)"SID_SHELL_FACE_CHANGED");
  sub_5FA5B0(this, 0, 0, v1, 73, 322, 25, 3, 3, 1, 18, -1);
  v2 = sub_630F40((int)"SID_SHELL_FACE_CHANGED_INSTRUCTIONS");
  sub_5FA5B0(this, 0, 0, v2, 31, 322, 75, 10, 155, 1, 5, -1);
  sub_5FA880(this, 0, 0, 329, 1, 3, 218, 1, 120, 124, 161, 0, 0, 0);
  sub_5FA880(this, 0, 0, 329, 1, 4, 219, 1, 255, 255, 255, 0, 0, 0);
  v3 = sub_630F40((int)"SID_SHELL_ADD");
  sub_5F9DE0(this, 0, 0, 3200222, 10, 225, 1, v3, 72, 75, 74, -1, 0);
  v4 = sub_630F40((int)"SID_SHELL_UPDATE");
  sub_5F9DE0(this, 0, 1, 3200222, 110, 225, 1, v4, 72, 75, 74, -1, 0);
  v5 = sub_630F40((int)"SID_GENERIC_CANCEL");
  sub_5F9DE0(this, 0, 2, 3200222, 242, 225, 1, v5, 72, 75, 74, -1, 27);
  sub_5F9CE0(this, 0, -1, 3200232, 40, 38, 1, 0, 0xFFu, 0);
  sub_5F9CE0(this, 0, -1, 3200232, 195, 38, 1, 0, 0xFFu, 0);
  v13 = operator new(0xC8u);
  if ( v13 )
    v10 = sub_6640C0(v13);
  else
    v10 = 0;
  *(this + 112) = v10;
  sub_664200(this, 0);
  qmemcpy((void *)(*(this + 112) + 16), (const void *)(dword_16306A4 + 480), 0x4Cu);
  sub_6643F0(40, 38);
  sub_664630(*(this + 112));
  v12 = operator new(0xC8u);
  if ( v12 )
    v9 = sub_6640C0(v12);
  else
    v9 = 0;
  *(this + 113) = v9;
  sub_664200(this, 0);
  qmemcpy((void *)(*(this + 113) + 16), (const void *)(*(_DWORD *)(dword_16306A4 + 476) + 16), 0x4Cu);
  sub_6643F0(195, 38);
  sub_664630(*(this + 113));
  v6 = sub_630F40((int)"SID_SHELL_OLD_VERSION");
  sub_5FA5B0(this, 0, 0, v6, 31, 200, 20, -10, 123, 2, 48, -1);
  v7 = sub_630F40((int)"SID_SHELL_NEW_VERSION");
  return sub_5FA5B0(this, 0, 0, v7, 31, 200, 20, 145, 123, 2, 48, -1);
}


//======================================================================
// sub_65DA10
// entry 0065da10  size 94  status ok
//======================================================================

int __thiscall sub_65DA10(_DWORD *this, unsigned int a2)
{
  int result; // eax

  sub_65A6E0();
  result = a2;
  if ( a2 <= 1 )
  {
    sub_659CC0((const char *)dword_16306A4, a2 == 0);
    return (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_16306A4 + 24))(dword_16306A4, *(this + 111));
  }
  return result;
}


//======================================================================
// sub_65DB00
// entry 0065db00  size 16  status ok
//======================================================================

int sub_65DB00()
{
  return 3200239;
}


//======================================================================
// sub_65DBD0
// entry 0065dbd0  size 227  status ok
//======================================================================

int __thiscall sub_65DBD0(int this, char a2, char a3, int a4, int a5, char a6)
{
  sub_65BA70(this);
  *(_DWORD *)this = &LoginDialog::`vftable';
  sub_5F83D0((_DWORD *)this, 3200215, 0);
  *(_BYTE *)(this + 468) = a2;
  *(_BYTE *)(this + 469) = a3;
  if ( *(_BYTE *)(this + 468) )
    *(_BYTE *)(this + 469) = 1;
  *(_BYTE *)(this + 470) = a6;
  *(_DWORD *)(this + 456) = 0;
  *(_DWORD *)(this + 484) = a4;
  *(_DWORD *)(this + 488) = a5;
  *(_DWORD *)(this + 464) = 0;
  *(_DWORD *)(this + 460) = 0;
  return this;
}


//======================================================================
// sub_65DCC0
// entry 0065dcc0  size 248  status ok
//======================================================================

int __thiscall sub_65DCC0(void (__thiscall ****this)(_DWORD, int))
{
  *this = (void (__thiscall ***)(_DWORD, int))&LoginDialog::`vftable';
  if ( *(this + 114) )
    (***(this + 114))(*(this + 114), 1);
  if ( *(this + 116) )
    (***(this + 116))(*(this + 116), 1);
  if ( *(this + 115) )
    (***(this + 115))(*(this + 115), 1);
  return CExpandoObject::~CExpandoObject(this);
}


//======================================================================
// sub_65DEC0
// entry 0065dec0  size 16  status ok
//======================================================================

int sub_65DEC0()
{
  return 251;
}


//======================================================================
// sub_65DED0
// entry 0065ded0  size 16  status ok
//======================================================================

int sub_65DED0()
{
  return 182;
}


//======================================================================
// sub_65DEE0
// entry 0065dee0  size 1248  status ok
//======================================================================

int __thiscall sub_65DEE0(int this)
{
  int v1; // eax
  int v2; // eax
  int v3; // eax
  int v4; // eax
  char *v5; // eax
  int v7; // [esp+4h] [ebp-40h]
  int v8; // [esp+8h] [ebp-3Ch]
  _DWORD *v9; // [esp+Ch] [ebp-38h]
  _AFX_OLE_STATE *v10; // [esp+10h] [ebp-34h]
  int v11; // [esp+14h] [ebp-30h]
  int v12; // [esp+18h] [ebp-2Ch]
  int v13; // [esp+1Ch] [ebp-28h]
  _DWORD *v15; // [esp+24h] [ebp-20h]
  _AFX_OLE_STATE *v16; // [esp+2Ch] [ebp-18h]
  int i; // [esp+34h] [ebp-10h]

  sub_65BB00((_DWORD *)this);
  v1 = sub_630F40((int)"SID_SHELL_SIGNIN");
  sub_5FA5B0((void *)this, 0, 0, v1, 73, 505, 25, 5, 3, 1, 18, -1);
  if ( *(_BYTE *)(this + 469) && !*(_BYTE *)(this + 468) )
  {
    v2 = sub_630F40((int)"SID_SHELL_SIGNINDIFFERENT");
    sub_5FB5A0((void *)this, 0, v2);
  }
  sub_5FA880((void *)this, 0, 0, 1, 342, 239, 35, 1, 120, 124, 161, 0, 0, 0);
  sub_5FA880((void *)this, 0, 0, 1, 342, 240, 36, 1, 255, 255, 255, 0, 0, 0);
  sub_5FA880((void *)this, 0, 0, 514, 1, 3, 384, 1, 120, 124, 161, 0, 0, 0);
  sub_5FA880((void *)this, 0, 0, 514, 1, 4, 385, 1, 255, 255, 255, 0, 0, 0);
  sub_5FA790((void *)this, 0, -1, (char *)&Source, 31, 270, 172, 245, 40, 1, 120, 124, 161, 255, 255, 255, 0);
  for ( i = 0; i < 6; ++i )
  {
    v3 = sub_630F40((int)off_7709EC[i]);
    sub_5F9DE0((void *)this, 0, i, dword_7709A4[i], dword_7709BC[2 * i], dword_7709C0[2 * i], 1, v3, 72, 75, 74, -1, 0);
    if ( byte_795F95 && (i == 2 || i == 3) )
    {
      v13 = sub_5FB300(this, i);
      (*(void (__thiscall **)(int))(*(_DWORD *)v13 + 208))(v13);
    }
  }
  if ( (*(unsigned __int8 (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 176))(dword_162EE84) )
  {
    v12 = sub_5FB300(this, 4);
    (*(void (__thiscall **)(int))(*(_DWORD *)v12 + 112))(v12);
    v11 = sub_5FB300(this, 5);
    (*(void (__thiscall **)(int))(*(_DWORD *)v11 + 112))(v11);
  }
  if ( sub_639840() )
    sub_5F9DE0((void *)this, 0, 1000, 3200239, 10, 5, 1, (int)"Sync Viewer", 72, 75, 74, -1, 0);
  v4 = sub_630F40((int)"SID_SHELL_PLAYERS_COLON");
  sub_5FA5B0((void *)this, 0, 1, v4, 72, 200, 20, 10, 40, 1, 5, -1);
  v16 = (_AFX_OLE_STATE *)operator new(0xCCu);
  if ( v16 )
    v10 = _AFX_OLE_STATE::_AFX_OLE_STATE(v16);
  else
    v10 = 0;
  sub_5FAC90(
    (void *)this,
    v10,
    0,
    3200216,
    4,
    38,
    1,
    0,
    3200204,
    211,
    108,
    3200203,
    211,
    22,
    3200207,
    210,
    38,
    88,
    210,
    39,
    16,
    67,
    7,
    24,
    200,
    16,
    6,
    31,
    69,
    66,
    0,
    0,
    0,
    3200217);
  v15 = operator new(0x70u);
  if ( v15 )
  {
    sub_680B70();
    *v15 = &LoginHelpGroupBox::`vftable';
    v9 = v15;
  }
  else
  {
    v9 = 0;
  }
  *(_DWORD *)(this + 464) = v9;
  *(_DWORD *)(*(_DWORD *)(this + 464) + 4) = this;
  v5 = (char *)sub_630F40((int)"SID_GENERIC_HELP");
  sub_680CA0(9, 284, 1, 223, 83, 120, 124, 161, 255, 255, 255, v5, 72, 10, 10, 200, 71, 35, 0, -1);
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 464) + 116))(*(_DWORD *)(this + 464));
  if ( (*(unsigned __int8 (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 864))(dword_162EE84) )
  {
    v8 = sub_5FB300(this, 2);
    (*(void (__thiscall **)(int))(*(_DWORD *)v8 + 208))(v8);
    v7 = sub_5FB300(this, 3);
    (*(void (__thiscall **)(int))(*(_DWORD *)v7 + 208))(v7);
  }
  sub_65E3C0(this);
  return (*(int (__thiscall **)(int))(*(_DWORD *)this + 144))(this);
}


//======================================================================
// sub_65E3C0
// entry 0065e3c0  size 404  status ok
//======================================================================

void __thiscall sub_65E3C0(_BYTE *this)
{
  int v1; // eax
  _BYTE *v2; // eax
  _BYTE *v3; // eax
  int v4; // edx
  void *v5; // eax
  int v6; // eax
  int v7; // [esp+0h] [ebp-50h]
  int v8; // [esp+8h] [ebp-48h]
  int v9; // [esp+Ch] [ebp-44h]
  int v10; // [esp+10h] [ebp-40h]
  char Str1[52]; // [esp+18h] [ebp-38h] BYREF

  if ( *(this + 468) )
  {
    v10 = sub_5FB300((int)this, 1);
    v1 = sub_630F40((int)"SID_GENERIC_QUIT");
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v10 + 224))(v10, v1);
  }
  v2 = (_BYTE *)sub_5FB300((int)this, 0);
  sub_6026F0(v2, 13);
  v3 = (_BYTE *)sub_5FB300((int)this, 1);
  sub_6026F0(v3, 27);
  sub_65E930(this);
  (*(void (__thiscall **)(_DWORD, const char *, const char *, char *, int))(**(_DWORD **)(dword_7960D8 + 20) + 16))(
    *(_DWORD *)(dword_7960D8 + 20),
    "LastLogin",
    &Source,
    Str1,
    51);
  v9 = sub_5FB720((int)this, 0);
  if ( (*(int (__thiscall **)(int))(*(_DWORD *)v9 + 184))(v9) )
  {
    if ( !*(this + 468) || !strcmp(Str1, &Source) )
    {
      v7 = sub_5FB720((int)this, 0);
      (*(void (__thiscall **)(int, _DWORD, int))(*(_DWORD *)v7 + 192))(v7, 0, 1);
    }
    else
    {
      v8 = sub_5FB720((int)this, 0);
      if ( (*(unsigned __int8 (__thiscall **)(int, char *, int))(*(_DWORD *)v8 + 240))(v8, Str1, 1) )
      {
        v5 = (void *)sub_5FB720((int)this, 0);
        sub_628F40(v5, (int)Str1, 1);
      }
      else
      {
        v6 = sub_5FB720((int)this, 0);
        (*(void (__thiscall **)(int, _DWORD, int))(*(_DWORD *)v6 + 192))(v6, 0, 1);
      }
    }
  }
  else
  {
    sub_65C820((int)this, v4, 2, 0, (char *)&Source, 1);
  }
}


//======================================================================
// sub_65E560
// entry 0065e560  size 190  status ok
//======================================================================

char __thiscall sub_65E560(void *this, int a2)
{
  char result; // al

  result = sub_65C660((int)this, a2);
  if ( a2 <= 1000 )
  {
    if ( a2 == 1000 )
    {
      sub_65F940(this);
      return (*(int (__thiscall **)(Concurrency::details::ContextBase *, int))(*(_DWORD *)dword_162EE84 + 52))(
               dword_162EE84,
               1003);
    }
    else
    {
      switch ( a2 )
      {
        case 0:
          result = sub_65F940(this);
          break;
        case 1:
          result = sub_65FAE0(this);
          break;
        case 2:
          result = sub_65E670(a2, this);
          break;
        case 3:
          result = sub_65ED10(this);
          break;
        case 5:
          sub_65F940(this);
          result = (*(int (__thiscall **)(Concurrency::details::ContextBase *, int))(*(_DWORD *)dword_162EE84 + 52))(
                     dword_162EE84,
                     1002);
          break;
        case 6:
          result = (unsigned __int8)sub_60CCE0();
          break;
        default:
          return result;
      }
    }
  }
  return result;
}


//======================================================================
// sub_65E670
// entry 0065e670  size 256  status ok
//======================================================================

int __thiscall sub_65E670(int *this)
{
  const CHAR *v1; // eax
  const CHAR *v3; // [esp-8h] [ebp-28h]
  int v4; // [esp+4h] [ebp-1Ch]

  if ( (unsigned __int8)sub_65FF10(this) )
  {
    v3 = (const CHAR *)sub_630F40((int)"SID_SHELL_PLAYERLIMITREACHED");
    v1 = (const CHAR *)sub_630F40((int)"SID_SHELL_100PLAYERS");
    return sub_62FF10(v1, v3, 0);
  }
  else
  {
    if ( !*(this + 114) )
    {
      if ( operator new(0x1F0u) )
        v4 = sub_660B70();
      else
        v4 = 0;
      *(this + 114) = v4;
      (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 114) + 60))(*(this + 114));
      sub_5F7340((_DWORD **)*(this + 114), 0, 0);
    }
    return sub_5F85D0(*(this + 114));
  }
}


//======================================================================
// sub_65E770
// entry 0065e770  size 62  status ok
//======================================================================

int __thiscall sub_65E770(int *this)
{
  int result; // eax

  sub_65C4D0((int)this);
  result = sub_65EA70(this);
  if ( !result )
  {
    result = (*(int (__thiscall **)(int *))(*this + 160))(this);
    if ( (_BYTE)result )
      return sub_65E670(this);
  }
  return result;
}


//======================================================================
// sub_65E7B0
// entry 0065e7b0  size 56  status ok
//======================================================================

char __thiscall sub_65E7B0(_BYTE *this, int a2)
{
  if ( *(this + 468) )
    return 0;
  else
    return (*(int (__thiscall **)(Concurrency::details::ContextBase *, int))(*(_DWORD *)dword_162EE84 + 872))(
             dword_162EE84,
             a2);
}


//======================================================================
// sub_65E7F0
// entry 0065e7f0  size 306  status ok
//======================================================================

int __thiscall sub_65E7F0(void *this, int a2, char *Source, char *a4, char a5, char a6)
{
  pairNode *v6; // eax
  int result; // eax
  char *v8; // [esp+8h] [ebp-24h]
  char *v10; // [esp+10h] [ebp-1Ch]
  char *v11; // [esp+1Ch] [ebp-10h]

  v11 = a4;
  v10 = (char *)operator new(0x3Cu);
  if ( v10 )
  {
    sub_629AB0((int)v10);
    *(_DWORD *)v10 = &off_6DECF8;
    v8 = v10;
  }
  else
  {
    v8 = 0;
  }
  v6 = (pairNode *)sub_5FB720((int)this, 0);
  sub_628980(v6, v8, a2, -1, 0);
  if ( a5 != 2 && !(unsigned __int8)sub_663BB0(a4) )
  {
    a5 = 2;
    a6 = 0;
    v11 = (char *)&::Source;
  }
  strcpy(v8 + 20, Source);
  strcpy(v8 + 33, v11);
  v8[58] = a5;
  v8[59] = a6;
  result = (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 500))(dword_162EE84);
  if ( a6 >= result )
    byte_795FBE = 1;
  return result;
}


//======================================================================
// sub_65E930
// entry 0065e930  size 309  status ok
//======================================================================

CImageDisplay *__thiscall sub_65E930(_BYTE *this)
{
  char *v1; // eax
  _DWORD *v2; // eax
  CImageDisplay *result; // eax
  char *v4; // [esp-Ch] [ebp-4Ch]
  char v5; // [esp-4h] [ebp-44h]
  LONG *p_top; // [esp+8h] [ebp-38h]
  LONG left; // [esp+14h] [ebp-2Ch]
  char Buffer[16]; // [esp+24h] [ebp-1Ch] BYREF
  int i; // [esp+38h] [ebp-8h]
  CImageDisplay *v11; // [esp+3Ch] [ebp-4h]

  v11 = (CImageDisplay *)(*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 796))(dword_162EE84);
  sub_63A3E0((int)v11, -1, 0);
  CImageDisplay::GetDisplayFormat(v11)->rcSource.left = 2;
  for ( i = 0; i < 100; ++i )
  {
    sprintf(Buffer, "user%d.log", i);
    if ( sub_63AB10((int)v11, Buffer) )
    {
      if ( !sub_65E7B0(this, (int)v11) )
      {
        left = CImageDisplay::GetDisplayFormat(v11)->rcSource.left;
        p_top = &CImageDisplay::GetDisplayFormat(v11)->rcSource.top;
        v5 = sub_4842B0(v11);
        v4 = (char *)sub_57A470(v11);
        v1 = sub_520E60(v11);
        sub_65E7F0(this, (int)p_top, v1, v4, left, v5);
      }
    }
  }
  v2 = (_DWORD *)sub_5FB720((int)this, 0);
  sub_628D80(v2);
  result = v11;
  if ( v11 )
    return (CImageDisplay *)(**(int (__thiscall ***)(CImageDisplay *, int))v11)(v11, 1);
  return result;
}


//======================================================================
// sub_65EA70
// entry 0065ea70  size 60  status ok
//======================================================================

int __thiscall sub_65EA70(void *this)
{
  int v1; // eax

  if ( !sub_5FB720((int)this, 0) )
    return 0;
  v1 = sub_5FB720((int)this, 0);
  return (*(int (__thiscall **)(int, int))(*(_DWORD *)v1 + 184))(v1, v1);
}


//======================================================================
// sub_65EAB0
// entry 0065eab0  size 432  status ok
//======================================================================

int __thiscall sub_65EAB0(int this, char a2)
{
  int v2; // eax
  int v3; // eax
  int v4; // eax
  _DWORD *v5; // eax
  void *v6; // eax
  int result; // eax
  char *v8; // [esp-Ch] [ebp-20h]
  int v9; // [esp-8h] [ebp-1Ch]
  int v10; // [esp+4h] [ebp-10h]

  if ( a2 )
  {
    CDaoIndexFieldInfo::~CDaoIndexFieldInfo((CDaoIndexFieldInfo *)(*(_DWORD *)(this + 444) + 116));
    if ( v2 )
    {
      v8 = (char *)sub_6639A0(0);
      v3 = sub_660F70(*(_DWORD *)(this + 456));
      sub_65E7F0((void *)this, v3, (char *)(this + 471), v8, 3, 0);
    }
    else
    {
      v4 = sub_660F70(*(_DWORD *)(this + 456));
      sub_65E7F0((void *)this, v4, (char *)(this + 471), (char *)&Source, 2, 0);
    }
    v5 = (_DWORD *)sub_5FB720(this, 0);
    sub_628D80(v5);
    v10 = sub_5FB720(this, 0);
    (*(void (__thiscall **)(int))(*(_DWORD *)v10 + 196))(v10);
    v9 = sub_660F70(*(_DWORD *)(this + 456));
    v6 = (void *)sub_5FB720(this, 0);
    sub_628F40(v6, v9, 1);
  }
  if ( *(_DWORD *)(this + 456) )
  {
    sub_5F8990(*(_BYTE **)(this + 456));
    *(_DWORD *)(this + 456) = 0;
  }
  if ( *(_DWORD *)(this + 484) == -1
    && !(*(unsigned __int8 (__thiscall **)(Concurrency::details::ContextBase *, int))(*(_DWORD *)dword_162EE84 + 828))(
          dword_162EE84,
          -1)
    && *(_DWORD *)(this + 460)
    && (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 776))(dword_162EE84) > 0 )
  {
    return sub_64F660(*(_DWORD *)(this + 460));
  }
  result = this;
  if ( *(_DWORD *)(this + 460) )
    result = (***(int (__thiscall ****)(_DWORD, int))(this + 460))(*(_DWORD *)(this + 460), 1);
  *(_DWORD *)(this + 460) = 0;
  return result;
}


//======================================================================
// sub_65EC60
// entry 0065ec60  size 173  status ok
//======================================================================

char __thiscall sub_65EC60(_DWORD *this)
{
  char *v1; // eax
  const CHAR *v2; // eax
  const char *v4; // eax
  const CHAR *v5; // eax
  const CHAR *v6; // [esp-8h] [ebp-Ch]
  const CHAR *v7; // [esp-8h] [ebp-Ch]

  v1 = (char *)sub_660F70(*(this + 114));
  if ( (unsigned __int8)sub_65FB70(v1) )
  {
    v6 = (const CHAR *)sub_630F40((int)"SID_SHELL_DUPLICATEPLAYER");
    v2 = (const CHAR *)sub_630F40((int)"SID_SHELL_PLAYEREXISTS");
    sub_62FF10(v2, v6, 0);
    return 0;
  }
  else
  {
    v4 = (const char *)sub_660F70(*(this + 114));
    if ( !strcmp(v4, &Source) )
    {
      v7 = (const CHAR *)sub_630F40((int)"SID_SHELL_INVALIDNAME");
      v5 = (const CHAR *)sub_630F40((int)"SID_SHELL_MUSTCREATEPLAYER");
      sub_62FF10(v5, v7, 0);
      return 0;
    }
    else
    {
      return (*(int (__thiscall **)(_DWORD *))(*this + 156))(this);
    }
  }
}


//======================================================================
// sub_65ED10
// entry 0065ed10  size 269  status ok
//======================================================================

struct Concurrency::details::UMSThreadProxy *__thiscall sub_65ED10(int *this)
{
  Concurrency::details::UMSFreeVirtualProcessorRoot *v1; // eax
  struct Concurrency::details::UMSThreadProxy *result; // eax
  const CHAR *v3; // eax
  Concurrency::details::UMSFreeVirtualProcessorRoot *v4; // eax
  exception *v5; // eax
  const CHAR *v6; // [esp-8h] [ebp-28h]
  int v7; // [esp+0h] [ebp-20h]
  int v8; // [esp+4h] [ebp-1Ch]
  char *Str2; // [esp+8h] [ebp-18h]
  Concurrency::details::UMSFreeVirtualProcessorRoot *v11; // [esp+10h] [ebp-10h]

  v1 = (Concurrency::details::UMSFreeVirtualProcessorRoot *)sub_5FB720((int)this, 0);
  result = Concurrency::details::UMSFreeVirtualProcessorRoot::GetExecutingProxy(v1);
  if ( result != (struct Concurrency::details::UMSThreadProxy *)-1 )
  {
    v6 = (const CHAR *)sub_630F40((int)"SID_GENERIC_DELETE");
    v3 = (const CHAR *)sub_630F40((int)"SID_SHELL_CONFIRMDELETEPLAYER");
    result = (struct Concurrency::details::UMSThreadProxy *)sub_62FF10(v3, v6, 4u);
    if ( result == (struct Concurrency::details::UMSThreadProxy *)6 )
    {
      v4 = (Concurrency::details::UMSFreeVirtualProcessorRoot *)sub_5FB720((int)this, 0);
      Concurrency::details::UMSFreeVirtualProcessorRoot::GetExecutingProxy(v4);
      v11 = (Concurrency::details::UMSFreeVirtualProcessorRoot *)sub_5FB720((int)this, 0);
      if ( sub_5E4390(v11) )
      {
        v5 = (exception *)sub_5E4390(v11);
        Str2 = (char *)exception::what(v5);
        sub_660030(Str2);
      }
      else
      {
        sub_660030(0);
      }
      v8 = sub_5FB720((int)this, 0);
      if ( (*(int (__thiscall **)(int))(*(_DWORD *)v8 + 184))(v8) )
      {
        v7 = sub_5FB720((int)this, 0);
        return (struct Concurrency::details::UMSThreadProxy *)(*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)v7 + 192))(
                                                                v7,
                                                                0,
                                                                1);
      }
      else
      {
        (*(void (__thiscall **)(int *))(*this + 144))(this);
        return (struct Concurrency::details::UMSThreadProxy *)sub_65E670(this);
      }
    }
  }
  return result;
}


//======================================================================
// sub_65EE20
// entry 0065ee20  size 168  status ok
//======================================================================

char __thiscall sub_65EE20(void *this, char *Str2)
{
  int i; // eax
  Concurrency::details::UMSFreeVirtualProcessorRoot *v3; // eax
  int v6; // [esp+8h] [ebp-Ch]
  int v7; // [esp+Ch] [ebp-8h]
  struct Concurrency::details::UMSThreadProxy *v8; // [esp+10h] [ebp-4h]

  v8 = 0;
  for ( i = sub_5FB720((int)this, 0);
        (int)v8 < (*(int (__thiscall **)(int, int))(*(_DWORD *)i + 184))(i, i);
        i = sub_5FB720((int)this, 0) )
  {
    v3 = (Concurrency::details::UMSFreeVirtualProcessorRoot *)sub_5FB720((int)this, 0);
    if ( v8 != Concurrency::details::UMSFreeVirtualProcessorRoot::GetExecutingProxy(v3) )
    {
      v6 = sub_5FB720((int)this, 0);
      v7 = sub_60CA40((_DWORD *)(v6 + 112), (int)v8);
      if ( *(_BYTE *)(v7 + 58) == 3 && !strcmp((const char *)(v7 + 33), Str2) )
        return 1;
    }
    v8 = (struct Concurrency::details::UMSThreadProxy *)((char *)v8 + 1);
  }
  return 0;
}


//======================================================================
// sub_65EED0
// entry 0065eed0  size 83  status ok
//======================================================================

char __thiscall sub_65EED0(void *this, char a2, char *Source)
{
  Concurrency::details::UMSFreeVirtualProcessorRoot *v3; // eax
  char *v4; // eax

  v3 = (Concurrency::details::UMSFreeVirtualProcessorRoot *)sub_5FB720((int)this, 0);
  v4 = (char *)sub_5E4390(v3);
  if ( v4 )
  {
    if ( v4[58] == 2 )
    {
      v4[59] = a2;
      LOBYTE(v4) = a2;
    }
    else
    {
      LOBYTE(v4) = (unsigned __int8)strcpy(v4 + 33, Source);
    }
  }
  return (char)v4;
}


//======================================================================
// sub_65EF30
// entry 0065ef30  size 89  status ok
//======================================================================

char *__thiscall sub_65EF30(void *this, char a2, char a3, char *Source)
{
  Concurrency::details::UMSFreeVirtualProcessorRoot *v4; // eax
  char *result; // eax

  v4 = (Concurrency::details::UMSFreeVirtualProcessorRoot *)sub_5FB720((int)this, 0);
  result = (char *)sub_5E4390(v4);
  if ( result )
  {
    result[58] = a2;
    if ( a2 == 2 )
      result[59] = a3;
    else
      return strcpy(result + 33, Source);
  }
  return result;
}


//======================================================================
// sub_65EF90
// entry 0065ef90  size 397  status ok
//======================================================================

int __stdcall sub_65EF90(exception *a1)
{
  char *v1; // eax
  char *v2; // eax
  const struct tagVIDEOINFO *DisplayFormat; // eax
  const struct tagVIDEOINFO *v4; // eax
  const struct tagVIDEOINFO *v5; // eax
  int result; // eax
  DWORD v7; // [esp+8h] [ebp-1Ch]
  LONG v8; // [esp+10h] [ebp-14h]
  unsigned __int8 v9; // [esp+1Fh] [ebp-5h]
  CImageDisplay *v10; // [esp+20h] [ebp-4h]

  v9 = 0;
  v1 = (char *)exception::what(a1);
  if ( sub_6368B0(dword_162EE84, v1) )
  {
    v2 = (char *)exception::what(a1);
    v10 = *(CImageDisplay **)(*((_DWORD *)dword_162EE84 + 22) + 4 * sub_6369B0(dword_162EE84, v2));
  }
  else
  {
    v10 = (CImageDisplay *)(*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 796))(dword_162EE84);
    v9 = 1;
    sub_63A3E0((int)v10, 0, 0);
    sub_63AB10((int)v10, (char *)a1 + 20);
  }
  v8 = *((char *)a1 + 58);
  CImageDisplay::GetDisplayFormat(v10)->rcSource.left = v8;
  if ( CImageDisplay::GetDisplayFormat(v10)->rcSource.left == 2 )
  {
    DisplayFormat = CImageDisplay::GetDisplayFormat(v10);
    strcpy((char *)&DisplayFormat->bmiHeader.biHeight, &Source);
    v7 = *((char *)a1 + 59);
    CImageDisplay::GetDisplayFormat(v10)->bmiHeader.biClrImportant = v7;
  }
  else if ( (unsigned __int8)sub_663BB0((char *)a1 + 33) )
  {
    v4 = CImageDisplay::GetDisplayFormat(v10);
    strcpy((char *)&v4->bmiHeader.biHeight, (const char *)a1 + 33);
  }
  else
  {
    CImageDisplay::GetDisplayFormat(v10)->rcSource.left = 2;
    v5 = CImageDisplay::GetDisplayFormat(v10);
    strcpy((char *)&v5->bmiHeader.biHeight, &Source);
    CImageDisplay::GetDisplayFormat(v10)->bmiHeader.biClrImportant = 0;
  }
  sub_63B0A0((int)v10);
  result = v9;
  if ( v9 )
  {
    if ( v10 )
      return (**(int (__thiscall ***)(CImageDisplay *, int))v10)(v10, 1);
  }
  return result;
}


//======================================================================
// sub_65F120
// entry 0065f120  size 1996  status ok
//======================================================================

void __thiscall sub_65F120(_BYTE *this, char *a2)
{
  char *v2; // eax
  char *v3; // eax
  const struct tagVIDEOINFO *DisplayFormat; // eax
  const struct tagVIDEOINFO *v5; // eax
  const struct tagVIDEOINFO *v6; // eax
  const struct tagVIDEOINFO *v7; // eax
  const struct tagVIDEOINFO *v8; // eax
  const struct tagVIDEOINFO *v9; // eax
  const struct tagVIDEOINFO *v10; // eax
  const struct tagVIDEOINFO *v11; // eax
  LONG *p_top; // [esp+14h] [ebp-C0h]
  CImageDisplay *v16; // [esp+18h] [ebp-BCh]
  DWORD v17; // [esp+20h] [ebp-B4h]
  LONG v18; // [esp+34h] [ebp-A0h]
  CImageDisplay *v19; // [esp+3Ch] [ebp-98h]
  DWORD v20; // [esp+54h] [ebp-80h]
  LONG v21; // [esp+64h] [ebp-70h]
  char *Str1; // [esp+6Ch] [ebp-68h]
  char *Str2; // [esp+74h] [ebp-60h]
  CImageDisplay *v24; // [esp+78h] [ebp-5Ch]
  DWORD v25; // [esp+84h] [ebp-50h]
  LONG v26; // [esp+8Ch] [ebp-48h]
  DWORD v27; // [esp+94h] [ebp-40h]
  LONG v28; // [esp+A8h] [ebp-2Ch]
  char *Source; // [esp+C0h] [ebp-14h]
  int j; // [esp+C8h] [ebp-Ch]
  int i; // [esp+C8h] [ebp-Ch]
  int v32; // [esp+CCh] [ebp-8h]
  CImageDisplay *v33; // [esp+CCh] [ebp-8h]
  int v34; // [esp+D0h] [ebp-4h]

  if ( !a2 )
    return;
  Source = a2 + 20;
  if ( dword_163068C )
  {
    if ( a2[58] == 2 )
      sub_63DB60((int *)dword_163068C, Source, a2[58], a2[59], (char *)&::Source);
    else
      sub_63DB60((int *)dword_163068C, Source, a2[58], a2[59], a2 + 33);
    return;
  }
  if ( *(this + 469) )
  {
    if ( CImageDisplay::GetDisplayFormat(**((CImageDisplay ***)dword_162EE84 + 22))->rcSource.left )
      sub_63B0A0(**((_DWORD **)dword_162EE84 + 22));
    v2 = (char *)exception::what((exception *)a2);
    if ( sub_6368B0(dword_162EE84, v2) )
    {
      v32 = **((_DWORD **)dword_162EE84 + 22);
      v3 = (char *)exception::what((exception *)a2);
      v34 = sub_6369B0(dword_162EE84, v3);
      **((_DWORD **)dword_162EE84 + 22) = *(_DWORD *)(*((_DWORD *)dword_162EE84 + 22) + 4 * v34);
      *(_DWORD *)(**((_DWORD **)dword_162EE84 + 22) + 4) = 0;
      *(_DWORD *)(*((_DWORD *)dword_162EE84 + 22) + 4 * v34) = v32;
      *(_DWORD *)(*(_DWORD *)(*((_DWORD *)dword_162EE84 + 22) + 4 * v34) + 4) = v34;
    }
    sub_63AB10(**((_DWORD **)dword_162EE84 + 22), Source);
    v28 = a2[58];
    CImageDisplay::GetDisplayFormat(**((CImageDisplay ***)dword_162EE84 + 22))->rcSource.left = v28;
    if ( CImageDisplay::GetDisplayFormat(**((CImageDisplay ***)dword_162EE84 + 22))->rcSource.left == 2 )
    {
      DisplayFormat = CImageDisplay::GetDisplayFormat(**((CImageDisplay ***)dword_162EE84 + 22));
      strcpy((char *)&DisplayFormat->bmiHeader.biHeight, &::Source);
      v27 = a2[59];
      CImageDisplay::GetDisplayFormat(**((CImageDisplay ***)dword_162EE84 + 22))->bmiHeader.biClrImportant = v27;
    }
    else
    {
      v5 = CImageDisplay::GetDisplayFormat(**((CImageDisplay ***)dword_162EE84 + 22));
      strcpy((char *)&v5->bmiHeader.biHeight, a2 + 33);
    }
    sub_63B0A0(**((_DWORD **)dword_162EE84 + 22));
LABEL_51:
    if ( *(this + 469) )
    {
      v16 = (CImageDisplay *)sub_6375B0((_DWORD **)dword_162EE84);
      p_top = &CImageDisplay::GetDisplayFormat(v16)->rcSource.top;
      (*(void (__thiscall **)(_DWORD, const char *, LONG *))(**(_DWORD **)(dword_7960D8 + 20) + 20))(
        *(_DWORD *)(dword_7960D8 + 20),
        "LastLogin",
        p_top);
    }
    return;
  }
  if ( !*(this + 470) || !*(_DWORD *)(dword_162EE80 + 52) )
  {
    for ( i = 0;
          i < (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 268))(dword_162EE84);
          ++i )
    {
      v19 = *(CImageDisplay **)(*((_DWORD *)dword_162EE84 + 22) + 4 * i);
      if ( CImageDisplay::GetDisplayFormat(v19)->rcSource.left != 2
        && CImageDisplay::GetDisplayFormat(v19)->rcSource.left != 3 )
      {
        sub_63AB10(*(_DWORD *)(*((_DWORD *)dword_162EE84 + 22) + 4 * i), Source);
        v18 = a2[58];
        CImageDisplay::GetDisplayFormat(*(CImageDisplay **)(*((_DWORD *)dword_162EE84 + 22) + 4 * i))->rcSource.left = v18;
        if ( CImageDisplay::GetDisplayFormat(*(CImageDisplay **)(*((_DWORD *)dword_162EE84 + 22) + 4 * i))->rcSource.left == 2 )
        {
          v10 = CImageDisplay::GetDisplayFormat(*(CImageDisplay **)(*((_DWORD *)dword_162EE84 + 22) + 4 * i));
          strcpy((char *)&v10->bmiHeader.biHeight, &::Source);
          v17 = a2[59];
          CImageDisplay::GetDisplayFormat(*(CImageDisplay **)(*((_DWORD *)dword_162EE84 + 22) + 4 * i))->bmiHeader.biClrImportant = v17;
        }
        else
        {
          v11 = CImageDisplay::GetDisplayFormat(*(CImageDisplay **)(*((_DWORD *)dword_162EE84 + 22) + 4 * i));
          strcpy((char *)&v11->bmiHeader.biHeight, a2 + 33);
        }
        sub_63B0A0(*(_DWORD *)(*((_DWORD *)dword_162EE84 + 22) + 4 * i));
        return;
      }
    }
    goto LABEL_51;
  }
  v33 = (CImageDisplay *)(*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 796))(dword_162EE84);
  sub_63A3E0((int)v33, 0, 0);
  sub_63AB10((int)v33, Source);
  v26 = a2[58];
  CImageDisplay::GetDisplayFormat(v33)->rcSource.left = v26;
  if ( CImageDisplay::GetDisplayFormat(v33)->rcSource.left == 2 )
  {
    v6 = CImageDisplay::GetDisplayFormat(v33);
    strcpy((char *)&v6->bmiHeader.biHeight, &::Source);
    v25 = a2[59];
    CImageDisplay::GetDisplayFormat(v33)->bmiHeader.biClrImportant = v25;
  }
  else
  {
    v7 = CImageDisplay::GetDisplayFormat(v33);
    strcpy((char *)&v7->bmiHeader.biHeight, a2 + 33);
  }
  sub_63B0A0((int)v33);
  if ( !dword_163068C )
  {
    for ( j = 0;
          j < (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 268))(dword_162EE84);
          ++j )
    {
      if ( j != *(_DWORD *)(*(_DWORD *)(dword_162EE80 + 52) + 4) )
      {
        v24 = *(CImageDisplay **)(*((_DWORD *)dword_162EE84 + 22) + 4 * j);
        if ( CImageDisplay::GetDisplayFormat(v24)->rcSource.left == 2
          || CImageDisplay::GetDisplayFormat(v24)->rcSource.left == 3 )
        {
          Str2 = (char *)&CImageDisplay::GetDisplayFormat(v33)->rcSource.top;
          Str1 = (char *)&CImageDisplay::GetDisplayFormat(*(CImageDisplay **)(*((_DWORD *)dword_162EE84 + 22) + 4 * j))->rcSource.top;
          if ( !strcmp(Str1, Str2) )
          {
            v21 = a2[58];
            CImageDisplay::GetDisplayFormat(*(CImageDisplay **)(*((_DWORD *)dword_162EE84 + 22) + 4 * j))->rcSource.left = v21;
            if ( CImageDisplay::GetDisplayFormat(v33)->rcSource.left == 2 )
            {
              v8 = CImageDisplay::GetDisplayFormat(*(CImageDisplay **)(*((_DWORD *)dword_162EE84 + 22) + 4 * j));
              strcpy((char *)&v8->bmiHeader.biHeight, &::Source);
              v20 = a2[59];
              CImageDisplay::GetDisplayFormat(*(CImageDisplay **)(*((_DWORD *)dword_162EE84 + 22) + 4 * j))->bmiHeader.biClrImportant = v20;
            }
            else
            {
              v9 = CImageDisplay::GetDisplayFormat(*(CImageDisplay **)(*((_DWORD *)dword_162EE84 + 22) + 4 * j));
              strcpy((char *)&v9->bmiHeader.biHeight, a2 + 33);
              sub_664300(a2 + 33);
            }
            sub_6464D0(*(_DWORD *)(*(_DWORD *)(*((_DWORD *)dword_162EE84 + 22) + 4 * j) + 32), 0, 0);
          }
        }
      }
    }
  }
  (*(void (__thiscall **)(int, _DWORD, CImageDisplay *))(*(_DWORD *)dword_162EE80 + 336))(
    dword_162EE80,
    *(_DWORD *)(*(_DWORD *)(dword_162EE80 + 52) + 4),
    v33);
  *(_DWORD *)(dword_162EE80 + 52) = 0;
  if ( v33 )
    (**(void (__thiscall ***)(CImageDisplay *, int))v33)(v33, 1);
}


//======================================================================
// sub_65F940
// entry 0065f940  size 414  status ok
//======================================================================

int __thiscall sub_65F940(int this)
{
  int i; // eax
  exception *v2; // eax
  Concurrency::details::UMSFreeVirtualProcessorRoot *v3; // eax
  Concurrency::details::UMSFreeVirtualProcessorRoot *v4; // eax
  char *v5; // eax
  int result; // eax
  int v7; // [esp+0h] [ebp-1Ch]
  int v9; // [esp+14h] [ebp-8h]
  int v10; // [esp+18h] [ebp-4h]

  v10 = 0;
  for ( i = sub_5FB720(this, 0); v10 < (*(int (__thiscall **)(int))(*(_DWORD *)i + 184))(i); i = sub_5FB720(this, 0) )
  {
    v9 = sub_5FB720(this, 0);
    v2 = (exception *)sub_60CA40((_DWORD *)(v9 + 112), v10);
    sub_65EF90(v2);
    ++v10;
  }
  v3 = (Concurrency::details::UMSFreeVirtualProcessorRoot *)sub_5FB720(this, 0);
  if ( sub_5E4390(v3) )
  {
    v4 = (Concurrency::details::UMSFreeVirtualProcessorRoot *)sub_5FB720(this, 0);
    v5 = (char *)sub_5E4390(v4);
    sub_65F120((_BYTE *)this, v5);
  }
  sub_64ED50();
  if ( *(_DWORD *)(this + 484) != -1 )
  {
    if ( sub_6352F0(dword_162EE84, *(_DWORD *)(this + 484))
      && (*(int (__thiscall **)(Concurrency::details::ContextBase *, _DWORD))(*(_DWORD *)dword_162EE84 + 224))(
           dword_162EE84,
           *(_DWORD *)(this + 484)) )
    {
      v7 = (*(int (__thiscall **)(Concurrency::details::ContextBase *, _DWORD))(*(_DWORD *)dword_162EE84 + 224))(
             dword_162EE84,
             *(_DWORD *)(this + 484));
      (*(void (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)v7 + 132))(
        v7,
        *(_DWORD *)(this + 484),
        *(_DWORD *)(this + 488));
    }
    (*(void (__thiscall **)(Concurrency::details::ContextBase *, _DWORD))(*(_DWORD *)dword_162EE84 + 52))(
      dword_162EE84,
      *(_DWORD *)(this + 484));
  }
  if ( *(_BYTE *)(this + 470) )
    (*(void (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_162EE80 + 324))(dword_162EE80, 0, -1);
  result = this;
  if ( *(_BYTE *)(this + 469) )
    return (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 900))(dword_162EE84);
  return result;
}


//======================================================================
// sub_65FAE0
// entry 0065fae0  size 131  status ok
//======================================================================

_BYTE *__thiscall sub_65FAE0(_BYTE *this)
{
  _BYTE *result; // eax

  if ( !*(this + 468)
    || (result = (_BYTE *)(*(unsigned __int8 (__thiscall **)(Concurrency::details::ContextBase *, _DWORD))(*(_DWORD *)dword_162EE84 + 44))(
                            dword_162EE84,
                            0),
        (_BYTE)result) )
  {
    if ( (*(unsigned __int8 (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 176))(dword_162EE84) )
    {
      if ( *(this + 468) )
        (*(void (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 900))(dword_162EE84);
    }
    return sub_64ED50();
  }
  return result;
}


//======================================================================
// sub_65FB70
// entry 0065fb70  size 291  status ok
//======================================================================

bool __thiscall sub_65FB70(void *this, char *String2)
{
  int v4; // [esp+4h] [ebp-20h]
  char *String1; // [esp+Ch] [ebp-18h]
  CImageDisplay *v6; // [esp+14h] [ebp-10h]
  int i; // [esp+20h] [ebp-4h]

  v4 = sub_5FB720((int)this, 0);
  if ( (*(unsigned __int8 (__thiscall **)(int, char *, int))(*(_DWORD *)v4 + 240))(v4, String2, 1) )
    return 1;
  for ( i = 0;
        i < (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 268))(dword_162EE84);
        ++i )
  {
    v6 = *(CImageDisplay **)(*((_DWORD *)dword_162EE84 + 22) + 4 * i);
    if ( CImageDisplay::GetDisplayFormat(v6)->rcSource.left == 2
      || CImageDisplay::GetDisplayFormat(v6)->rcSource.left == 3 )
    {
      String1 = (char *)&CImageDisplay::GetDisplayFormat(*(CImageDisplay **)(*((_DWORD *)dword_162EE84 + 22) + 4 * i))->rcSource.top;
      if ( !stricmp(String1, String2) )
        return 1;
    }
  }
  return dword_163068C && sub_63DEA0((_DWORD *)dword_163068C, String2);
}


//======================================================================
// sub_65FCA0
// entry 0065fca0  size 318  status ok
//======================================================================

char __thiscall sub_65FCA0(int this)
{
  int v1; // eax
  const struct tagVIDEOINFO *DisplayFormat; // eax
  int v4; // [esp+0h] [ebp-20h]
  int v5; // [esp+0h] [ebp-20h]
  char *Source; // [esp+Ch] [ebp-14h]
  int (__thiscall ***v8)(_DWORD, int); // [esp+18h] [ebp-8h]

  if ( *(_DWORD *)(this + 460) )
  {
    v8 = *(int (__thiscall ****)(_DWORD, int))(this + 460);
    if ( v8 )
    {
      v5 = (**v8)(v8, 1);
      v1 = (*(int (__thiscall **)(Concurrency::details::ContextBase *, int))(*(_DWORD *)dword_162EE84 + 796))(
             dword_162EE84,
             v5);
      goto LABEL_6;
    }
    v4 = 0;
  }
  v1 = (*(int (__thiscall **)(Concurrency::details::ContextBase *, int))(*(_DWORD *)dword_162EE84 + 796))(
         dword_162EE84,
         v4);
LABEL_6:
  *(_DWORD *)(this + 460) = v1;
  sub_63A3E0(*(_DWORD *)(this + 460), 0, 3);
  Source = (char *)sub_660F70(*(_DWORD *)(this + 456));
  DisplayFormat = CImageDisplay::GetDisplayFormat(*(CImageDisplay **)(this + 460));
  strcpy((char *)&DisplayFormat->rcSource.top, Source);
  sub_65FDE0(this);
  strcpy((char *)(*(_DWORD *)(this + 460) + 16), (const char *)(this + 471));
  if ( (*(unsigned __int8 (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 220))(dword_162EE84) )
  {
    ATL::CAtlWinModule::~CAtlWinModule(*(ATL::CAtlWinModule **)(*(_DWORD *)(this + 460) + 36));
    sub_66F960(*(_DWORD *)(this + 460));
  }
  return sub_63B0A0(*(_DWORD *)(this + 460));
}


//======================================================================
// sub_65FDE0
// entry 0065fde0  size 297  status ok
//======================================================================

char *__thiscall sub_65FDE0(char *this)
{
  char *result; // eax
  char *v2; // eax
  char Destination[16]; // [esp+4h] [ebp-824h] BYREF
  char Buffer[4]; // [esp+14h] [ebp-814h] BYREF
  FILE *Stream; // [esp+18h] [ebp-810h]
  int Value; // [esp+1Ch] [ebp-80Ch]
  char v8; // [esp+20h] [ebp-808h]
  char v9[1023]; // [esp+21h] [ebp-807h] BYREF
  char Str[1028]; // [esp+420h] [ebp-408h] BYREF

  v8 = 0;
  result = (char *)memset(v9, 0, sizeof(v9));
  for ( Value = 0; Value < 100; ++Value )
  {
    strcpy(Destination, "user");
    v2 = itoa(Value, Buffer, 10);
    strcat(Destination, v2);
    strcat(Destination, ".log");
    strcpy(Str, Destination);
    Stream = sub_5EA9C0(Str, "rb");
    if ( !Stream )
      return strcpy(this + 471, Destination);
    result = (char *)fclose(Stream);
  }
  return result;
}


//======================================================================
// sub_65FF10
// entry 0065ff10  size 273  status ok
//======================================================================

char sub_65FF10()
{
  char *v0; // eax
  char Destination[16]; // [esp+4h] [ebp-824h] BYREF
  char Buffer[4]; // [esp+14h] [ebp-814h] BYREF
  FILE *Stream; // [esp+18h] [ebp-810h]
  int Value; // [esp+1Ch] [ebp-80Ch]
  char v6; // [esp+20h] [ebp-808h]
  char v7[1023]; // [esp+21h] [ebp-807h] BYREF
  char Str[1028]; // [esp+420h] [ebp-408h] BYREF

  v6 = 0;
  memset(v7, 0, sizeof(v7));
  for ( Value = 0; Value < 100; ++Value )
  {
    strcpy(Destination, "user");
    v0 = itoa(Value, Buffer, 10);
    strcat(Destination, v0);
    strcat(Destination, ".log");
    strcpy(Str, Destination);
    Stream = sub_5EA9C0(Str, "rb");
    if ( !Stream )
      return 0;
    fclose(Stream);
  }
  return 1;
}


//======================================================================
// sub_660030
// entry 00660030  size 735  status ok
//======================================================================

char __thiscall sub_660030(void *this, char *Str2)
{
  Concurrency::details::UMSFreeVirtualProcessorRoot *v3; // eax
  Concurrency::details::UMSFreeVirtualProcessorRoot *v4; // eax
  struct Concurrency::details::UMSThreadProxy *ExecutingProxy; // [esp-8h] [ebp-874h]
  char Source[16]; // [esp+4h] [ebp-868h] BYREF
  char Str1[52]; // [esp+14h] [ebp-858h] BYREF
  char Path[16]; // [esp+48h] [ebp-824h] BYREF
  int v10; // [esp+58h] [ebp-814h]
  FILE *Stream; // [esp+5Ch] [ebp-810h]
  int i; // [esp+60h] [ebp-80Ch]
  char v13; // [esp+64h] [ebp-808h]
  _BYTE v14[1023]; // [esp+65h] [ebp-807h] BYREF
  char Destination[1028]; // [esp+464h] [ebp-408h] BYREF

  v13 = 0;
  memset(v14, 0, sizeof(v14));
  memset(Destination, 0, 1024);
  sub_635F30(Str2, Source);
  strcat(Destination, Source);
  Stream = sub_5EA9C0(Destination, "rb");
  if ( !Stream )
    return 0;
  v10 = sub_636090(Str2);
  fclose(Stream);
  (*(void (__thiscall **)(_DWORD, const char *, const char *, char *, int))(**(_DWORD **)(dword_7960D8 + 20) + 16))(
    *(_DWORD *)(dword_7960D8 + 20),
    "LastLogin",
    &::Source,
    Str1,
    51);
  if ( !strcmp(Str1, Str2) )
    (*(void (__thiscall **)(_DWORD, const char *, const char *))(**(_DWORD **)(dword_7960D8 + 20) + 20))(
      *(_DWORD *)(dword_7960D8 + 20),
      "LastLogin",
      &::Source);
  v3 = (Concurrency::details::UMSFreeVirtualProcessorRoot *)sub_5FB720((int)this, 0);
  ExecutingProxy = Concurrency::details::UMSFreeVirtualProcessorRoot::GetExecutingProxy(v3);
  v4 = (Concurrency::details::UMSFreeVirtualProcessorRoot *)sub_5FB720((int)this, 0);
  sub_628AB0(v4, ExecutingProxy, 0);
  remove(Destination);
  strcpy(Path, Source);
  for ( i = 0; i < 13; ++i )
  {
    if ( Path[i] == 46 )
    {
      Path[i] = 0;
      break;
    }
  }
  sub_660310(Path, "*", ".sav");
  rmdir(Path);
  (*(void (__thiscall **)(void *, char *, char *))(*(_DWORD *)this + 164))(this, Str2, Path);
  if ( (*(unsigned __int8 (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 220))(dword_162EE84) )
  {
    if ( v10 >= 0 )
    {
      sprintf(Source, "rchk%d.log", v10);
      strcpy(Destination, Source);
      remove(Source);
      sprintf(Source, "rled%d.log", v10);
      strcpy(Destination, Source);
      remove(Source);
    }
  }
  return 1;
}


//======================================================================
// sub_660310
// entry 00660310  size 237  status ok
//======================================================================

intptr_t __stdcall sub_660310(const char *a1, const char *a2, const char *a3)
{
  intptr_t result; // eax
  char Buffer[268]; // [esp+4h] [ebp-240h] BYREF
  intptr_t FindHandle; // [esp+110h] [ebp-134h]
  struct _finddata64i32_t FindData; // [esp+114h] [ebp-130h] BYREF

  sprintf(Buffer, "%s\\%s%s", a1, a2, a3);
  result = findfirst64i32(Buffer, &FindData);
  FindHandle = result;
  if ( result != -1 )
  {
    do
    {
      sprintf(Buffer, "%s\\%s", a1, FindData.name);
      remove(Buffer);
      result = findnext64i32(FindHandle, &FindData);
    }
    while ( !result );
  }
  return result;
}


//======================================================================
// sub_660440
// entry 00660440  size 176  status ok
//======================================================================

int __thiscall sub_660440(Concurrency::details::UMSFreeVirtualProcessorRoot *this)
{
  int v1; // eax
  const char *v2; // eax
  exception *v4; // [esp+8h] [ebp-8Ch]
  char Destination[132]; // [esp+Ch] [ebp-88h] BYREF

  v4 = (exception *)sub_5E4390(this);
  strcpy(Destination, (const char *)v4 + 33);
  sub_65C820(dword_16306B0, (int)v4, *((_BYTE *)v4 + 58), *((_BYTE *)v4 + 59), Destination, 1);
  v1 = sub_665800((char *)v4 + 33);
  sub_65C9C0((void *)dword_16306B0, v1);
  v2 = exception::what(v4);
  return sub_5FB5A0((void *)dword_16306B0, 2, (int)v2);
}


//======================================================================
// sub_6604F0
// entry 006604f0  size 1654  status ok
//======================================================================

void __thiscall sub_6604F0(_DWORD **this, int a2)
{
  _DWORD **v2; // eax
  const char *v3; // eax
  const char *v4; // [esp-4h] [ebp-CCh]
  int v6; // [esp+4h] [ebp-C4h]
  int v7; // [esp+8h] [ebp-C0h]
  int v8; // [esp+Ch] [ebp-BCh]
  int v9; // [esp+10h] [ebp-B8h]
  int v10; // [esp+14h] [ebp-B4h]
  int v11; // [esp+18h] [ebp-B0h]
  int v12; // [esp+1Ch] [ebp-ACh]
  int v13; // [esp+20h] [ebp-A8h]
  int v14; // [esp+24h] [ebp-A4h]
  int v15; // [esp+28h] [ebp-A0h]
  int v16; // [esp+2Ch] [ebp-9Ch]
  int v17; // [esp+30h] [ebp-98h]
  int v18; // [esp+34h] [ebp-94h]
  int v19; // [esp+38h] [ebp-90h]
  int v20; // [esp+3Ch] [ebp-8Ch]
  int v21; // [esp+40h] [ebp-88h]
  int v22; // [esp+44h] [ebp-84h]
  int v23; // [esp+48h] [ebp-80h]
  _DWORD v24[28]; // [esp+4Ch] [ebp-7Ch]
  int v25; // [esp+BCh] [ebp-Ch]
  int i; // [esp+C0h] [ebp-8h]
  int v27; // [esp+C4h] [ebp-4h]

  v27 = -1;
  if ( dword_16306B0 )
  {
    v23 = sub_5FB300(dword_16306B0, 0);
    v24[0] = 0;
    v24[1] = sub_5FB300(dword_16306B0, 1);
    v24[2] = 1;
    v24[3] = sub_5FB300(dword_16306B0, 2);
    v24[4] = 2;
    v24[5] = sub_5FB300(dword_16306B0, 3);
    v24[6] = 3;
    v24[7] = sub_5FB300(dword_16306B0, 90);
    v24[8] = 4;
    v24[9] = sub_5FB300(dword_16306B0, 4);
    v24[10] = 5;
    v24[11] = sub_5FB300(dword_16306B0, 5);
    v24[12] = 6;
    v24[13] = *(_DWORD *)(dword_16306B0 + 444);
    v24[14] = 7;
    v24[15] = sub_5FB3F0((void *)dword_16306B0, 95, 0);
    v24[16] = 8;
    v24[17] = sub_5FB3F0((void *)dword_16306B0, 96, 0);
    v24[18] = 9;
    v24[19] = *(_DWORD *)(sub_5FB720(dword_16306B0, 0) + 72);
    v24[20] = 10;
    v24[21] = sub_5FB300(dword_16306B0, 99);
    v24[22] = 11;
    v24[23] = sub_5FB300(dword_16306B0, 91);
    v24[24] = 12;
    v24[25] = sub_5FB5E0(dword_16306B0, 92);
    v24[26] = 13;
    v25 = 14;
    for ( i = 0; i < v25; ++i )
    {
      if ( v24[2 * i - 1]
        && (*(unsigned __int8 (__thiscall **)(_DWORD, int))(*(_DWORD *)v24[2 * i - 1] + 132))(v24[2 * i - 1], a2) )
      {
        v27 = v24[2 * i];
        break;
      }
    }
    if ( v27 == -1 )
    {
      if ( *(_DWORD *)(a2 + 24) == 3 )
        (*(void (__thiscall **)(_DWORD, const char *))(**(this + 27) + 180))(*(this + 27), &Source);
    }
    else
    {
      if ( !v27 )
      {
        v22 = sub_630F40((int)"SID_SHELL_LOGINROLLOVER_OK");
        (*(void (__thiscall **)(_DWORD, int))(**(this + 27) + 180))(*(this + 27), v22);
      }
      if ( v27 == 1 )
      {
        v4 = (const char *)sub_630F40((int)"SID_GENERIC_QUIT");
        v2 = (_DWORD **)sub_5FB300(dword_16306B0, 1);
        v3 = sub_602B70(v2);
        if ( !strcmp(v3, v4) )
        {
          v21 = sub_630F40((int)"SID_SHELL_LOGINROLLOVER_QUIT");
          (*(void (__thiscall **)(_DWORD, int))(**(this + 27) + 180))(*(this + 27), v21);
        }
        else
        {
          v20 = sub_630F40((int)"SID_SHELL_LOGINROLLOVER_CANCEL");
          (*(void (__thiscall **)(_DWORD, int))(**(this + 27) + 180))(*(this + 27), v20);
        }
      }
      if ( v27 == 2 )
      {
        v19 = sub_630F40((int)"SID_SHELL_LOGINROLLOVER_NEW");
        (*(void (__thiscall **)(_DWORD, int))(**(this + 27) + 180))(*(this + 27), v19);
      }
      if ( v27 == 3 )
      {
        v18 = sub_630F40((int)"SID_SHELL_LOGINROLLOVER_DELETE");
        (*(void (__thiscall **)(_DWORD, int))(**(this + 27) + 180))(*(this + 27), v18);
      }
      if ( v27 == 4 )
      {
        v17 = sub_630F40((int)"SID_SHELL_LOGINROLLOVER_FACEMAKER");
        (*(void (__thiscall **)(_DWORD, int))(**(this + 27) + 180))(*(this + 27), v17);
      }
      if ( v27 == 5 )
      {
        v16 = sub_630F40((int)"SID_SHELL_LOGINROLLOVER_CREDITS");
        (*(void (__thiscall **)(_DWORD, int))(**(this + 27) + 180))(*(this + 27), v16);
      }
      if ( v27 == 6 )
      {
        v15 = sub_630F40((int)"SID_SHELL_LOGINROLLOVER_HELP");
        (*(void (__thiscall **)(_DWORD, int))(**(this + 27) + 180))(*(this + 27), v15);
      }
      if ( v27 == 7 )
      {
        if ( *(_BYTE *)(*(_DWORD *)(dword_16306B0 + 444) + 136) && sub_65C7F0((void *)dword_16306B0) )
        {
          v14 = sub_630F40((int)"SID_SHELL_FACEMAKER_FILTERED_NONTALKING");
          (*(void (__thiscall **)(_DWORD, int))(**(this + 27) + 180))(*(this + 27), v14);
        }
        else if ( (*(unsigned __int8 (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 200))(dword_162EE84) )
        {
          v13 = sub_630F40((int)"SID_SHELL_LOGINROLLOVER_PICTURE_TALKING");
          (*(void (__thiscall **)(_DWORD, int))(**(this + 27) + 180))(*(this + 27), v13);
        }
        else
        {
          v12 = sub_630F40((int)"SID_SHELL_LOGINROLLOVER_PICTURE_NONTALKING");
          (*(void (__thiscall **)(_DWORD, int))(**(this + 27) + 180))(*(this + 27), v12);
        }
      }
      if ( v27 == 8 )
      {
        v11 = sub_630F40((int)"SID_SHELL_LOGINROLLOVER_STANDARD_FACES");
        (*(void (__thiscall **)(_DWORD, int))(**(this + 27) + 180))(*(this + 27), v11);
      }
      if ( v27 == 9 )
      {
        v10 = sub_630F40((int)"SID_SHELL_LOGINROLLOVER_CUSTOM_FACES");
        (*(void (__thiscall **)(_DWORD, int))(**(this + 27) + 180))(*(this + 27), v10);
      }
      if ( v27 == 10 )
      {
        v9 = sub_630F40((int)"SID_SHELL_LOGINROLLOVER_LIST_BOX");
        (*(void (__thiscall **)(_DWORD, int))(**(this + 27) + 180))(*(this + 27), v9);
      }
      if ( v27 == 11 )
      {
        v8 = sub_630F40((int)"SID_SHELL_LOGINROLLOVER_DELETE_FACE");
        (*(void (__thiscall **)(_DWORD, int))(**(this + 27) + 180))(*(this + 27), v8);
      }
      if ( v27 == 12 )
      {
        v7 = sub_630F40((int)"SID_SHELL_LOGINROLLOVER_VOICE_PREVIEW");
        (*(void (__thiscall **)(_DWORD, int))(**(this + 27) + 180))(*(this + 27), v7);
      }
      if ( v27 == 13 )
      {
        v6 = sub_630F40((int)"SID_SHELL_LOGINROLLOVER_VOICE_SELECTION");
        (*(void (__thiscall **)(_DWORD, int))(**(this + 27) + 180))(*(this + 27), v6);
      }
    }
  }
}


//======================================================================
// sub_660B70
// entry 00660b70  size 106  status ok
//======================================================================

_DWORD *__thiscall sub_660B70(_DWORD *this)
{
  sub_5F71F0(this, 1, 0);
  *this = &NewPlayerDialog::`vftable';
  sub_5F83D0(this, 3200243, 0);
  return this;
}


//======================================================================
// sub_660C00
// entry 00660c00  size 260  status ok
//======================================================================

char __stdcall sub_660C00(int a1)
{
  char result; // al

  result = a1;
  if ( a1 )
  {
    if ( a1 == 1 )
    {
      if ( *(_DWORD *)(dword_16306B0 + 460) )
      {
        (***(void (__thiscall ****)(_DWORD, int))(dword_16306B0 + 460))(*(_DWORD *)(dword_16306B0 + 460), 1);
        *(_DWORD *)(dword_16306B0 + 460) = 0;
      }
      if ( sub_65EA70((void *)dword_16306B0) )
      {
        return sub_65EAB0(dword_16306B0, 0);
      }
      else if ( *(_BYTE *)(dword_16306B0 + 468) )
      {
        return (*(int (__thiscall **)(Concurrency::details::ContextBase *, _DWORD))(*(_DWORD *)dword_162EE84 + 44))(
                 dword_162EE84,
                 0);
      }
      else
      {
        sub_65EAB0(dword_16306B0, 0);
        return (unsigned __int8)sub_64ED50();
      }
    }
  }
  else
  {
    result = sub_65EC60((_DWORD *)dword_16306B0);
    if ( result )
      return sub_65EAB0(dword_16306B0, 1);
  }
  return result;
}


//======================================================================
// sub_660D10
// entry 00660d10  size 597  status ok
//======================================================================

_DWORD *__thiscall sub_660D10(void *this)
{
  int v1; // eax
  int v2; // eax
  int v3; // eax
  _DWORD *v4; // eax
  int v5; // eax
  int v7; // [esp+4h] [ebp-28h]
  _AFX_OLE_STATE *v8; // [esp+8h] [ebp-24h]
  int v10; // [esp+Ch] [ebp-20h]
  _AFX_OLE_STATE *v11; // [esp+10h] [ebp-1Ch]
  _DWORD *v12; // [esp+18h] [ebp-14h]
  int i; // [esp+1Ch] [ebp-10h]
  int v14; // [esp+24h] [ebp-8h]

  v1 = sub_630F40((int)"SID_SHELL_NEWPLAYER");
  sub_5FA5B0(this, 0, -1, v1, 73, 244, 25, 3, 3, 1, 18, -1);
  sub_5FA880(this, 0, 0, 252, 1, 2, 124, 1, 120, 124, 161, 0, 0, 0);
  sub_5FA880(this, 0, 0, 252, 1, 3, 125, 1, 255, 255, 255, 0, 0, 0);
  for ( i = 0; i < 2; ++i )
  {
    v11 = (_AFX_OLE_STATE *)operator new(0x1DCu);
    if ( v11 )
      v8 = _AFX_OLE_STATE::_AFX_OLE_STATE(v11);
    else
      v8 = 0;
    v2 = sub_630F40((int)off_770A90[i]);
    v12 = sub_5F9DE0(
            this,
            v8,
            i,
            i != 0 ? 3200222 : 3200229,
            dword_770A80[2 * i],
            dword_770A84[2 * i],
            1,
            v2,
            72,
            75,
            74,
            -1,
            i != 0 ? 27 : 13);
    if ( i == 1 && *(_BYTE *)(dword_16306B0 + 468) )
    {
      v7 = sub_5FB720(dword_16306B0, 0);
      if ( !(*(int (__thiscall **)(int))(*(_DWORD *)v7 + 184))(v7) )
      {
        v3 = sub_630F40((int)"SID_GENERIC_QUIT");
        (*(void (__thiscall **)(_DWORD *, int))(*v12 + 224))(v12, v3);
      }
    }
  }
  sub_5FA6A0(this, 0, 0, 3200227, 21, 46, (int)&Source, 31, 200, 16, 9, 24, 1, 50, 5);
  v14 = (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 876))(dword_162EE84);
  v4 = (_DWORD *)sub_5FB810(v10, 0);
  sub_60C120(v4, v14);
  v5 = sub_630F40((int)"SID_SHELL_NAME_COLON");
  return sub_5FA5B0((void *)0x74, 0, 0, v5, 72, 116, 20, 28, 48, 2, 5, -1);
}


//======================================================================
// sub_660F70
// entry 00660f70  size 237  status ok
//======================================================================

char *__thiscall sub_660F70(char *this)
{
  const char *v1; // eax
  int v4; // [esp+4h] [ebp-8h]
  int i; // [esp+8h] [ebp-4h]
  int j; // [esp+8h] [ebp-4h]
  int k; // [esp+8h] [ebp-4h]

  v4 = 0;
  v1 = (const char *)sub_5FB8B0(this, 0);
  strcpy(this + 444, v1);
  while ( *(this + 444) == 32 )
  {
    for ( i = 0; i < 50; ++i )
      *(this + i + 444) = *(this + i + 445);
  }
  for ( j = 0; j < 50; ++j )
  {
    if ( !*(this + j + 444) )
    {
      v4 = j;
      break;
    }
  }
  for ( k = v4 - 1; k > -1 && *(this + k + 444) == 32; --k )
    *(this + k + 444) = 0;
  return this + 444;
}


//======================================================================
// sub_6610A0
// entry 006610a0  size 153  status ok
//======================================================================

int __thiscall sub_6610A0(_DWORD *this, int a2)
{
  if ( !*(this + 3)
    && *(_DWORD *)(a2 + 24) == 1
    && (*(unsigned __int8 (__thiscall **)(_DWORD *, int))(*this + 132))(this, a2)
    && !*(_BYTE *)(a2 + 4)
    && (*(_DWORD *)(a2 + 28) & 4) != 0
    && (*(_DWORD *)(a2 + 28) & 2) != 0
    && (*(_DWORD *)(a2 + 28) & 1) != 0
    && *(_DWORD *)(dword_16306B0 + 444)
    && *(_BYTE *)(dword_16306B0 + 449) )
  {
    byte_795FBE = 1;
  }
  return sub_5F4D00(this, a2);
}


//======================================================================
// sub_661170
// entry 00661170  size 93  status ok
//======================================================================

int __thiscall sub_661170(_DWORD *this, int a2)
{
  int v5; // [esp+8h] [ebp-4h]

  if ( (*(int (__thiscall **)(_DWORD *, int))(*this + 236))(this, a2) == -1 )
    return 0;
  v5 = (*(int (__thiscall **)(_DWORD *, int))(*this + 236))(this, a2);
  return sub_60CA40(this + 28, v5);
}


//======================================================================
// sub_6611D0
// entry 006611d0  size 53  status ok
//======================================================================

void **__thiscall sub_6611D0(void **this, char a2)
{
  *this = &off_6DECF8;
  sub_629B00(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}


//======================================================================
// sub_6612A0
// entry 006612a0  size 88  status ok
//======================================================================

Concurrency::details::FairScheduleGroup *__thiscall sub_6612A0(
        Concurrency::details::FairScheduleGroup *this,
        struct Concurrency::details::SchedulerBase *a2,
        struct Concurrency::location *a3,
        char a4,
        int a5)
{
  Concurrency::details::FairScheduleGroup::FairScheduleGroup(this, a2, a3);
  *(_DWORD *)this = &sciRolloverDropListButton::`vftable';
  *((_DWORD *)this + 127) = 0;
  *((_DWORD *)this + 128) = 0;
  *((_DWORD *)this + 129) = 0;
  return this;
}


//======================================================================
// sub_661300
// entry 00661300  size 49  status ok
//======================================================================

int __thiscall sub_661300(_DWORD *this, int a2, int a3, int a4)
{
  *(this + 127) = a2;
  *(this + 128) = a3;
  *(this + 129) = a4;
  return a3;
}


//======================================================================
// sub_661340
// entry 00661340  size 296  status ok
//======================================================================

int __thiscall sub_661340(_DWORD *this, int a2)
{
  if ( *(this + 101) == 3 && a2 == 1 )
  {
    if ( *(this + 127) )
      (*(void (__thiscall **)(int, _DWORD, _DWORD, _DWORD, int, int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)dword_15E55E8
                                                                                            + 128))(
        dword_15E55E8,
        *(this + 127),
        0,
        0,
        5,
        1,
        1.0,
        0.5,
        0);
  }
  else if ( !*(this + 101) && a2 == 3 )
  {
    if ( byte_795FBF )
    {
      if ( *(this + 129) )
        (*(void (__thiscall **)(int, _DWORD, _DWORD, _DWORD, int, int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)dword_15E55E8
                                                                                              + 128))(
          dword_15E55E8,
          *(this + 129),
          0,
          0,
          5,
          1,
          1.0,
          0.5,
          0);
    }
    else if ( *(this + 128) )
    {
      (*(void (__thiscall **)(int, _DWORD, _DWORD, _DWORD, int, int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)dword_15E55E8
                                                                                            + 128))(
        dword_15E55E8,
        *(this + 128),
        0,
        0,
        5,
        1,
        1.0,
        0.5,
        0);
    }
  }
  return sub_6031D0(this, a2);
}


//======================================================================
// sub_661470
// entry 00661470  size 109  status ok
//======================================================================

_DWORD *__thiscall sub_661470(_DWORD *this)
{
  sub_5D7B60(this);
  *this = &MainNavigation::`vftable';
  *(this + 36) = 0;
  *(this + 37) = 0;
  *(this + 32) = 0;
  *(this + 33) = 0;
  *(this + 34) = 0;
  *(this + 35) = 0;
  return this;
}


//======================================================================
// sub_661500
// entry 00661500  size 32  status ok
//======================================================================

int __stdcall sub_661500(int a1)
{
  if ( a1 >= 1 )
    return 30 * (a1 - 1);
  else
    return 0;
}


//======================================================================
// sub_661520
// entry 00661520  size 1270  status ok
//======================================================================

int __thiscall sub_661520(int this)
{
  CMFCRibbonButton *v1; // eax
  _DWORD *v2; // eax
  int result; // eax
  ATL::CCRTHeap *v4; // [esp+4h] [ebp-9Ch]
  CMFCRibbonButton *v5; // [esp+Ch] [ebp-94h]
  ATL::CCRTHeap *v7; // [esp+14h] [ebp-8Ch]
  _DWORD *v8; // [esp+24h] [ebp-7Ch]
  int k; // [esp+2Ch] [ebp-74h]
  _BYTE v10[28]; // [esp+30h] [ebp-70h] BYREF
  int j; // [esp+4Ch] [ebp-54h]
  int v12; // [esp+50h] [ebp-50h]
  int v13; // [esp+54h] [ebp-4Ch]
  int i; // [esp+58h] [ebp-48h]
  _BYTE v15[28]; // [esp+5Ch] [ebp-44h] BYREF
  _DWORD v16[3]; // [esp+78h] [ebp-28h] BYREF
  CPaneContainer *v17; // [esp+84h] [ebp-1Ch]
  _BYTE *v18; // [esp+88h] [ebp-18h]
  CMFCRibbonButton *v19; // [esp+8Ch] [ebp-14h]
  int v20; // [esp+90h] [ebp-10h]
  int v21; // [esp+9Ch] [ebp-4h]

  sub_64CE60((CDeferredCommand *)this);
  if ( byte_795F95 )
  {
    sub_662E40(this);
    (*(void (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 900))(dword_162EE84);
  }
  *(_DWORD *)(this + 128) = *((_DWORD *)dword_162EE84 + 5);
  sub_5F83D0(*(_DWORD **)(this + 128), 3200500, 0);
  *(_DWORD *)(this + 132) = sub_5F9CE0(*(void **)(this + 128), 0, 0, 3200506, 0, 0, 1000, 0, 0xFFu, 0);
  *(_DWORD *)(this + 136) = sub_5FA5B0(
                              *(void **)(this + 128),
                              0,
                              0,
                              (int)"dang monkey",
                              77,
                              200,
                              100,
                              0,
                              0,
                              1000,
                              36,
                              -1);
  sub_6044B0(*(void **)(dword_7960D8 + 24), 542655828, 3200503, 1);
  sub_6044B0(*(void **)(dword_7960D8 + 24), 542655828, 3200505, 1);
  sub_6044B0(*(void **)(dword_7960D8 + 24), 542655828, 3200506, 1);
  v8 = operator new(0x178u);
  v21 = 0;
  if ( v8 )
  {
    sub_5EAAF0(v8);
    v5 = v1;
  }
  else
  {
    v5 = 0;
  }
  v21 = -1;
  v19 = v5;
  sub_5EAE80(3200501, 0, 0, 0, -1);
  *(_DWORD *)(this + 148) = CMFCRibbonButton::IsDefaultCommand(v5) + 1;
  if ( v19 )
    (**(void (__thiscall ***)(CMFCRibbonButton *, int))v19)(v19, 1);
  v17 = 0;
  v18 = 0;
  v16[0] = 3200501;
  v16[1] = 0;
  v16[2] = 0;
  v20 = 0;
  sub_662EF0(v15);
  Concurrency::details::SchedulingRing::SetOwningNode(
    (Concurrency::details::SchedulingRing *)v15,
    (struct Concurrency::details::SchedulingNode *)&unk_770AD8);
  sub_662F30(v16);
  v17 = sub_5FA3C0(
          *(_DWORD *)(this + 128),
          0,
          0,
          1,
          (struct CPaneDivider *)0x67,
          0,
          0,
          0,
          4 * v20 + 2,
          0,
          -1,
          -1,
          -1,
          -1);
  v18 = (_BYTE *)sub_5FB510(*(void **)(this + 128), 1, 103);
  sub_625C30(v18, 1);
  for ( i = 0;
        i < (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 236))(dword_162EE84);
        ++i )
  {
    v13 = (*(int (__thiscall **)(Concurrency::details::ContextBase *, int))(*(_DWORD *)dword_162EE84 + 224))(
            dword_162EE84,
            i);
    if ( v13 )
    {
      v12 = (*(int (__thiscall **)(int))(*(_DWORD *)v13 + 108))(v13);
      if ( v12 )
      {
        for ( j = 0; *(_DWORD *)(v12 + 16 * j) != -1; ++j )
        {
          if ( *(_DWORD *)(v12 + 16 * j) != -2 )
            sub_662360(*(_DWORD *)(v12 + 16 * j), v12 + 16 * j, v15, v20, v18);
        }
      }
    }
  }
  v2 = sub_5F9CE0(*(void **)(this + 128), 0, 0, 3200506, 0, 0, 4 * v20 + 3, 0, 0xFFu, 0);
  sub_5FF5A0(v18, (int)v2);
  sub_662EF0(v10);
  Concurrency::details::SchedulingRing::SetOwningNode(
    (Concurrency::details::SchedulingRing *)v10,
    (struct Concurrency::details::SchedulingNode *)asc_770AB8);
  sub_662F30(v16);
  for ( k = 0; dword_770B80[k] != -1; ++k )
    sub_662360(dword_770B80[k], 0, v10, v20, v18);
  v7 = (ATL::CCRTHeap *)operator new(0x20u);
  v21 = 1;
  if ( v7 )
  {
    sub_5FC0D0(v7, 0);
    *(_DWORD *)v7 = &NavHideSubscreenScript::`vftable';
    v4 = v7;
  }
  else
  {
    v4 = 0;
  }
  v21 = -1;
  sub_5F1B70((void (__thiscall ****)(_DWORD, _DWORD))this, (void (__thiscall ***)(_DWORD, _DWORD))v4);
  sub_6064E0(v17, v20);
  sub_662CE0(this);
  sub_625E00(v18, 1);
  result = sub_636760(dword_162EE84);
  if ( (_BYTE)result )
    return (*(int (__thiscall **)(int, int, _DWORD, int, int, _DWORD))(*(_DWORD *)this + 364))(this, 1, 0, -1, -1, 0);
  return result;
}


//======================================================================
// sub_661A40
// entry 00661a40  size 2139  status ok
//======================================================================

int __thiscall sub_661A40(int *this, int a2)
{
  int result; // eax
  int v3; // esi
  int v4; // edi
  int v5; // esi
  int v6; // eax
  _DWORD *v7; // eax
  int v8; // esi
  int v9; // edi
  int v10; // esi
  int v11; // edi
  int v12; // [esp+Ch] [ebp-28Ch]
  int v13; // [esp+10h] [ebp-288h]
  float *v14; // [esp+14h] [ebp-284h]
  int v16; // [esp+20h] [ebp-278h]
  int v17; // [esp+28h] [ebp-270h]
  void *v18; // [esp+30h] [ebp-268h]
  void *v19; // [esp+38h] [ebp-260h]
  int v20; // [esp+48h] [ebp-250h]
  int j; // [esp+4Ch] [ebp-24Ch]
  int v22; // [esp+58h] [ebp-240h]
  int v23; // [esp+58h] [ebp-240h]
  int i; // [esp+5Ch] [ebp-23Ch]
  _DWORD *v25; // [esp+64h] [ebp-234h]
  _DWORD Src[8]; // [esp+68h] [ebp-230h] BYREF
  _DWORD *v27; // [esp+88h] [ebp-210h]
  _BYTE v28[412]; // [esp+8Ch] [ebp-20Ch] BYREF
  _DWORD v29[3]; // [esp+228h] [ebp-70h] BYREF
  float *v30; // [esp+234h] [ebp-64h]
  int v31; // [esp+238h] [ebp-60h]
  void *v32; // [esp+23Ch] [ebp-5Ch]
  _DWORD v33[7]; // [esp+240h] [ebp-58h] BYREF
  _BYTE *v34; // [esp+25Ch] [ebp-3Ch]
  int v35; // [esp+260h] [ebp-38h] BYREF
  int v36; // [esp+264h] [ebp-34h]
  int v37; // [esp+268h] [ebp-30h]
  int v38; // [esp+26Ch] [ebp-2Ch]
  int v39; // [esp+270h] [ebp-28h]
  int v40; // [esp+274h] [ebp-24h]
  int v41; // [esp+278h] [ebp-20h]
  int v42; // [esp+27Ch] [ebp-1Ch]
  CMFCRibbonButton *v43; // [esp+280h] [ebp-18h]
  int v44; // [esp+284h] [ebp-14h]
  CMFCRibbonButton *v45; // [esp+288h] [ebp-10h]
  int v46; // [esp+294h] [ebp-4h]

  v32 = (void *)sub_5FB4C0(*(this + 32), 103);
  result = sub_606490(v32);
  v44 = result;
  if ( a2 != 100 )
  {
    if ( a2 == 101 )
    {
      (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 33) + 112))(*(this + 33));
      (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 34) + 112))(*(this + 34));
      v27 = (_DWORD *)sub_5FB2B0(*(this + 32), v44 + 20);
      v25 = (_DWORD *)sub_5FB510((void *)*(this + 32), v44 + 1, 103);
      Src[0] = (*(int (__thiscall **)(_DWORD *))(*v25 + 76))(v25);
      Src[1] = (*(int (__thiscall **)(_DWORD *))(*v25 + 84))(v25);
      v3 = sub_5F8550((_DWORD *)v27[1]);
      v4 = (*(int (__thiscall **)(_DWORD *))(*v27 + 76))(v27);
      Src[2] = v3 - (sub_5EB470(v27) + v4);
      Src[3] = 0;
      Src[4] = (*(int (__thiscall **)(_DWORD *))(*v25 + 76))(v25) - 500;
      Src[5] = 0;
      Src[6] = (*(int (__thiscall **)(_DWORD *))(*v25 + 76))(v25) + 300;
      Src[7] = 0;
      v25[97] = 1;
      v46 = 0;
      if ( operator new(0x4Cu) )
        v14 = (float *)sub_6632A0(*(this + 1), Src, 1);
      else
        v14 = 0;
      v46 = -1;
      v17 = 30 / v25[97];
      *((_DWORD *)v14 + 18) = v17;
      v14[17] = 1.0 / (double)v17;
      (*(void (__thiscall **)(float *, _DWORD *))(*(_DWORD *)v14 + 4))(v14, v25);
      return sub_5F6050((void (__thiscall ****)(_DWORD, _DWORD))v25, (void (__thiscall ***)(_DWORD, _DWORD))v14);
    }
    else if ( a2 >= 0 )
    {
      sub_62FDE0("Click on %d\n", a2);
      v31 = sub_661500(++v44);
      v19 = operator new(0x220u);
      v46 = 1;
      if ( v19 )
        v13 = sub_625BF0((int)v19);
      else
        v13 = 0;
      v46 = -1;
      sub_5FA3C0(
        *(this + 32),
        v13,
        (CPaneContainer *)v32,
        v44 + 1,
        (struct CPaneDivider *)0x67,
        0,
        0,
        0,
        4 * v44 + 2,
        0,
        -1,
        -1,
        -1,
        -1);
      v34 = (_BYTE *)sub_5FB510((void *)*(this + 32), v44 + 1, 103);
      sub_625C30(v34, 1);
      v43 = (CMFCRibbonButton *)sub_5F9CE0((void *)*(this + 32), 0, v44 + 20, 3200503, v31, 0, 4 * v44 + 2, 0, 0xFFu, 0);
      sub_5EB000(v43, 1);
      sub_5FF5A0(v34, (int)v43);
      v45 = v43;
      for ( i = 0; dword_75DB00[4 * i]; ++i )
      {
        if ( dword_75DB00[4 * i] == a2 )
        {
          v43 = (CMFCRibbonButton *)sub_5F9CE0(
                                      (void *)*(this + 32),
                                      0,
                                      0,
                                      dword_75DB04[4 * i],
                                      v31,
                                      0,
                                      4 * v44 + 3,
                                      0,
                                      0xFFu,
                                      0);
          sub_5EB000(v43, dword_75DB08[4 * i]);
          (*(void (__thiscall **)(CMFCRibbonButton *, int))(*(_DWORD *)v43 + 176))(v43, dword_75DB0C[4 * i]);
          sub_5FF5A0(v34, (int)v43);
          v5 = (*(int (__thiscall **)(CMFCRibbonButton *))(*(_DWORD *)v45 + 76))(v45);
          v22 = sub_5EB470(v45) + v5;
          v23 = v22 + 30 + (sub_5F8550(*((_DWORD **)v45 + 1)) - (v22 + 30)) / 2;
          v6 = sub_5F5550(v43);
          (*(void (__thiscall **)(CMFCRibbonButton *, int))(*(_DWORD *)v43 + 72))(v43, v23 - v6 / 2);
          break;
        }
      }
      v7 = sub_5F9CE0((void *)*(this + 32), 0, 0, 3200506, v31, 0, 4 * v44 + 3, 1, 0xFFu, 0);
      sub_5FF5A0(v34, (int)v7);
      if ( v44 == 1 )
      {
        v43 = (CMFCRibbonButton *)sub_5F9CE0((void *)*(this + 32), 0, 100, 3200503, 0, 0, 4, 0, 0xFFu, 0);
        sub_5EB000(v43, 0);
        sub_5F9DE0((void *)*(this + 32), 0, 101, 3200505, 0, 0, 5, (int)&Source, -1, -1, -1, -1, 0);
      }
      (*(void (__thiscall **)(int *, int, _BYTE *))(*this + 68))(this, a2, v28);
      v29[0] = 3200501;
      v29[1] = 0;
      v29[2] = 0;
      sub_662EF0(v33);
      v33[0] = &SubScreenLayoutManager::`vftable';
      Concurrency::details::SchedulingRing::SetOwningNode(
        (Concurrency::details::SchedulingRing *)v33,
        (struct Concurrency::details::SchedulingNode *)&unk_770B08);
      sub_662F30(v29);
      for ( j = 0; *(_DWORD *)&v28[4 * j + 4] != -1; ++j )
      {
        v20 = *(_DWORD *)&v28[4 * j + 4];
        if ( v20 != -2 )
          sub_662360(v20, 0, v33, v44, v34);
      }
      sub_6064E0(v32, v44);
      sub_662CE0(this);
      sub_625E00(v34, 1);
      *(this + 35) = 0;
      v8 = sub_5F8550(*((_DWORD **)v45 + 1));
      v9 = (*(int (__thiscall **)(CMFCRibbonButton *))(*(_DWORD *)v45 + 76))(v45);
      v35 = v8 - (sub_5EB470(v45) + v9);
      v36 = 0;
      v37 = 0;
      v38 = 0;
      v10 = sub_5F8550(*((_DWORD **)v45 + 1));
      v11 = (*(int (__thiscall **)(CMFCRibbonButton *))(*(_DWORD *)v45 + 76))(v45);
      v39 = v10 - (sub_5EB470(v45) + v11) - 200;
      v40 = 0;
      v41 = 300;
      v42 = 0;
      (*(void (__thiscall **)(_BYTE *, int, int))(*(_DWORD *)v34 + 68))(v34, v35, v36);
      *((_DWORD *)v34 + 97) = 1;
      v18 = operator new(0x4Cu);
      v46 = 2;
      if ( v18 )
        v12 = sub_6632A0(0, &v35, 1);
      else
        v12 = 0;
      v46 = -1;
      v30 = (float *)v12;
      v16 = 30 / *((_DWORD *)v34 + 97);
      *(_DWORD *)(v12 + 72) = v16;
      v30[17] = 1.0 / (double)v16;
      (*(void (__thiscall **)(float *, _BYTE *))(*(_DWORD *)v30 + 4))(v30, v34);
      return sub_5F6050((void (__thiscall ****)(_DWORD, _DWORD))v34, (void (__thiscall ***)(_DWORD, _DWORD))v30);
    }
  }
  return result;
}


//======================================================================
// sub_6622A0
// entry 006622a0  size 186  status ok
//======================================================================

int __thiscall sub_6622A0(int *this)
{
  int v1; // eax
  int result; // eax
  void *v4; // [esp+8h] [ebp-Ch]
  int v5; // [esp+Ch] [ebp-8h]
  int v6; // [esp+10h] [ebp-4h]

  v4 = (void *)sub_5FB4C0(*(this + 32), 103);
  v6 = sub_606490(v4);
  v1 = sub_5FF920(v6 - 1);
  (*(void (__thiscall **)(int, int))(*(_DWORD *)v1 + 244))(v1, v1);
  sub_662CE0(this);
  *(this + 35) = 0;
  v5 = sub_5FB510((void *)*(this + 32), v6 + 1, 103);
  sub_5FF840(v5);
  result = sub_5FFB40(v6);
  if ( v6 <= 1 )
  {
    sub_5FBC80(*(this + 32), 0, 100);
    return sub_5FBCB0(*(this + 32), 0, 101);
  }
  return result;
}


//======================================================================
// sub_662360
// entry 00662360  size 1519  status ok
//======================================================================

_DWORD *__thiscall sub_662360(void *this, int a2, int *a3, void (__thiscall ***a4)(_DWORD, int *), int a5, _DWORD *a6)
{
  int *v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  _DWORD *v12; // [esp+4h] [ebp-3C4h]
  _DWORD *v13; // [esp+8h] [ebp-3C0h]
  Concurrency::details::FairScheduleGroup *v14; // [esp+Ch] [ebp-3BCh]
  char v16[8]; // [esp+14h] [ebp-3B4h] BYREF
  void *v17; // [esp+1Ch] [ebp-3ACh]
  _DWORD *v18; // [esp+20h] [ebp-3A8h]
  void *v19; // [esp+24h] [ebp-3A4h]
  _DWORD *v20; // [esp+28h] [ebp-3A0h]
  void *v21; // [esp+2Ch] [ebp-39Ch]
  Concurrency::details::FairScheduleGroup *v22; // [esp+30h] [ebp-398h]
  _DWORD *v23; // [esp+34h] [ebp-394h]
  Concurrency::details::FairScheduleGroup *v24; // [esp+38h] [ebp-390h]
  int j; // [esp+3Ch] [ebp-38Ch]
  char v26[8]; // [esp+40h] [ebp-388h] BYREF
  int v27; // [esp+48h] [ebp-380h]
  int i; // [esp+50h] [ebp-378h]
  _BYTE v29[412]; // [esp+54h] [ebp-374h] BYREF
  int v30; // [esp+1F0h] [ebp-1D8h] BYREF
  int v31; // [esp+1F4h] [ebp-1D4h]
  int v32; // [esp+1F8h] [ebp-1D0h] BYREF
  int v33; // [esp+1FCh] [ebp-1CCh]
  struct Concurrency::details::SchedulerBase *v34; // [esp+200h] [ebp-1C8h]
  int v35; // [esp+204h] [ebp-1C4h]
  char v36; // [esp+20Bh] [ebp-1BDh]
  char v37[412]; // [esp+20Ch] [ebp-1BCh] BYREF
  _DWORD *v38; // [esp+3A8h] [ebp-20h]
  int v39; // [esp+3ACh] [ebp-1Ch]
  int v40; // [esp+3B0h] [ebp-18h]
  int v41; // [esp+3B4h] [ebp-14h]
  int v42; // [esp+3B8h] [ebp-10h]
  int v43; // [esp+3C4h] [ebp-4h]

  v39 = sub_661500(a5);
  (**a4)(a4, &v30);
  v38 = 0;
  if ( a3 )
  {
    v32 = *a3;
    v33 = a3[1];
    v34 = (struct Concurrency::details::SchedulerBase *)a3[2];
    v35 = a3[3];
  }
  else
  {
    (*(void (__thiscall **)(void *, int, int *))(*(_DWORD *)this + 72))(this, a2, &v32);
  }
  if ( (int)v34 >= 0
    && !(*(unsigned __int8 (__thiscall **)(void *, struct Concurrency::details::SchedulerBase *, char *))(*(_DWORD *)this + 68))(
          this,
          v34,
          v37) )
  {
    sub_5E9F20(
      "0 && \"Goto submenu requested without proper menu definition (see GetGameMenus)\"",
      "..\\Shared\\MainNavigation.cpp",
      608);
    v34 = (struct Concurrency::details::SchedulerBase *)-1;
  }
  v36 = 0;
  if ( (int)v34 >= 0 )
  {
    (*(void (__thiscall **)(void *, struct Concurrency::details::SchedulerBase *, _BYTE *))(*(_DWORD *)this + 68))(
      this,
      v34,
      v29);
    for ( i = 0; *(_DWORD *)&v29[4 * i + 4] != -1; ++i )
    {
      (*(void (__thiscall **)(void *, _DWORD, char *))(*(_DWORD *)this + 72))(this, *(_DWORD *)&v29[4 * i + 4], v26);
      if ( v27 >= 0 )
      {
        v36 = 1;
        break;
      }
    }
  }
  v40 = 3200501;
  v41 = *((_DWORD *)this + 36);
  v42 = 0;
  for ( j = 0; dword_75DFD0[4 * j]; ++j )
  {
    if ( dword_75DFD0[4 * j] == a2 )
    {
      v6 = (int *)((char *)&unk_75DFD4 + 16 * j);
      v40 = *v6;
      v41 = v6[1];
      v42 = v6[2];
      break;
    }
  }
  if ( v36 )
  {
    v17 = operator new(0x1E8u);
    v43 = 2;
    if ( v17 )
      v12 = sub_603120(v17, 0, 0, 0);
    else
      v12 = 0;
    v18 = v12;
    v43 = -1;
    v9 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_15E55E8 + 20))(dword_15E55E8, v33);
    v38 = sub_5F9DE0(*((void **)this + 32), v12, a2, v40, v30, v31, 4 * a5 + 3, v9, 77, -1, -1, -1, 0);
    sub_603190(v38, 2 * *((_DWORD *)this + 36) + 3200500, 2 * *((_DWORD *)this + 36) + 3200501, 0);
  }
  else if ( (int)v34 < 0 )
  {
    v19 = operator new(0x1E8u);
    v43 = 1;
    if ( v19 )
    {
      sub_603120(v19, 0, 0, 0);
      *(_DWORD *)v19 = &NavButton::`vftable';
      v13 = v19;
    }
    else
    {
      v13 = 0;
    }
    v20 = v13;
    v43 = -1;
    v23 = v13;
    v8 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_15E55E8 + 20))(dword_15E55E8, v33);
    v38 = sub_5F9DE0(*((void **)this + 32), v13, a2, v40, v30, v31, 4 * a5 + 3, v8, 77, -1, -1, -1, 0);
    sub_603190(v38, 2 * *((_DWORD *)this + 36) + 3200500, 2 * *((_DWORD *)this + 36) + 3200501, 0);
  }
  else
  {
    v21 = operator new(0x208u);
    v43 = 0;
    if ( v21 )
      v14 = sub_6612A0((Concurrency::details::FairScheduleGroup *)v21, v34, (struct Concurrency::location *)2, 0, 2);
    else
      v14 = 0;
    v22 = v14;
    v43 = -1;
    v24 = v14;
    v7 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_15E55E8 + 20))(dword_15E55E8, v33);
    v38 = sub_5FAEE0(
            *((void **)this + 32),
            v14,
            -a2,
            v40,
            v30,
            v31,
            4 * a5 + 3,
            (struct Concurrency::details::SchedulerBase *)a2,
            0,
            v7,
            77,
            -1,
            -1,
            -1);
    sub_661300(v14, 2 * *((_DWORD *)this + 36) + 3200500, 2 * *((_DWORD *)this + 36) + 3200501, 0);
  }
  sub_5FF5A0(a6, (int)v38);
  sub_602E00((_DWORD **)v38, 17);
  sub_602E30((_DWORD **)v38, 28, -1);
  sub_5EB000((CMFCRibbonButton *)v38, v41);
  v10 = (*(int (__thiscall **)(_DWORD *))(*v38 + 76))(v38);
  (*(void (__thiscall **)(_DWORD *, int))(*v38 + 72))(v38, v39 + v10);
  if ( ++*((_DWORD *)this + 36) >= *((_DWORD *)this + 37) )
    *((_DWORD *)this + 36) = 0;
  sub_6630E0(v16);
  return v38;
}


//======================================================================
// sub_662950
// entry 00662950  size 899  status ok
//======================================================================

int __thiscall sub_662950(int this, int a2)
{
  int result; // eax
  int *v3; // edx
  int v4; // eax
  int v5; // [esp+0h] [ebp-430h]
  char Buffer[1000]; // [esp+8h] [ebp-428h] BYREF
  void *v8; // [esp+3F4h] [ebp-3Ch]
  int v9; // [esp+3F8h] [ebp-38h]
  int j; // [esp+3FCh] [ebp-34h]
  char v11[4]; // [esp+400h] [ebp-30h] BYREF
  const char *v12; // [esp+404h] [ebp-2Ch]
  int v13; // [esp+410h] [ebp-20h]
  int v14; // [esp+414h] [ebp-1Ch]
  int v15; // [esp+418h] [ebp-18h]
  int v16; // [esp+41Ch] [ebp-14h]
  char *v17; // [esp+420h] [ebp-10h]
  int i; // [esp+424h] [ebp-Ch]
  int v19; // [esp+428h] [ebp-8h]
  Concurrency::details::VirtualProcessorRoot *v20; // [esp+42Ch] [ebp-4h]

  result = sub_650360((_DWORD *)this, a2);
  if ( *(_DWORD *)(a2 + 24) == 3 )
  {
    result = unknown_libname_841(dword_15E55E8);
    if ( !result )
    {
      if ( !*(_DWORD *)(this + 140)
        || !sub_5FB300(*(_DWORD *)(this + 128), *(_DWORD *)(this + 140))
        || (v5 = sub_5FB300(*(_DWORD *)(this + 128), *(_DWORD *)(this + 140)),
            result = (*(int (__thiscall **)(int, int))(*(_DWORD *)v5 + 132))(v5, a2),
            !(_BYTE)result) )
      {
        v17 = sub_5F8D90(*(char **)(this + 128));
        result = CRecentFileList::GetSize((CRecentFileList *)v17);
        v19 = result;
        for ( i = 0; i < v19; ++i )
        {
          v20 = (Concurrency::details::VirtualProcessorRoot *)sub_60CA40(v17, i);
          if ( !Concurrency::details::VirtualProcessorRoot::IsRootRemoved(v20)
            && (*(unsigned __int8 (__thiscall **)(Concurrency::details::VirtualProcessorRoot *, int))(*(_DWORD *)v20 + 132))(
                 v20,
                 a2) )
          {
            v16 = pairNode::raw_length(v20);
            if ( v16 < 0 )
              v16 = -v16;
            if ( v16 > 102 )
            {
              *(_DWORD *)(this + 140) = pairNode::raw_length(v20);
              (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 132) + 112))(*(_DWORD *)(this + 132));
              v13 = 0;
              v14 = 0;
              v15 = 0;
              for ( j = 0; dword_75DBA0[4 * j]; ++j )
              {
                if ( dword_75DBA0[4 * j] == v16 )
                {
                  v3 = (int *)((char *)&unk_75DBA4 + 16 * j);
                  v13 = *v3;
                  v14 = v3[1];
                  v15 = v3[2];
                  break;
                }
              }
              if ( !v13 )
              {
                v8 = (void *)sub_5FB4C0(*(_DWORD *)(this + 128), 103);
                v9 = sub_606490(v8);
                v13 = (v16 - 3200000) / 1000 + (v9 != 0 ? 3200700 : 3200600);
              }
              if ( v13 )
              {
                sub_5EAF00(*(_DWORD *)(this + 132), v13);
                sub_5EB000(*(CMFCRibbonButton **)(this + 132), v14);
                (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 132) + 176))(*(_DWORD *)(this + 132), v15);
                (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 132) + 116))(*(_DWORD *)(this + 132));
              }
              result = (*(int (__thiscall **)(int, int, char *))(*(_DWORD *)this + 72))(this, v16, v11);
              if ( (_BYTE)result )
              {
                sprintf(Buffer, "%s_INFO", v12);
                sub_62FDE0("Hover over %s (%d)\n", Buffer, v16);
                v4 = sub_630F40((int)Buffer);
                (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 136) + 180))(*(_DWORD *)(this + 136), v4);
                return (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 136) + 116))(*(_DWORD *)(this + 136));
              }
              return result;
            }
          }
          result = i + 1;
        }
      }
    }
  }
  return result;
}


//======================================================================
// sub_662CE0
// entry 00662ce0  size 341  status ok
//======================================================================

int __thiscall sub_662CE0(int this)
{
  int v1; // eax
  int v2; // eax
  int v5; // [esp+4h] [ebp-20h]
  void *v6; // [esp+10h] [ebp-14h]
  int v7; // [esp+14h] [ebp-10h]
  int v8; // [esp+18h] [ebp-Ch]
  int v9; // [esp+1Ch] [ebp-8h]
  int v10; // [esp+20h] [ebp-4h]

  v6 = (void *)sub_5FB4C0(*(_DWORD *)(this + 128), 103);
  v9 = sub_606490(v6);
  v5 = sub_661500(v9);
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 132) + 112))(*(_DWORD *)(this + 132));
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 136) + 112))(*(_DWORD *)(this + 136));
  v10 = 0;
  if ( v9 <= 0 )
  {
    v7 = 200;
    v8 = 153;
    (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 132) + 68))(*(_DWORD *)(this + 132), v5 + 26, 145);
  }
  else
  {
    v7 = 293;
    v8 = 224;
    v10 = -4;
    (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 132) + 68))(*(_DWORD *)(this + 132), v5 + 305, 232);
  }
  sub_5ECC60(*(_DWORD **)(this + 136), v7);
  sub_5ECCB0(*(_DWORD **)(this + 136), 100);
  v1 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 132) + 84))(*(_DWORD *)(this + 132));
  v2 = (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 132) + 76))(*(_DWORD *)(this + 132), v10 + v8 + v1);
  return (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 136) + 68))(*(_DWORD *)(this + 136), v2);
}


//======================================================================
// sub_662E40
// entry 00662e40  size 171  status ok
//======================================================================

char *sub_662E40()
{
  const struct tagVIDEOINFO *DisplayFormat; // eax
  const char *v2; // [esp-4h] [ebp-20h]
  char *v3; // [esp+4h] [ebp-18h]

  CImageDisplay::GetDisplayFormat(**((CImageDisplay ***)dword_162EE84 + 22))->rcSource.left = 2;
  v2 = (const char *)sub_630F40((int)"SID_GENERIC_HOYLEPLAYER");
  DisplayFormat = CImageDisplay::GetDisplayFormat(**((CImageDisplay ***)dword_162EE84 + 22));
  strcpy((char *)&DisplayFormat->rcSource.top, v2);
  CImageDisplay::GetDisplayFormat(**((CImageDisplay ***)dword_162EE84 + 22))->bmiHeader.biClrImportant = 0;
  v3 = (char *)sub_630F40((int)"SID_CASINO_DEFAULTUSERFILENAME");
  return strcpy((char *)(**((_DWORD **)dword_162EE84 + 22) + 16), v3);
}


