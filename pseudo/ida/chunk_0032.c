//======================================================================
// sub_6013C0
// entry 006013c0  size 42  status ok
//======================================================================

_DWORD *__thiscall sub_6013C0(_DWORD *this)
{
  _DWORD *result; // eax

  result = this;
  if ( *(this + 3) == 1 )
    *(this + 3) = -1;
  else
    *(this + 3) = 1;
  return result;
}


//======================================================================
// sub_601430
// entry 00601430  size 40  status ok
//======================================================================

int __thiscall sub_601430(_DWORD *this)
{
  int result; // eax

  result = (int)this;
  if ( *(this + 3) != 1 )
    return sub_6005D0((int)this);
  *(this + 3) = -1;
  return result;
}


//======================================================================
// sub_6014A0
// entry 006014a0  size 113  status ok
//======================================================================

int __fastcall sub_6014A0(int a1)
{
  int result; // eax
  int v2; // [esp+0h] [ebp-8h]

  result = a1;
  if ( *(_BYTE *)(a1 + 24) )
  {
    result = (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a1 + 12))(a1);
    if ( (_BYTE)result )
    {
      if ( CMFCToolBarsCustomizeDialog::GetFlags(*(CMFCToolBarsCustomizeDialog **)(a1 + 4)) == *(_DWORD *)(a1 + 28) )
        v2 = *(_DWORD *)(a1 + 32);
      else
        v2 = *(_DWORD *)(a1 + 28);
      return (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(a1 + 4) + 176))(*(_DWORD *)(a1 + 4), v2);
    }
  }
  return result;
}


//======================================================================
// sub_601580
// entry 00601580  size 198  status ok
//======================================================================

unsigned __int8 __fastcall sub_601580(int a1)
{
  unsigned __int8 result; // al
  int v3; // [esp+4h] [ebp-4h]

  result = a1;
  if ( *(_BYTE *)(a1 + 24) )
  {
    result = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 12))(a1);
    if ( result )
    {
      v3 = *(_DWORD *)(a1 + 12) * *(char *)(a1 + 28) + (unsigned __int8)sub_5EB610(*(_BYTE **)(a1 + 4));
      result = sub_5EB610(*(_BYTE **)(a1 + 4));
      if ( result != v3 )
      {
        if ( v3 <= 0 )
          v3 = 0;
        if ( v3 >= 255 )
          v3 = 255;
        if ( *(_DWORD *)(a1 + 12) == -1 && !v3 || *(_DWORD *)(a1 + 12) == 1 && v3 == 255 )
          return (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 20))(a1);
        else
          return sub_5EB5D0(*(_BYTE **)(a1 + 4), v3);
      }
    }
  }
  return result;
}


//======================================================================
// sub_601650
// entry 00601650  size 49  status ok
//======================================================================

int __thiscall sub_601650(int this)
{
  if ( *(_BYTE *)(this + 29) )
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 4) + 112))(*(_DWORD *)(this + 4));
  return sub_6005D0(this);
}


//======================================================================
// sub_601690
// entry 00601690  size 33  status ok
//======================================================================

_DWORD *__thiscall sub_601690(_DWORD *this)
{
  Concurrency::overwrite_buffer<enum Concurrency::agent_status>::overwrite_buffer<enum Concurrency::agent_status>(0);
  *this = &sciCycleRandom::`vftable';
  return this;
}


//======================================================================
// sub_6016E0
// entry 006016e0  size 65  status ok
//======================================================================

int __thiscall sub_6016E0(int this)
{
  int result; // eax
  int v3; // [esp+4h] [ebp-4h]

  result = this;
  if ( *(_BYTE *)(this + 24) )
  {
    v3 = sub_601730(this);
    return (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 4) + 176))(*(_DWORD *)(this + 4), v3);
  }
  return result;
}


//======================================================================
// sub_601730
// entry 00601730  size 99  status ok
//======================================================================

unsigned int __thiscall sub_601730(int this)
{
  int IsFixedSize; // eax

  IsFixedSize = CMediaType::IsFixedSize((CMediaType *)dword_15E55E8);
  if ( abs(IsFixedSize - *(_DWORD *)(this + 16)) < *(_DWORD *)(*(_DWORD *)(this + 4) + 376) )
    return CMFCToolBarsCustomizeDialog::GetFlags(*(CMFCToolBarsCustomizeDialog **)(this + 4));
  *(_DWORD *)(this + 16) = CMediaType::IsFixedSize((CMediaType *)dword_15E55E8);
  return sub_62FBF0(*(_DWORD *)(this + 20) + 1);
}


//======================================================================
// sub_6019E0
// entry 006019e0  size 53  status ok
//======================================================================

CExpandoObject *__thiscall sub_6019E0(CExpandoObject *this, char a2)
{
  *(_DWORD *)this = &sciCycleToggle::`vftable';
  CExpandoObject::~CExpandoObject(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}


//======================================================================
// sub_601BA0
// entry 00601ba0  size 161  status ok
//======================================================================

void __thiscall sub_601BA0(int this)
{
  *(_DWORD *)this = &sciButton::`vftable';
  if ( *(_DWORD *)(this + 400) )
  {
    (***(void (__thiscall ****)(_DWORD, int))(this + 400))(*(_DWORD *)(this + 400), 1);
    *(_DWORD *)(this + 400) = 0;
  }
  sub_5F5FA0((_DWORD *)this);
}


//======================================================================
// sub_601C50
// entry 00601c50  size 68  status ok
//======================================================================

bool __thiscall sub_601C50(CMFCScanliner *this, int a2)
{
  return (unsigned __int8)sub_6026D0(this) && sub_5F4B60(this, a2);
}


//======================================================================
// sub_601CA0
// entry 00601ca0  size 245  status ok
//======================================================================

void (__thiscall ****__thiscall sub_601CA0(int this, int a2))(_DWORD, _DWORD)
{
  void (__thiscall ****result)(_DWORD, _DWORD); // eax
  void (__thiscall ***v3)(_DWORD, _DWORD); // [esp+4h] [ebp-1Ch]

  if ( (*(_DWORD *)(a2 + 28) & 0x20) == 0
    || (result = (void (__thiscall ****)(_DWORD, _DWORD))sub_602F20(this), (_BYTE)result) )
  {
    *(_BYTE *)(a2 + 4) = 1;
    *(_BYTE *)(this + 8) = 1;
    sub_5F89F0(*(_DWORD **)(this + 4), this);
    (*(void (__thiscall **)(int, int, int))(*(_DWORD *)dword_15E55E8 + 124))(dword_15E55E8, this, 1);
    result = (void (__thiscall ****)(_DWORD, _DWORD))(*(int (__thiscall **)(int, int))(*(_DWORD *)this + 216))(this, 1);
    if ( *(_DWORD *)(this + 428) != -1 )
    {
      if ( operator new(0x24u) )
        v3 = (void (__thiscall ***)(_DWORD, _DWORD))sub_603300(0);
      else
        v3 = 0;
      return sub_5F5DF0((void (__thiscall ****)(_DWORD, _DWORD))this, v3);
    }
  }
  return result;
}


//======================================================================
// sub_601DA0
// entry 00601da0  size 233  status ok
//======================================================================

void (__thiscall ****__thiscall sub_601DA0(int this, int a2))(_DWORD, _DWORD)
{
  void (__thiscall ****result)(_DWORD, _DWORD); // eax
  void (__thiscall ***v3)(_DWORD, _DWORD); // [esp+4h] [ebp-1Ch]

  result = (void (__thiscall ****)(_DWORD, _DWORD))this;
  if ( *(_BYTE *)(this + 437) )
  {
    *(_BYTE *)(a2 + 4) = 1;
    *(_BYTE *)(this + 9) = 1;
    sub_5F89F0(*(_DWORD **)(this + 4), this);
    (*(void (__thiscall **)(int, int, int))(*(_DWORD *)dword_15E55E8 + 124))(dword_15E55E8, this, 1);
    result = (void (__thiscall ****)(_DWORD, _DWORD))(*(int (__thiscall **)(int, int))(*(_DWORD *)this + 216))(this, 1);
    if ( *(_DWORD *)(this + 428) != -1 )
    {
      if ( operator new(0x24u) )
        v3 = (void (__thiscall ***)(_DWORD, _DWORD))sub_603300(1);
      else
        v3 = 0;
      return sub_5F5DF0((void (__thiscall ****)(_DWORD, _DWORD))this, v3);
    }
  }
  return result;
}


//======================================================================
// sub_601E90
// entry 00601e90  size 188  status ok
//======================================================================

int __thiscall sub_601E90(int this, int a2)
{
  sub_5F89F0(*(_DWORD **)(this + 4), 0);
  sub_5F5DF0((void (__thiscall ****)(_DWORD, _DWORD))this, 0);
  *(_BYTE *)(a2 + 4) = 1;
  *(_BYTE *)(this + 8) = 0;
  *(_BYTE *)(this + 9) = 0;
  if ( (*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)this + 132))(this, a2) )
  {
    (*(void (__thiscall **)(int, int))(*(_DWORD *)this + 216))(this, 3);
    (*(void (__thiscall **)(int, int, int))(*(_DWORD *)dword_15E55E8 + 124))(dword_15E55E8, this, 3);
    return (*(int (__thiscall **)(int))(*(_DWORD *)this + 192))(this);
  }
  else
  {
    (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)dword_15E55E8 + 124))(dword_15E55E8, this, 0);
    return (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)this + 216))(this, 0);
  }
}


//======================================================================
// sub_601F50
// entry 00601f50  size 206  status ok
//======================================================================

int __thiscall sub_601F50(int this, int a2)
{
  int result; // eax

  result = this;
  if ( *(_BYTE *)(this + 437) )
  {
    sub_5F89F0(*(_DWORD **)(this + 4), 0);
    sub_5F5DF0((void (__thiscall ****)(_DWORD, _DWORD))this, 0);
    *(_BYTE *)(a2 + 4) = 1;
    *(_BYTE *)(this + 8) = 0;
    *(_BYTE *)(this + 9) = 0;
    if ( (*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)this + 132))(this, a2) )
    {
      (*(void (__thiscall **)(int, int, int))(*(_DWORD *)dword_15E55E8 + 124))(dword_15E55E8, this, 3);
      (*(void (__thiscall **)(int, int))(*(_DWORD *)this + 216))(this, 3);
      return (*(int (__thiscall **)(int))(*(_DWORD *)this + 196))(this);
    }
    else
    {
      (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)dword_15E55E8 + 124))(dword_15E55E8, this, 0);
      return (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)this + 216))(this, 0);
    }
  }
  return result;
}


//======================================================================
// sub_602020
// entry 00602020  size 371  status ok
//======================================================================

void (__thiscall ****__thiscall sub_602020(int this, int a2))(_DWORD, _DWORD)
{
  void (__thiscall ****result)(_DWORD, _DWORD); // eax

  if ( *(_BYTE *)(this + 8) || *(_BYTE *)(this + 437) && *(_BYTE *)(this + 9) )
  {
    *(_BYTE *)(a2 + 4) = 1;
    if ( (*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)this + 132))(this, a2) )
    {
      (*(void (__thiscall **)(int, int, int))(*(_DWORD *)dword_15E55E8 + 124))(dword_15E55E8, this, 1);
      return (void (__thiscall ****)(_DWORD, _DWORD))(*(int (__thiscall **)(int, int))(*(_DWORD *)this + 216))(this, 1);
    }
    else
    {
      (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)dword_15E55E8 + 124))(dword_15E55E8, this, 0);
      (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)this + 216))(this, 0);
      return sub_5F5DF0((void (__thiscall ****)(_DWORD, _DWORD))this, 0);
    }
  }
  else if ( !(*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)this + 132))(this, a2) || *(_BYTE *)(a2 + 4) )
  {
    (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)dword_15E55E8 + 124))(dword_15E55E8, this, 0);
    return (void (__thiscall ****)(_DWORD, _DWORD))(*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)this + 216))(this, 0);
  }
  else
  {
    (*(void (__thiscall **)(int, int, int))(*(_DWORD *)dword_15E55E8 + 124))(dword_15E55E8, this, 3);
    result = (void (__thiscall ****)(_DWORD, _DWORD))(*(int (__thiscall **)(int, int))(*(_DWORD *)this + 216))(this, 3);
    *(_BYTE *)(a2 + 4) = 1;
  }
  return result;
}


//======================================================================
// sub_6021A0
// entry 006021a0  size 123  status ok
//======================================================================

bool __thiscall sub_6021A0(char *this, int a2)
{
  return !*(_BYTE *)(a2 + 4)
      && (tolower(*(char *)(a2 + 20)) == *(this + 425)
       || tolower(*(char *)(a2 + 20)) == *(this + 426)
       || tolower(*(char *)(a2 + 20)) == *(this + 427));
}


//======================================================================
// sub_602220
// entry 00602220  size 267  status ok
//======================================================================

int __thiscall sub_602220(_DWORD *this, int a2)
{
  bool v3; // [esp+0h] [ebp-10h]

  v3 = tolower(*(char *)(a2 + 20)) == *((char *)this + 425) || tolower(*(char *)(a2 + 20)) == *((char *)this + 426);
  (*(void (__thiscall **)(int, _DWORD *, int))(*(_DWORD *)dword_15E55E8 + 124))(dword_15E55E8, this, 1);
  (*(void (__thiscall **)(_DWORD *, int))(*this + 216))(this, 1);
  sub_613F80(*(_DWORD *)(*(this + 1) + 424));
  sub_5E9F00(0x64u);
  (*(void (__thiscall **)(int, _DWORD *, _DWORD))(*(_DWORD *)dword_15E55E8 + 124))(dword_15E55E8, this, 0);
  (*(void (__thiscall **)(_DWORD *, _DWORD))(*this + 216))(this, 0);
  *(_BYTE *)(a2 + 4) = 1;
  if ( v3 )
    return (*(int (__thiscall **)(_DWORD *))(*this + 192))(this);
  else
    return (*(int (__thiscall **)(_DWORD *))(*this + 196))(this);
}


//======================================================================
// sub_602330
// entry 00602330  size 48  status ok
//======================================================================

int __thiscall sub_602330(pairNode *this)
{
  int result; // eax
  int v2; // eax

  result = (int)this;
  if ( *((_DWORD *)this + 1) )
  {
    v2 = pairNode::raw_length(this);
    return (*(int (__thiscall **)(_DWORD, int))(**((_DWORD **)this + 1) + 24))(*((_DWORD *)this + 1), v2);
  }
  return result;
}


//======================================================================
// sub_602360
// entry 00602360  size 48  status ok
//======================================================================

int __thiscall sub_602360(pairNode *this)
{
  int result; // eax
  int v2; // eax

  result = (int)this;
  if ( *((_DWORD *)this + 1) )
  {
    v2 = pairNode::raw_length(this);
    return (*(int (__thiscall **)(_DWORD, int))(**((_DWORD **)this + 1) + 28))(*((_DWORD *)this + 1), v2);
  }
  return result;
}


//======================================================================
// sub_602390
// entry 00602390  size 53  status ok
//======================================================================

int __thiscall sub_602390(_DWORD *this, int a2)
{
  int result; // eax

  result = sub_5EAF00((int)this, a2);
  if ( *(this + 100) )
    return (*(int (__thiscall **)(_DWORD *))(*this + 232))(this);
  return result;
}


//======================================================================
// sub_6023D0
// entry 006023d0  size 77  status ok
//======================================================================

int __thiscall sub_6023D0(_DWORD *this, int a2, int a3, int a4, int a5)
{
  *(this + 102) = a2;
  *(this + 103) = a3;
  *(this + 104) = a4;
  *(this + 105) = a5;
  return (*(int (__thiscall **)(_DWORD *, _DWORD *))(*this + 236))(this, this);
}


//======================================================================
// sub_602420
// entry 00602420  size 79  status ok
//======================================================================

int __thiscall sub_602420(_DWORD *this)
{
  *(this + 102) = 0;
  *(this + 103) = 1;
  *(this + 104) = 2;
  *(this + 105) = 3;
  return (*(int (__thiscall **)(_DWORD *, _DWORD *))(*this + 236))(this, this);
}


//======================================================================
// sub_602470
// entry 00602470  size 57  status ok
//======================================================================

int __thiscall sub_602470(_DWORD *this, int a2, int a3)
{
  int result; // eax

  result = sub_5EB260(this, a2, a3);
  if ( *(this + 100) )
    return (*(int (__thiscall **)(_DWORD *))(*this + 232))(this);
  return result;
}


//======================================================================
// sub_6024B0
// entry 006024b0  size 71  status ok
//======================================================================

int __thiscall sub_6024B0(int this, int a2)
{
  int result; // eax

  result = sub_5F5300((_DWORD *)this, a2);
  if ( *(_DWORD *)(this + 400) )
    return (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 400) + 108))(*(_DWORD *)(this + 400), a2 + 1);
  return result;
}


//======================================================================
// sub_602500
// entry 00602500  size 72  status ok
//======================================================================

int __thiscall sub_602500(int this)
{
  int result; // eax

  sub_5EB570((_BYTE *)this);
  result = this;
  if ( *(_DWORD *)(this + 400) )
  {
    (*(void (__thiscall **)(int))(*(_DWORD *)this + 232))(this);
    return (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 400) + 116))(*(_DWORD *)(this + 400));
  }
  return result;
}


//======================================================================
// sub_602550
// entry 00602550  size 112  status ok
//======================================================================

void __thiscall sub_602550(int this)
{
  *(_BYTE *)(this + 8) = 0;
  *(_BYTE *)(this + 9) = 0;
  sub_5F5DF0((void (__thiscall ****)(_DWORD, _DWORD))this, 0);
  if ( *(_BYTE *)(this + 424) )
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)this + 216))(this, 0);
  sub_5EB5A0((CWnd *)this);
  if ( *(_DWORD *)(this + 400) )
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 400) + 112))(*(_DWORD *)(this + 400));
}


//======================================================================
// sub_6025C0
// entry 006025c0  size 143  status ok
//======================================================================

int __thiscall sub_6025C0(_BYTE *this)
{
  int v1; // eax
  int v3; // [esp-4h] [ebp-8h]

  if ( !*(this + 424) )
  {
    *(this + 8) = 0;
    *(this + 9) = 0;
  }
  *(this + 424) = 1;
  if ( *((_DWORD *)this + 1)
    && (v3 = unknown_libname_621(*((_DWORD *)this + 1)),
        v1 = unknown_libname_620(*((_DWORD *)this + 1)),
        (*(unsigned __int8 (__thiscall **)(_BYTE *, int, int))(*(_DWORD *)this + 128))(this, v1, v3)) )
  {
    return (*(int (__thiscall **)(_BYTE *, int))(*(_DWORD *)this + 216))(this, 3);
  }
  else
  {
    return (*(int (__thiscall **)(_BYTE *, _DWORD))(*(_DWORD *)this + 216))(this, 0);
  }
}


//======================================================================
// sub_602650
// entry 00602650  size 63  status ok
//======================================================================

int __thiscall sub_602650(int this)
{
  *(_BYTE *)(this + 424) = 0;
  *(_BYTE *)(this + 8) = 0;
  *(_BYTE *)(this + 9) = 0;
  sub_5F5DF0((void (__thiscall ****)(_DWORD, _DWORD))this, 0);
  return (*(int (__thiscall **)(int, int))(*(_DWORD *)this + 216))(this, 2);
}


//======================================================================
// sub_602690
// entry 00602690  size 55  status ok
//======================================================================

int __thiscall sub_602690(void *this, char a2)
{
  if ( a2 )
    return (*(int (__thiscall **)(void *))(*(_DWORD *)this + 204))(this);
  else
    return (*(int (__thiscall **)(void *))(*(_DWORD *)this + 208))(this);
}


//======================================================================
// sub_6026D0
// entry 006026d0  size 20  status ok
//======================================================================

char __thiscall sub_6026D0(_BYTE *this)
{
  return *(this + 424);
}


//======================================================================
// sub_6026F0
// entry 006026f0  size 36  status ok
//======================================================================

int __thiscall sub_6026F0(_BYTE *this, char a2)
{
  int result; // eax

  result = tolower(a2);
  *(this + 425) = result;
  return result;
}


//======================================================================
// sub_602740
// entry 00602740  size 36  status ok
//======================================================================

int __thiscall sub_602740(_BYTE *this, char a2)
{
  int result; // eax

  result = tolower(a2);
  *(this + 426) = result;
  return result;
}


//======================================================================
// sub_602790
// entry 00602790  size 55  status ok
//======================================================================

int __thiscall sub_602790(int this, char a2)
{
  int result; // eax

  result = sub_5EB5D0((_BYTE *)this, a2);
  if ( *(_DWORD *)(this + 400) )
    return sub_5F0AE0(*(_DWORD *)(this + 400), a2);
  return result;
}


//======================================================================
// sub_6027D0
// entry 006027d0  size 55  status ok
//======================================================================

int __thiscall sub_6027D0(_DWORD *this, int a2)
{
  int result; // eax

  result = (int)this;
  if ( *(this + 101) != a2 )
  {
    *(this + 101) = a2;
    return (*(int (__thiscall **)(_DWORD *))(*this + 236))(this);
  }
  return result;
}


//======================================================================
// sub_602810
// entry 00602810  size 20  status ok
//======================================================================

int __thiscall sub_602810(_DWORD *this)
{
  return *(this + 101);
}


//======================================================================
// sub_602830
// entry 00602830  size 710  status ok
//======================================================================

int __thiscall sub_602830(int this, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  int v8; // eax
  _DWORD *v9; // eax
  int v10; // esi
  int v11; // esi
  int v12; // eax
  int result; // eax
  int v14; // [esp-10h] [ebp-5Ch]
  int v15; // [esp-Ch] [ebp-58h]
  int v16; // [esp-8h] [ebp-54h]
  int v17; // [esp+8h] [ebp-44h]
  int v18; // [esp+10h] [ebp-3Ch]
  int v19; // [esp+14h] [ebp-38h]
  int v20; // [esp+18h] [ebp-34h]
  int v22[4]; // [esp+20h] [ebp-2Ch] BYREF
  void *v23; // [esp+30h] [ebp-1Ch]
  int v24; // [esp+34h] [ebp-18h]
  void (__thiscall ***v25)(_DWORD, int); // [esp+38h] [ebp-14h]
  void (__thiscall ***v26)(_DWORD, int); // [esp+3Ch] [ebp-10h]
  int v27; // [esp+48h] [ebp-4h]

  *(_DWORD *)(this + 456) = a3;
  if ( a4 == -1 )
    v20 = *(_DWORD *)(this + 456);
  else
    v20 = a4;
  *(_DWORD *)(this + 468) = v20;
  if ( a5 == -1 )
    v19 = *(_DWORD *)(this + 456);
  else
    v19 = a5;
  *(_DWORD *)(this + 464) = v19;
  if ( a6 == -1 )
    v18 = *(_DWORD *)(this + 468);
  else
    v18 = a6;
  *(_DWORD *)(this + 460) = v18;
  if ( *(_DWORD *)(this + 400) )
  {
    v25 = *(void (__thiscall ****)(_DWORD, int))(this + 400);
    v26 = v25;
    if ( v25 )
      (**v26)(v26, 1);
    *(_DWORD *)(this + 400) = 0;
  }
  v23 = operator new(0x1D0u);
  v27 = 0;
  if ( v23 )
  {
    sub_5EC5A0(v23);
    v17 = v8;
  }
  else
  {
    v17 = 0;
  }
  v24 = v17;
  v27 = -1;
  *(_DWORD *)(this + 400) = v17;
  *(_DWORD *)(*(_DWORD *)(this + 400) + 4) = *(_DWORD *)(this + 4);
  if ( *(_DWORD *)(this + 76) )
  {
    v9 = sub_5EBF80((_DWORD *)this, v22);
    *(_DWORD *)(this + 440) = *v9;
    *(_DWORD *)(this + 444) = v9[1];
    *(_DWORD *)(this + 448) = v9[2];
    *(_DWORD *)(this + 452) = v9[3];
  }
  else
  {
    *(_DWORD *)(this + 440) = 0;
    *(_DWORD *)(this + 448) = sub_5F5550((_DWORD *)this);
    *(_DWORD *)(this + 444) = 0;
    *(_DWORD *)(this + 452) = sub_5F5590((_DWORD *)this);
  }
  v16 = *(_DWORD *)(this + 472);
  v15 = CMediaType::IsFixedSize((CMediaType *)this) + 1;
  v10 = *(_DWORD *)(this + 444) + (*(int (__thiscall **)(int))(*(_DWORD *)this + 84))(this);
  v14 = sub_5EB4B0((_DWORD *)this) + v10;
  v11 = *(_DWORD *)(this + 440) + (*(int (__thiscall **)(int))(*(_DWORD *)this + 76))(this);
  v12 = sub_5EB470((_DWORD *)this);
  sub_5EC8F0(
    *(void **)(this + 400),
    a2,
    *(_DWORD *)(this + 456),
    *(_DWORD *)(this + 448) - *(_DWORD *)(this + 440) + 1,
    *(_DWORD *)(this + 452) - *(_DWORD *)(this + 444) + 1,
    v12 + v11,
    v14,
    v15,
    v16,
    -1);
  sub_5EF340(*(_DWORD **)(this + 400), a7, a8);
  (*(void (__thiscall **)(int))(*(_DWORD *)this + 232))(this);
  result = sub_5F54A0((unsigned __int8 *)this);
  if ( (_BYTE)result )
    return (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 400) + 116))(*(_DWORD *)(this + 400));
  return result;
}


//======================================================================
// sub_602B00
// entry 00602b00  size 57  status ok
//======================================================================

int __thiscall sub_602B00(_DWORD **this, int a2)
{
  int result; // eax

  result = (int)this;
  if ( *(this + 100) )
    return (*(int (__thiscall **)(_DWORD, int))(**(this + 100) + 180))(*(this + 100), a2);
  return result;
}


//======================================================================
// sub_602B40
// entry 00602b40  size 43  status ok
//======================================================================

_DWORD **__thiscall sub_602B40(_DWORD **this, char *Str)
{
  _DWORD **result; // eax

  result = this;
  if ( *(this + 100) )
    return (_DWORD **)sub_5EE710(*(this + 100), Str);
  return result;
}


//======================================================================
// sub_602B70
// entry 00602b70  size 58  status ok
//======================================================================

const char *__thiscall sub_602B70(_DWORD **this)
{
  if ( *(this + 100) )
    return (const char *)(*(int (__thiscall **)(_DWORD))(**(this + 100) + 184))(*(this + 100));
  else
    return &Source;
}


//======================================================================
// sub_602BE0
// entry 00602be0  size 296  status ok
//======================================================================

int __thiscall sub_602BE0(int this)
{
  _DWORD *v1; // eax
  int v2; // esi
  int v3; // eax
  int v4; // esi
  int v5; // eax
  _DWORD v8[4]; // [esp+8h] [ebp-10h] BYREF

  if ( *(_DWORD *)(this + 76) )
  {
    v1 = sub_5EBF80((_DWORD *)this, v8);
    *(_DWORD *)(this + 440) = *v1;
    *(_DWORD *)(this + 444) = v1[1];
    *(_DWORD *)(this + 448) = v1[2];
    *(_DWORD *)(this + 452) = v1[3];
  }
  else
  {
    *(_DWORD *)(this + 440) = 0;
    *(_DWORD *)(this + 448) = sub_5F5550((_DWORD *)this);
    *(_DWORD *)(this + 444) = 0;
    *(_DWORD *)(this + 452) = sub_5F5590((_DWORD *)this);
  }
  sub_5ECC60(*(_DWORD **)(this + 400), *(_DWORD *)(this + 448) - *(_DWORD *)(this + 440) + 1);
  sub_5ECCB0(*(_DWORD **)(this + 400), *(_DWORD *)(this + 452) - *(_DWORD *)(this + 444) + 1);
  v2 = *(_DWORD *)(this + 444) + (*(int (__thiscall **)(int))(*(_DWORD *)this + 84))(this);
  v3 = sub_5EB4B0((_DWORD *)this);
  v4 = *(_DWORD *)(this + 440) + (*(int (__thiscall **)(int, int))(*(_DWORD *)this + 76))(this, v3 + v2);
  v5 = sub_5EB470((_DWORD *)this);
  return (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 400) + 68))(*(_DWORD *)(this + 400), v5 + v4);
}


//======================================================================
// sub_602E00
// entry 00602e00  size 43  status ok
//======================================================================

int __thiscall sub_602E00(_DWORD **this, int a2)
{
  int result; // eax

  result = (int)this;
  if ( *(this + 100) )
    return sub_5EF310(*(this + 100), a2);
  return result;
}


//======================================================================
// sub_602E30
// entry 00602e30  size 47  status ok
//======================================================================

int __thiscall sub_602E30(_DWORD **this, int a2, int a3)
{
  int result; // eax

  result = (int)this;
  if ( *(this + 100) )
    return sub_5EF340(*(this + 100), a2, a3);
  return result;
}


//======================================================================
// sub_602EB0
// entry 00602eb0  size 21  status ok
//======================================================================

_BYTE *__thiscall sub_602EB0(_BYTE *this)
{
  *(this + 436) = 1;
  return this;
}


//======================================================================
// sub_602ED0
// entry 00602ed0  size 20  status ok
//======================================================================

char __thiscall sub_602ED0(_BYTE *this)
{
  return *(this + 436);
}


//======================================================================
// sub_602EF0
// entry 00602ef0  size 37  status ok
//======================================================================

int __thiscall sub_602EF0(_DWORD *this, int a2, int a3)
{
  *(this + 107) = a2;
  *(this + 108) = a3;
  return a3;
}


//======================================================================
// sub_602F20
// entry 00602f20  size 20  status ok
//======================================================================

char __thiscall sub_602F20(_BYTE *this)
{
  return *(this + 438);
}


//======================================================================
// sub_602F40
// entry 00602f40  size 25  status ok
//======================================================================

_BYTE *__thiscall sub_602F40(_BYTE *this, char a2)
{
  *(this + 438) = a2;
  return this;
}


//======================================================================
// sub_602F60
// entry 00602f60  size 417  status ok
//======================================================================

void __thiscall sub_602F60(_BYTE *this)
{
  int v1; // [esp-4h] [ebp-Ch]
  int v2; // [esp-4h] [ebp-Ch]
  int v3; // [esp-4h] [ebp-Ch]
  int v4; // [esp-4h] [ebp-Ch]

  if ( !sub_602ED0(this) )
  {
    switch ( *((_DWORD *)this + 101) )
    {
      case 0:
        (*(void (__thiscall **)(_BYTE *, _DWORD))(*(_DWORD *)this + 176))(this, *((_DWORD *)this + 102));
        if ( *((_DWORD *)this + 100) )
        {
          HIBYTE(v1) = HIBYTE(this);
          LOWORD(v1) = word_75EE1C;
          BYTE2(v1) = byte_75EE1E;
          sub_5ECD00(*((_DWORD **)this + 100), *((_DWORD *)this + 114), -1, v1);
        }
        break;
      case 1:
        (*(void (__thiscall **)(_BYTE *, _DWORD))(*(_DWORD *)this + 176))(this, *((_DWORD *)this + 103));
        if ( *((_DWORD *)this + 100) )
        {
          HIBYTE(v2) = HIBYTE(this);
          LOWORD(v2) = word_75EE1C;
          BYTE2(v2) = byte_75EE1E;
          sub_5ECD00(*((_DWORD **)this + 100), *((_DWORD *)this + 117), -1, v2);
        }
        break;
      case 2:
        (*(void (__thiscall **)(_BYTE *, _DWORD))(*(_DWORD *)this + 176))(this, *((_DWORD *)this + 104));
        if ( *((_DWORD *)this + 100) )
        {
          HIBYTE(v3) = HIBYTE(this);
          LOWORD(v3) = word_75EE1C;
          BYTE2(v3) = byte_75EE1E;
          sub_5ECD00(*((_DWORD **)this + 100), *((_DWORD *)this + 116), -1, v3);
        }
        break;
      case 3:
        (*(void (__thiscall **)(_BYTE *, _DWORD))(*(_DWORD *)this + 176))(this, *((_DWORD *)this + 105));
        if ( *((_DWORD *)this + 100) )
        {
          HIBYTE(v4) = HIBYTE(this);
          LOWORD(v4) = word_75EE1C;
          BYTE2(v4) = byte_75EE1E;
          sub_5ECD00(*((_DWORD **)this + 100), *((_DWORD *)this + 117), -1, v4);
        }
        break;
      default:
        return;
    }
  }
}


//======================================================================
// sub_603120
// entry 00603120  size 69  status ok
//======================================================================

_DWORD *__thiscall sub_603120(void *this, int a2, int a3, int a4)
{
  _DWORD *v5; // [esp+0h] [ebp-4h]

  Concurrency::overwrite_buffer<enum Concurrency::agent_status>::overwrite_buffer<enum Concurrency::agent_status>(this);
  *v5 = &sciRolloverButton::`vftable';
  v5[119] = a2;
  v5[120] = a3;
  v5[121] = a4;
  return v5;
}


//======================================================================
// sub_603190
// entry 00603190  size 49  status ok
//======================================================================

int __thiscall sub_603190(_DWORD *this, int a2, int a3, int a4)
{
  *(this + 119) = a2;
  *(this + 120) = a3;
  *(this + 121) = a4;
  return a3;
}


//======================================================================
// sub_6031D0
// entry 006031d0  size 296  status ok
//======================================================================

int __thiscall sub_6031D0(_DWORD *this, int a2)
{
  if ( *(this + 101) == 3 && a2 == 1 )
  {
    if ( *(this + 119) )
      (*(void (__thiscall **)(int, _DWORD, _DWORD, _DWORD, int, int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)dword_15E55E8
                                                                                            + 128))(
        dword_15E55E8,
        *(this + 119),
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
      if ( *(this + 121) )
        (*(void (__thiscall **)(int, _DWORD, _DWORD, _DWORD, int, int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)dword_15E55E8
                                                                                              + 128))(
          dword_15E55E8,
          *(this + 121),
          0,
          0,
          5,
          1,
          1.0,
          0.5,
          0);
    }
    else if ( *(this + 120) )
    {
      (*(void (__thiscall **)(int, _DWORD, _DWORD, _DWORD, int, int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)dword_15E55E8
                                                                                            + 128))(
        dword_15E55E8,
        *(this + 120),
        0,
        0,
        5,
        1,
        1.0,
        0.5,
        0);
    }
  }
  return sub_6027D0(this, a2);
}


//======================================================================
// sub_603300
// entry 00603300  size 44  status ok
//======================================================================

ATL::CCRTHeap *__thiscall sub_603300(ATL::CCRTHeap *this, char a2)
{
  sub_5FC0D0(this, 0);
  *(_DWORD *)this = &sciButtonRepeatScript::`vftable';
  *((_BYTE *)this + 32) = a2;
  return this;
}


//======================================================================
// sub_603330
// entry 00603330  size 192  status ok
//======================================================================

char __thiscall sub_603330(unsigned __int8 **this)
{
  int v1; // eax

  v1 = unknown_libname_843(this);
  if ( v1 )
  {
    if ( v1 == 1 )
    {
      (*((void (__thiscall **)(unsigned __int8 **, _DWORD, _DWORD))*this + 2))(this, 0, *((_DWORD *)*(this + 3) + 108));
      LOBYTE(v1) = sub_6026D0(*(this + 3));
      if ( (_BYTE)v1 )
      {
        LOBYTE(v1) = sub_5F54A0(*(this + 3));
        if ( (_BYTE)v1 )
        {
          if ( *((_BYTE *)this + 32) )
            LOBYTE(v1) = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 3) + 196))(*(this + 3));
          else
            LOBYTE(v1) = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 3) + 192))(*(this + 3));
        }
      }
    }
  }
  else
  {
    LOBYTE(v1) = (*((int (__thiscall **)(unsigned __int8 **, int, _DWORD))*this + 2))(
                   this,
                   1,
                   *((_DWORD *)*(this + 3) + 107));
  }
  return v1;
}


//======================================================================
// sub_6033F0
// entry 006033f0  size 232  status ok
//======================================================================

char **__thiscall sub_6033F0(char **this, char *Str)
{
  size_t v2; // eax

  sub_62AEA0(this);
  *this = (char *)&ResourceManager::`vftable';
  sub_62A870();
  sub_62A870();
  if ( Str )
  {
    v2 = strlen(Str);
    *(this + 18) = (char *)operator new(v2 + 1);
    strcpy(*(this + 18), Str);
    sub_604500(Str);
  }
  else
  {
    *(this + 18) = 0;
    sub_603670();
  }
  sub_62AA20(this);
  return this;
}


//======================================================================
// sub_6034E0
// entry 006034e0  size 400  status ok
//======================================================================

int __thiscall sub_6034E0(void **this)
{
  void (__thiscall ***v3)(_DWORD, int); // [esp+28h] [ebp-1Ch]
  void (__thiscall ***v4)(_DWORD, int); // [esp+30h] [ebp-14h]
  int i; // [esp+34h] [ebp-10h]

  *this = &ResourceManager::`vftable';
  if ( *(this + 18) )
    operator delete(*(this + 18));
  sub_62AB60(this);
  for ( i = sub_62AC30(this + 10); i; i = sub_62AC30(this + 10) )
  {
    sub_62AB60(i);
    v3 = *(void (__thiscall ****)(_DWORD, int))(i + 8);
    if ( v3 )
      (**v3)(v3, 1);
    (**(void (__thiscall ***)(int, int))i)(i, 1);
  }
  while ( 1 )
  {
    v4 = (void (__thiscall ***)(_DWORD, int))sub_62AC30(this + 2);
    if ( !v4 )
      break;
    sub_62AB60(v4);
    (**v4)(v4, 1);
  }
  sub_62A900();
  sub_62A900();
  return sub_62AEF0(this);
}


//======================================================================
// sub_603670
// entry 00603670  size 1123  status ok
//======================================================================

char __thiscall sub_603670(char *this)
{
  int v1; // eax
  int v2; // eax
  char v4; // [esp+0h] [ebp-55Ch]
  int v5; // [esp+4h] [ebp-558h]
  int v6; // [esp+8h] [ebp-554h]
  void *v8; // [esp+10h] [ebp-54Ch]
  void *v9; // [esp+18h] [ebp-544h]
  char Format[316]; // [esp+20h] [ebp-53Ch] BYREF
  int k; // [esp+15Ch] [ebp-400h]
  char Buffer[316]; // [esp+160h] [ebp-3FCh] BYREF
  int j; // [esp+29Ch] [ebp-2C0h]
  char Str2[400]; // [esp+2A0h] [ebp-2BCh] BYREF
  char Destination[268]; // [esp+430h] [ebp-12Ch] BYREF
  int i; // [esp+540h] [ebp-1Ch]
  int v17; // [esp+544h] [ebp-18h]
  FILE *Stream; // [esp+548h] [ebp-14h]
  int v19; // [esp+54Ch] [ebp-10h]
  int v20; // [esp+558h] [ebp-4h]

  v19 = 0;
LABEL_2:
  if ( v19 < 200 && (&dword_796720)[v19] )
  {
    strcpy(Destination, (&dword_796720)[v19]);
    sub_5EA540(Destination);
    for ( i = 0; ; ++i )
    {
      while ( 1 )
      {
        if ( !(&dword_7960E0)[i] )
        {
          ++v19;
          goto LABEL_2;
        }
        strcpy(Str2, Destination);
        strcat(Str2, (&dword_7960E0)[i]);
        Stream = sub_5EA9C0(Str2, "rb");
        if ( Stream )
          break;
LABEL_23:
        ++i;
      }
      fclose(Stream);
      for ( j = ATL::COleDateTime::GetStatus(this + 8) - 1; j >= 0; --j )
      {
        v1 = sub_62ADE0(j);
        if ( !strcmp((const char *)(v1 + 25), Str2) )
          break;
      }
      if ( j < 0 )
      {
        v9 = operator new(0x11Cu);
        v20 = 0;
        if ( v9 )
          v6 = sub_62AF50(v9);
        else
          v6 = 0;
        v20 = -1;
        v17 = v6;
        sub_62B0A0(Str2, "rb");
        if ( v17 == -25 || *(char *)(v17 + 25) != byte_795F6C )
          sub_62AA70(v17);
        else
          sub_62AA20(v17);
        if ( byte_795FB4 )
        {
          sprintf(Buffer, "Found %s\r\n", Str2);
          sub_62FDE0(Buffer, v4);
        }
        goto LABEL_23;
      }
    }
  }
  if ( byte_795F6C )
  {
    for ( i = 0; ; ++i )
    {
      while ( 1 )
      {
        if ( !(&dword_7960E0)[i] )
          return 1;
        Str2[0] = byte_795F6C;
        Str2[1] = 0;
        strcat(Str2, ":\\");
        strcat(Str2, (&dword_7960E0)[i]);
        Stream = sub_5EA9C0(Str2, "rb");
        if ( Stream )
          break;
LABEL_40:
        ++i;
      }
      fclose(Stream);
      for ( k = ATL::COleDateTime::GetStatus(this + 8) - 1; k >= 0; --k )
      {
        v2 = sub_62ADE0(k);
        if ( !strcmp((const char *)(v2 + 25), Str2) )
          break;
      }
      if ( k < 0 )
      {
        v8 = operator new(0x11Cu);
        v20 = 1;
        if ( v8 )
          v5 = sub_62AF50(v8);
        else
          v5 = 0;
        v20 = -1;
        v17 = v5;
        sub_62B0A0(Str2, "rb");
        sub_62AA20(v17);
        if ( byte_795FB4 )
        {
          sprintf(Format, "Found %s\r\n", Str2);
          sub_62FDE0(Format, v4);
        }
        goto LABEL_40;
      }
    }
  }
  return 1;
}


//======================================================================
// sub_603AE0
// entry 00603ae0  size 183  status ok
//======================================================================

void __stdcall sub_603AE0(int a1)
{
  _DWORD *v1; // [esp+4h] [ebp-20h]
  _DWORD *v2; // [esp+Ch] [ebp-18h]

  if ( a1 )
  {
    v2 = operator new(0x10u);
    if ( v2 )
    {
      sub_62AEA0(v2);
      *v2 = &ResourceNode::`vftable';
      v1 = v2;
    }
    else
    {
      v1 = 0;
    }
    v1[2] = a1;
    v1[3] = 1;
    sub_62AA20(v1);
  }
}


//======================================================================
// sub_603C50
// entry 00603c50  size 855  status ok
//======================================================================

int __thiscall sub_603C50(void *this, int a2, int a3, char a4)
{
  int v5; // [esp+Ch] [ebp-70h]
  int v6; // [esp+10h] [ebp-6Ch]
  int v7; // [esp+14h] [ebp-68h]
  int v8; // [esp+18h] [ebp-64h]
  int v9; // [esp+1Ch] [ebp-60h]
  _DWORD *v10; // [esp+24h] [ebp-58h]
  _DWORD *v12; // [esp+64h] [ebp-18h]
  int v13; // [esp+6Ch] [ebp-10h]

  v13 = sub_6043A0(a2, a3);
  if ( v13 )
  {
    ++*(_DWORD *)(v13 + 12);
    return *(_DWORD *)(v13 + 8);
  }
  v12 = operator new(0x10u);
  if ( v12 )
  {
    sub_62AEA0(v12);
    *v12 = &ResourceNode::`vftable';
    v10 = v12;
  }
  else
  {
    v10 = 0;
  }
  if ( a2 > 542655828 )
  {
    if ( a2 == 1196314451 )
    {
      if ( operator new(0x160u) )
        v8 = sub_61DC00(542523735, a3, this, 0);
      else
        v8 = 0;
      v10[2] = v8;
      goto LABEL_31;
    }
  }
  else
  {
    switch ( a2 )
    {
      case 542655828:
        if ( operator new(0x96Cu) )
          v5 = sub_615FE0(542655828, a3, this);
        else
          v5 = 0;
        v10[2] = v5;
        goto LABEL_31;
      case 540233805:
        if ( operator new(0x160u) )
          v7 = sub_61DC00(a2, a3, this, a4);
        else
          v7 = 0;
        v10[2] = v7;
        goto LABEL_31;
      case 541542223:
        if ( operator new(0x160u) )
          v6 = sub_61DC00(a2, a3, this, a4);
        else
          v6 = 0;
        v10[2] = v6;
        goto LABEL_31;
    }
  }
  if ( operator new(0x160u) )
    v9 = sub_61DC00(a2, a3, this, 1);
  else
    v9 = 0;
  v10[2] = v9;
LABEL_31:
  if ( v10[2] )
  {
    v10[3] = 1;
    sub_62AA20(v10);
    return v10[2];
  }
  else
  {
    if ( v10 )
      (*(void (__thiscall **)(_DWORD *, int))*v10)(v10, 1);
    return 0;
  }
}


//======================================================================
// sub_603FB0
// entry 00603fb0  size 530  status ok
//======================================================================

int __thiscall sub_603FB0(void *this, int a2, char *Str2)
{
  int v4; // [esp+Ch] [ebp-4Ch]
  int v5; // [esp+10h] [ebp-48h]
  _DWORD *v6; // [esp+18h] [ebp-40h]
  _DWORD *v8; // [esp+40h] [ebp-18h]
  int v9; // [esp+48h] [ebp-10h]

  v9 = sub_604400(a2, Str2);
  if ( v9 )
  {
    ++*(_DWORD *)(v9 + 12);
    return *(_DWORD *)(v9 + 8);
  }
  else
  {
    v8 = operator new(0x10u);
    if ( v8 )
    {
      sub_62AEA0(v8);
      *v8 = &ResourceNode::`vftable';
      v6 = v8;
    }
    else
    {
      v6 = 0;
    }
    if ( a2 == 542655828 )
    {
      if ( operator new(0x96Cu) )
        v4 = sub_616050(542655828, Str2, this);
      else
        v4 = 0;
      v6[2] = v4;
    }
    else
    {
      if ( operator new(0x160u) )
        v5 = sub_61DD90(a2, Str2, (int)this, 1);
      else
        v5 = 0;
      v6[2] = v5;
    }
    if ( v6[2] )
    {
      v6[3] = 1;
      sub_62AA20(v6);
      return v6[2];
    }
    else
    {
      if ( v6 )
        (*(void (__thiscall **)(_DWORD *, int))*v6)(v6, 1);
      return 0;
    }
  }
}


//======================================================================
// sub_6041D0
// entry 006041d0  size 75  status ok
//======================================================================

int __fastcall sub_6041D0(char a1, int a2, int a3)
{
  int result; // eax
  int v5; // [esp+4h] [ebp-4h]

  result = sub_604460(a3);
  v5 = result;
  if ( !result )
    return sub_62FDE0("Freeing an invalid resource!\n", a1);
  if ( *(int *)(result + 12) > 0 )
  {
    result = *(_DWORD *)(result + 12) - 1;
    *(_DWORD *)(v5 + 12) = result;
  }
  return result;
}


//======================================================================
// sub_604220
// entry 00604220  size 142  status ok
//======================================================================

int __stdcall sub_604220(int a1)
{
  int result; // eax
  int v2; // [esp+1Ch] [ebp-4h]

  result = sub_604460(a1);
  v2 = result;
  if ( result )
  {
    sub_62AB60(result);
    if ( *(_DWORD *)(v2 + 8) )
      (***(void (__thiscall ****)(_DWORD, int))(v2 + 8))(*(_DWORD *)(v2 + 8), 1);
    result = v2;
    if ( v2 )
      return (**(int (__thiscall ***)(int, int))v2)(v2, 1);
  }
  return result;
}


//======================================================================
// sub_6042B0
// entry 006042b0  size 226  status ok
//======================================================================

int __thiscall sub_6042B0(char *this, int a2)
{
  int result; // eax
  char v3; // [esp+0h] [ebp-20h]
  void (__thiscall ***v5)(_DWORD, int); // [esp+18h] [ebp-8h]
  int v6; // [esp+1Ch] [ebp-4h]

  v6 = sub_62AC30(this + 40);
  while ( 1 )
  {
    result = dword_7950A8;
    if ( dword_7950A8 <= a2 || !v6 )
      break;
    if ( *(_DWORD *)(v6 + 12) )
    {
      v6 = sub_62ACE0(this + 40);
    }
    else
    {
      if ( a2 )
        sub_62FDE0("Purging a resource.\n", v3);
      sub_62AB60(v6);
      v5 = *(void (__thiscall ****)(_DWORD, int))(v6 + 8);
      if ( v5 )
        (**v5)(v5, 1);
      v3 = (**(int (__thiscall ***)(int, int))v6)(v6, 1);
      v6 = sub_62AC30(this + 40);
    }
  }
  return result;
}


//======================================================================
// sub_6043A0
// entry 006043a0  size 82  status ok
//======================================================================

int __thiscall sub_6043A0(char *this, int a2, int a3)
{
  int i; // [esp+4h] [ebp-4h]

  for ( i = sub_62AC30(this + 40);
        i && (*(_DWORD *)(*(_DWORD *)(i + 8) + 48) != a2 || *(_DWORD *)(*(_DWORD *)(i + 8) + 52) != a3);
        i = sub_62ACE0(this + 40) )
  {
    ;
  }
  return i;
}


//======================================================================
// sub_604400
// entry 00604400  size 94  status ok
//======================================================================

int __thiscall sub_604400(char *this, int a2, char *Str2)
{
  int i; // [esp+4h] [ebp-4h]

  for ( i = sub_62AC30(this + 40);
        i && (*(_DWORD *)(*(_DWORD *)(i + 8) + 48) != a2 || strcmp((const char *)(*(_DWORD *)(i + 8) + 56), Str2));
        i = sub_62ACE0(this + 40) )
  {
    ;
  }
  return i;
}


//======================================================================
// sub_604460
// entry 00604460  size 65  status ok
//======================================================================

int __thiscall sub_604460(char *this, int a2)
{
  int i; // [esp+4h] [ebp-4h]

  for ( i = sub_62AC30(this + 40); i && *(_DWORD *)(i + 8) != a2; i = sub_62ACE0(this + 40) )
    ;
  return i;
}


//======================================================================
// sub_6044B0
// entry 006044b0  size 42  status ok
//======================================================================

int __thiscall sub_6044B0(void *this, int a2, int a3, char a4)
{
  int v4; // eax
  int v5; // edx
  char v7; // [esp+0h] [ebp-4h]

  v7 = (char)this;
  v4 = sub_603C50(this, a2, a3, a4);
  return sub_6041D0(v7, v5, v4);
}


//======================================================================
// sub_604500
// entry 00604500  size 774  status ok
//======================================================================

int __stdcall sub_604500(char *Source)
{
  FILE *v1; // eax
  int result; // eax
  char v3; // [esp+0h] [ebp-544h]
  int v4; // [esp+4h] [ebp-540h]
  int v5; // [esp+8h] [ebp-53Ch]
  void *v6; // [esp+10h] [ebp-534h]
  void *v7; // [esp+18h] [ebp-52Ch]
  char Format[312]; // [esp+20h] [ebp-524h] BYREF
  char Buffer[312]; // [esp+158h] [ebp-3ECh] BYREF
  char Str[400]; // [esp+290h] [ebp-2B4h] BYREF
  char Destination[264]; // [esp+420h] [ebp-124h] BYREF
  int v12; // [esp+52Ch] [ebp-18h]
  FILE *Stream; // [esp+530h] [ebp-14h]
  int i; // [esp+534h] [ebp-10h]
  int v15; // [esp+540h] [ebp-4h]

  for ( i = 0; i < 200 && (&dword_796720)[i]; ++i )
  {
    strcpy(Destination, (&dword_796720)[i]);
    sub_5EA540(Destination);
    strcpy(Str, Destination);
    strcat(Str, Source);
    v1 = sub_5EA9C0(Str, "rb");
    Stream = v1;
    if ( v1 )
    {
      fclose(Stream);
      v7 = operator new(0x11Cu);
      v15 = 0;
      if ( v7 )
        v5 = sub_62AF50(v7);
      else
        v5 = 0;
      v15 = -1;
      v12 = v5;
      sub_62B0A0(Str, "rb");
      sub_62AA70(v12);
      if ( byte_795FB4 )
      {
        sprintf(Buffer, "Found %s\r\n", Str);
        sub_62FDE0(Buffer, v3);
      }
    }
    ++i;
  }
  Str[0] = 0;
  if ( byte_795F6C )
  {
    Str[0] = byte_795F6C;
    Str[1] = 0;
    strcat(Str, ":\\");
  }
  result = Str[0];
  if ( Str[0] )
  {
    strcat(Str, Source);
    result = (int)sub_5EA9C0(Str, "rb");
    Stream = (FILE *)result;
    if ( result )
    {
      fclose(Stream);
      v6 = operator new(0x11Cu);
      v15 = 1;
      v4 = v6 ? sub_62AF50(v6) : 0;
      v15 = -1;
      v12 = v4;
      sub_62B0A0(Str, "rb");
      sub_62AA20(v12);
      result = (unsigned __int8)byte_795FB4;
      if ( byte_795FB4 )
      {
        sprintf(Format, "Found %s\r\n", Str);
        return sub_62FDE0(Format, v3);
      }
    }
  }
  return result;
}


//======================================================================
// sub_604810
// entry 00604810  size 176  status ok
//======================================================================

void __cdecl sub_604810(char *Str)
{
  size_t v1; // eax
  int i; // [esp+4h] [ebp-4h]

  if ( Str && *Str )
  {
    for ( i = 0; i < 200 && (&dword_796720)[i]; ++i )
      ;
    if ( i == 200 )
    {
      sub_5E9F20("false", "..\\scilib\\platform\\resman.cpp", 516);
    }
    else
    {
      v1 = strlen(Str);
      (&dword_796720)[i] = (char *)operator new(v1 + 1);
      strcpy((&dword_796720)[i], Str);
    }
  }
}


//======================================================================
// sub_6048C0
// entry 006048c0  size 77  status ok
//======================================================================

int sub_6048C0()
{
  int result; // eax
  int i; // [esp+4h] [ebp-4h]

  for ( i = 0; i < 200; ++i )
  {
    if ( (&dword_796720)[i] )
      operator delete((&dword_796720)[i]);
    result = i + 1;
  }
  return result;
}


//======================================================================
// sub_604910
// entry 00604910  size 176  status ok
//======================================================================

void __cdecl sub_604910(char *Str)
{
  size_t v1; // eax
  int i; // [esp+4h] [ebp-4h]

  if ( Str && *Str )
  {
    for ( i = 0; i < 200 && (&dword_796400)[i]; ++i )
      ;
    if ( i == 200 )
    {
      sub_5E9F20("false", "..\\scilib\\platform\\resman.cpp", 544);
    }
    else
    {
      v1 = strlen(Str);
      (&dword_796400)[i] = (char *)operator new(v1 + 1);
      strcpy((&dword_796400)[i], Str);
    }
  }
}


//======================================================================
// sub_6049C0
// entry 006049c0  size 91  status ok
//======================================================================

int sub_6049C0()
{
  int result; // eax
  int i; // [esp+4h] [ebp-4h]

  for ( i = 0; i < 200; ++i )
  {
    if ( (&dword_796400)[i] )
    {
      operator delete((&dword_796400)[i]);
      (&dword_796400)[i] = 0;
    }
    result = i + 1;
  }
  return result;
}


//======================================================================
// sub_604A20
// entry 00604a20  size 205  status ok
//======================================================================

void __cdecl sub_604A20(char *Str2)
{
  size_t v1; // eax
  int i; // [esp+4h] [ebp-4h]

  if ( Str2 && *Str2 )
  {
    for ( i = 0; i < 200 && (&dword_7960E0)[i]; ++i )
    {
      if ( !strcmp((&dword_7960E0)[i], Str2) )
        return;
    }
    if ( i == 200 )
    {
      sub_5E9F20("false", "..\\scilib\\platform\\resman.cpp", 579);
    }
    else
    {
      v1 = strlen(Str2);
      (&dword_7960E0)[i] = (char *)operator new(v1 + 1);
      strcpy((&dword_7960E0)[i], Str2);
    }
  }
}


//======================================================================
// sub_604AF0
// entry 00604af0  size 91  status ok
//======================================================================

int sub_604AF0()
{
  int result; // eax
  int i; // [esp+4h] [ebp-4h]

  for ( i = 0; i < 200; ++i )
  {
    if ( (&dword_7960E0)[i] )
    {
      operator delete((&dword_7960E0)[i]);
      (&dword_7960E0)[i] = 0;
    }
    result = i + 1;
  }
  return result;
}


//======================================================================
// sub_604B80
// entry 00604b80  size 317  status ok
//======================================================================

_DWORD *__thiscall sub_604B80(_DWORD *this)
{
  int v2; // [esp+4h] [ebp-28h]
  int v3; // [esp+8h] [ebp-24h]

  sub_5F49D0((int)this);
  *this = &sciSlider::`vftable';
  *(this + 32) = 1;
  *((_BYTE *)this + 108) = 1;
  *(this + 28) = -1;
  *(this + 29) = -1;
  *(this + 30) = -1;
  *(this + 31) = -1;
  *(this + 20) = -1;
  *(this + 21) = -1;
  *(this + 22) = -1;
  if ( operator new(0x188u) )
    v3 = sub_605540(this);
  else
    v3 = 0;
  *(this + 18) = v3;
  if ( operator new(0x17Cu) )
    v2 = sub_6058B0(this);
  else
    v2 = 0;
  *(this + 19) = v2;
  return this;
}


//======================================================================
// sub_604CC0
// entry 00604cc0  size 180  status ok
//======================================================================

void __thiscall sub_604CC0(CNoTrackObject *this)
{
  *(_DWORD *)this = &sciSlider::`vftable';
  if ( *((_DWORD *)this + 18) )
    (***((void (__thiscall ****)(_DWORD, int))this + 18))(*((_DWORD *)this + 18), 1);
  if ( *((_DWORD *)this + 19) )
    (***((void (__thiscall ****)(_DWORD, int))this + 19))(*((_DWORD *)this + 19), 1);
  sub_5F4AD0(this);
}


//======================================================================
// sub_604D80
// entry 00604d80  size 298  status ok
//======================================================================

int __thiscall sub_604D80(
        CPaneContainer *this,
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
        struct CPaneDivider *a13)
{
  (*(void (__thiscall **)(CPaneContainer *))(*(_DWORD *)this + 64))(this);
  CPaneContainer::SetPaneDivider(this, a13);
  *((_DWORD *)this + 32) = a10;
  *((_DWORD *)this + 20) = a11;
  *((_DWORD *)this + 21) = a12;
  *(_DWORD *)(*((_DWORD *)this + 19) + 4) = *((_DWORD *)this + 1);
  sub_5EAE80(a2, a3, a4, a5, -1);
  *(_DWORD *)(*((_DWORD *)this + 18) + 4) = *((_DWORD *)this + 1);
  if ( (unsigned __int8)sub_6050F0(this) )
  {
    *((_DWORD *)this + 23) = a8 + a3;
    *((_DWORD *)this + 24) = a9 + a3;
    *((_DWORD *)this + 26) = 0;
    *((_DWORD *)this + 25) = 0;
    return sub_5EAE80(a6, 0, a7 + a4, a5 + 1, -1);
  }
  else
  {
    *((_DWORD *)this + 25) = a8 + a4;
    *((_DWORD *)this + 26) = a9 + a4;
    *((_DWORD *)this + 24) = 0;
    *((_DWORD *)this + 23) = 0;
    return sub_5EAE80(a6, a7 + a3, 0, a5 + 1, -1);
  }
}


//======================================================================
// sub_604EF0
// entry 00604ef0  size 163  status ok
//======================================================================

int __thiscall sub_604EF0(_DWORD **this, int a2, int a3)
{
  int v3; // eax
  int v4; // eax
  int v7; // [esp+4h] [ebp-8h]
  int v8; // [esp+8h] [ebp-4h]

  v7 = a2 - (*(int (__thiscall **)(_DWORD))(**(this + 19) + 76))(*(this + 19));
  v8 = a3 - (*(int (__thiscall **)(_DWORD))(**(this + 19) + 84))(*(this + 19));
  (*(void (__thiscall **)(_DWORD, int, int))(**(this + 19) + 68))(*(this + 19), a2, a3);
  v3 = (*(int (__thiscall **)(_DWORD))(**(this + 18) + 84))(*(this + 18));
  v4 = (*(int (__thiscall **)(_DWORD, int))(**(this + 18) + 76))(*(this + 18), v8 + v3);
  return (*(int (__thiscall **)(_DWORD, int))(**(this + 18) + 68))(*(this + 18), v7 + v4);
}


//======================================================================
// sub_604FA0
// entry 00604fa0  size 62  status ok
//======================================================================

int __thiscall sub_604FA0(_DWORD **this, int a2)
{
  (*(void (__thiscall **)(_DWORD, int))(**(this + 19) + 108))(*(this + 19), a2);
  return (*(int (__thiscall **)(_DWORD, int))(**(this + 18) + 108))(*(this + 18), a2 + 1);
}


//======================================================================
// sub_604FE0
// entry 00604fe0  size 59  status ok
//======================================================================

int __thiscall sub_604FE0(int this)
{
  sub_5F5440((_BYTE *)this);
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 76) + 116))(*(_DWORD *)(this + 76));
  return (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 72) + 116))(*(_DWORD *)(this + 72));
}


//======================================================================
// sub_605020
// entry 00605020  size 59  status ok
//======================================================================

int __thiscall sub_605020(CWnd *this)
{
  CWnd::EnableActiveAccessibility(this);
  (*(void (__thiscall **)(_DWORD))(**((_DWORD **)this + 19) + 112))(*((_DWORD *)this + 19));
  return (*(int (__thiscall **)(_DWORD))(**((_DWORD **)this + 18) + 112))(*((_DWORD *)this + 18));
}


//======================================================================
// sub_605060
// entry 00605060  size 43  status ok
//======================================================================

int __thiscall sub_605060(_DWORD **this, int a2, int a3)
{
  return (*(int (__thiscall **)(_DWORD, int, int))(**(this + 19) + 128))(*(this + 19), a2, a3);
}


//======================================================================
// sub_605090
// entry 00605090  size 18  status ok
//======================================================================

_BYTE *__thiscall sub_605090(_BYTE *this)
{
  *(this + 108) = 1;
  return this;
}


//======================================================================
// sub_6050B0
// entry 006050b0  size 18  status ok
//======================================================================

_BYTE *__thiscall sub_6050B0(_BYTE *this)
{
  *(this + 108) = 0;
  return this;
}


//======================================================================
// sub_6050D0
// entry 006050d0  size 17  status ok
//======================================================================

char __thiscall sub_6050D0(_BYTE *this)
{
  return *(this + 108);
}


//======================================================================
// sub_6050F0
// entry 006050f0  size 28  status ok
//======================================================================

bool __thiscall sub_6050F0(_DWORD *this)
{
  return *(this + 32) == 1;
}


//======================================================================
// sub_605110
// entry 00605110  size 177  status ok
//======================================================================

int __thiscall sub_605110(int this, struct Concurrency::IVirtualProcessorRoot *a2, unsigned __int8 a3)
{
  int result; // eax
  int v4; // eax

  if ( a2 == Concurrency::details::VirtualProcessor::GetOwningRoot((Concurrency::details::VirtualProcessor *)this) )
  {
    result = a3;
    if ( a3 )
      return sub_605400(this);
  }
  else
  {
    if ( (int)a2 >= *(_DWORD *)(this + 80) )
    {
      if ( (int)a2 <= *(_DWORD *)(this + 84) )
        *(_DWORD *)(this + 88) = a2;
      else
        *(_DWORD *)(this + 88) = *(_DWORD *)(this + 84);
    }
    else
    {
      *(_DWORD *)(this + 88) = *(_DWORD *)(this + 80);
    }
    if ( a3 )
      sub_605400(this);
    if ( *(_DWORD *)(this + 4) )
    {
      v4 = pairNode::raw_length((pairNode *)this);
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 4) + 48))(*(_DWORD *)(this + 4), v4);
    }
    return (*(int (__thiscall **)(int))(*(_DWORD *)this + 184))(this);
  }
  return result;
}


//======================================================================
// sub_6052F0
// entry 006052f0  size 269  status ok
//======================================================================

char __thiscall sub_6052F0(int this)
{
  int v1; // eax
  int v3; // [esp+0h] [ebp-2Ch]
  double v5; // [esp+Ch] [ebp-20h]
  int v6; // [esp+14h] [ebp-18h]

  v6 = abs(*(_DWORD *)(this + 84) - *(_DWORD *)(this + 80));
  if ( sub_6050F0((_DWORD *)this) )
    v1 = *(_DWORD *)(this + 96) - *(_DWORD *)(this + 92);
  else
    v1 = *(_DWORD *)(this + 104) - *(_DWORD *)(this + 100);
  v5 = (double)(v1 + 1) / (double)v6;
  if ( sub_6050F0((_DWORD *)this) )
    v3 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 72) + 76))(*(_DWORD *)(this + 72))
       - *(_DWORD *)(this + 92)
       + 1;
  else
    v3 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 72) + 84))(*(_DWORD *)(this + 72))
       - *(_DWORD *)(this + 100)
       + 1;
  if ( 0.0 == v5 )
    return sub_5E9F20("false", "..\\scilib\\scislider.cpp", 178);
  else
    return sub_605110(
             this,
             (struct Concurrency::IVirtualProcessorRoot *)(int)((double)*(int *)(this + 80) + (double)v3 / v5),
             0);
}


//======================================================================
// sub_605400
// entry 00605400  size 316  status ok
//======================================================================

int __thiscall sub_605400(int this)
{
  int v1; // eax
  struct Concurrency::IVirtualProcessorRoot *OwningRoot; // eax
  double v5; // [esp+8h] [ebp-18h]
  int v6; // [esp+14h] [ebp-Ch]
  int v7; // [esp+1Ch] [ebp-4h]

  v6 = abs(*(_DWORD *)(this + 84) - *(_DWORD *)(this + 80));
  if ( sub_6050F0((_DWORD *)this) )
    v1 = *(_DWORD *)(this + 96) - *(_DWORD *)(this + 92);
  else
    v1 = *(_DWORD *)(this + 104) - *(_DWORD *)(this + 100);
  v5 = (double)(v1 + 1) / (double)v6;
  OwningRoot = Concurrency::details::VirtualProcessor::GetOwningRoot((Concurrency::details::VirtualProcessor *)this);
  v7 = abs(*(_DWORD *)(this + 80) - (_DWORD)OwningRoot);
  if ( *(_DWORD *)(this + 80) + v7 == *(_DWORD *)(this + 84) )
  {
    if ( sub_6050F0((_DWORD *)this) )
      return (*(int (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(this + 72) + 72))(
               *(_DWORD *)(this + 72),
               *(_DWORD *)(this + 96));
    else
      return (*(int (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(this + 72) + 80))(
               *(_DWORD *)(this + 72),
               *(_DWORD *)(this + 104));
  }
  else if ( sub_6050F0((_DWORD *)this) )
  {
    return (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 72) + 72))(
             *(_DWORD *)(this + 72),
             *(_DWORD *)(this + 92) + (int)((double)v7 * v5));
  }
  else
  {
    return (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 72) + 80))(
             *(_DWORD *)(this + 72),
             *(_DWORD *)(this + 100) + (int)((double)v7 * v5));
  }
}


//======================================================================
// sub_605540
// entry 00605540  size 45  status ok
//======================================================================

_DWORD *__thiscall sub_605540(_DWORD *this, int a2)
{
  sub_5F5BF0(this);
  *this = &sciSliderThumb::`vftable';
  *(this + 97) = a2;
  return this;
}


//======================================================================
// sub_605590
// entry 00605590  size 74  status ok
//======================================================================

bool __thiscall sub_605590(CMFCScanliner *this, int a2)
{
  return sub_6050D0(*((_BYTE **)this + 97)) && sub_5F4B60(this, a2);
}


//======================================================================
// sub_6055E0
// entry 006055e0  size 385  status ok
//======================================================================

char __thiscall sub_6055E0(int *this, int a2)
{
  char result; // al
  int v3; // eax
  int v5; // [esp+4h] [ebp-10h]
  int v6; // [esp+8h] [ebp-Ch]
  int v7; // [esp+Ch] [ebp-8h]
  int v8; // [esp+10h] [ebp-4h]

  v7 = *(_DWORD *)(*(this + 97) + 92);
  v6 = *(_DWORD *)(*(this + 97) + 96);
  v8 = *(_DWORD *)(*(this + 97) + 100);
  v5 = *(_DWORD *)(*(this + 97) + 104);
  result = (*(int (__thiscall **)(int *))(*this + 168))(this);
  if ( result )
  {
    if ( sub_6050F0((_DWORD *)*(this + 97)) )
    {
      if ( *(_DWORD *)(a2 + 8) - *(this + 11) >= v7 )
      {
        if ( *(_DWORD *)(a2 + 8) - *(this + 11) <= v6 )
          (*(void (__thiscall **)(int *, int))(*this + 72))(this, *(_DWORD *)(a2 + 8) - *(this + 11));
        else
          (*(void (__thiscall **)(int *, int))(*this + 72))(this, v6);
      }
      else
      {
        (*(void (__thiscall **)(int *, int))(*this + 72))(this, v7);
      }
    }
    else if ( *(_DWORD *)(a2 + 12) - *(this + 12) >= v8 )
    {
      if ( *(_DWORD *)(a2 + 12) - *(this + 12) <= v5 )
        (*(void (__thiscall **)(int *, int))(*this + 80))(this, *(_DWORD *)(a2 + 12) - *(this + 12));
      else
        (*(void (__thiscall **)(int *, int))(*this + 80))(this, v5);
    }
    else
    {
      (*(void (__thiscall **)(int *, int))(*this + 80))(this, v8);
    }
    result = sub_6052F0(*(this + 97));
    if ( *(this + 1) )
    {
      v3 = pairNode::raw_length((pairNode *)*(this + 97));
      result = (*(int (__thiscall **)(_DWORD, int))(*(_DWORD *)*(this + 1) + 44))(*(this + 1), v3);
    }
    *(_BYTE *)(a2 + 4) = 1;
  }
  return result;
}


//======================================================================
// sub_605770
// entry 00605770  size 86  status ok
//======================================================================

int __thiscall sub_605770(int this, int a2)
{
  int v2; // edx

  sub_5F4ED0((_BYTE *)this, (_DWORD *)a2);
  *(_BYTE *)(a2 + 4) = 1;
  *(_DWORD *)(this + 44) = *(_DWORD *)(a2 + 8) - (*(int (__thiscall **)(int))(*(_DWORD *)this + 76))(this);
  v2 = *(_DWORD *)(a2 + 12) - (*(int (__thiscall **)(int))(*(_DWORD *)this + 84))(this);
  *(_DWORD *)(this + 48) = v2;
  return this;
}


//======================================================================
// sub_6057D0
// entry 006057d0  size 32  status ok
//======================================================================

int __thiscall sub_6057D0(_BYTE *this, int a2)
{
  int result; // eax

  result = sub_5F4F50(this, (_DWORD *)a2);
  *(_BYTE *)(a2 + 4) = 1;
  return result;
}


//======================================================================
// sub_6057F0
// entry 006057f0  size 182  status ok
//======================================================================

int __thiscall sub_6057F0(_DWORD *this, int a2, int a3)
{
  int v5; // [esp+4h] [ebp-18h]
  int v6; // [esp+8h] [ebp-14h]
  int v7; // [esp+Ch] [ebp-10h]
  int v8; // [esp+10h] [ebp-Ch]
  int v9; // [esp+14h] [ebp-8h]
  int v10; // [esp+18h] [ebp-4h]

  v8 = *(_DWORD *)(*(this + 97) + 92);
  v7 = *(_DWORD *)(*(this + 97) + 96);
  v10 = *(_DWORD *)(*(this + 97) + 100);
  v5 = *(_DWORD *)(*(this + 97) + 104);
  v9 = a2;
  v6 = a3;
  if ( sub_6050F0((_DWORD *)*(this + 97)) )
  {
    if ( a2 < v8 )
      v9 = v8;
    if ( a2 > v7 )
      v9 = v7;
  }
  else
  {
    if ( a3 < v10 )
      v6 = v10;
    if ( a3 > v5 )
      v6 = v5;
  }
  return sub_5EB260(this, v9, v6);
}


//======================================================================
// sub_6058B0
// entry 006058b0  size 45  status ok
//======================================================================

_DWORD *__thiscall sub_6058B0(_DWORD *this, int a2)
{
  sub_5EAAF0(this);
  *this = &sciSliderRuler::`vftable';
  *(this + 94) = a2;
  return this;
}


//======================================================================
// sub_605900
// entry 00605900  size 119  status ok
//======================================================================

bool __thiscall sub_605900(CMFCScanliner *this, int a2)
{
  return sub_6050D0(*((_BYTE **)this + 94))
      && !(*(unsigned __int8 (__thiscall **)(_DWORD, int))(**(_DWORD **)(*((_DWORD *)this + 94) + 72) + 132))(
            *(_DWORD *)(*((_DWORD *)this + 94) + 72),
            a2)
      && sub_5F4B60(this, a2);
}


//======================================================================
// sub_605980
// entry 00605980  size 372  status ok
//======================================================================

int __thiscall sub_605980(int this, int a2)
{
  int v2; // eax
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int result; // eax

  if ( sub_6050F0(*(_DWORD **)(this + 376)) )
  {
    v2 = sub_5F5550(*(_DWORD **)(*(_DWORD *)(this + 376) + 72));
    (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(*(_DWORD *)(this + 376) + 72) + 72))(
      *(_DWORD *)(*(_DWORD *)(this + 376) + 72),
      *(_DWORD *)(a2 + 8) - v2);
    v3 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(*(_DWORD *)(this + 376) + 72) + 76))(*(_DWORD *)(*(_DWORD *)(this + 376) + 72));
    (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(*(_DWORD *)(this + 376) + 72) + 88))(
      *(_DWORD *)(*(_DWORD *)(this + 376) + 72),
      *(_DWORD *)(a2 + 8) - v3);
  }
  else
  {
    v4 = sub_5F5590(*(_DWORD **)(*(_DWORD *)(this + 376) + 72));
    (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(*(_DWORD *)(this + 376) + 72) + 80))(
      *(_DWORD *)(*(_DWORD *)(this + 376) + 72),
      *(_DWORD *)(a2 + 12) - v4);
    v5 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(*(_DWORD *)(this + 376) + 72) + 84))(*(_DWORD *)(*(_DWORD *)(this + 376) + 72));
    (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(*(_DWORD *)(this + 376) + 72) + 96))(
      *(_DWORD *)(*(_DWORD *)(this + 376) + 72),
      *(_DWORD *)(a2 + 12) - v5);
  }
  sub_6052F0(*(_DWORD *)(this + 376));
  if ( *(_DWORD *)(this + 4) )
  {
    v6 = pairNode::raw_length(*(pairNode **)(this + 376));
    (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 4) + 44))(*(_DWORD *)(this + 4), v6);
  }
  result = *(_DWORD *)(*(_DWORD *)(this + 376) + 72);
  *(_BYTE *)(result + 8) = 1;
  return result;
}


//======================================================================
// sub_605C60
// entry 00605c60  size 105  status ok
//======================================================================

void __thiscall sub_605C60(int *this)
{
  *this = (int)&sciDropListButton::`vftable';
  sub_5F25D0(dword_15E55E4, *(this + 123));
  CExpandoObject::~CExpandoObject((CExpandoObject *)this);
}


//======================================================================
// sub_605CD0
// entry 00605cd0  size 83  status ok
//======================================================================

int __thiscall sub_605CD0(_DWORD **this, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  sub_602830((int)this, a2, a3, a4, a5, a6, a7, a8);
  sub_5EF340(*(this + 100), 8, 0);
  return sub_5EF310(*(this + 100), 17);
}


//======================================================================
// sub_605D30
// entry 00605d30  size 237  status ok
//======================================================================

CComCtlWrapper *__thiscall sub_605D30(int this)
{
  int v1; // eax
  int v3; // esi
  int v4; // eax
  int v5; // esi
  int v6; // eax
  int v7; // [esp-14h] [ebp-2Ch]
  int v8; // [esp-10h] [ebp-28h]
  int v9; // [esp-8h] [ebp-20h]
  _DWORD v11[4]; // [esp+8h] [ebp-10h] BYREF

  sub_5EBF80((_DWORD *)this, v11);
  if ( *(_DWORD *)(this + 4) )
  {
    v1 = pairNode::raw_length((pairNode *)this);
    (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 4) + 24))(*(_DWORD *)(this + 4), v1);
  }
  if ( sub_5F2920((void *)dword_15E55E4, *(_DWORD *)(this + 492)) )
    return (CComCtlWrapper *)sub_5F2840((void *)dword_15E55E4, *(_DWORD *)(this + 492));
  (*(void (__thiscall **)(int))(*(_DWORD *)this + 216))(this);
  v9 = *(_DWORD *)(this + 504);
  v8 = *(_DWORD *)(this + 488);
  v3 = sub_5F84F0(*(_DWORD **)(this + 4));
  v4 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 84))(this);
  v7 = v11[3] + v3 + v4;
  v5 = unknown_libname_619(*(_DWORD *)(this + 4));
  v6 = (*(int (__thiscall **)(int, int))(*(_DWORD *)this + 76))(this, v7);
  return sub_5F2670((char *)dword_15E55E4, *(_DWORD *)(this + 492), v6 + v5, v8, 0, v9, 0);
}


//======================================================================
// sub_605E20
// entry 00605e20  size 203  status ok
//======================================================================

int __thiscall sub_605E20(_DWORD *this, int a2, unsigned __int8 a3)
{
  int result; // eax
  _DWORD **v4; // eax
  const char *v5; // eax

  if ( *((_BYTE *)this + 500) && *(this + 124) == a2 )
    return sub_5F2840((void *)dword_15E55E4, *(this + 123));
  *(this + 124) = a2;
  if ( *((_BYTE *)this + 500) )
  {
    v4 = (_DWORD **)sub_5F2A60(dword_15E55E4, a2, 0);
    v5 = sub_602B70(v4);
    (*(void (__thiscall **)(_DWORD *, const char *))(*this + 224))(this, v5);
  }
  sub_5F2840((void *)dword_15E55E4, *(this + 123));
  result = a3;
  if ( a3 )
    return (*(int (__thiscall **)(_DWORD *, _DWORD))(*this + 244))(this, *(this + 124));
  return result;
}


//======================================================================
// sub_605EF0
// entry 00605ef0  size 73  status ok
//======================================================================

int __userpurge sub_605EF0@<eax>(int a1@<eax>, int *a2@<ecx>, int a3, char a4)
{
  pairNode *v4; // eax
  int v5; // eax
  int v7; // [esp-4h] [ebp-8h]

  LOBYTE(a1) = a4;
  v7 = a1;
  sub_5F2300(dword_15E55E4, a2[123]);
  v4 = (pairNode *)sub_5FF080(a3);
  v5 = pairNode::raw_length(v4);
  return (*(int (__thiscall **)(int *, int, int))(*a2 + 240))(a2, v5, v7);
}


//======================================================================
// sub_605F40
// entry 00605f40  size 161  status ok
//======================================================================

int __thiscall sub_605F40(int *this)
{
  int v1; // eax
  int v2; // esi
  void *v3; // eax
  int v6; // [esp+8h] [ebp-8h]
  int i; // [esp+Ch] [ebp-4h]

  for ( i = 0; ; ++i )
  {
    v1 = sub_5F2300(dword_15E55E4, *(this + 123));
    if ( i >= Concurrency::details::_CancellationTokenCallback<_lambda_bd6029e2426d7ec37458070853043c08_>::_Exec(v1) )
      break;
    v6 = *(this + 124);
    sub_5F2300(dword_15E55E4, *(this + 123));
    v2 = sub_5FF080(i);
    v3 = (void *)sub_5F2300(dword_15E55E4, *(this + 123));
    if ( v2 == sub_5FF060(v3, v6) )
      return i;
  }
  return -1;
}


//======================================================================
// sub_606030
// entry 00606030  size 54  status ok
//======================================================================

int __thiscall sub_606030(pairNode *this, int a2)
{
  int result; // eax
  int v3; // eax

  result = (int)this;
  if ( *((_DWORD *)this + 1) )
  {
    v3 = pairNode::raw_length(this);
    return (*(int (__thiscall **)(_DWORD, int, int))(**((_DWORD **)this + 1) + 56))(*((_DWORD *)this + 1), a2, v3);
  }
  return result;
}


//======================================================================
// sub_6060A0
// entry 006060a0  size 54  status ok
//======================================================================

int __thiscall sub_6060A0(void *this)
{
  int v2; // [esp+0h] [ebp-4h]

  Concurrency::overwrite_buffer<enum Concurrency::agent_status>::overwrite_buffer<enum Concurrency::agent_status>(this);
  *(_DWORD *)v2 = &sciRadioButton::`vftable';
  *(_DWORD *)(v2 + 520) = 0;
  *(_BYTE *)(v2 + 524) = 0;
  return v2;
}


//======================================================================
// sub_606100
// entry 00606100  size 51  status ok
//======================================================================

void __thiscall sub_606100(_BYTE *this)
{
  if ( *(this + 524) )
    sub_602550((int)this);
  else
    sub_602500((int)this);
}


//======================================================================
// sub_606140
// entry 00606140  size 58  status ok
//======================================================================

int __thiscall sub_606140(int this)
{
  if ( !byte_796A40 )
  {
    byte_796A40 = 1;
    sub_6067E0(*(_DWORD *)(this + 520));
    byte_796A40 = 0;
  }
  return sub_600160((_BYTE *)this);
}


//======================================================================
// sub_606180
// entry 00606180  size 51  status ok
//======================================================================

int __thiscall sub_606180(pairNode *this)
{
  int result; // eax
  int v2; // eax

  result = (unsigned __int8)sub_600230(this);
  if ( !(_BYTE)result )
  {
    v2 = pairNode::raw_length(this);
    return sub_6065D0(v2);
  }
  return result;
}


//======================================================================
// sub_6061C0
// entry 006061c0  size 98  status ok
//======================================================================

_DWORD *__thiscall sub_6061C0(_DWORD *this)
{
  sub_5F49D0((int)this);
  *this = &sciRadioButtonGroup::`vftable';
  sub_60C5F0();
  return this;
}


//======================================================================
// sub_6062A0
// entry 006062a0  size 76  status ok
//======================================================================

char __thiscall sub_6062A0(_DWORD *this, int a2)
{
  if ( !(unsigned __int8)sub_60C9E0(a2) )
  {
    sub_60C840(a2);
    *(_DWORD *)(a2 + 520) = this;
    *(_DWORD *)(a2 + 4) = *(this + 1);
  }
  return 0;
}


//======================================================================
// sub_606350
// entry 00606350  size 44  status ok
//======================================================================

int __thiscall sub_606350(void *this, int a2)
{
  if ( sub_6063E0(this) )
    return sub_60CA40(a2);
  else
    return 0;
}


//======================================================================
// sub_606380
// entry 00606380  size 88  status ok
//======================================================================

int __thiscall sub_606380(void *this, int a2)
{
  int i; // eax
  pairNode *v3; // eax
  int v6; // [esp+4h] [ebp-4h]

  v6 = 0;
  for ( i = sub_6063E0(this); v6 < i; i = sub_6063E0(this) )
  {
    v3 = (pairNode *)sub_606350(this, v6);
    if ( pairNode::raw_length(v3) == a2 )
      return sub_606350(this, v6);
    ++v6;
  }
  return 0;
}


//======================================================================
// sub_6063E0
// entry 006063e0  size 22  status ok
//======================================================================

int __thiscall sub_6063E0(int this)
{
  return CRecentFileList::GetSize((CRecentFileList *)(this + 72));
}


//======================================================================
// sub_606490
// entry 00606490  size 80  status ok
//======================================================================

int __thiscall sub_606490(void *this)
{
  int i; // eax
  _BYTE *v2; // eax
  int v5; // [esp+4h] [ebp-4h]

  v5 = 0;
  for ( i = sub_6063E0((int)this); v5 < i; i = sub_6063E0((int)this) )
  {
    v2 = (_BYTE *)sub_606350(this, v5);
    if ( sub_600230(v2) )
      return v5;
    ++v5;
  }
  return -1;
}


//======================================================================
// sub_6064E0
// entry 006064e0  size 138  status ok
//======================================================================

int __thiscall sub_6064E0(void *this, int a2)
{
  int result; // eax
  _BYTE *v3; // eax
  int v4; // eax

  if ( a2 <= -1 || a2 >= sub_6063E0((int)this) )
    sub_5E9F20("index > -1 && index < Size()", "..\\scilib\\sciradiobutton.cpp", 130);
  result = sub_606350(this, a2);
  if ( result )
  {
    v3 = (_BYTE *)sub_606350(this, a2);
    result = (unsigned __int8)sub_6026D0(v3);
    if ( (_BYTE)result )
    {
      sub_6067E0(this);
      v4 = sub_606350(this, a2);
      return (*(int (__thiscall **)(int, int))(*(_DWORD *)v4 + 244))(v4, v4);
    }
  }
  return result;
}


//======================================================================
// sub_606570
// entry 00606570  size 96  status ok
//======================================================================

int __thiscall sub_606570(void *this)
{
  int i; // eax
  _BYTE *v2; // eax
  pairNode *v3; // eax
  int v6; // [esp+4h] [ebp-4h]

  v6 = 0;
  for ( i = sub_6063E0((int)this); v6 < i; i = sub_6063E0((int)this) )
  {
    v2 = (_BYTE *)sub_606350(this, v6);
    if ( sub_600230(v2) )
    {
      v3 = (pairNode *)sub_606350(this, v6);
      return pairNode::raw_length(v3);
    }
    ++v6;
  }
  return -1;
}


//======================================================================
// sub_6065D0
// entry 006065d0  size 139  status ok
//======================================================================

int __thiscall sub_6065D0(void *this, int a2)
{
  int result; // eax
  pairNode *v3; // eax
  _BYTE *v4; // eax
  int v5; // eax
  int v7; // [esp+8h] [ebp-4h]

  v7 = 0;
  for ( result = sub_6063E0((int)this); v7 < result; result = sub_6063E0((int)this) )
  {
    v3 = (pairNode *)sub_606350(this, v7);
    if ( pairNode::raw_length(v3) == a2 )
    {
      v4 = (_BYTE *)sub_606350(this, v7);
      result = (unsigned __int8)sub_6026D0(v4);
      if ( (_BYTE)result )
      {
        sub_6067E0(this);
        v5 = sub_606350(this, v7);
        return (*(int (__thiscall **)(int, int))(*(_DWORD *)v5 + 244))(v5, v5);
      }
      return result;
    }
    ++v7;
  }
  return result;
}


//======================================================================
// sub_606660
// entry 00606660  size 77  status ok
//======================================================================

int __thiscall sub_606660(void *this)
{
  int result; // eax
  int v2; // eax
  int v4; // [esp+8h] [ebp-4h]

  v4 = 0;
  for ( result = sub_6063E0((int)this); v4 < result; result = sub_6063E0((int)this) )
  {
    v2 = sub_606350(this, v4);
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v2 + 204))(v2, v2);
    ++v4;
  }
  return result;
}


//======================================================================
// sub_6066B0
// entry 006066b0  size 105  status ok
//======================================================================

int __thiscall sub_6066B0(void *this, int a2)
{
  int result; // eax
  pairNode *v3; // eax
  int v4; // eax
  int v6; // [esp+8h] [ebp-4h]

  v6 = 0;
  for ( result = sub_6063E0((int)this); v6 < result; result = sub_6063E0((int)this) )
  {
    v3 = (pairNode *)sub_606350(this, v6);
    if ( pairNode::raw_length(v3) == a2 )
    {
      v4 = sub_606350(this, v6);
      return (*(int (__thiscall **)(int, int))(*(_DWORD *)v4 + 204))(v4, v4);
    }
    ++v6;
  }
  return result;
}


//======================================================================
// sub_606720
// entry 00606720  size 77  status ok
//======================================================================

int __thiscall sub_606720(void *this)
{
  int result; // eax
  int v2; // eax
  int v4; // [esp+8h] [ebp-4h]

  v4 = 0;
  for ( result = sub_6063E0((int)this); v4 < result; result = sub_6063E0((int)this) )
  {
    v2 = sub_606350(this, v4);
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v2 + 208))(v2, v2);
    ++v4;
  }
  return result;
}


//======================================================================
// sub_606770
// entry 00606770  size 105  status ok
//======================================================================

int __thiscall sub_606770(void *this, int a2)
{
  int result; // eax
  pairNode *v3; // eax
  int v4; // eax
  int v6; // [esp+8h] [ebp-4h]

  v6 = 0;
  for ( result = sub_6063E0((int)this); v6 < result; result = sub_6063E0((int)this) )
  {
    v3 = (pairNode *)sub_606350(this, v6);
    if ( pairNode::raw_length(v3) == a2 )
    {
      v4 = sub_606350(this, v6);
      return (*(int (__thiscall **)(int, int))(*(_DWORD *)v4 + 208))(v4, v4);
    }
    ++v6;
  }
  return result;
}


//======================================================================
// sub_6067E0
// entry 006067e0  size 77  status ok
//======================================================================

int __thiscall sub_6067E0(void *this)
{
  int result; // eax
  int v2; // eax
  int v4; // [esp+8h] [ebp-4h]

  v4 = 0;
  for ( result = sub_6063E0((int)this); v4 < result; result = sub_6063E0((int)this) )
  {
    v2 = sub_606350(this, v4);
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v2 + 248))(v2, v2);
    ++v4;
  }
  return result;
}


//======================================================================
// sub_606830
// entry 00606830  size 22  status ok
//======================================================================

int __thiscall sub_606830(char *this)
{
  return sub_60CA10(this + 72);
}


//======================================================================
// sub_606850
// entry 00606850  size 106  status ok
//======================================================================

int __thiscall sub_606850(void *this)
{
  int result; // eax
  void (__thiscall ***v3)(_DWORD, int); // [esp+10h] [ebp-4h]

  while ( 1 )
  {
    result = sub_6063E0((int)this);
    if ( !result )
      break;
    v3 = (void (__thiscall ***)(_DWORD, int))sub_606350(this, 0);
    sub_60C890(v3);
    if ( v3 )
      (**v3)(v3, 1);
  }
  return result;
}


//======================================================================
// sub_6068C0
// entry 006068c0  size 82  status ok
//======================================================================

int __thiscall sub_6068C0(_BYTE *this)
{
  int result; // eax
  int v2; // eax
  int i; // [esp+8h] [ebp-4h]

  sub_5F5440(this);
  for ( i = 0; ; ++i )
  {
    result = sub_6063E0((int)this);
    if ( i >= result )
      break;
    v2 = sub_606350(this, i);
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v2 + 116))(v2, v2);
  }
  return result;
}


//======================================================================
// sub_606920
// entry 00606920  size 82  status ok
//======================================================================

void __thiscall sub_606920(void *this)
{
  int i; // eax
  int v2; // eax
  int v4; // [esp+8h] [ebp-4h]

  v4 = 0;
  for ( i = sub_6063E0((int)this); v4 < i; i = sub_6063E0((int)this) )
  {
    v2 = sub_606350(this, v4);
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v2 + 112))(v2, v2);
    ++v4;
  }
  CWnd::EnableActiveAccessibility((CWnd *)this);
}


//======================================================================
// sub_606A60
// entry 00606a60  size 49  status ok
//======================================================================

int __thiscall sub_606A60(_DWORD *this, int a2)
{
  *(this + 1) = a2;
  return (*(int (__thiscall **)(_DWORD *, _DWORD, _DWORD))(*this + 12))(this, *(this + 4), *(this + 5));
}


//======================================================================
// sub_606AA0
// entry 00606aa0  size 273  status ok
//======================================================================

int __fastcall sub_606AA0(int a1)
{
  int result; // eax
  int IsFixedSize; // eax
  int v4; // [esp+4h] [ebp-8h]
  int v5; // [esp+8h] [ebp-4h]

  result = a1;
  if ( *(_BYTE *)(a1 + 12) )
  {
    IsFixedSize = CMediaType::IsFixedSize((CMediaType *)dword_15E55E8);
    result = abs(IsFixedSize - *(_DWORD *)(a1 + 40));
    if ( result >= *(_DWORD *)(*(_DWORD *)(a1 + 4) + 388) )
    {
      *(_DWORD *)(a1 + 40) = CMediaType::IsFixedSize((CMediaType *)dword_15E55E8);
      result = *(unsigned __int8 *)(a1 + 12);
      if ( *(_BYTE *)(a1 + 12) )
      {
        *(float *)(a1 + 24) = *(float *)(a1 + 24) + *(float *)(a1 + 32);
        *(float *)(a1 + 28) = *(float *)(a1 + 28) + *(float *)(a1 + 36);
        v4 = (int)*(float *)(a1 + 24);
        v5 = (int)*(float *)(a1 + 28);
        (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(a1 + 4) + 68))(*(_DWORD *)(a1 + 4), v4, v5);
        result = abs(v4 - *(_DWORD *)(a1 + 16));
        if ( result < *(_DWORD *)(*(_DWORD *)(a1 + 4) + 392) )
        {
          result = abs(v5 - *(_DWORD *)(a1 + 20));
          if ( result < *(_DWORD *)(*(_DWORD *)(a1 + 4) + 392) )
            return (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 16))(a1);
        }
      }
    }
  }
  return result;
}


//======================================================================
// sub_606BC0
// entry 00606bc0  size 535  status ok
//======================================================================

int __thiscall sub_606BC0(int this, int a2, int a3)
{
  int result; // eax
  float v4; // [esp+0h] [ebp-30h]
  float v5; // [esp+4h] [ebp-2Ch]
  float v6; // [esp+8h] [ebp-28h]
  float v7; // [esp+Ch] [ebp-24h]
  float v8; // [esp+10h] [ebp-20h]
  float v9; // [esp+14h] [ebp-1Ch]
  float v11; // [esp+24h] [ebp-Ch]
  float v12; // [esp+24h] [ebp-Ch]
  float v13; // [esp+28h] [ebp-8h]
  int v14; // [esp+2Ch] [ebp-4h]

  *(_DWORD *)(this + 16) = a2;
  result = a3;
  *(_DWORD *)(this + 20) = a3;
  if ( *(_DWORD *)(this + 4) )
  {
    *(_BYTE *)(this + 12) = 1;
    *(float *)(this + 24) = (float)(*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 4) + 76))(*(_DWORD *)(this + 4));
    *(float *)(this + 28) = (float)(*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 4) + 84))(*(_DWORD *)(this + 4));
    *(float *)(this + 32) = (double)*(int *)(this + 16) - *(float *)(this + 24);
    *(float *)(this + 36) = (double)*(int *)(this + 20) - *(float *)(this + 28);
    v11 = (float)*(int *)(*(_DWORD *)(this + 4) + 392);
    if ( v11 == 0.0 )
    {
      v12 = 25.0;
    }
    else
    {
      if ( v11 >= 0.0 )
        v9 = (float)*(int *)(*(_DWORD *)(this + 4) + 392);
      else
        v9 = -v11;
      v12 = v9;
    }
    if ( *(float *)(this + 32) >= 0.0 )
      v8 = *(float *)(this + 32);
    else
      v8 = -*(float *)(this + 32);
    if ( *(float *)(this + 36) >= 0.0 )
      v7 = *(float *)(this + 36);
    else
      v7 = -*(float *)(this + 36);
    if ( v7 <= (double)v8 )
    {
      if ( *(float *)(this + 32) >= 0.0 )
        v4 = *(float *)(this + 32);
      else
        v4 = -*(float *)(this + 32);
      v5 = v4;
    }
    else
    {
      if ( *(float *)(this + 36) >= 0.0 )
        v6 = *(float *)(this + 36);
      else
        v6 = -*(float *)(this + 36);
      v5 = v6;
    }
    v13 = v5 / v12;
    v14 = (int)(v13 + 0.5);
    if ( !v14 )
      v14 = 1;
    if ( !*(_DWORD *)(*(_DWORD *)(this + 4) + 388) )
      v14 = 1;
    *(float *)(this + 32) = *(float *)(this + 32) / (double)v14;
    *(float *)(this + 36) = *(float *)(this + 36) / (double)v14;
    result = CMediaType::IsFixedSize((CMediaType *)dword_15E55E8);
    *(_DWORD *)(this + 40) = result;
  }
  return result;
}


//======================================================================
// sub_606DE0
// entry 00606de0  size 128  status ok
//======================================================================

int __thiscall sub_606DE0(int this)
{
  if ( *(_DWORD *)(this + 8) )
    (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(this + 8) + 28))(*(_DWORD *)(this + 8), 0);
  *(_BYTE *)(this + 12) = 0;
  (*(void (__thiscall **)(_DWORD, _DWORD, _DWORD))(**(_DWORD **)(this + 4) + 68))(
    *(_DWORD *)(this + 4),
    *(_DWORD *)(this + 16),
    *(_DWORD *)(this + 20));
  if ( *(_BYTE *)(this + 13) )
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 4) + 112))(*(_DWORD *)(this + 4));
  return sub_5F6050(*(void (__thiscall *****)(_DWORD, _DWORD))(this + 4), 0);
}


//======================================================================
// sub_606E60
// entry 00606e60  size 118  status ok
//======================================================================

_BYTE *__thiscall sub_606E60(_BYTE *this, int a2, int a3, int a4, char a5)
{
  CMFCComObject<ATL::CAccessibleProxy>::CMFCComObject<ATL::CAccessibleProxy>(a2);
  *(_DWORD *)this = &sciMotionTo::`vftable';
  sub_606BC0((int)this, a3, a4);
  *(this + 13) = a5;
  return this;
}


//======================================================================
// sub_606F60
// entry 00606f60  size 449  status ok
//======================================================================

int __thiscall sub_606F60(int this, int a2, int a3)
{
  int result; // eax
  float v4; // [esp+0h] [ebp-24h]
  float v5; // [esp+4h] [ebp-20h]
  float v6; // [esp+8h] [ebp-1Ch]
  float v7; // [esp+Ch] [ebp-18h]
  float v9; // [esp+1Ch] [ebp-8h]
  int v10; // [esp+20h] [ebp-4h]

  if ( *(_DWORD *)(this + 44) == -1 )
    return sub_606BC0(this, a2, a3);
  *(_DWORD *)(this + 16) = a2;
  result = a3;
  *(_DWORD *)(this + 20) = a3;
  if ( *(_DWORD *)(this + 4) )
  {
    *(_BYTE *)(this + 12) = 1;
    *(float *)(this + 24) = (float)(*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 4) + 76))(*(_DWORD *)(this + 4));
    *(float *)(this + 28) = (float)(*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 4) + 84))(*(_DWORD *)(this + 4));
    *(float *)(this + 32) = (double)*(int *)(this + 16) - *(float *)(this + 24);
    *(float *)(this + 36) = (double)*(int *)(this + 20) - *(float *)(this + 28);
    if ( *(float *)(this + 32) >= 0.0 )
      v7 = *(float *)(this + 32);
    else
      v7 = -*(float *)(this + 32);
    if ( *(float *)(this + 36) >= 0.0 )
      v6 = *(float *)(this + 36);
    else
      v6 = -*(float *)(this + 36);
    if ( v6 <= (double)v7 )
      v5 = *(float *)(this + 32);
    else
      v5 = *(float *)(this + 36);
    v9 = v5 / (double)*(int *)(this + 44);
    if ( v9 >= 0.0 )
      v4 = v5 / (double)*(int *)(this + 44);
    else
      v4 = -v9;
    *(_DWORD *)(*(_DWORD *)(this + 4) + 392) = (int)(v4 + 1.0);
    v10 = *(_DWORD *)(this + 44);
    *(_DWORD *)(*(_DWORD *)(this + 4) + 388) = 1;
    *(float *)(this + 32) = *(float *)(this + 32) / (double)v10;
    *(float *)(this + 36) = *(float *)(this + 36) / (double)v10;
    result = CMediaType::IsFixedSize((CMediaType *)dword_15E55E8);
    *(_DWORD *)(this + 40) = result;
  }
  return result;
}


//======================================================================
// sub_607130
// entry 00607130  size 388  status ok
//======================================================================

int __fastcall sub_607130(int a1)
{
  int result; // eax
  int IsFixedSize; // eax
  float v3; // [esp+8h] [ebp-20h]
  float v4; // [esp+Ch] [ebp-1Ch]
  double v5; // [esp+10h] [ebp-18h]
  float v7; // [esp+1Ch] [ebp-Ch]
  int v8; // [esp+20h] [ebp-8h]
  int v9; // [esp+24h] [ebp-4h]

  result = a1;
  if ( *(_BYTE *)(a1 + 12) )
  {
    IsFixedSize = CMediaType::IsFixedSize((CMediaType *)dword_15E55E8);
    result = abs(IsFixedSize - *(_DWORD *)(a1 + 40));
    if ( result >= *(_DWORD *)(*(_DWORD *)(a1 + 4) + 388) )
    {
      *(_DWORD *)(a1 + 40) = CMediaType::IsFixedSize((CMediaType *)dword_15E55E8);
      if ( !*(_DWORD *)(*(_DWORD *)(a1 + 4) + 388) )
        *(float *)(a1 + 48) = 1.0 - *(float *)(a1 + 60);
      *(float *)(a1 + 48) = *(float *)(a1 + 48) + *(float *)(a1 + 60);
      v7 = ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)a1 + 20))(a1);
      v5 = *(float *)(a1 + 64) * v7;
      v4 = cos(*(float *)(a1 + 52) * 6.28 * *(float *)(a1 + 48));
      *(float *)(a1 + 24) = v4 * v5 + (double)*(int *)(a1 + 16);
      v3 = sin(*(float *)(a1 + 52) * 6.28 * *(float *)(a1 + 48));
      *(float *)(a1 + 28) = v3 * v7 + (double)*(int *)(a1 + 20);
      v8 = (int)*(float *)(a1 + 24);
      v9 = (int)*(float *)(a1 + 28);
      (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(a1 + 4) + 68))(*(_DWORD *)(a1 + 4), v8, v9);
      result = abs(v8 - *(_DWORD *)(a1 + 16));
      if ( result < 5 )
      {
        result = abs(v9 - *(_DWORD *)(a1 + 20));
        if ( result < 5 )
          return (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 16))(a1);
      }
    }
  }
  return result;
}


//======================================================================
// sub_6072C0
// entry 006072c0  size 683  status ok
//======================================================================

int __fastcall sub_6072C0(int a1)
{
  int result; // eax
  int IsFixedSize; // eax

  result = a1;
  if ( *(_BYTE *)(a1 + 12) )
  {
    IsFixedSize = CMediaType::IsFixedSize((CMediaType *)dword_15E55E8);
    result = abs(IsFixedSize - *(_DWORD *)(a1 + 40));
    if ( result >= *(_DWORD *)(*(_DWORD *)(a1 + 4) + 388) )
    {
      *(_DWORD *)(a1 + 40) = CMediaType::IsFixedSize((CMediaType *)dword_15E55E8);
      if ( !*(_DWORD *)(*(_DWORD *)(a1 + 4) + 388) )
      {
        *(_DWORD *)(a1 + 52) = 4 * *(_DWORD *)(a1 + 48) - 4;
        *(float *)(a1 + 56) = 1.0 - *(float *)(a1 + 68);
      }
      *(float *)(a1 + 56) = *(float *)(a1 + 56) + *(float *)(a1 + 68);
      if ( *(float *)(a1 + 56) >= 1.0 )
      {
        if ( *(_DWORD *)(a1 + 52) + 4 >= 4 * *(_DWORD *)(a1 + 48) )
          return (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 16))(a1);
        *(_DWORD *)(a1 + 52) += 4;
        *(float *)(a1 + 56) = *(float *)(a1 + 56) - 1.0;
      }
      *(float *)(a1 + 60) = *(float *)(a1 + 56) * *(float *)(a1 + 56);
      *(float *)(a1 + 64) = *(float *)(a1 + 60) * *(float *)(a1 + 56);
      *(float *)(a1 + 24) = (*(float *)(a1 + 64) * 2.0 - *(float *)(a1 + 60) * 3.0 + 1.0)
                          * (double)*(int *)(*(_DWORD *)(a1 + 44) + 8 * *(_DWORD *)(a1 + 52))
                          + (*(float *)(a1 + 64) * -2.0 + *(float *)(a1 + 60) * 3.0)
                          * (double)*(int *)(*(_DWORD *)(a1 + 44) + 8 * *(_DWORD *)(a1 + 52) + 8)
                          + (*(float *)(a1 + 64) - *(float *)(a1 + 60) * 2.0 + *(float *)(a1 + 56))
                          * (double)*(int *)(*(_DWORD *)(a1 + 44) + 8 * *(_DWORD *)(a1 + 52) + 16)
                          + (*(float *)(a1 + 64) - *(float *)(a1 + 60))
                          * (double)*(int *)(*(_DWORD *)(a1 + 44) + 8 * *(_DWORD *)(a1 + 52) + 24);
      *(float *)(a1 + 28) = (*(float *)(a1 + 64) * 2.0 - *(float *)(a1 + 60) * 3.0 + 1.0)
                          * (double)*(int *)(*(_DWORD *)(a1 + 44) + 8 * *(_DWORD *)(a1 + 52) + 4)
                          + (*(float *)(a1 + 64) * -2.0 + *(float *)(a1 + 60) * 3.0)
                          * (double)*(int *)(*(_DWORD *)(a1 + 44) + 8 * *(_DWORD *)(a1 + 52) + 12)
                          + (*(float *)(a1 + 64) - *(float *)(a1 + 60) * 2.0 + *(float *)(a1 + 56))
                          * (double)*(int *)(*(_DWORD *)(a1 + 44) + 8 * *(_DWORD *)(a1 + 52) + 20)
                          + (*(float *)(a1 + 64) - *(float *)(a1 + 60))
                          * (double)*(int *)(*(_DWORD *)(a1 + 44) + 8 * *(_DWORD *)(a1 + 52) + 28);
      return (*(int (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(a1 + 4) + 68))(
               *(_DWORD *)(a1 + 4),
               (int)*(float *)(a1 + 24),
               (int)*(float *)(a1 + 28));
    }
  }
  return result;
}


//======================================================================
// sub_607570
// entry 00607570  size 143  status ok
//======================================================================

int __thiscall sub_607570(int this, int a2)
{
  char v2; // al

  if ( *(_DWORD *)(this + 16) == -1 && *(_DWORD *)(this + 20) == -1 )
  {
    *(_DWORD *)(this + 16) = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 76))(a2);
    *(_DWORD *)(this + 20) = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 84))(a2);
  }
  sub_606A60((_DWORD *)this, a2);
  *(_DWORD *)(this + 40) += *(_DWORD *)(this + 48);
  v2 = sub_5EB610(*(_BYTE **)(this + 4));
  return sub_5EB5D0(*(_BYTE **)(this + 4), 2 * (*(_DWORD *)(this + 44) >= 0) - 1 + v2);
}


//======================================================================
// sub_607600
// entry 00607600  size 391  status ok
//======================================================================

int __fastcall sub_607600(int a1)
{
  int result; // eax
  unsigned __int8 v3; // [esp+6h] [ebp-Eh]
  bool v4; // [esp+7h] [ebp-Dh]
  int v5; // [esp+8h] [ebp-Ch]
  int v6; // [esp+Ch] [ebp-8h]
  int v7; // [esp+10h] [ebp-4h]

  result = a1;
  if ( *(_BYTE *)(a1 + 12) )
  {
    result = CMediaType::IsFixedSize((CMediaType *)dword_15E55E8) - *(_DWORD *)(a1 + 40);
    if ( result >= *(_DWORD *)(*(_DWORD *)(a1 + 4) + 388) )
    {
      *(_DWORD *)(a1 + 40) = CMediaType::IsFixedSize((CMediaType *)dword_15E55E8);
      v4 = 0;
      v3 = 0;
      *(float *)(a1 + 24) = *(float *)(a1 + 24) + *(float *)(a1 + 32);
      *(float *)(a1 + 28) = *(float *)(a1 + 28) + *(float *)(a1 + 36);
      v5 = (int)*(float *)(a1 + 24);
      v6 = (int)*(float *)(a1 + 28);
      (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(a1 + 4) + 68))(*(_DWORD *)(a1 + 4), v5, v6);
      if ( abs(v5 - *(_DWORD *)(a1 + 16)) < *(_DWORD *)(*(_DWORD *)(a1 + 4) + 392) )
        v4 = abs(v6 - *(_DWORD *)(a1 + 20)) < *(_DWORD *)(*(_DWORD *)(a1 + 4) + 392);
      v7 = *(_DWORD *)(a1 + 44) + (unsigned __int8)sub_5EB610(*(_BYTE **)(a1 + 4));
      if ( *(int *)(a1 + 44) >= 0 || v7 > 0 )
      {
        if ( *(int *)(a1 + 44) <= 0 || v7 < 255 )
        {
          result = sub_5EB5D0(*(_BYTE **)(a1 + 4), v7);
        }
        else
        {
          result = sub_5EB5D0(*(_BYTE **)(a1 + 4), 0xFFu);
          v3 = 1;
        }
      }
      else
      {
        result = sub_5EB5D0(*(_BYTE **)(a1 + 4), 0);
        v3 = 1;
      }
      if ( v4 )
      {
        result = v3;
        if ( v3 )
          return (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 16))(a1);
      }
    }
  }
  return result;
}


//======================================================================
// sub_6077F0
// entry 006077f0  size 48  status ok
//======================================================================

_BYTE *__thiscall sub_6077F0(_BYTE *this)
{
  sub_62AEA0(this);
  *(_DWORD *)this = &VIniFile::`vftable';
  *(this + 8) = 0;
  *(this + 263) = 0;
  return this;
}


//======================================================================
// sub_607820
// entry 00607820  size 74  status ok
//======================================================================

char *__thiscall sub_607820(char *this, char *Source, char *a3)
{
  sub_62AEA0(this);
  *(_DWORD *)this = &VIniFile::`vftable';
  strcpy(this + 8, Source);
  strcpy(this + 263, a3);
  return this;
}


//======================================================================
// sub_607890
// entry 00607890  size 55  status ok
//======================================================================

char __thiscall sub_607890(char *this, char *Source, char *a3)
{
  strcpy(this + 8, Source);
  strcpy(this + 263, a3);
  return 1;
}


//======================================================================
// sub_6078D0
// entry 006078d0  size 35  status ok
//======================================================================

char *__thiscall sub_6078D0(char *this, char *Source)
{
  return strcpy(this + 263, Source);
}


//======================================================================
// sub_607900
// entry 00607900  size 48  status ok
//======================================================================

bool __stdcall sub_607900(int a1, char a2)
{
  return sub_607960(a1, a2 != 0) != 0;
}


//======================================================================
// sub_607930
// entry 00607930  size 36  status ok
//======================================================================

int __stdcall sub_607930(int a1, char a2)
{
  return sub_6079D0(a1, a2 != 0);
}


//======================================================================
// sub_607960
// entry 00607960  size 112  status ok
//======================================================================

int __thiscall sub_607960(void *this, int a2, int Value)
{
  char String[260]; // [esp+4h] [ebp-128h] BYREF
  char Buffer[32]; // [esp+108h] [ebp-24h] BYREF

  itoa(Value, Buffer, 10);
  (*(void (__thiscall **)(void *, int, char *, char *, int))(*(_DWORD *)this + 16))(this, a2, Buffer, String, 31);
  return atoi(String);
}


//======================================================================
// sub_6079D0
// entry 006079d0  size 75  status ok
//======================================================================

int __thiscall sub_6079D0(void *this, int a2, int Value)
{
  char Buffer[12]; // [esp+4h] [ebp-10h] BYREF

  itoa(Value, Buffer, 10);
  return (*(int (__thiscall **)(void *, int, char *))(*(_DWORD *)this + 20))(this, a2, Buffer);
}


//======================================================================
// sub_608110
// entry 00608110  size 340  status ok
//======================================================================

int __thiscall sub_608110(_DWORD *this)
{
  int v2; // [esp+0h] [ebp-28h] BYREF
  _DWORD *v3; // [esp+10h] [ebp-18h]
  int i; // [esp+14h] [ebp-14h]
  int *v5; // [esp+18h] [ebp-10h]
  int v6; // [esp+24h] [ebp-4h]

  v5 = &v2;
  v3 = this;
  *this = &VSoundManager::`vftable';
  v6 = 0;
  if ( !byte_7960CB )
  {
    if ( *((_BYTE *)v3 + 10) )
    {
      *((_BYTE *)v3 + 8) = 0;
    }
    else
    {
      sub_608290(v3);
      sub_60A4D0(v3);
      LOBYTE(v6) = 1;
      for ( i = 0; i < 12; ++i )
      {
        if ( dword_796B38[9 * i] )
          dword_796B38[9 * i] = 0;
        if ( dword_796B3C[9 * i] )
        {
          alSourcei(dword_796B3C[9 * i], 4105, 0);
          dword_796B3C[9 * i] = 0;
        }
      }
      alDeleteBuffers(18, &dword_796E88);
      alDeleteSources(15, &dword_796CE8);
      v6 = 0;
      sub_683F80();
    }
  }
  v6 = -1;
  return sub_62AEF0(v3);
}


//======================================================================
// sub_608270
// entry 00608270  size 18  status ok
//======================================================================

_BYTE *__thiscall sub_608270(_BYTE *this)
{
  *(this + 8) = 1;
  return this;
}


//======================================================================
// sub_608290
// entry 00608290  size 23  status ok
//======================================================================

int __thiscall sub_608290(_BYTE *this)
{
  *(this + 8) = 0;
  return sub_630D00(this);
}


//======================================================================
// sub_608410
// entry 00608410  size 85  status ok
//======================================================================

int __stdcall sub_608410(int a1)
{
  int i; // [esp+4h] [ebp-4h]

  for ( i = 0; i < 12; ++i )
  {
    if ( dword_796B40[9 * i] == a1 && (unsigned __int8)sub_609B80(i) )
      return i;
  }
  return -1;
}


//======================================================================
// sub_608470
// entry 00608470  size 103  status ok
//======================================================================

int __stdcall sub_608470(int a1)
{
  int i; // [esp+4h] [ebp-4h]

  for ( i = 0; i < 12; ++i )
  {
    if ( dword_796B40[9 * i] && *(_DWORD *)(dword_796B40[9 * i] + 52) == a1 && (unsigned __int8)sub_609B80(i) )
      return i;
  }
  return -1;
}


//======================================================================
// sub_6084E0
// entry 006084e0  size 103  status ok
//======================================================================

int sub_6084E0()
{
  int i; // [esp+4h] [ebp-8h]
  int v2; // [esp+8h] [ebp-4h]

  v2 = -1;
  for ( i = 0; i < 12; ++i )
  {
    v2 = (v2 + 1) % 12;
    if ( !v2 )
      v2 = 1;
    if ( (unsigned __int8)sub_609650(v2) )
      return v2;
  }
  return -1;
}


//======================================================================
// sub_608550
// entry 00608550  size 138  status ok
//======================================================================

char __thiscall sub_608550(void *this, unsigned int a2, float a3)
{
  int Error; // eax

  if ( a2 < 0xC )
  {
    *((float *)&unk_796B50 + 9 * a2) = a3;
    alSourcef(dword_796B3C[9 * a2], 4106, LODWORD(a3));
    Error = alGetError(this);
    if ( Error )
      LOBYTE(Error) = sub_5E9F20("false", "..\\scilib\\platform\\VSoundManager.cpp", 293);
  }
  else
  {
    LOBYTE(Error) = sub_5E9F20("false", "..\\scilib\\platform\\VSoundManager.cpp", 288);
  }
  return Error;
}


//======================================================================
// sub_6085E0
// entry 006085e0  size 68  status ok
//======================================================================

double __stdcall sub_6085E0(unsigned int a1)
{
  if ( a1 < 0xC )
    return *((float *)&unk_796B50 + 9 * a1);
  sub_5E9F20("false", "..\\scilib\\platform\\VSoundManager.cpp", 299);
  return 0.0;
}


//======================================================================
// sub_608790
// entry 00608790  size 95  status ok
//======================================================================

int __thiscall sub_608790(void *this, unsigned int a2)
{
  if ( a2 < 0xC )
    return (*(int (__thiscall **)(_DWORD, void *))(**(_DWORD **)(dword_7960D8 + 12) + 8))(
             *(_DWORD *)(dword_7960D8 + 12),
             this)
         - dword_796B54[9 * a2];
  sub_5E9F20("false", "..\\scilib\\platform\\VSoundManager.cpp", 352);
  return 0;
}


//======================================================================
// sub_608890
// entry 00608890  size 77  status ok
//======================================================================

int __stdcall sub_608890(unsigned int a1)
{
  if ( a1 < 0xC )
    return dword_796B58[9 * a1];
  sub_5E9F20("false", "..\\scilib\\platform\\VSoundManager.cpp", 389);
  return 0;
}


//======================================================================
// sub_6088E0
// entry 006088e0  size 68  status ok
//======================================================================

int __stdcall sub_6088E0(unsigned int a1)
{
  if ( a1 < 0xC )
    return dword_796B4C[9 * a1];
  sub_5E9F20("false", "..\\scilib\\platform\\VSoundManager.cpp", 405);
  return 0;
}


//======================================================================
// sub_608930
// entry 00608930  size 69  status ok
//======================================================================

char __stdcall sub_608930(unsigned int a1, int a2)
{
  if ( a1 >= 0xC )
    return sub_5E9F20("false", "..\\scilib\\platform\\VSoundManager.cpp", 413);
  dword_796B4C[9 * a1] = a2;
  return a2;
}


//======================================================================
// sub_608980
// entry 00608980  size 87  status ok
//======================================================================

int __fastcall sub_608980(char a1, int a2, int a3)
{
  int result; // eax
  char v4; // [esp+0h] [ebp-8h]
  int i; // [esp+4h] [ebp-4h]

  v4 = a1;
  for ( i = 0; i < 12; ++i )
  {
    if ( dword_796B4C[9 * i] == a3 )
    {
      sub_62FDE0("Note: clearing script pointer in VSoundManager::ClearAllSoundsDWordForSafety()\n", v4);
      dword_796B4C[9 * i] = 0;
    }
    result = i + 1;
  }
  return result;
}


//======================================================================
// sub_6089E0
// entry 006089e0  size 191  status ok
//======================================================================

int __fastcall sub_6089E0(char a1, int a2, int a3)
{
  int v5; // [esp+4h] [ebp-Ch]
  int i; // [esp+8h] [ebp-8h]
  char v7[4]; // [esp+Ch] [ebp-4h]

  *(_DWORD *)v7 = 0;
  v5 = sub_6084E0();
  if ( v5 != -1 )
    return v5;
  for ( i = 1; i < 12; ++i )
  {
    if ( dword_796B48[9 * i] < dword_796B48[9 * *(_DWORD *)v7] )
      *(_DWORD *)v7 = i;
  }
  if ( a3 < dword_796B48[9 * *(_DWORD *)v7] )
  {
    sub_62FDE0(
      ">>> Unable to play sound with priority %d because all indicies are being used by sounds with higher priorities.\n",
      a1);
    return -1;
  }
  else
  {
    sub_62FDE0(">>> Replacing sound %d, priority %d with sound of priority %d.\n", v7[0]);
    sub_609720(*(_DWORD *)v7, 1);
    return *(_DWORD *)v7;
  }
}


//======================================================================
// sub_608AA0
// entry 00608aa0  size 164  status ok
//======================================================================

int __fastcall sub_608AA0(int a1, int a2, int a3)
{
  int v5; // [esp+4h] [ebp-4h]

  v5 = sub_6089E0(a1, a2, a3);
  if ( v5 == -1 )
    return -1;
  sub_609720(v5, 1);
  alSourceStop(dword_796B3C[9 * v5]);
  alSourceRewind(dword_796B3C[9 * v5]);
  alSourcei(dword_796B3C[9 * v5], 4105, 0);
  if ( alGetError(a1) )
    sub_5E9F20("false", "..\\scilib\\platform\\VSoundManager.cpp", 489);
  return v5;
}


//======================================================================
// sub_608B50
// entry 00608b50  size 218  status ok
//======================================================================

int __thiscall sub_608B50(_BYTE *this, int a2, int a3, char a4, int a5, float a6, int a7, int *a8)
{
  int v9; // [esp+Ch] [ebp-4h]

  if ( byte_7960CB )
    return 0;
  if ( a8 )
    *a8 = 0;
  if ( !*(this + 9) || !*(this + 8) || !a2 )
    return -1;
  if ( !a4 )
    a4 = 1;
  v9 = sub_603C50(*(void **)(dword_7960D8 + 24), a4 != 0 ? 541542223 : 542523735, a2, 1);
  if ( !v9 || !(*(int (__thiscall **)(int))(*(_DWORD *)v9 + 4))(v9) )
    return -1;
  if ( a8 )
    *a8 = v9;
  return sub_608DB0(v9, a3, a5, a6, a7);
}


//======================================================================
// sub_608C30
// entry 00608c30  size 188  status ok
//======================================================================

int __thiscall sub_608C30(_BYTE *this, int a2, int a3, int a4, float a5, int a6, int *a7)
{
  int v8; // [esp+Ch] [ebp-4h]

  if ( byte_7960CB )
    return 0;
  if ( a7 )
    *a7 = 0;
  if ( !*(this + 9) || !*(this + 8) || !a2 )
    return -1;
  v8 = sub_603C50(*(void **)(dword_7960D8 + 24), 541542223, a2, 1);
  if ( !v8 || !(*(int (__thiscall **)(int))(*(_DWORD *)v8 + 4))(v8) )
    return -1;
  if ( a7 )
    *a7 = v8;
  return sub_608DB0(v8, a3, a4, a5, a6);
}


//======================================================================
// sub_608CF0
// entry 00608cf0  size 188  status ok
//======================================================================

int __thiscall sub_608CF0(_BYTE *this, int a2, int a3, int a4, float a5, int a6, int *a7)
{
  int v8; // [esp+Ch] [ebp-4h]

  if ( byte_7960CB )
    return 0;
  if ( a7 )
    *a7 = 0;
  if ( !*(this + 9) || !*(this + 8) || !a2 )
    return -1;
  v8 = sub_603C50(*(void **)(dword_7960D8 + 24), 540233805, a2, 1);
  if ( !v8 || !(*(int (__thiscall **)(int))(*(_DWORD *)v8 + 4))(v8) )
    return -1;
  if ( a7 )
    *a7 = v8;
  return sub_608DB0(v8, a3, a4, a5, a6);
}


//======================================================================
// sub_608DB0
// entry 00608db0  size 833  status ok
//======================================================================

int __thiscall sub_608DB0(_BYTE *this, CFrameWndEx *a2, int a3, int a4, float a5, int a6)
{
  const CHAR *v6; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  unsigned int PaneMenuEntryID; // [esp+0h] [ebp-2Ch]
  char v12; // [esp+4h] [ebp-28h]
  BOOL v13; // [esp+Ch] [ebp-20h]
  int v14; // [esp+10h] [ebp-1Ch] BYREF
  int v15; // [esp+14h] [ebp-18h] BYREF
  int v16; // [esp+18h] [ebp-14h] BYREF
  int v18; // [esp+20h] [ebp-Ch]
  bool v19; // [esp+27h] [ebp-5h]
  int v20; // [esp+28h] [ebp-4h] BYREF

  if ( byte_7960CB )
    return 0;
  if ( *(this + 10) )
  {
    if ( *((_DWORD *)a2 + 12) != 540233805 && *((_DWORD *)a2 + 12) != 541542223 )
    {
      v6 = (const CHAR *)(*(int (__thiscall **)(CFrameWndEx *))(*(_DWORD *)a2 + 4))(a2);
      PlaySoundA(v6, 0, 5u);
    }
    return 0;
  }
  else if ( *(this + 9) && *(this + 8) )
  {
    v18 = sub_608AA0((int)this, (int)this, a3);
    if ( v18 == -1 )
    {
      return -1;
    }
    else
    {
      dword_796B40[9 * v18] = (int)a2;
      dword_796B48[9 * v18] = a3;
      dword_796B54[9 * v18] = 0;
      if ( *((_DWORD *)a2 + 12) == 541542223 )
      {
        PaneMenuEntryID = CFrameWndEx::GetPaneMenuEntryID(a2);
        v8 = (*(int (__thiscall **)(CFrameWndEx *))(*(_DWORD *)a2 + 4))(a2);
        v13 = (unsigned __int8)sub_6091A0(dword_796B38[9 * v18], v8, PaneMenuEntryID) != 0;
      }
      else if ( *((_DWORD *)a2 + 12) == 540233805 )
      {
        v13 = 0;
      }
      else
      {
        v9 = (*(int (__thiscall **)(CFrameWndEx *))(*(_DWORD *)a2 + 4))(a2);
        v13 = (unsigned __int8)sub_609100(dword_796B38[9 * v18], v9) != 0;
      }
      if ( v13 )
      {
        v20 = 0;
        v14 = 0;
        v15 = 0;
        v16 = 0;
        alGetBufferi(dword_796B38[9 * v18], 8193, &v20);
        alGetBufferi(dword_796B38[9 * v18], 8196, &v14);
        alGetBufferi(dword_796B38[9 * v18], 8194, &v15);
        alGetBufferi(dword_796B38[9 * v18], 8195, &v16);
        dword_796B58[9 * v18] = 10 * (v14 / (v20 / 100) / (v15 / 8) / v16);
        v19 = a4 == 0;
        alSourcei(dword_796B3C[9 * v18], 4105, dword_796B38[9 * v18]);
        alSourcei(dword_796B3C[9 * v18], 4103, v19);
        *((float *)&unk_796B50 + 9 * v18) = a5;
        alSourcef(dword_796B3C[9 * v18], 4106, LODWORD(a5));
        if ( alGetError() )
          sub_5E9F20("false", "..\\scilib\\platform\\VSoundManager.cpp", 873);
        v10 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(dword_7960D8 + 12) + 8))(*(_DWORD *)(dword_7960D8 + 12));
        dword_796B54[9 * v18] = v10;
        alSourcePlay(dword_796B3C[9 * v18]);
        if ( alGetError() )
          return -1;
        else
          return v18;
      }
      else
      {
        sub_62FDE0("PlaySoundResource() Failed!\n", v12);
        return -1;
      }
    }
  }
  else
  {
    return -1;
  }
}


//======================================================================
// sub_609100
// entry 00609100  size 150  status ok
//======================================================================

char __cdecl sub_609100(int a1, int a2)
{
  void *Block; // [esp+0h] [ebp-18h] BYREF
  int v4; // [esp+4h] [ebp-14h] BYREF
  int v5; // [esp+8h] [ebp-10h] BYREF
  int Error; // [esp+Ch] [ebp-Ch]
  char v7; // [esp+13h] [ebp-5h] BYREF
  int v8; // [esp+14h] [ebp-4h] BYREF

  sub_683FB0(a2, &v4, &Block, &v5, &v8, &v7);
  Error = alGetError();
  if ( Error )
    return 0;
  alBufferData(a1, v4, Block, v5, v8);
  Error = alGetError();
  if ( !Error )
  {
    sub_684180(v4, Block);
    Error = alGetError();
  }
  return 0;
}


//======================================================================
// sub_6091A0
// entry 006091a0  size 773  status ok
//======================================================================

char __cdecl sub_6091A0(int a1, int a2, int a3)
{
  int v4; // [esp+10h] [ebp-30Ch]
  int v5; // [esp+18h] [ebp-304h]
  _BYTE v6[4]; // [esp+20h] [ebp-2FCh] BYREF
  int Error; // [esp+24h] [ebp-2F8h]
  int v8; // [esp+28h] [ebp-2F4h]
  char *v9; // [esp+2Ch] [ebp-2F0h]
  _DWORD v10[3]; // [esp+30h] [ebp-2ECh] BYREF
  _BYTE v11[724]; // [esp+3Ch] [ebp-2E0h] BYREF
  int v12; // [esp+314h] [ebp-8h]
  int v13; // [esp+318h] [ebp-4h]

  v10[0] = a2;
  v10[1] = a3;
  v10[2] = 0;
  sub_684340(v10, v11, 0, 0, sub_6094B0, sub_609530, _get_startup_argv_mode, sub_609630);
  if ( alGetError() )
    sub_5E9F20("false", "..\\scilib\\platform\\VSoundManager.cpp", 747);
  v8 = sub_685DD0(v11, -1);
  if ( alGetError() )
    sub_5E9F20("false", "..\\scilib\\platform\\VSoundManager.cpp", 752);
  sub_685E10(v11, -1);
  Error = alGetError();
  if ( Error )
    sub_5E9F20("false", "..\\scilib\\platform\\VSoundManager.cpp", 756);
  if ( *(_DWORD *)(v8 + 4) == 1 )
    v5 = 4353;
  else
    v5 = 4355;
  v12 = *(_DWORD *)(v8 + 8);
  v9 = (char *)&unk_796ED0;
  v13 = 0;
  do
  {
    v4 = sub_685E50(v11, v9, (char *)&unk_E4E1C0 - v13, 0, 2, 1, v6);
    Error = alGetError();
    if ( Error )
      sub_5E9F20("false", "..\\scilib\\platform\\VSoundManager.cpp", 780);
    if ( v4 < 0 )
    {
      sub_684240(v11);
      return 0;
    }
    v13 += v4;
    v9 = (char *)&unk_796ED0 + v13;
  }
  while ( v13 < (int)&unk_E4E1C0 && v4 > 0 );
  sub_684240(v11);
  Error = alGetError();
  if ( Error )
    sub_5E9F20("false", "..\\scilib\\platform\\VSoundManager.cpp", 802);
  alBufferData(a1, v5, &unk_796ED0, v13, v12);
  Error = alGetError();
  if ( Error )
    sub_5E9F20("false", "..\\scilib\\platform\\VSoundManager.cpp", 807);
  return 1;
}


//======================================================================
// sub_6094B0
// entry 006094b0  size 113  status ok
//======================================================================

int __cdecl sub_6094B0(void *a1, int a2, int a3, _DWORD *a4)
{
  int Size; // [esp+0h] [ebp-Ch]

  if ( a2 * a3 >= (unsigned int)(a4[1] - a4[2]) )
    Size = a4[1] - a4[2];
  else
    Size = a2 * a3;
  if ( Size )
  {
    memcpy(a1, (const void *)(a4[2] + *a4), Size);
    a4[2] += Size;
  }
  return Size;
}


//======================================================================
// sub_609530
// entry 00609530  size 225  status ok
//======================================================================

int __cdecl sub_609530(int a1, __int64 a2, int a3)
{
  int v4; // [esp+14h] [ebp-10h]
  int v5; // [esp+14h] [ebp-10h]

  if ( a3 )
  {
    if ( a3 == 1 )
    {
      if ( a2 >= (unsigned int)(*(_DWORD *)(a1 + 4) - *(_DWORD *)(a1 + 8)) )
        v5 = *(_DWORD *)(a1 + 4) - *(_DWORD *)(a1 + 8);
      else
        v5 = a2;
      *(_DWORD *)(a1 + 8) += v5;
    }
    else if ( a3 == 2 )
    {
      *(_DWORD *)(a1 + 8) = *(_DWORD *)(a1 + 4) + 1;
    }
  }
  else
  {
    if ( *(int *)(a1 + 4) < a2 )
      v4 = *(_DWORD *)(a1 + 4);
    else
      v4 = a2;
    *(_DWORD *)(a1 + 8) = v4;
  }
  return 0;
}


//======================================================================
// sub_609630
// entry 00609630  size 20  status ok
//======================================================================

int __cdecl sub_609630(int a1)
{
  return *(_DWORD *)(a1 + 8);
}


//======================================================================
// sub_609650
// entry 00609650  size 194  status ok
//======================================================================

bool __thiscall sub_609650(_BYTE *this, unsigned int a2)
{
  int v3; // [esp+4h] [ebp-4h] BYREF

  if ( byte_7960CB )
    return 1;
  if ( *(this + 10) )
    return 1;
  if ( a2 < 0xC )
  {
    if ( dword_796B40[9 * a2] )
    {
      alGetSourcei(dword_796B3C[9 * a2], 4112, &v3);
      if ( alGetError() )
        sub_5E9F20("false", "..\\scilib\\platform\\VSoundManager.cpp", 908);
      return v3 == 4116;
    }
    else
    {
      return 1;
    }
  }
  else
  {
    sub_5E9F20("false", "..\\scilib\\platform\\VSoundManager.cpp", 898);
    return 1;
  }
}


//======================================================================
// sub_609720
// entry 00609720  size 332  status ok
//======================================================================

char __thiscall sub_609720(_BYTE *this, unsigned int a2, char a3)
{
  char result; // al

  result = byte_7960CB;
  if ( !byte_7960CB )
  {
    if ( *(this + 10) )
    {
      return PlaySoundA(0, 0, 5u);
    }
    else if ( a2 < 0xC )
    {
      alSourceStop(dword_796B3C[9 * a2]);
      if ( alGetError() )
        sub_5E9F20("false", "..\\scilib\\platform\\VSoundManager.cpp", 940);
      alSourcei(dword_796B3C[9 * a2], 4105, 0);
      if ( alGetError() )
        sub_5E9F20("false", "..\\scilib\\platform\\VSoundManager.cpp", 944);
      if ( dword_796B40[9 * a2] )
      {
        if ( a3 )
          sub_6041D0(*(_DWORD *)(dword_7960D8 + 24), dword_7960D8, dword_796B40[9 * a2]);
      }
      dword_796B40[9 * a2] = 0;
      byte_796B44[36 * a2] = 0;
      dword_796B48[9 * a2] = 5;
      dword_796B4C[9 * a2] = 0;
      return 36 * a2;
    }
    else
    {
      return sub_5E9F20("false", "..\\scilib\\platform\\VSoundManager.cpp", 931);
    }
  }
  return result;
}


//======================================================================
// sub_609870
// entry 00609870  size 84  status ok
//======================================================================

char __thiscall sub_609870(_BYTE *this, int a2, char a3)
{
  unsigned int v3; // eax

  LOBYTE(v3) = byte_7960CB;
  if ( !byte_7960CB && !*(this + 10) )
  {
    v3 = sub_608410(a2);
    if ( v3 < 0xC )
      LOBYTE(v3) = sub_609720(this, v3, a3);
  }
  return v3;
}


//======================================================================
// sub_6098D0
// entry 006098d0  size 64  status ok
//======================================================================

char __thiscall sub_6098D0(_BYTE *this)
{
  char result; // al
  signed int i; // [esp+4h] [ebp-4h]

  result = byte_7960CB;
  if ( !byte_7960CB )
  {
    for ( i = 0; i < 12; ++i )
      result = sub_609720(this, i, 1);
  }
  return result;
}


//======================================================================
// sub_609910
// entry 00609910  size 100  status ok
//======================================================================

char __thiscall sub_609910(_BYTE *this, unsigned int a2)
{
  if ( byte_7960CB )
    return 0;
  if ( *(this + 10) )
    return 0;
  if ( a2 < 0xC )
    return byte_796B44[36 * a2];
  sub_5E9F20("false", "..\\scilib\\platform\\VSoundManager.cpp", 996);
  return 0;
}


//======================================================================
// sub_609980
// entry 00609980  size 191  status ok
//======================================================================

char __thiscall sub_609980(_BYTE *this, unsigned int a2)
{
  int Error; // eax

  LOBYTE(Error) = byte_7960CB;
  if ( !byte_7960CB && !*(this + 10) )
  {
    if ( a2 < 0xC )
    {
      LOBYTE(Error) = sub_609B80(a2);
      if ( (_BYTE)Error )
      {
        sub_62FDE0("pausing sound on channel %d\n", a2);
        alSourcePause(dword_796B3C[9 * a2]);
        byte_796B44[36 * a2] = 1;
        Error = alGetError();
        if ( Error )
          LOBYTE(Error) = sub_5E9F20("false", "..\\scilib\\platform\\VSoundManager.cpp", 1022);
      }
    }
    else
    {
      LOBYTE(Error) = sub_5E9F20("false", "..\\scilib\\platform\\VSoundManager.cpp", 1014);
    }
  }
  return Error;
}


//======================================================================
// sub_609A80
// entry 00609a80  size 191  status ok
//======================================================================

char __thiscall sub_609A80(_BYTE *this, unsigned int a2)
{
  int Error; // eax

  LOBYTE(Error) = byte_7960CB;
  if ( !byte_7960CB && !*(this + 10) )
  {
    if ( a2 < 0xC )
    {
      LOBYTE(Error) = sub_609910(this, a2);
      if ( (_BYTE)Error )
      {
        sub_62FDE0("resume sound on channel %d\n", a2);
        alSourcePlay(dword_796B3C[9 * a2]);
        byte_796B44[36 * a2] = 0;
        Error = alGetError();
        if ( Error )
          LOBYTE(Error) = sub_5E9F20("false", "..\\scilib\\platform\\VSoundManager.cpp", 1051);
      }
    }
    else
    {
      LOBYTE(Error) = sub_5E9F20("false", "..\\scilib\\platform\\VSoundManager.cpp", 1043);
    }
  }
  return Error;
}


//======================================================================
// sub_609B80
// entry 00609b80  size 194  status ok
//======================================================================

bool __thiscall sub_609B80(_BYTE *this, unsigned int a2)
{
  int v3; // [esp+4h] [ebp-4h] BYREF

  if ( byte_7960CB )
    return 0;
  if ( *(this + 10) )
    return 0;
  if ( a2 < 0xC )
  {
    if ( dword_796B3C[9 * a2] )
    {
      alGetSourcei(dword_796B3C[9 * a2], 4112, &v3);
      if ( alGetError() )
        sub_5E9F20("false", "..\\scilib\\platform\\VSoundManager.cpp", 1081);
      return v3 == 4114;
    }
    else
    {
      return 0;
    }
  }
  else
  {
    sub_5E9F20("false", "..\\scilib\\platform\\VSoundManager.cpp", 1072);
    return 0;
  }
}


//======================================================================
// sub_609CA0
// entry 00609ca0  size 115  status ok
//======================================================================

int __thiscall sub_609CA0(_BYTE *this)
{
  signed int i; // [esp+4h] [ebp-4h]

  if ( !byte_7960CB )
  {
    if ( *(this + 10) )
      return 0;
    for ( i = 0; i < 12; ++i )
    {
      if ( sub_609B80(this, i) && dword_796B40[9 * i] )
        return dword_796B40[9 * i];
    }
  }
  return 0;
}


//======================================================================
// sub_609D80
// entry 00609d80  size 115  status ok
//======================================================================

int __thiscall sub_609D80(_BYTE *this, int a2)
{
  int i; // [esp+4h] [ebp-4h]

  if ( byte_7960CB )
    return -1;
  if ( *(this + 10) )
    return -1;
  for ( i = 0; i < 3; ++i )
  {
    if ( dword_796D28[29 * i] && dword_796D38[29 * i] == a2 )
      return i;
  }
  return -1;
}


//======================================================================
// sub_609E00
// entry 00609e00  size 93  status ok
//======================================================================

int __thiscall sub_609E00(_BYTE *this)
{
  int i; // [esp+4h] [ebp-4h]

  if ( !byte_7960CB )
  {
    if ( *(this + 10) )
      return -1;
    for ( i = 0; i < 3; ++i )
    {
      if ( (unsigned __int8)sub_60A2B0(i) )
        return i;
    }
  }
  return -1;
}


//======================================================================
// sub_609E60
// entry 00609e60  size 129  status ok
//======================================================================

double __thiscall sub_609E60(_BYTE *this, unsigned int a2)
{
  float v3; // [esp+4h] [ebp-4h] BYREF

  if ( byte_7960CB )
    return 0.0;
  if ( *(this + 10) )
    return 0.0;
  if ( a2 <= 2 && dword_796D28[29 * a2] )
  {
    sub_62D830(&v3);
    return v3;
  }
  else
  {
    sub_5E9F20("false", "..\\scilib\\platform\\VSoundManager.cpp", 1191);
    return 0.0;
  }
}


//======================================================================
// sub_609EF0
// entry 00609ef0  size 151  status ok
//======================================================================

char __thiscall sub_609EF0(_BYTE *this, unsigned int a2, float a3)
{
  char result; // al

  result = byte_7960CB;
  if ( !byte_7960CB && !*(this + 10) )
  {
    if ( a2 <= 2 && dword_796D28[29 * a2] )
    {
      if ( byte_796D3C[116 * a2] )
        flt_796D94[29 * a2] = a3;
      return sub_62D7E0(a3);
    }
    else
    {
      return sub_5E9F20("false", "..\\scilib\\platform\\VSoundManager.cpp", 1214);
    }
  }
  return result;
}


//======================================================================
// sub_60A060
// entry 0060a060  size 47  status ok
//======================================================================

int __stdcall sub_60A060(int a1)
{
  return 0;
}


//======================================================================
// sub_60A090
// entry 0060a090  size 63  status ok
//======================================================================

int __thiscall sub_60A090(_BYTE *this, int a2, double a3)
{
  int result; // eax
  int v4; // [esp+4h] [ebp-4h]

  result = (unsigned __int8)byte_7960CB;
  if ( !byte_7960CB && !*(this + 10) )
    return _StaticAllocator<std::_Ref_count_obj_alloc<__ExceptionPtr,_StaticAllocator<int>>>::deallocate(
             a2,
             (int)((double)v4 * a3));
  return result;
}


//======================================================================
// sub_60A0D0
// entry 0060a0d0  size 68  status ok
//======================================================================

double __thiscall sub_60A0D0(_BYTE *this, int a2)
{
  int v3; // [esp+8h] [ebp-4h]

  if ( byte_7960CB )
    return 0.0;
  if ( *(this + 10) )
    return 0.0;
  return (double)sub_60A060(a2) / (double)v3;
}


//======================================================================
// sub_60A120
// entry 0060a120  size 78  status ok
//======================================================================

int __thiscall sub_60A120(_BYTE *this, int a2, double a3)
{
  int result; // eax
  double v4; // st7

  result = (unsigned __int8)byte_7960CB;
  if ( !byte_7960CB && !*(this + 10) )
  {
    v4 = (double)sub_60A060(a2) * a3;
    return _StaticAllocator<std::_Ref_count_obj_alloc<__ExceptionPtr,_StaticAllocator<int>>>::deallocate(a2, (int)v4);
  }
  return result;
}


//======================================================================
// sub_60A2B0
// entry 0060a2b0  size 126  status ok
//======================================================================

char __thiscall sub_60A2B0(_BYTE *this, unsigned int a2)
{
  if ( byte_7960CB )
    return 1;
  if ( *(this + 10) )
    return 1;
  if ( a2 <= 2 )
  {
    if ( dword_796D28[29 * a2] )
      return sub_62D3F0(dword_796D28[29 * a2]);
    else
      return 1;
  }
  else
  {
    sub_5E9F20("false", "..\\scilib\\platform\\VSoundManager.cpp", 1528);
    return 1;
  }
}


//======================================================================
// sub_60A330
// entry 0060a330  size 332  status ok
//======================================================================

char __thiscall sub_60A330(_BYTE *this, unsigned int a2, int a3)
{
  char result; // al
  void *v4; // [esp+Ch] [ebp-4h]

  result = byte_7960CB;
  if ( !byte_7960CB && !*(this + 10) )
  {
    if ( a2 <= 2 && dword_796D28[29 * a2] )
    {
      sub_62D120(dword_796D28[29 * a2]);
      v4 = (void *)dword_796D28[29 * a2];
      if ( v4 )
      {
        sub_62D120(v4);
        operator delete(v4);
      }
      dword_796D28[29 * a2] = 0;
      byte_796D30[116 * a2] = 0;
      dword_796D34[29 * a2] = 0;
      dword_796D38[29 * a2] = 0;
      byte_796D3C[116 * a2] = 0;
      dword_796D40[29 * a2] = -1;
      dword_796D44[29 * a2] = -1;
      flt_796D94[29 * a2] = 1.0;
      flt_796D94[29 * a2 + 1] = 0.5;
      return 116 * a2;
    }
    else
    {
      return sub_5E9F20("false", "..\\scilib\\platform\\VSoundManager.cpp", 1549);
    }
  }
  return result;
}


//======================================================================
// sub_60A480
// entry 0060a480  size 78  status ok
//======================================================================

char __thiscall sub_60A480(_BYTE *this, int a2, char a3)
{
  unsigned int v3; // eax
  int v4; // ecx

  LOBYTE(v3) = byte_7960CB;
  if ( !byte_7960CB && !*(this + 10) )
  {
    v3 = sub_609D80(this, a2);
    if ( v3 != -1 )
    {
      LOBYTE(v4) = a3;
      LOBYTE(v3) = sub_60A330(this, v3, v4);
    }
  }
  return v3;
}


//======================================================================
// sub_60A4D0
// entry 0060a4d0  size 100  status ok
//======================================================================

void __thiscall sub_60A4D0(ATL::CComCriticalSection *this)
{
  signed int i; // [esp+4h] [ebp-4h]

  if ( !byte_7960CB && !*((_BYTE *)this + 10) )
  {
    for ( i = 0; i < 3; ++i )
    {
      if ( dword_796D28[29 * i] )
        sub_60A330(this, i, 1);
    }
    ATL::CComCriticalSection::~CComCriticalSection(this);
  }
}


//======================================================================
// sub_60A540
// entry 0060a540  size 115  status ok
//======================================================================

char __thiscall sub_60A540(_BYTE *this, unsigned int a2)
{
  if ( byte_7960CB )
    return 0;
  if ( *(this + 10) )
    return 0;
  if ( a2 <= 2 && dword_796D28[29 * a2] )
    return byte_796D30[116 * a2];
  sub_5E9F20("false", "..\\scilib\\platform\\VSoundManager.cpp", 1616);
  return 0;
}


//======================================================================
// sub_60A5C0
// entry 0060a5c0  size 144  status ok
//======================================================================

char __thiscall sub_60A5C0(_BYTE *this, unsigned int a2)
{
  char result; // al

  result = byte_7960CB;
  if ( !byte_7960CB && !*(this + 10) )
  {
    if ( a2 <= 2 && dword_796D28[29 * a2] )
    {
      result = sub_60A870(a2);
      if ( result )
      {
        sub_62D890(1);
        byte_796D30[116 * a2] = 1;
        return 116 * a2;
      }
    }
    else
    {
      return sub_5E9F20("false", "..\\scilib\\platform\\VSoundManager.cpp", 1634);
    }
  }
  return result;
}


//======================================================================
// sub_60A650
// entry 0060a650  size 74  status ok
//======================================================================

char __thiscall sub_60A650(_BYTE *this, int a2)
{
  unsigned int v2; // eax

  LOBYTE(v2) = byte_7960CB;
  if ( !byte_7960CB && !*(this + 10) )
  {
    v2 = sub_609D80(this, a2);
    if ( v2 != -1 )
      LOBYTE(v2) = sub_60A5C0(this, v2);
  }
  return v2;
}


//======================================================================
// sub_60A6A0
// entry 0060a6a0  size 114  status ok
//======================================================================

void __thiscall sub_60A6A0(int this)
{
  signed int i; // [esp+4h] [ebp-4h]

  if ( !byte_7960CB && !*(_BYTE *)(this + 10) )
  {
    for ( i = 0; i < 3; ++i )
    {
      if ( dword_796D28[29 * i] )
        sub_60A5C0((_BYTE *)this, i);
    }
    if ( *(_DWORD *)(this + 12) )
    {
      ATL::CComCriticalSection::~CComCriticalSection((ATL::CComCriticalSection *)this);
      *(_BYTE *)(this + 16) = 1;
    }
  }
}


//======================================================================
// sub_60A720
// entry 0060a720  size 144  status ok
//======================================================================

char __thiscall sub_60A720(_BYTE *this, unsigned int a2)
{
  char result; // al

  result = byte_7960CB;
  if ( !byte_7960CB && !*(this + 10) )
  {
    if ( a2 <= 2 && dword_796D28[29 * a2] )
    {
      result = sub_60A540(this, a2);
      if ( result )
      {
        sub_62D890(0);
        byte_796D30[116 * a2] = 0;
        return 116 * a2;
      }
    }
    else
    {
      return sub_5E9F20("false", "..\\scilib\\platform\\VSoundManager.cpp", 1691);
    }
  }
  return result;
}


//======================================================================
// sub_60A7B0
// entry 0060a7b0  size 74  status ok
//======================================================================

char __thiscall sub_60A7B0(_BYTE *this, int a2)
{
  unsigned int v2; // eax

  LOBYTE(v2) = byte_7960CB;
  if ( !byte_7960CB && !*(this + 10) )
  {
    v2 = sub_609D80(this, a2);
    if ( v2 != -1 )
      LOBYTE(v2) = sub_60A720(this, v2);
  }
  return v2;
}


//======================================================================
// sub_60A800
// entry 0060a800  size 109  status ok
//======================================================================

void __thiscall sub_60A800(ATL::CComCriticalSection *this)
{
  signed int i; // [esp+4h] [ebp-4h]

  if ( !byte_7960CB && !*((_BYTE *)this + 10) )
  {
    for ( i = 0; i < 3; ++i )
    {
      if ( dword_796D28[29 * i] )
        sub_60A720(this, i);
    }
    if ( *((_BYTE *)this + 16) )
      ATL::CComCriticalSection::~CComCriticalSection(this);
  }
}


//======================================================================
// sub_60A870
// entry 0060a870  size 124  status ok
//======================================================================

char __thiscall sub_60A870(_BYTE *this, unsigned int a2)
{
  if ( byte_7960CB )
    return 0;
  if ( *(this + 10) )
    return 0;
  if ( a2 <= 2 )
  {
    if ( dword_796D28[29 * a2] )
      return sub_62D3B0(dword_796D28[29 * a2]);
    else
      return 0;
  }
  else
  {
    sub_5E9F20("false", "..\\scilib\\platform\\VSoundManager.cpp", 1745);
    return 0;
  }
}


//======================================================================
// sub_60A8F0
// entry 0060a8f0  size 84  status ok
//======================================================================

char __thiscall sub_60A8F0(_BYTE *this, int a2)
{
  unsigned int v4; // [esp+4h] [ebp-4h]

  if ( byte_7960CB )
    return 0;
  if ( *(this + 10) )
    return 0;
  v4 = sub_609D80(this, a2);
  if ( v4 == -1 )
    return 0;
  else
    return sub_60A870(this, v4);
}


//======================================================================
// sub_60A950
// entry 0060a950  size 100  status ok
//======================================================================

int __thiscall sub_60A950(_BYTE *this)
{
  signed int i; // [esp+4h] [ebp-4h]

  if ( !byte_7960CB )
  {
    if ( *(this + 10) )
      return 0;
    for ( i = 0; i < 3; ++i )
    {
      if ( sub_60A870(this, i) )
        return dword_796D38[29 * i];
    }
  }
  return 0;
}


