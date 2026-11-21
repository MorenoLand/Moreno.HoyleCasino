//======================================================================
// sub_662EF0
// entry 00662ef0  size 63  status ok
//======================================================================

_DWORD *__thiscall sub_662EF0(_DWORD *this)
{
  *this = &MainScreenLayoutManager::`vftable';
  *(this + 1) = 0;
  *(this + 2) = 0;
  *(this + 6) = 1;
  *(this + 5) = 1;
  return this;
}


//======================================================================
// sub_662F30
// entry 00662f30  size 263  status ok
//======================================================================

int __stdcall sub_662F30(int *a1)
{
  CMFCRibbonButton *v1; // eax
  int result; // eax
  CMFCRibbonButton *v3; // [esp+8h] [ebp-30h]
  _DWORD *v4; // [esp+18h] [ebp-20h]
  _DWORD v5[2]; // [esp+20h] [ebp-18h] BYREF
  CMFCRibbonButton *v6; // [esp+28h] [ebp-10h]
  int v7; // [esp+34h] [ebp-4h]

  v4 = operator new(0x178u);
  v7 = 0;
  if ( v4 )
  {
    sub_5EAAF0(v4);
    v3 = v1;
  }
  else
  {
    v3 = 0;
  }
  v7 = -1;
  v6 = v3;
  sub_5EAE80(*a1, 0, 0, 0, -1);
  sub_5EB000(v3, a1[1]);
  (*(void (__thiscall **)(CMFCRibbonButton *, int))(*(_DWORD *)v6 + 176))(v6, a1[2]);
  v5[0] = sub_5F5550(v3);
  v5[1] = sub_5F5590(v3);
  result = sub_663040(v5);
  if ( v6 )
    return (**(int (__thiscall ***)(CMFCRibbonButton *, int))v6)(v6, 1);
  return result;
}


//======================================================================
// sub_663040
// entry 00663040  size 30  status ok
//======================================================================

_DWORD *__thiscall sub_663040(_DWORD *this, _DWORD *a2)
{
  int v2; // edx

  v2 = a2[1];
  *(this + 5) = *a2;
  *(this + 6) = v2;
  return this;
}


//======================================================================
// sub_663080
// entry 00663080  size 83  status ok
//======================================================================

_DWORD *__thiscall sub_663080(_DWORD *this, _DWORD *a2)
{
  int v2; // edx

  if ( !*(this + 2) )
  {
    *(this + 2) = *(this + 1);
    *(this + 3) = *(_DWORD *)*(this + 2);
    *(this + 4) = *(_DWORD *)(*(this + 2) + 4);
  }
  v2 = *(this + 4);
  *a2 = *(this + 3);
  a2[1] = v2;
  return a2;
}


//======================================================================
// sub_6630E0
// entry 006630e0  size 146  status ok
//======================================================================

char *__thiscall sub_6630E0(void (__thiscall ***this)(void *, char *), char *a2)
{
  char v4[8]; // [esp+4h] [ebp-8h] BYREF

  (**this)(this, v4);
  *(this + 4) = (void (__thiscall **)(void *, char *))((char *)*(this + 4) + (_DWORD)*(this + 6));
  if ( (int)((char *)*(this + 4) + (int)*(this + 6)) > (int)(*(this + 2))[3] )
  {
    if ( (int)**(this + 2) >= 0 )
      *(this + 2) += 4;
    *(this + 3) = (void (__thiscall **)(void *, char *))**(this + 2);
    *(this + 4) = (void (__thiscall **)(void *, char *))(*(this + 2))[1];
  }
  (**this)(this, a2);
  return a2;
}


//======================================================================
// sub_663180
// entry 00663180  size 90  status ok
//======================================================================

int *__thiscall sub_663180(_DWORD *this, int *a2)
{
  int v3; // [esp+8h] [ebp-10h] BYREF
  int v4; // [esp+Ch] [ebp-Ch]
  float v5; // [esp+10h] [ebp-8h]
  float v6; // [esp+14h] [ebp-4h]

  sub_663080(this, &v3);
  v6 = (float)(245 - v4);
  v5 = v6 * 0.0003 * v6;
  v3 = (int)((double)v3 + v5);
  *a2 = v3;
  a2[1] = v4;
  return a2;
}


//======================================================================
// sub_6631E0
// entry 006631e0  size 140  status ok
//======================================================================

int __fastcall sub_6631E0(int **a1)
{
  int result; // eax

  if ( unknown_libname_843(a1) )
  {
    result = unknown_libname_843(a1);
    if ( result == 1 )
    {
      sub_62FDE0(">>> Target hit!\n");
      CBaseTransition::SetRelatedVariable((CBaseTransition *)a1, 0);
      ((void (__thiscall *)(int **, int))(*a1)[7])(a1, 1000000);
      ((void (__thiscall *)(int **, int))(*a1)[1])(a1, 1);
      return sub_6622A0(a1[3]);
    }
  }
  else
  {
    ((void (__thiscall *)(int **, int))(*a1)[7])(a1, 1000000);
    return ((int (__thiscall *)(int **, int))(*a1)[1])(a1, 1);
  }
  return result;
}


//======================================================================
// sub_6632A0
// entry 006632a0  size 274  status ok
//======================================================================

int __thiscall sub_6632A0(int this, int a2, _DWORD *Src, int a4)
{
  sub_606E60((_BYTE *)this, a2, Src[8 * a4 - 6], Src[8 * a4 - 5], 0);
  *(_DWORD *)this = &sciMotionHermite::`vftable';
  *(_DWORD *)(this + 44) = operator new(32 * a4);
  memcpy(*(void **)(this + 44), Src, 32 * a4);
  *(_DWORD *)(this + 48) = a4;
  *(float *)(this + 64) = 0.0;
  *(float *)(this + 60) = 0.0;
  *(float *)(this + 56) = 0.0;
  *(_DWORD *)(this + 72) = 10;
  *(float *)(this + 68) = 1.0 / (double)*(int *)(this + 72);
  *(_DWORD *)(this + 52) = 0;
  return this;
}


//======================================================================
// sub_6633C0
// entry 006633c0  size 46  status ok
//======================================================================

void *__thiscall sub_6633C0(void *this, char a2)
{
  void *v3; // [esp+0h] [ebp-8h]

  sub_6633F0(this);
  if ( (a2 & 1) != 0 )
    operator delete(v3);
  return v3;
}


//======================================================================
// sub_6633F0
// entry 006633f0  size 126  status ok
//======================================================================

int __thiscall sub_6633F0(void **this)
{
  *this = &sciMotionHermite::`vftable';
  if ( *(this + 11) )
    operator delete(*(this + 11));
  *(this + 11) = 0;
  return CExpandoObject::~CExpandoObject(this);
}


//======================================================================
// sub_663470
// entry 00663470  size 43  status ok
//======================================================================

int __thiscall sub_663470(pairNode *this)
{
  int v1; // eax

  v1 = pairNode::raw_length(this);
  return (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_15E55E4 + 76))(dword_15E55E4, v1, 100030);
}


//======================================================================
// sub_6634A0
// entry 006634a0  size 50  status ok
//======================================================================

int __thiscall sub_6634A0(int this)
{
  ATL::CCRTHeap::CCRTHeap((ATL::CCRTHeap *)this);
  *(_DWORD *)this = &FaceListItem::`vftable';
  memset((void *)(this + 32), 0, 0x4Cu);
  return this;
}


//======================================================================
// sub_6635E0
// entry 006635e0  size 105  status ok
//======================================================================

int __thiscall sub_6635E0(int this)
{
  int result; // eax
  void (__thiscall ***v3)(_DWORD, int); // [esp+10h] [ebp-4h]

  while ( 1 )
  {
    result = CRecentFileList::GetSize((CRecentFileList *)(this + 4));
    if ( !result )
      break;
    v3 = (void (__thiscall ***)(_DWORD, int))sub_60CA40((_DWORD *)(this + 4), 0);
    sub_60C890((_DWORD *)(this + 4), (int)v3);
    if ( v3 )
      (**v3)(v3, 1);
  }
  return result;
}


//======================================================================
// sub_663650
// entry 00663650  size 837  status ok
//======================================================================

char __thiscall sub_663650(_DWORD *this, char *Source)
{
  const char *v3; // eax
  const char *v4; // eax
  int v5; // eax
  int v6; // [esp+10h] [ebp-43Ch]
  void *v8; // [esp+20h] [ebp-42Ch]
  int i; // [esp+28h] [ebp-424h]
  FILE *Stream; // [esp+30h] [ebp-41Ch]
  int j; // [esp+34h] [ebp-418h]
  int k; // [esp+34h] [ebp-418h]
  char Buffer[1028]; // [esp+38h] [ebp-414h] BYREF
  int v14; // [esp+448h] [ebp-4h]

  v8 = operator new(0x6Cu);
  v14 = 0;
  if ( v8 )
    v6 = sub_6634A0((int)v8);
  else
    v6 = 0;
  v14 = -1;
  memset(Buffer, 0, 1024);
  sprintf(Buffer, "%s%s%s", &Path, "\\", Source);
  Stream = sub_5EA9C0(Buffer, "rb");
  if ( Stream )
  {
    fread((void *)(v6 + 32), 0x4Cu, 1u, Stream);
    fclose(Stream);
    for ( i = 0; i < 12; ++i )
      ;
  }
  if ( !(unsigned __int8)sub_665200(v6 + 32) )
    return 0;
  strcpy((char *)(v6 + 4), Source);
  for ( j = 0; j < CRecentFileList::GetSize((CRecentFileList *)(this + 1)); ++j )
  {
    v3 = (const char *)sub_6639A0(j);
    if ( !strcmp(v3, Source) )
    {
      qmemcpy((void *)(sub_60CA40(this + 1, j) + 32), (const void *)(v6 + 32), 0x4Cu);
      if ( v6 )
        (**(void (__thiscall ***)(int, int))v6)(v6, 1);
      return 1;
    }
  }
  for ( k = 0; k < CRecentFileList::GetSize((CRecentFileList *)(this + 1)); ++k )
  {
    v4 = (const char *)sub_6639A0(k);
    if ( stricmp(v4, Source) > 0 )
    {
      if ( k )
      {
        v5 = sub_60CA40(this + 1, k - 1);
        sub_60CB20(this + 1, v5, v6);
      }
      else
      {
        sub_60C7D0((int)(this + 1), v6);
      }
      break;
    }
  }
  if ( k == CRecentFileList::GetSize((CRecentFileList *)(this + 1)) )
    sub_60C840(this + 1, v6);
  return 1;
}


//======================================================================
// sub_6639A0
// entry 006639a0  size 39  status ok
//======================================================================

int __thiscall sub_6639A0(_DWORD *this, int a2)
{
  return sub_60CA40(this + 1, a2) + 4;
}


//======================================================================
// sub_6639D0
// entry 006639d0  size 94  status ok
//======================================================================

int __thiscall sub_6639D0(_DWORD *this, char *Str2)
{
  int v2; // eax
  int i; // [esp+4h] [ebp-4h]

  for ( i = 0; i < CRecentFileList::GetSize((CRecentFileList *)(this + 1)); ++i )
  {
    v2 = sub_60CA40(this + 1, i);
    if ( !strcmp((const char *)(v2 + 4), Str2) )
      return i;
  }
  return -1;
}


//======================================================================
// sub_663A30
// entry 00663a30  size 276  status ok
//======================================================================

char __thiscall sub_663A30(int this)
{
  intptr_t FindHandle; // [esp+4h] [ebp-534h]
  struct _finddata64i32_t FindData; // [esp+8h] [ebp-530h] BYREF
  char Buffer[1028]; // [esp+130h] [ebp-408h] BYREF

  *(_BYTE *)(this + 20) = 0;
  sprintf(Buffer, "%s%s%s", &Path, "\\", "*.fac");
  sub_6635E0(this);
  FindHandle = findfirst64i32(Buffer, &FindData);
  if ( FindHandle == -1 )
    return 0;
  if ( FindData.size == 76 && !sub_663650((_DWORD *)this, FindData.name) )
    *(_BYTE *)(this + 20) = 1;
  while ( !findnext64i32(FindHandle, &FindData) )
  {
    if ( FindData.size == 76 && !sub_663650((_DWORD *)this, FindData.name) )
      *(_BYTE *)(this + 20) = 1;
  }
  findclose(FindHandle);
  return 1;
}


//======================================================================
// sub_663B50
// entry 00663b50  size 92  status ok
//======================================================================

char __thiscall sub_663B50(_DWORD *this, char *Str2)
{
  int v2; // eax
  int i; // [esp+4h] [ebp-4h]

  for ( i = 0; i < CRecentFileList::GetSize((CRecentFileList *)(this + 1)); ++i )
  {
    v2 = sub_60CA40(this + 1, i);
    if ( !strcmp((const char *)(v2 + 4), Str2) )
      return 1;
  }
  return 0;
}


//======================================================================
// sub_663BB0
// entry 00663bb0  size 154  status ok
//======================================================================

char __cdecl sub_663BB0(const char *a1)
{
  FILE *Stream; // [esp+0h] [ebp-40Ch]
  char Buffer[1028]; // [esp+4h] [ebp-408h] BYREF

  memset(Buffer, 0, 1024);
  sprintf(Buffer, "%s%s%s", &Path, "\\", a1);
  Stream = sub_5EA9C0(Buffer, "rb");
  if ( !Stream )
    return 0;
  fclose(Stream);
  return 1;
}


//======================================================================
// sub_663C70
// entry 00663c70  size 47  status ok
//======================================================================

const void *__thiscall sub_663C70(_DWORD *this, int a2, void *a3)
{
  const void *result; // eax

  result = (const void *)(sub_60CA40(this + 1, a2) + 32);
  qmemcpy(a3, result, 0x4Cu);
  return result;
}


//======================================================================
// sub_663D10
// entry 00663d10  size 34  status ok
//======================================================================

int __thiscall sub_663D10(_DWORD *this, char *Str2)
{
  int v2; // eax

  v2 = sub_6639D0(this, Str2);
  return sub_663D40(v2);
}


//======================================================================
// sub_663D40
// entry 00663d40  size 286  status ok
//======================================================================

char *__thiscall sub_663D40(_DWORD *this, int a2)
{
  char *result; // eax
  int v4; // [esp+10h] [ebp-118h]
  char Buffer[268]; // [esp+18h] [ebp-110h] BYREF

  v4 = sub_60CA40(this + 1, a2);
  sprintf(Buffer, "%s%s%s", &Path, "\\", (const char *)(v4 + 4));
  sub_60C890(this + 1, v4);
  if ( v4 )
    (**(void (__thiscall ***)(int, int))v4)(v4, 1);
  remove(Buffer);
  result = strstr(Buffer, ".fac");
  if ( result )
  {
    strcpy(result, ".voc");
    return (char *)remove(Buffer);
  }
  return result;
}


//======================================================================
// sub_663E60
// entry 00663e60  size 111  status ok
//======================================================================

_DWORD *__thiscall sub_663E60(_DWORD *this, int a2)
{
  sub_5F5BF0(this);
  *this = &FacialFeature::`vftable';
  *(this + 97) = a2;
  sub_5EB700(this, 1);
  return this;
}


//======================================================================
// sub_663EF0
// entry 00663ef0  size 100  status ok
//======================================================================

int __thiscall sub_663EF0(int this, int a2)
{
  if ( sub_5F54A0((unsigned __int8 *)this)
    && *(_DWORD *)(a2 + 24) == 1
    && *(_DWORD *)(this + 388)
    && sub_6480D0(*(_DWORD **)(this + 388)) )
  {
    sub_6464D0(*(_DWORD *)(this + 388), 1, 0);
  }
  return sub_5F4D00((void *)this, a2);
}


//======================================================================
// sub_663F60
// entry 00663f60  size 79  status ok
//======================================================================

_BYTE *__thiscall sub_663F60(int this, int a2)
{
  _BYTE *result; // eax

  result = sub_5F4ED0((_BYTE *)this, (_DWORD *)a2);
  *(_BYTE *)(a2 + 4) = 1;
  if ( *(_DWORD *)(this + 388) )
    return (_BYTE *)(*(int (__thiscall **)(int, int, _DWORD))(*(_DWORD *)dword_162EE80 + 284))(
                      dword_162EE80,
                      a2,
                      *(_DWORD *)(this + 388));
  return result;
}


//======================================================================
// sub_663FB0
// entry 00663fb0  size 95  status ok
//======================================================================

int __thiscall sub_663FB0(int this, int a2)
{
  int result; // eax

  *(_BYTE *)(a2 + 4) = 1;
  *(_BYTE *)(this + 8) = 0;
  *(_BYTE *)(this + 9) = 0;
  result = a2;
  if ( *(_DWORD *)(a2 + 32) != dword_16306A4 )
  {
    if ( *(_DWORD *)(this + 388) )
      return (*(int (__thiscall **)(int, int, _DWORD))(*(_DWORD *)dword_162EE80 + 288))(
               dword_162EE80,
               a2,
               *(_DWORD *)(this + 388));
  }
  return result;
}


//======================================================================
// sub_664010
// entry 00664010  size 79  status ok
//======================================================================

_BYTE *__thiscall sub_664010(int this, int a2)
{
  _BYTE *result; // eax

  result = sub_5F4ED0((_BYTE *)this, (_DWORD *)a2);
  *(_BYTE *)(a2 + 4) = 1;
  if ( *(_DWORD *)(this + 388) )
    return (_BYTE *)(*(int (__thiscall **)(int, int, _DWORD))(*(_DWORD *)dword_162EE80 + 292))(
                      dword_162EE80,
                      a2,
                      *(_DWORD *)(this + 388));
  return result;
}


//======================================================================
// sub_664060
// entry 00664060  size 82  status ok
//======================================================================

int __thiscall sub_664060(int this, int a2)
{
  int result; // eax

  *(_BYTE *)(a2 + 4) = 1;
  *(_BYTE *)(this + 8) = 0;
  *(_BYTE *)(this + 9) = 0;
  result = this;
  if ( *(_DWORD *)(this + 388) )
    return (*(int (__thiscall **)(int, int, _DWORD))(*(_DWORD *)dword_162EE80 + 296))(
             dword_162EE80,
             a2,
             *(_DWORD *)(this + 388));
  return result;
}


//======================================================================
// sub_6640C0
// entry 006640c0  size 122  status ok
//======================================================================

_DWORD *__thiscall sub_6640C0(_DWORD *this)
{
  int i; // [esp+4h] [ebp-4h]

  ATL::CCRTHeap::CCRTHeap((ATL::CCRTHeap *)this);
  *this = &FaceMakerFace::`vftable';
  for ( i = 0; i < 27; ++i )
    *(this + i + 23) = 0;
  memset(this + 4, 0, 0x4Cu);
  *(this + 1) = 0;
  *(this + 2) = 0;
  *(this + 3) = 10;
  return this;
}


//======================================================================
// sub_664140
// entry 00664140  size 190  status ok
//======================================================================

void __thiscall sub_664140(CNoTrackObject *this)
{
  int i; // [esp+14h] [ebp-10h]

  *(_DWORD *)this = &FaceMakerFace::`vftable';
  for ( i = 0; i < 27; ++i )
  {
    if ( *((_DWORD *)this + i + 23) )
    {
      (***((void (__thiscall ****)(_DWORD, int))this + i + 23))(*((_DWORD *)this + i + 23), 1);
      *((_DWORD *)this + i + 23) = 0;
    }
  }
  CNoTrackObject::~CNoTrackObject(this);
}


//======================================================================
// sub_664200
// entry 00664200  size 246  status ok
//======================================================================

int __thiscall sub_664200(_DWORD *this, int a2, int a3)
{
  _DWORD *v4; // [esp+4h] [ebp-20h]
  _DWORD *v6; // [esp+Ch] [ebp-18h]
  int i; // [esp+14h] [ebp-10h]

  for ( i = 0; i < 27; ++i )
  {
    if ( !*(this + i + 23) )
    {
      v6 = operator new(0x188u);
      if ( v6 )
        v4 = sub_663E60(v6, a3);
      else
        v4 = 0;
      *(this + i + 23) = v4;
    }
    if ( a2 )
      *(_DWORD *)(*(this + i + 23) + 4) = a2;
    (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + i + 23) + 64))(*(this + i + 23));
  }
  return sub_664480(*(this + 3));
}


//======================================================================
// sub_664300
// entry 00664300  size 230  status ok
//======================================================================

char __thiscall sub_664300(int this, const char *a2)
{
  int i; // [esp+4h] [ebp-410h]
  FILE *Stream; // [esp+8h] [ebp-40Ch]
  char Buffer[1028]; // [esp+Ch] [ebp-408h] BYREF

  memset(Buffer, 0, 1024);
  sprintf(Buffer, "%s%s%s", &Path, "\\", a2);
  Stream = sub_5EA9C0(Buffer, "rb");
  if ( !Stream )
    return 0;
  fread((void *)(this + 16), 0x4Cu, 1u, Stream);
  fclose(Stream);
  for ( i = 0; i < 12; ++i )
    ;
  return 1;
}


//======================================================================
// sub_6643F0
// entry 006643f0  size 31  status ok
//======================================================================

int __thiscall sub_6643F0(_DWORD *this, int a2, int a3)
{
  *(this + 1) = a2;
  *(this + 2) = a3;
  return a3;
}


//======================================================================
// sub_664410
// entry 00664410  size 101  status ok
//======================================================================

char __thiscall sub_664410(_DWORD *this, int a2)
{
  int i; // [esp+4h] [ebp-4h]

  for ( i = 0; i < 27; ++i )
  {
    if ( *(this + i + 23)
      && (*(unsigned __int8 (__thiscall **)(_DWORD, int))(*(_DWORD *)*(this + i + 23) + 132))(*(this + i + 23), a2) )
    {
      return 1;
    }
  }
  return 0;
}


//======================================================================
// sub_664480
// entry 00664480  size 323  status ok
//======================================================================

int __thiscall sub_664480(_DWORD *this, int a2)
{
  int result; // eax
  int v3; // esi
  int v4; // eax
  _DWORD v6[29]; // [esp+8h] [ebp-78h]
  int i; // [esp+7Ch] [ebp-4h]

  v6[0] = 10;
  v6[1] = 1;
  v6[2] = 15;
  v6[3] = 20;
  v6[4] = 2;
  v6[5] = 62;
  v6[6] = 61;
  v6[7] = 60;
  v6[8] = 62;
  v6[9] = 61;
  v6[10] = 60;
  v6[11] = 110;
  v6[12] = 6;
  v6[13] = 32;
  v6[14] = 31;
  v6[15] = 30;
  v6[16] = 52;
  v6[17] = 51;
  v6[18] = 50;
  v6[19] = 45;
  v6[20] = 44;
  v6[21] = 43;
  v6[22] = 42;
  v6[23] = 41;
  v6[24] = 40;
  v6[25] = 80;
  v6[26] = 120;
  result = (int)this;
  *(this + 3) = a2;
  for ( i = 0; i < 27; ++i )
  {
    result = i;
    if ( *(this + i + 23) )
    {
      v3 = v6[i] + *(this + 3);
      v4 = (*(int (__thiscall **)(Concurrency::details::ContextBase *, int))(*(_DWORD *)dword_162EE84 + 804))(
             dword_162EE84,
             i);
      result = (*(int (__thiscall **)(_DWORD, int))(*(_DWORD *)*(this + i + 23) + 108))(*(this + i + 23), v4 + v3);
    }
  }
  return result;
}


//======================================================================
// sub_664630
// entry 00664630  size 63  status ok
//======================================================================

int sub_664630()
{
  int i; // [esp+4h] [ebp-4h]

  for ( i = 0; i < 12; ++i )
    sub_6648A0(i);
  return sub_665270(0, 0);
}


//======================================================================
// sub_664670
// entry 00664670  size 66  status ok
//======================================================================

int __thiscall sub_664670(_DWORD **this)
{
  int result; // eax
  int i; // [esp+4h] [ebp-4h]

  for ( i = 0; i < 27; ++i )
  {
    (*(void (__thiscall **)(_DWORD))(**(this + i + 23) + 112))(*(this + i + 23));
    result = i + 1;
  }
  return result;
}


//======================================================================
// sub_6646C0
// entry 006646c0  size 67  status ok
//======================================================================

char __thiscall sub_6646C0(unsigned __int8 **this)
{
  int i; // [esp+4h] [ebp-4h]

  for ( i = 0; i < 27; ++i )
  {
    if ( sub_5F54A0(*(this + i + 23)) )
      return 0;
  }
  return 1;
}


//======================================================================
// sub_664710
// entry 00664710  size 29  status ok
//======================================================================

BOOL __thiscall sub_664710(unsigned __int8 **this)
{
  return sub_6646C0(this) == 0;
}


//======================================================================
// sub_664730
// entry 00664730  size 34  status ok
//======================================================================

int __thiscall sub_664730(_DWORD *this, int a2, int a3)
{
  *(this + a2 + 4) = a3;
  return sub_664630();
}


//======================================================================
// sub_664760
// entry 00664760  size 83  status ok
//======================================================================

int __thiscall sub_664760(_DWORD *this)
{
  int result; // eax
  int i; // [esp+4h] [ebp-4h]

  for ( i = 0; i < 12; ++i )
  {
    sub_664730(this, i, 0);
    sub_664C90(1);
    *((_BYTE *)this + i + 65) = 0;
    *((_BYTE *)this + i + 77) = 0;
    result = i + 1;
  }
  return result;
}


//======================================================================
// sub_6647C0
// entry 006647c0  size 106  status ok
//======================================================================

int __stdcall sub_6647C0(int a1)
{
  _DWORD v2[12]; // [esp+4h] [ebp-30h]

  v2[0] = 2;
  v2[1] = 1;
  v2[2] = 2;
  v2[3] = 3;
  v2[4] = 3;
  v2[5] = 2;
  v2[6] = 3;
  v2[7] = 3;
  v2[8] = 3;
  v2[9] = 3;
  v2[10] = 1;
  v2[11] = 1;
  return v2[a1];
}


//======================================================================
// sub_664830
// entry 00664830  size 106  status ok
//======================================================================

int __stdcall sub_664830(int a1)
{
  _DWORD v2[12]; // [esp+4h] [ebp-30h]

  v2[0] = 0;
  v2[1] = 2;
  v2[2] = 3;
  v2[3] = 5;
  v2[4] = 8;
  v2[5] = 11;
  v2[6] = 13;
  v2[7] = 16;
  v2[8] = 19;
  v2[9] = 22;
  v2[10] = 25;
  v2[11] = 26;
  return v2[a1];
}


//======================================================================
// sub_6648A0
// entry 006648a0  size 900  status ok
//======================================================================

int __thiscall sub_6648A0(_DWORD *this, int a2)
{
  int v2; // eax
  char v3; // al
  int result; // eax
  char v5; // al
  int v6; // [esp-4h] [ebp-3Ch]
  _DWORD *v7; // [esp+8h] [ebp-30h]
  _DWORD *v9; // [esp+14h] [ebp-24h]
  int v10; // [esp+1Ch] [ebp-1Ch]
  int v11; // [esp+20h] [ebp-18h]
  int v12; // [esp+24h] [ebp-14h]
  int i; // [esp+28h] [ebp-10h]
  int j; // [esp+28h] [ebp-10h]

  v10 = sub_6647C0(a2);
  v11 = sub_664830(a2);
  v12 = sub_6651E0(a2);
  for ( i = 0; i < v10; ++i )
  {
    if ( v12 )
    {
      if ( i == 1 && (!a2 || a2 == 5 || a2 == 2) )
      {
        if ( !a2 || a2 == 2 )
        {
          sub_5EAF00(*(this + v11 + 24), v12);
          (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)*(this + v11 + 24) + 176))(*(this + v11 + 24), 4);
        }
        else
        {
          sub_5EAF00(*(this + v11 + 24), v12);
          (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)*(this + v11 + 24) + 176))(*(this + v11 + 24), 1);
        }
      }
      else
      {
        v2 = (*(int (__thiscall **)(Concurrency::details::ContextBase *, int, int, int))(*(_DWORD *)dword_162EE84 + 800))(
               dword_162EE84,
               v12,
               i,
               v10);
        sub_5EAF00(*(this + i + v11 + 23), v2);
        if ( !a2 || a2 == 2 )
        {
          v3 = std::ios::fill(this);
          (*(void (__thiscall **)(_DWORD, _DWORD))(*(_DWORD *)*(this + v11 + 23) + 176))(*(this + v11 + 23), v3);
        }
      }
      if ( i + v11 == sub_664830(11) )
      {
        if ( sub_5EB240((_DWORD *)*(this + i + v11 + 23)) )
        {
          if ( !*(_DWORD *)(*(this + i + v11 + 23) + 384) )
          {
            *(_DWORD *)(*(this + i + v11 + 23) + 376) = 10;
            v9 = operator new(0x1Cu);
            if ( v9 )
              v7 = sub_600A70(v9, 0);
            else
              v7 = 0;
            sub_5F5D50((_DWORD *)*(this + i + v11 + 23), (int)v7);
          }
        }
        else
        {
          *(_DWORD *)(*(this + i + v11 + 23) + 376) = 4;
          sub_5F5D50((_DWORD *)*(this + i + v11 + 23), 0);
        }
      }
    }
    else
    {
      (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + i + v11 + 23) + 112))(*(this + i + v11 + 23));
      sub_5EAF00(*(this + i + v11 + 23), 0);
      sub_5F5D50((_DWORD *)*(this + i + v11 + 23), 0);
    }
  }
  result = sub_665040(a2);
  for ( j = 0; j < v10; ++j )
  {
    if ( v12 > 0 )
    {
      v6 = *(this + 2) + (char)sub_664D20(a2);
      v5 = sub_664D00(a2);
      (*(void (__thiscall **)(_DWORD, int, int))(*(_DWORD *)*(this + j + v11 + 23) + 68))(
        *(this + j + v11 + 23),
        *(this + 1) + v5,
        v6);
      (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + j + v11 + 23) + 116))(*(this + j + v11 + 23));
    }
    result = j + 1;
  }
  return result;
}


//======================================================================
// sub_664C90
// entry 00664c90  size 30  status ok
//======================================================================

int __thiscall sub_664C90(_BYTE *this, char a2)
{
  *(this + 64) = a2;
  return sub_664630();
}


//======================================================================
// sub_664D00
// entry 00664d00  size 22  status ok
//======================================================================

char __thiscall sub_664D00(_BYTE *this, int a2)
{
  return *(this + a2 + 65);
}


//======================================================================
// sub_664D20
// entry 00664d20  size 22  status ok
//======================================================================

char __thiscall sub_664D20(_BYTE *this, int a2)
{
  return *(this + a2 + 77);
}


//======================================================================
// sub_664D40
// entry 00664d40  size 141  status ok
//======================================================================

int __thiscall sub_664D40(_DWORD **this, int a2)
{
  int v4; // [esp+4h] [ebp-10h]
  int v5; // [esp+8h] [ebp-Ch]
  int v6; // [esp+Ch] [ebp-8h]
  int i; // [esp+10h] [ebp-4h]

  v6 = sub_664830(a2);
  v4 = sub_6647C0(a2);
  v5 = sub_5EB4B0(*(this + v6 + 23));
  for ( i = 1; i < v4; ++i )
  {
    if ( v5 > sub_5EB4B0(*(this + i + v6 + 23)) )
      v5 = sub_5EB4B0(*(this + i + v6 + 23));
  }
  return -v5;
}


//======================================================================
// sub_664DD0
// entry 00664dd0  size 225  status ok
//======================================================================

int __thiscall sub_664DD0(_DWORD **this, int a2)
{
  int v4; // [esp+4h] [ebp-14h]
  int v5; // [esp+8h] [ebp-10h]
  int v6; // [esp+Ch] [ebp-Ch]
  int v7; // [esp+10h] [ebp-8h]
  int i; // [esp+14h] [ebp-4h]

  v7 = sub_664830(a2);
  v4 = sub_6647C0(a2);
  v6 = sub_5EB4B0(*(this + v7 + 23));
  v5 = sub_5F5590(*(this + v7 + 23));
  for ( i = 1; i < v4; ++i )
  {
    if ( v6 < sub_5EB4B0(*(this + i + v7 + 23)) )
      v6 = sub_5EB4B0(*(this + i + v7 + 23));
    if ( v5 < sub_5F5590(*(this + i + v7 + 23)) )
      v5 = sub_5F5590(*(this + i + v7 + 23));
  }
  if ( 84 - v6 - v5 >= 0 )
    return 84 - v6 - v5;
  else
    return 0;
}


//======================================================================
// sub_664EC0
// entry 00664ec0  size 141  status ok
//======================================================================

int __thiscall sub_664EC0(_DWORD **this, int a2)
{
  int v4; // [esp+4h] [ebp-10h]
  int v5; // [esp+8h] [ebp-Ch]
  int v6; // [esp+Ch] [ebp-8h]
  int i; // [esp+10h] [ebp-4h]

  v6 = sub_664830(a2);
  v4 = sub_6647C0(a2);
  v5 = sub_5EB470(*(this + v6 + 23));
  for ( i = 1; i < v4; ++i )
  {
    if ( v5 < sub_5EB470(*(this + i + v6 + 23)) )
      v5 = sub_5EB470(*(this + i + v6 + 23));
  }
  return -v5;
}


//======================================================================
// sub_664F50
// entry 00664f50  size 225  status ok
//======================================================================

int __thiscall sub_664F50(_DWORD **this, int a2)
{
  int v4; // [esp+4h] [ebp-14h]
  int v5; // [esp+8h] [ebp-10h]
  int v6; // [esp+Ch] [ebp-Ch]
  int v7; // [esp+10h] [ebp-8h]
  int i; // [esp+14h] [ebp-4h]

  v7 = sub_664830(a2);
  v5 = sub_6647C0(a2);
  v6 = sub_5EB470(*(this + v7 + 23));
  v4 = sub_5F5550(*(this + v7 + 23));
  for ( i = 1; i < v5; ++i )
  {
    if ( v6 > sub_5EB470(*(this + i + v7 + 23)) )
      v6 = sub_5EB470(*(this + i + v7 + 23));
    if ( v4 < sub_5F5550(*(this + i + v7 + 23)) )
      v4 = sub_5F5550(*(this + i + v7 + 23));
  }
  if ( 100 - v6 - v4 >= 0 )
    return 100 - v6 - v4;
  else
    return 0;
}


//======================================================================
// sub_665040
// entry 00665040  size 256  status ok
//======================================================================

void __thiscall sub_665040(_BYTE *this, unsigned int a2)
{
  int v2; // esi
  int v3; // esi
  int v4; // esi
  int v5; // esi

  if ( a2 >= 2 && sub_6651E0(a2) )
  {
    v2 = sub_664D20(this, a2);
    if ( v2 < sub_664D40((_DWORD **)this, a2) )
      *(this + a2 + 77) = sub_664D40((_DWORD **)this, a2);
    v3 = sub_664D20(this, a2);
    if ( v3 > sub_664DD0((_DWORD **)this, a2) )
      *(this + a2 + 77) = sub_664DD0((_DWORD **)this, a2);
    v4 = sub_664D00(this, a2);
    if ( v4 < sub_664EC0((_DWORD **)this, a2) )
      *(this + a2 + 65) = sub_664EC0((_DWORD **)this, a2);
    v5 = sub_664D00(this, a2);
    if ( v5 > sub_664F50((_DWORD **)this, a2) )
      *(this + a2 + 65) = sub_664F50((_DWORD **)this, a2);
  }
}


//======================================================================
// sub_665140
// entry 00665140  size 75  status ok
//======================================================================

int __thiscall sub_665140(_BYTE *this, int a2, char a3, char a4)
{
  if ( a3 )
    *(this + a2 + 65) += a4;
  else
    *(this + a2 + 77) += a4;
  return sub_664630();
}


//======================================================================
// sub_665190
// entry 00665190  size 43  status ok
//======================================================================

char __thiscall sub_665190(_BYTE *this, int a2)
{
  *(this + a2 + 65) = 0;
  *(this + a2 + 77) = 0;
  sub_664630();
  return 1;
}


//======================================================================
// sub_6651C0
// entry 006651c0  size 32  status ok
//======================================================================

int __thiscall sub_6651C0(_DWORD *this, int a2)
{
  return *(this + sub_664830(a2) + 23);
}


//======================================================================
// sub_6651E0
// entry 006651e0  size 23  status ok
//======================================================================

int __thiscall sub_6651E0(_DWORD *this, int a2)
{
  return *(this + a2 + 4);
}


//======================================================================
// sub_665200
// entry 00665200  size 67  status ok
//======================================================================

char __cdecl sub_665200(int a1)
{
  int i; // [esp+0h] [ebp-4h]

  for ( i = 0; i < 12; ++i )
  {
    if ( *(_DWORD *)(a1 + 4 * i) && *(int *)(a1 + 4 * i) < 1020000 )
      return 0;
  }
  return 1;
}


//======================================================================
// sub_665250
// entry 00665250  size 26  status ok
//======================================================================

char __thiscall sub_665250(void *this)
{
  return sub_665200((int)this + 16);
}


//======================================================================
// sub_665270
// entry 00665270  size 1339  status ok
//======================================================================

int __thiscall sub_665270(_DWORD *this, int a2, int a3)
{
  char v3; // al
  int result; // eax
  int v6; // [esp+10h] [ebp-14h]
  int v7; // [esp+10h] [ebp-14h]
  int v8; // [esp+10h] [ebp-14h]
  int v9; // [esp+14h] [ebp-10h]
  int v10; // [esp+14h] [ebp-10h]
  int v11; // [esp+14h] [ebp-10h]
  int v12; // [esp+14h] [ebp-10h]
  int v13; // [esp+14h] [ebp-10h]
  int v14; // [esp+14h] [ebp-10h]
  int v15; // [esp+18h] [ebp-Ch]
  int v16; // [esp+18h] [ebp-Ch]
  int v17; // [esp+18h] [ebp-Ch]
  int v18; // [esp+18h] [ebp-Ch]
  int v19; // [esp+18h] [ebp-Ch]
  int v20; // [esp+18h] [ebp-Ch]
  int v21; // [esp+18h] [ebp-Ch]
  int v22; // [esp+1Ch] [ebp-8h]
  int i; // [esp+20h] [ebp-4h]
  int j; // [esp+20h] [ebp-4h]
  int k; // [esp+20h] [ebp-4h]
  int m; // [esp+20h] [ebp-4h]
  int n; // [esp+20h] [ebp-4h]
  int ii; // [esp+20h] [ebp-4h]

  v15 = sub_664830(2);
  v22 = sub_6651E0(this, 2);
  switch ( a2 )
  {
    case 1:
      v6 = 1;
      break;
    case 2:
      v6 = 0;
      break;
    case 3:
      v6 = 1;
      break;
    case 4:
      v6 = 1;
      break;
    case 5:
      v6 = 2;
      break;
    case 6:
      v6 = 3;
      break;
    case 7:
      v6 = 1;
      break;
    case 8:
      v6 = 2;
      break;
    case 9:
      v6 = 1;
      break;
    case 10:
      v6 = 1;
      break;
    case 11:
      v6 = 1;
      break;
    case 12:
      v6 = 1;
      break;
    case 13:
      v6 = 2;
      break;
    case 14:
      v6 = 2;
      break;
    default:
      v6 = 0;
      break;
  }
  sub_5EAF00(*(this + v15 + 23), v6 + v22);
  v3 = std::ios::fill(this);
  (*(void (__thiscall **)(_DWORD, _DWORD))(*(_DWORD *)*(this + v15 + 23) + 176))(*(this + v15 + 23), v3);
  sub_5EAF00(*(this + v15 + 24), v22);
  (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)*(this + v15 + 24) + 176))(*(this + v15 + 24), 4);
  v16 = sub_664830(7);
  v9 = sub_6647C0(7);
  for ( i = 0; i < v9; ++i )
  {
    if ( *(this + i + v16 + 23) )
    {
      if ( sub_5EB240((_DWORD *)*(this + i + v16 + 23)) >= i )
        (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)*(this + i + v16 + 23) + 176))(
          *(this + i + v16 + 23),
          a2 > 14 ? 0 : a2);
    }
  }
  v17 = sub_664830(10);
  v10 = sub_6647C0(10);
  for ( j = 0; j < v10; ++j )
  {
    if ( *(this + j + v17 + 23) && sub_5EB240((_DWORD *)*(this + j + v17 + 23)) >= j )
      (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)*(this + j + v17 + 23) + 176))(
        *(this + j + v17 + 23),
        a2 > 14 ? 0 : a2);
  }
  switch ( a2 )
  {
    case 15:
      v7 = 1;
      break;
    case 16:
      v7 = 2;
      break;
    case 17:
      v7 = 3;
      break;
    case 18:
      v7 = 3;
      break;
    case 19:
      v7 = 4;
      break;
    case 20:
      v7 = 4;
      break;
    default:
      v7 = 0;
      break;
  }
  v18 = sub_664830(3);
  v11 = sub_6647C0(3);
  for ( k = 0; k < v11; ++k )
  {
    if ( *(this + k + v18 + 23) && sub_5EB240((_DWORD *)*(this + k + v18 + 23)) >= k )
      (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)*(this + k + v18 + 23) + 176))(*(this + k + v18 + 23), v7);
  }
  v19 = sub_664830(4);
  v12 = sub_6647C0(4);
  for ( m = 0; m < v12; ++m )
  {
    if ( *(this + m + v19 + 23) && sub_5EB240((_DWORD *)*(this + m + v19 + 23)) >= m )
      (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)*(this + m + v19 + 23) + 176))(*(this + m + v19 + 23), v7);
  }
  if ( a3 )
  {
    if ( a3 == 1 )
    {
      v8 = 1;
    }
    else if ( a3 == 2 )
    {
      v8 = 2;
    }
    else
    {
      sub_5E9F20("false", "..\\casinoShell\\face.cpp", 839);
      v8 = 0;
    }
  }
  else
  {
    v8 = 0;
  }
  v20 = sub_664830(8);
  v13 = sub_6647C0(8);
  for ( n = 0; n < v13; ++n )
  {
    if ( *(this + n + v20 + 23) && sub_5EB240((_DWORD *)*(this + n + v20 + 23)) >= n )
      (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)*(this + n + v20 + 23) + 176))(*(this + n + v20 + 23), v8);
  }
  v21 = sub_664830(9);
  result = sub_6647C0(9);
  v14 = result;
  for ( ii = 0; ii < v14; ++ii )
  {
    if ( *(this + ii + v21 + 23) && sub_5EB240((_DWORD *)*(this + ii + v21 + 23)) >= ii )
      (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)*(this + ii + v21 + 23) + 176))(*(this + ii + v21 + 23), v8);
    result = ii + 1;
  }
  return result;
}


//======================================================================
// sub_665800
// entry 00665800  size 465  status ok
//======================================================================

int __cdecl sub_665800(const char *a1)
{
  int v2; // [esp+0h] [ebp-414h] BYREF
  FILE *Stream; // [esp+4h] [ebp-410h]
  char *Destination; // [esp+8h] [ebp-40Ch]
  char Buffer[1028]; // [esp+Ch] [ebp-408h] BYREF

  memset(Buffer, 0, 1024);
  if ( !*a1 )
    return 33;
  sprintf(Buffer, "%s%s%s", &Path, "\\", a1);
  Destination = strstr(Buffer, ".fac");
  if ( !Destination )
    return 33;
  strcpy(Destination, ".voc");
  Stream = sub_5EA9C0(Buffer, "rb");
  if ( !Stream )
  {
    Stream = sub_5EA9C0(Buffer, "wb");
    if ( !Stream )
    {
      sub_5E9F20("false", "..\\casinoShell\\face.cpp", 883);
      return 33;
    }
    v2 = 33;
    fwrite(&v2, 4u, 1u, Stream);
    fclose(Stream);
    Stream = sub_5EA9C0(Buffer, "rb");
  }
  if ( Stream )
  {
    fread(&v2, 4u, 1u, Stream);
    fclose(Stream);
    return v2;
  }
  else
  {
    sub_5E9F20("false", "..\\casinoShell\\face.cpp", 894);
    return 33;
  }
}


//======================================================================
// sub_6659E0
// entry 006659e0  size 301  status ok
//======================================================================

unsigned __int8 sub_6659E0(const char *a1, ...)
{
  unsigned __int8 result; // al
  FILE *Stream; // [esp+0h] [ebp-410h]
  char *Destination; // [esp+4h] [ebp-40Ch]
  char Buffer[1028]; // [esp+8h] [ebp-408h] BYREF
  va_list va; // [esp+41Ch] [ebp+Ch] BYREF

  va_start(va, a1);
  Buffer[0] = 0;
  result = (unsigned __int8)memset(&Buffer[1], 0, 0x3FFu);
  if ( *a1 )
  {
    sprintf(Buffer, "%s%s%s", &Path, "\\", a1);
    Destination = strstr(Buffer, ".fac");
    if ( Destination )
    {
      strcpy(Destination, ".voc");
      Stream = sub_5EA9C0(Buffer, "wb");
      if ( Stream )
      {
        fwrite(va, 4u, 1u, Stream);
        return fclose(Stream);
      }
      else
      {
        return sub_5E9F20("false", "..\\casinoShell\\face.cpp", 920);
      }
    }
    else
    {
      return sub_5E9F20("false", "..\\casinoShell\\face.cpp", 914);
    }
  }
  return result;
}


//======================================================================
// sub_665BD0
// entry 00665bd0  size 221  status ok
//======================================================================

char sub_665BD0()
{
  char *Path; // [esp+4h] [ebp-118h]
  char *v2; // [esp+8h] [ebp-114h]
  CHAR Filename[264]; // [esp+Ch] [ebp-110h] BYREF
  char v4; // [esp+11Bh] [ebp-1h]

  v4 = 1;
  if ( (int)GetModuleFileNameA(0, Filename, 0x104u) <= 0 )
  {
    v4 = 0;
    byte_7951C0 = 0;
    Filename[0] = 0;
  }
  else
  {
    strcpy(&byte_7951C0, Filename);
    v2 = strrchr(Filename, 92);
    if ( v2 )
      v2[1] = 0;
  }
  strcpy(&byte_7950BC, Filename);
  Path = sub_5EA680();
  mkdir(Path);
  chdir(Path);
  return v4;
}


//======================================================================
// sub_665CB0
// entry 00665cb0  size 104  status ok
//======================================================================

char *sub_665CB0()
{
  FILE *Stream; // [esp+0h] [ebp-4h]

  strcpy(szHelp, &byte_7950BC);
  strcat(szHelp, byte_795A44);
  Stream = sub_5EA9C0(szHelp, "rb");
  if ( Stream )
    return (char *)fclose(Stream);
  else
    return strcpy(szHelp, byte_795A44);
}


//======================================================================
// sub_665D20
// entry 00665d20  size 122  status ok
//======================================================================

int sub_665D20()
{
  struct tagWAVEOUTCAPSA pwoc; // [esp+0h] [ebp-3Ch] BYREF
  int v2; // [esp+38h] [ebp-4h]

  v2 = 0;
  waveOutGetDevCapsA(0, &pwoc, 0x34u);
  if ( (pwoc.dwFormats & 0x40) != 0 )
  {
    byte_7950B4 = 16;
  }
  else if ( (pwoc.dwFormats & 0x10) != 0 )
  {
    byte_7950B4 = 8;
  }
  else
  {
    byte_7950B4 = 0;
  }
  if ( waveOutGetNumDevs() && (pwoc.dwSupport & 0x10) != 0 )
    return 2;
  return v2;
}


//======================================================================
// sub_665DA0
// entry 00665da0  size 115  status ok
//======================================================================

int sub_665DA0()
{
  HWND DesktopWindow; // eax
  HWND v1; // eax
  int v3; // [esp+0h] [ebp-8h]
  HDC hdc; // [esp+4h] [ebp-4h]

  v3 = 0;
  DesktopWindow = GetDesktopWindow();
  hdc = GetDC(DesktopWindow);
  byte_7950B5 = GetDeviceCaps(hdc, 12);
  if ( GetDeviceCaps(hdc, 8) < 640 || GetDeviceCaps(hdc, 10) < 480 )
    v3 = 2;
  v1 = GetDesktopWindow();
  ReleaseDC(v1, hdc);
  return v3;
}


//======================================================================
// sub_665E20
// entry 00665e20  size 112  status ok
//======================================================================

int sub_665E20()
{
  struct _MEMORYSTATUS Buffer; // [esp+4h] [ebp-24h] BYREF
  int v2; // [esp+24h] [ebp-4h]

  v2 = 0;
  Buffer.dwLength = 32;
  GlobalMemoryStatus(&Buffer);
  dword_795F9C = Buffer.dwTotalPhys - 0x400000;
  if ( (signed int)(Buffer.dwTotalPhys - 0x400000) < (int)&unk_800000 )
    dword_795F9C = (int)&unk_800000;
  byte_795F98 = Buffer.dwTotalPhys < (unsigned int)&unk_F00000;
  return v2;
}


//======================================================================
// sub_6660E0
// entry 006660e0  size 470  status ok
//======================================================================

bool sub_6660E0()
{
  const CHAR *v0; // eax
  const CHAR *v1; // eax
  const CHAR *v2; // eax
  const CHAR *v3; // eax
  const char *v4; // eax
  int v6; // [esp+4h] [ebp-20Ch]
  CHAR Caption[256]; // [esp+8h] [ebp-208h] BYREF
  CHAR Text[260]; // [esp+108h] [ebp-108h] BYREF

  v6 = 0;
  sub_665CB0();
  if ( sub_665D20() )
  {
    v0 = (const CHAR *)sub_630F40((int)"SID_SHELL_BADSOUNDDRIVER");
    wsprintfA(Text, v0);
    v6 = 2;
  }
  if ( sub_665DA0() )
  {
    v6 = 2;
    v1 = (const CHAR *)sub_630F40((int)"SID_SHELL_BADSCREENRESOLUTION_FORMAT");
    wsprintfA(Text, v1, byte_795634);
  }
  if ( (unsigned __int8)byte_7950B5 < 0x10u )
  {
    v6 = 2;
    v2 = (const CHAR *)sub_630F40((int)"SID_SHELL_BADBITDEPTH_FORMAT");
    wsprintfA(Text, v2, byte_795634);
  }
  sub_665E20();
  if ( v6 != 2 )
    return 1;
  v3 = (const CHAR *)sub_630F40((int)"SID_SHELL_ERROR_FORMAT");
  wsprintfA(Caption, v3, byte_795634);
  v4 = (const char *)sub_630F40((int)"SID_SHELL_SERIOUSWARNING");
  strcat(Text, v4);
  return MessageBoxA(0, Text, Caption, 0x2024u) == 6;
}


//======================================================================
// sub_6662C0
// entry 006662c0  size 248  status ok
//======================================================================

int __stdcall sub_6662C0(HINSTANCE a1, int a2, int a3, int a4)
{
  const CHAR *v5; // eax
  int v6; // [esp+0h] [ebp-Ch]
  HANDLE hObject; // [esp+8h] [ebp-4h]

  hInstance = a1;
  `dynamic initializer for 'public: static AFX_PARSEMAP const CHttpServer::parseMap''();
  if ( !sub_665BD0() )
    return 0;
  if ( !(unsigned __int8)CProcessLocal<_AFX_RICHEDIT_STATE>::CreateObject() )
    return 0;
  if ( !(unsigned __int8)sub_680E90() )
    return 0;
  if ( !(unsigned __int8)sub_680F20() )
    return 0;
  hObject = 0;
  if ( (*(unsigned __int8 (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 160))(dword_162EE84)
    && (v5 = (const CHAR *)(*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 292))(dword_162EE84),
        hObject = CreateMutexA(0, 0, v5),
        GetLastError() == 183) )
  {
    sub_680FD0();
    return 0;
  }
  else if ( sub_6660E0() )
  {
    v6 = sub_680F90();
    if ( hObject )
      CloseHandle(hObject);
    sub_680FD0();
    return v6;
  }
  else
  {
    return 0;
  }
}


//======================================================================
// sub_666490
// entry 00666490  size 5  status ok
//======================================================================

void sub_666490()
{
  ;
}


//======================================================================
// sub_6664A0
// entry 006664a0  size 5  status ok
//======================================================================

void sub_6664A0()
{
  ;
}


//======================================================================
// sub_6664B0
// entry 006664b0  size 5  status ok
//======================================================================

void sub_6664B0()
{
  ;
}


//======================================================================
// sub_6664C0
// entry 006664c0  size 5  status ok
//======================================================================

void sub_6664C0()
{
  ;
}


//======================================================================
// sub_6664D0
// entry 006664d0  size 5  status ok
//======================================================================

void sub_6664D0()
{
  ;
}


//======================================================================
// sub_6664E0
// entry 006664e0  size 5  status ok
//======================================================================

void sub_6664E0()
{
  ;
}


//======================================================================
// sub_6664F0
// entry 006664f0  size 5  status ok
//======================================================================

void sub_6664F0()
{
  ;
}


//======================================================================
// sub_666500
// entry 00666500  size 122  status ok
//======================================================================

void *__cdecl sub_666500(size_t Size)
{
  const CHAR *v1; // eax
  const CHAR *v3; // [esp-8h] [ebp-Ch]
  void *v4; // [esp+0h] [ebp-4h]

  v4 = malloc(Size);
  if ( v4 )
    return v4;
  if ( !dword_7960D8 )
    return v4;
  sub_625240((_DWORD *)dword_7960D8, 0);
  v4 = malloc(Size);
  if ( v4 )
    return v4;
  v3 = (const CHAR *)sub_630F40((int)"SID_SHELL_OUTOFMEMORY_TITLE");
  v1 = (const CHAR *)sub_630F40((int)"SID_SHELL_OUTOFMEMORY");
  MessageBoxA(0, v1, v3, 0x2000u);
  return 0;
}


//======================================================================
// sub_666580
// entry 00666580  size 24  status ok
//======================================================================

void __cdecl sub_666580(void *Block)
{
  if ( Block )
    free(Block);
}


//======================================================================
// sub_6665A0
// entry 006665a0  size 15  status ok
//======================================================================

int __cdecl sub_6665A0(_DWORD *a1, _DWORD *a2)
{
  return *a1 - *a2;
}


//======================================================================
// sub_6665E0
// entry 006665e0  size 98  status ok
//======================================================================

void __thiscall sub_6665E0(int this)
{
  int i; // [esp+Ch] [ebp-4h]

  if ( *(_DWORD *)this )
  {
    for ( i = 0; i < *(_DWORD *)(this + 4); ++i )
      operator delete(*(void **)(*(_DWORD *)this + 4 * i));
    operator delete(*(void **)this);
  }
}


//======================================================================
// sub_666650
// entry 00666650  size 230  status ok
//======================================================================

char __thiscall sub_666650(_DWORD *this)
{
  unsigned int v2; // eax
  size_t v3; // eax
  int i; // [esp+Ch] [ebp-4h]

  if ( dword_162EE84
    && (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 360))(dword_162EE84) )
  {
    *(this + 1) = (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 364))(dword_162EE84);
    *this = operator new(4 * *(this + 1));
    for ( i = 0; i < *(this + 1); ++i )
    {
      v2 = sub_666F80(this);
      *(_DWORD *)(*this + 4 * i) = operator new(v2);
    }
    v3 = sub_666C60(this);
    qsort(&dword_7712E0, v3, 0x48u, (_CoreCrtNonSecureSearchSortCompareFunction)sub_6665A0);
    return 1;
  }
  else
  {
    *this = 0;
    return 0;
  }
}


//======================================================================
// sub_666740
// entry 00666740  size 32  status ok
//======================================================================

int __stdcall sub_666740(int a1, int a2, int a3)
{
  return a3 + sub_6667C0(a1, a2);
}


//======================================================================
// sub_666760
// entry 00666760  size 89  status ok
//======================================================================

char __stdcall sub_666760(int a1, int *a2, int *a3, int *a4)
{
  if ( a4 )
    *a4 = a1 % 100;
  if ( a3 )
    *a3 = a1 / 100 % 10000;
  if ( a2 )
    *a2 = a1 / 1000000;
  return 1;
}


//======================================================================
// sub_6667C0
// entry 006667c0  size 94  status ok
//======================================================================

int __stdcall sub_6667C0(int a1, int a2)
{
  if ( a1 >= 1000 )
    sub_5E9F20("iCID < 1000", "..\\casinoShell\\characterlines.cpp", 195);
  if ( a2 >= 10000 )
    sub_5E9F20("iSituation < 10000", "..\\casinoShell\\characterlines.cpp", 196);
  return 100 * a2 + 1000000 * a1;
}


//======================================================================
// sub_666840
// entry 00666840  size 83  status ok
//======================================================================

bool __stdcall sub_666840(int a1)
{
  signed int PaneMenuEntryID; // [esp+4h] [ebp-8h]
  CFrameWndEx *v3; // [esp+8h] [ebp-4h]

  v3 = (CFrameWndEx *)sub_603C50(*(void **)(dword_7960D8 + 24), 542327875, a1, 0);
  PaneMenuEntryID = CFrameWndEx::GetPaneMenuEntryID(v3);
  sub_6041D0(*(_DWORD *)(dword_7960D8 + 24), (int)v3, (int)v3);
  return PaneMenuEntryID > 0;
}


//======================================================================
// sub_6668A0
// entry 006668a0  size 195  status ok
//======================================================================

char __stdcall sub_6668A0(int a1, int a2)
{
  int v2; // eax
  int v4; // [esp+4h] [ebp-8h]
  int i; // [esp+8h] [ebp-4h]

  if ( a1 >= 1000 )
    sub_5E9F20("iCID < 1000", "..\\casinoShell\\characterlines.cpp", 223);
  if ( a2 >= 10000 )
    sub_5E9F20("iSituation < 10000", "..\\casinoShell\\characterlines.cpp", 224);
  v4 = sub_666C70(a1, a2);
  for ( i = 0; i < v4; ++i )
  {
    if ( !(unsigned __int8)sub_666A80(a1, a2, i) )
    {
      v2 = sub_666740(a1, a2, i);
      if ( sub_666840(v2) )
        return 1;
    }
  }
  return 0;
}


//======================================================================
// sub_666970
// entry 00666970  size 174  status ok
//======================================================================

char __thiscall sub_666970(_DWORD *this, int a2, int a3)
{
  int v5; // [esp+4h] [ebp-Ch]
  int v6; // [esp+8h] [ebp-8h]
  int i; // [esp+Ch] [ebp-4h]

  if ( a2 >= 1000 )
    sub_5E9F20("iCID < 1000", "..\\casinoShell\\characterlines.cpp", 237);
  if ( a3 >= 10000 )
    sub_5E9F20("iSituation < 10000", "..\\casinoShell\\characterlines.cpp", 238);
  v6 = (*(int (__thiscall **)(Concurrency::details::ContextBase *, int))(*(_DWORD *)dword_162EE84 + 368))(
         dword_162EE84,
         a2);
  v5 = sub_666F50(a3);
  for ( i = 0; i < 16; ++i )
    *(_BYTE *)(i + 16 * v5 + *(_DWORD *)(*this + 4 * v6)) = 0;
  return 1;
}


//======================================================================
// sub_666A20
// entry 00666a20  size 93  status ok
//======================================================================

char __thiscall sub_666A20(_DWORD *this)
{
  size_t v1; // eax
  int i; // [esp+4h] [ebp-4h]

  for ( i = 0;
        i < (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 364))(dword_162EE84);
        ++i )
  {
    v1 = sub_666F80(this);
    memset(*(void **)(*this + 4 * i), 0, v1);
  }
  return 1;
}


//======================================================================
// sub_666A80
// entry 00666a80  size 217  status ok
//======================================================================

bool __thiscall sub_666A80(_DWORD *this, int a2, int a3, int a4)
{
  int v6; // [esp+Ch] [ebp-4h]

  if ( a2 >= 1000 )
    sub_5E9F20("iCID < 1000", "..\\casinoShell\\characterlines.cpp", 260);
  if ( a3 >= 10000 )
    sub_5E9F20("iSituation < 10000", "..\\casinoShell\\characterlines.cpp", 261);
  if ( a4 >= 99 )
    sub_5E9F20("iLine < 99", "..\\casinoShell\\characterlines.cpp", 262);
  v6 = (*(int (__thiscall **)(Concurrency::details::ContextBase *, int))(*(_DWORD *)dword_162EE84 + 368))(
         dword_162EE84,
         a2);
  return ((1 << (a4 % 8)) & *(unsigned __int8 *)(*(_DWORD *)(*this + 4 * v6) + a4 / 8 + 16 * sub_666F50(a3))) != 0;
}


//======================================================================
// sub_666B60
// entry 00666b60  size 250  status ok
//======================================================================

char __thiscall sub_666B60(_DWORD *this, int a2, int a3, int a4)
{
  int v4; // eax
  int v7; // [esp+Ch] [ebp-4h]

  if ( a2 >= 1000 )
    sub_5E9F20("iCID < 1000", "..\\casinoShell\\characterlines.cpp", 272);
  if ( a3 >= 10000 )
    sub_5E9F20("iSituation < 10000", "..\\casinoShell\\characterlines.cpp", 273);
  if ( a4 >= 99 )
    sub_5E9F20("iLine < 99", "..\\casinoShell\\characterlines.cpp", 274);
  v7 = (*(int (__thiscall **)(Concurrency::details::ContextBase *, int))(*(_DWORD *)dword_162EE84 + 368))(
         dword_162EE84,
         a2);
  v4 = sub_666F50(a3);
  *(_BYTE *)(a4 / 8 + 16 * v4 + *(_DWORD *)(*this + 4 * v7)) = (1 << (a4 % 8))
                                                             | *(_BYTE *)(*(_DWORD *)(*this + 4 * v7) + a4 / 8 + 16 * v4);
  return 1;
}


//======================================================================
// sub_666C60
// entry 00666c60  size 16  status ok
//======================================================================

int sub_666C60()
{
  return 848;
}


//======================================================================
// sub_666C70
// entry 00666c70  size 182  status ok
//======================================================================

int __thiscall sub_666C70(void *this, int a2, int a3)
{
  int v3; // eax
  int v6; // [esp+4h] [ebp-8h]
  int v7; // [esp+8h] [ebp-4h]

  if ( a2 >= 1000 )
    sub_5E9F20("iCID < 1000", "..\\casinoShell\\characterlines.cpp", 290);
  if ( a3 >= 10000 )
    sub_5E9F20("iSituation < 10000", "..\\casinoShell\\characterlines.cpp", 291);
  v6 = 0;
  v3 = sub_6667C0(a2, a3);
  v7 = sub_603C50(*(void **)(dword_7960D8 + 24), 541281347, v3, 0);
  if ( (*(int (__thiscall **)(int, void *))(*(_DWORD *)v7 + 4))(v7, this) )
    v6 = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v7 + 4))(v7);
  sub_6041D0(*(_DWORD *)(dword_7960D8 + 24), v7, v7);
  return v6;
}


//======================================================================
// sub_666D90
// entry 00666d90  size 161  status ok
//======================================================================

int __thiscall sub_666D90(void *this, int a2)
{
  int *v4; // [esp+4h] [ebp-58h]
  int i; // [esp+8h] [ebp-54h]
  _BYTE v6[63]; // [esp+11h] [ebp-4Bh] BYREF
  int v7; // [esp+50h] [ebp-Ch]

  memset(v6, 0, sizeof(v6));
  v7 = 0;
  v4 = 0;
  for ( i = 0; i < sub_666C60(); ++i )
  {
    if ( dword_7712E0[18 * i] == a2 )
    {
      v4 = &dword_7712E0[18 * i];
      break;
    }
  }
  if ( v4 )
    return (int)v4;
  else
    return sub_666F00(this);
}


//======================================================================
// sub_666E40
// entry 00666e40  size 104  status ok
//======================================================================

int *__thiscall sub_666E40(void *this, char *String2)
{
  int v4; // [esp+4h] [ebp-8h]
  int i; // [esp+8h] [ebp-4h]

  v4 = sub_666C60();
  for ( i = 0; i < v4; ++i )
  {
    if ( !stricmp(&aNoSituation_0[72 * i], String2) )
      return &dword_7712E0[18 * i];
  }
  return (int *)sub_666F00(this);
}


//======================================================================
// sub_666EB0
// entry 00666eb0  size 80  status ok
//======================================================================

int *__thiscall sub_666EB0(void *this, int a2)
{
  if ( a2 >= 0 && a2 <= sub_666C60() )
    return &dword_7712E0[18 * a2];
  sub_5E9F20("false", "..\\casinoShell\\characterlines.cpp", 352);
  return (int *)sub_666F00(this);
}


//======================================================================
// sub_666F00
// entry 00666f00  size 74  status ok
//======================================================================

void *sub_666F00()
{
  size_t v0; // eax
  int Key[19]; // [esp+4h] [ebp-50h] BYREF

  Key[0] = -1;
  v0 = sub_666C60();
  return bsearch(Key, dword_7712E0, v0, 0x48u, (_CoreCrtNonSecureSearchSortCompareFunction)sub_6665A0);
}


//======================================================================
// sub_666F50
// entry 00666f50  size 46  status ok
//======================================================================

int __thiscall sub_666F50(void *this, int a2)
{
  return (sub_666D90(this, a2) - (int)dword_7712E0) / 72;
}


//======================================================================
// sub_666F80
// entry 00666f80  size 22  status ok
//======================================================================

int sub_666F80()
{
  return 16 * sub_666C60();
}


//======================================================================
// sub_666FB0
// entry 00666fb0  size 88  status ok
//======================================================================

int __stdcall sub_666FB0(char *String2)
{
  int i; // [esp+4h] [ebp-4h]

  for ( i = 0; i < 44; ++i )
  {
    if ( !stricmp(&aNobody[68 * i], String2) )
      return dword_780160[17 * i];
  }
  return -1;
}


//======================================================================
// CompareFunction
// entry 00667840  size 25  status ok
//======================================================================

int __cdecl CompareFunction(const char **a1, const char **a2)
{
  return strcmp(*a1, *a2);
}


//======================================================================
// sub_667860
// entry 00667860  size 305  status ok
//======================================================================

int __thiscall sub_667860(void *this, char *Str, char *a3, char *a4, char *a5)
{
  int v7; // [esp+4h] [ebp-214h]
  char String2[256]; // [esp+8h] [ebp-210h] BYREF
  char Buffer[256]; // [esp+108h] [ebp-110h] BYREF
  int v10; // [esp+210h] [ebp-8h] BYREF
  int *v11; // [esp+214h] [ebp-4h]

  if ( (unsigned __int8)sub_6679A0(Str, String2, a3, a4, a5, (int)&v10) )
  {
    v7 = sub_666FB0(String2);
    if ( v7 == -1 )
    {
      sub_5E9F20("false", "..\\casinoShell\\characterlines.cpp", 561);
      return 0;
    }
    else
    {
      sprintf(Buffer, "%s_%s", a4, a5);
      v11 = sub_666E40(this, Buffer);
      if ( *v11 == -1 )
      {
        sub_5E9F20("false", "..\\casinoShell\\characterlines.cpp", 566);
        return 0;
      }
      else
      {
        return sub_666740(v7, *v11, 0);
      }
    }
  }
  else
  {
    sub_5E9F20("false", "..\\casinoShell\\characterlines.cpp", 557);
    return 0;
  }
}


//======================================================================
// sub_6679A0
// entry 006679a0  size 275  status ok
//======================================================================

bool __stdcall sub_6679A0(char *Str, char *Destination, char *a3, char *a4, char *a5, int *a6)
{
  int v7; // eax
  bool v8; // [esp+0h] [ebp-114h]
  char String[260]; // [esp+Ch] [ebp-108h] BYREF

  Str = strrchr(Str, 92);
  if ( !Str )
    return 0;
  ++Str;
  v8 = (unsigned __int8)sub_667AC0((int)&Str, Destination)
    && (unsigned __int8)sub_667AC0((int)&Str, a3)
    && (unsigned __int8)sub_667AC0((int)&Str, a4)
    && (unsigned __int8)sub_667AC0((int)&Str, a5)
    && (unsigned __int8)sub_667AC0((int)&Str, String);
  v7 = atoi(String);
  *a6 = v7;
  return v8;
}


//======================================================================
// sub_667AC0
// entry 00667ac0  size 182  status ok
//======================================================================

char __stdcall sub_667AC0(const char **a1, char *Destination)
{
  char *v3; // [esp+4h] [ebp-8h]
  char *Str; // [esp+8h] [ebp-4h]

  *Destination = 0;
  Str = (char *)*a1;
  v3 = strchr(*a1, 43);
  if ( !v3 )
    v3 = strchr(Str, 46);
  if ( !v3 )
    return 0;
  strncpy(Destination, Str, v3 - Str);
  Destination[v3 - Str] = 0;
  while ( *Destination )
  {
    if ( *Destination == 32 || *Destination == 45 )
      *Destination = 95;
    ++Destination;
  }
  *a1 = v3 + 1;
  return 1;
}


//======================================================================
// sub_667B90
// entry 00667b90  size 41  status ok
//======================================================================

ATL::CCRTHeap *__thiscall sub_667B90(ATL::CCRTHeap *this)
{
  ATL::CCRTHeap::CCRTHeap(this);
  *(_DWORD *)this = &GameSaver::`vftable';
  *((_DWORD *)this + 1) = 1;
  return this;
}


//======================================================================
// sub_667BE0
// entry 00667be0  size 144  status ok
//======================================================================

int __thiscall sub_667BE0(void *this, char *a2, int Value)
{
  struct Concurrency::details::_TaskCollectionBase *ExecutingCollection; // eax
  int v4; // eax
  const char *v5; // eax
  char *v6; // eax
  char Buffer[20]; // [esp+8h] [ebp-34h] BYREF
  char Destination[28]; // [esp+1Ch] [ebp-20h] BYREF

  ExecutingCollection = Concurrency::details::ContextBase::GetExecutingCollection(dword_162EE84);
  v4 = (*(int (__thiscall **)(Concurrency::details::ContextBase *, struct Concurrency::details::_TaskCollectionBase *))(*(_DWORD *)dword_162EE84 + 224))(
         dword_162EE84,
         ExecutingCollection);
  v5 = (const char *)(*(int (__thiscall **)(int, int, void *))(*(_DWORD *)v4 + 20))(v4, v4, this);
  strcpy(Destination, v5);
  v6 = itoa(Value, Buffer, 10);
  return sprintf(a2, "%s%s%s", Destination, v6, ".sav");
}


//======================================================================
// sub_667C70
// entry 00667c70  size 156  status ok
//======================================================================

char *__stdcall sub_667C70(char *Source)
{
  CImageDisplay *v1; // eax
  char *v2; // eax
  char Destination[28]; // [esp+Ch] [ebp-20h] BYREF

  Destination[0] = 0;
  v1 = (CImageDisplay *)sub_6375B0((_DWORD **)dword_162EE84);
  v2 = sub_520E60(v1);
  strcat(Destination, v2);
  *strchr(Destination, 46) = 0;
  mkdir(Destination);
  strcat(Destination, "\\");
  strcat(Destination, Source);
  return strcpy(Source, Destination);
}


//======================================================================
// sub_667D10
// entry 00667d10  size 332  status ok
//======================================================================

char sub_667D10()
{
  const CHAR *v0; // eax
  int v2; // eax
  const CHAR *v3; // eax
  const CHAR *v4; // eax
  const CHAR *v5; // [esp-8h] [ebp-20h]
  const CHAR *v6; // [esp-8h] [ebp-20h]
  const CHAR *v7; // [esp-8h] [ebp-20h]
  int v8; // [esp+4h] [ebp-14h]
  int v9; // [esp+8h] [ebp-10h]
  char *Str1; // [esp+10h] [ebp-8h]
  char v11; // [esp+17h] [ebp-1h]

  v11 = 0;
  v9 = sub_5FB810(dword_16306D0, 0);
  Str1 = (char *)(*(int (__thiscall **)(int))(*(_DWORD *)v9 + 184))(v9);
  v8 = sub_5FB720(dword_16306D0, 0);
  if ( (*(unsigned __int8 (__thiscall **)(int, char *, int))(*(_DWORD *)v8 + 240))(v8, Str1, 1) )
  {
    v5 = (const CHAR *)sub_630F40((int)"SID_SHELL_DUPLICATEGAMENAME");
    v0 = (const CHAR *)sub_630F40((int)"SID_SHELL_SAVEDGAMEEXISTS");
    if ( sub_62FF10(v0, v5, 4u) != 6 )
      return 0;
    v11 = 1;
  }
  else
  {
    v2 = sub_5FB720(dword_16306D0, 0);
    if ( (*(int (__thiscall **)(int, int))(*(_DWORD *)v2 + 184))(v2, v2) == 100 )
    {
      v6 = (const CHAR *)sub_630F40((int)"SID_SHELL_SAVEGAME");
      v3 = (const CHAR *)sub_630F40((int)"SID_SHELL_TOOMANYSAVEDGAMES");
      sub_62FF10(v3, v6, 0);
      return 0;
    }
  }
  if ( !strcmp(Str1, &Source) )
  {
    v7 = (const CHAR *)sub_630F40((int)"SID_SHELL_SAVEGAME");
    v4 = (const CHAR *)sub_630F40((int)"SID_SHELL_MUSTNAMEGAME");
    sub_62FF10(v4, v7, 0);
    return 0;
  }
  else
  {
    sub_5F87D0(dword_16306D0);
    sub_613F80(*(_DWORD *)(dword_7960D8 + 16));
    return sub_668170(v11);
  }
}


//======================================================================
// sub_667E60
// entry 00667e60  size 48  status ok
//======================================================================

char __thiscall sub_667E60(void *this)
{
  Concurrency::details::UMSFreeVirtualProcessorRoot *v1; // eax

  v1 = (Concurrency::details::UMSFreeVirtualProcessorRoot *)sub_5FB720(dword_16306D0, 0);
  if ( Concurrency::details::UMSFreeVirtualProcessorRoot::GetExecutingProxy(v1) == (struct Concurrency::details::UMSThreadProxy *)-1 )
    return 0;
  else
    return sub_668620(this);
}


//======================================================================
// sub_667E90
// entry 00667e90  size 34  status ok
//======================================================================

char __thiscall sub_667E90(void *this)
{
  const char *v1; // eax

  v1 = (const char *)sub_673CB0(dword_16306D0, this);
  remove(v1);
  return 1;
}


//======================================================================
// sub_667EC0
// entry 00667ec0  size 675  status ok
//======================================================================

char __stdcall sub_667EC0(char *Source, char *a2)
{
  int v2; // eax
  char *v4; // [esp+0h] [ebp-440h]
  char *Str2; // [esp+8h] [ebp-438h]
  CImageDisplay *v6; // [esp+Ch] [ebp-434h]
  void *v7; // [esp+1Ch] [ebp-424h]
  char *v8; // [esp+28h] [ebp-418h]
  char v9; // [esp+2Fh] [ebp-411h]
  FILE *Stream; // [esp+30h] [ebp-410h]
  int i; // [esp+34h] [ebp-40Ch]
  char Destination[1028]; // [esp+38h] [ebp-408h] BYREF

  v9 = 0;
  memset(Destination, 0, 1024);
  sub_667C70(Source);
  strcpy(Destination, Source);
  Stream = sub_5EA9C0(Destination, "rb");
  if ( Stream )
  {
    v7 = operator new(0x21496u);
    if ( v7 )
    {
      memset(v7, 0, 0x21496u);
      v4 = (char *)v7;
    }
    else
    {
      v4 = 0;
    }
    fread(v4, 0x21496u, 1u, Stream);
    v2 = (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 268))(dword_162EE84);
    v8 = (char *)operator new(76 * v2);
    for ( i = 0;
          i < (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 268))(dword_162EE84);
          ++i )
    {
      fread(&v8[76 * i], 0x4Cu, 1u, Stream);
    }
    fclose(Stream);
    if ( *v8 == 2 || *v8 == 3 )
    {
      v6 = (CImageDisplay *)sub_6375B0((_DWORD **)dword_162EE84);
      Str2 = (char *)&CImageDisplay::GetDisplayFormat(v6)->rcSource.top;
      if ( !strcmp(v8 + 8, Str2)
        && (*(unsigned __int8 (__thiscall **)(int, char *))(*(_DWORD *)dword_162EE80 + 152))(dword_162EE80, Source) )
      {
        strcpy(a2, v4 + 1);
        v9 = 1;
      }
    }
    operator delete(v4);
    operator delete(v8);
  }
  return v9;
}


//======================================================================
// sub_668170
// entry 00668170  size 1189  status ok
//======================================================================

char __stdcall sub_668170(char a1)
{
  const char *v1; // eax
  unsigned __int8 ExecutingCollection; // al
  int v3; // eax
  const char *v4; // eax
  int v5; // eax
  int v6; // eax
  struct Concurrency::details::_TaskCollectionBase *v7; // eax
  _DWORD *v8; // eax
  const void *v9; // eax
  int v10; // eax
  size_t v12; // [esp-4h] [ebp-47Ch]
  void *v13; // [esp+4h] [ebp-474h]
  void *v14; // [esp+28h] [ebp-450h]
  char Destination[28]; // [esp+30h] [ebp-448h] BYREF
  void *Buffer; // [esp+4Ch] [ebp-42Ch]
  char *v17; // [esp+50h] [ebp-428h]
  void *v18; // [esp+54h] [ebp-424h]
  size_t v19; // [esp+58h] [ebp-420h] BYREF
  char v20; // [esp+5Fh] [ebp-419h]
  FILE *Stream; // [esp+60h] [ebp-418h]
  void *v22; // [esp+64h] [ebp-414h]
  int i; // [esp+68h] [ebp-410h]
  size_t ElementSize; // [esp+6Ch] [ebp-40Ch] BYREF
  char Str[1028]; // [esp+70h] [ebp-408h] BYREF

  if ( a1 )
  {
    v1 = (const char *)sub_673CB0(dword_16306D0);
    strcpy(Destination, v1);
  }
  else
  {
    sub_669310(Destination);
  }
  memset(Str, 0, 1024);
  strcpy(Str, Destination);
  v14 = operator new(0x21496u);
  if ( v14 )
  {
    memset(v14, 0, 0x21496u);
    v13 = v14;
  }
  else
  {
    v13 = 0;
  }
  Buffer = v13;
  memset(v13, 0, 0x21496u);
  ExecutingCollection = (unsigned __int8)Concurrency::details::ContextBase::GetExecutingCollection(dword_162EE84);
  *(_BYTE *)Buffer = ExecutingCollection;
  v3 = sub_5FB810(dword_16306D0, 0);
  v4 = (const char *)(*(int (__thiscall **)(int, int))(*(_DWORD *)v3 + 184))(v3, v3);
  strcpy((char *)Buffer + 1, v4);
  memcpy((char *)Buffer + 22, (const void *)(*(_DWORD *)(dword_16306D0 + 444) + 76), 0x21480u);
  v5 = (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 268))(dword_162EE84);
  v17 = (char *)operator new(76 * v5);
  for ( i = 0; ; ++i )
  {
    v6 = (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 268))(dword_162EE84);
    if ( i >= v6 )
      break;
    memset(&v17[76 * i], 0, 0x4Cu);
  }
  sub_668E10(v17);
  v7 = Concurrency::details::ContextBase::GetExecutingCollection(dword_162EE84);
  ElementSize = (*(int (__thiscall **)(Concurrency::details::ContextBase *, struct Concurrency::details::_TaskCollectionBase *))(*(_DWORD *)dword_162EE84 + 264))(
                  dword_162EE84,
                  v7);
  v18 = operator new(ElementSize);
  v12 = ElementSize;
  v8 = (_DWORD *)sub_6375B0((_DWORD **)dword_162EE84);
  v9 = (const void *)sub_63AAE0(v8, (struct Concurrency::details::_TaskCollectionBase *)0xFFFFFFFF);
  memcpy(v18, v9, v12);
  v19 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_162EE80 + 140))(dword_162EE80);
  v22 = operator new(v19);
  (*(void (__thiscall **)(int, void *))(*(_DWORD *)dword_162EE80 + 144))(dword_162EE80, v22);
  v20 = 0;
  Stream = sub_5EA9C0(Str, "wb");
  if ( Stream )
  {
    fwrite(Buffer, 0x21496u, 1u, Stream);
    for ( i = 0; ; ++i )
    {
      v10 = (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 268))(dword_162EE84);
      if ( i >= v10 )
        break;
      fwrite(&v17[76 * i], 0x4Cu, 1u, Stream);
    }
    fwrite(&ElementSize, 4u, 1u, Stream);
    fwrite(v18, ElementSize, 1u, Stream);
    fwrite(&v19, 4u, 1u, Stream);
    fwrite(v22, v19, 1u, Stream);
    fclose(Stream);
    v20 = 1;
  }
  operator delete(Buffer);
  operator delete(v17);
  operator delete(v18);
  operator delete(v22);
  return v20;
}


//======================================================================
// sub_668620
// entry 00668620  size 1806  status ok
//======================================================================

char __thiscall sub_668620(_DWORD *this)
{
  const CHAR *v1; // eax
  const char *v3; // eax
  struct Concurrency::details::_TaskCollectionBase *v4; // esi
  int v5; // eax
  struct Concurrency::details::_TaskCollectionBase *ExecutingCollection; // eax
  const CHAR *v7; // eax
  const CHAR *v8; // eax
  const CHAR *v9; // eax
  const char *v10; // eax
  const CHAR *v11; // eax
  struct Concurrency::details::_TaskCollectionBase *v12; // eax
  const CHAR *v13; // [esp-8h] [ebp-498h]
  const CHAR *v14; // [esp-8h] [ebp-498h]
  const CHAR *v15; // [esp-8h] [ebp-498h]
  const CHAR *v16; // [esp-8h] [ebp-498h]
  const CHAR *v17; // [esp-8h] [ebp-498h]
  char *v18; // [esp+4h] [ebp-48Ch]
  int v20; // [esp+Ch] [ebp-484h]
  int v21; // [esp+10h] [ebp-480h]
  CImageDisplay *v22; // [esp+14h] [ebp-47Ch]
  char *v23; // [esp+58h] [ebp-438h]
  char *v24; // [esp+64h] [ebp-42Ch]
  void *v25; // [esp+68h] [ebp-428h]
  size_t ElementSize; // [esp+6Ch] [ebp-424h] BYREF
  int v27; // [esp+70h] [ebp-420h]
  FILE *Stream; // [esp+74h] [ebp-41Ch]
  void *v29; // [esp+78h] [ebp-418h]
  int i; // [esp+7Ch] [ebp-414h]
  size_t v31; // [esp+80h] [ebp-410h] BYREF
  int v32; // [esp+84h] [ebp-40Ch]
  char Destination[1028]; // [esp+88h] [ebp-408h] BYREF

  if ( !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)dword_162EE80 + 128))(dword_162EE80) )
  {
    v13 = (const CHAR *)sub_630F40((int)"SID_SHELL_RESTOREGAME");
    v1 = (const CHAR *)sub_630F40((int)"SID_SHELL_CONFIRMRESTORE");
    if ( sub_62FF10(v1, v13, 4u) != 6 )
      return 0;
  }
  memset(Destination, 0, 1024);
  v3 = (const char *)sub_673CB0(dword_16306D0);
  strcpy(Destination, v3);
  Stream = sub_5EA9C0(Destination, "rb");
  if ( !Stream )
    return 0;
  v23 = (char *)operator new(0x21496u);
  if ( v23 )
  {
    memset(v23, 0, 0x21496u);
    v18 = v23;
  }
  else
  {
    v18 = 0;
  }
  fread(v18, 0x21496u, 1u, Stream);
  v4 = (struct Concurrency::details::_TaskCollectionBase *)*v18;
  if ( v4 != Concurrency::details::ContextBase::GetExecutingCollection(dword_162EE84) )
  {
    sub_5E9F20("false", "..\\casinoShell\\savegame.cpp", 215);
    return 0;
  }
  v5 = (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 268))(dword_162EE84);
  v24 = (char *)operator new(76 * v5);
  for ( i = 0;
        i < (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 268))(dword_162EE84);
        ++i )
  {
    fread(&v24[76 * i], 0x4Cu, 1u, Stream);
  }
  ExecutingCollection = Concurrency::details::ContextBase::GetExecutingCollection(dword_162EE84);
  v32 = (*(int (__thiscall **)(Concurrency::details::ContextBase *, struct Concurrency::details::_TaskCollectionBase *))(*(_DWORD *)dword_162EE84 + 264))(
          dword_162EE84,
          ExecutingCollection);
  fread(&ElementSize, 4u, 1u, Stream);
  if ( ElementSize != v32 )
  {
    v14 = (const CHAR *)sub_630F40((int)"SID_GENERIC_RESTORE");
    v7 = (const CHAR *)sub_630F40((int)"SID_SHELL_RESTORECHANGESIZE");
    sub_62FF10(v7, v14, 0);
    operator delete(v18);
    operator delete(v24);
    fclose(Stream);
    return 0;
  }
  v25 = operator new(ElementSize);
  fread(v25, ElementSize, 1u, Stream);
  if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)dword_162EE80 + 136))(dword_162EE80) )
  {
    v27 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_162EE80 + 140))(dword_162EE80);
    fread(&v31, 4u, 1u, Stream);
    if ( v31 != v27 )
    {
      v15 = (const CHAR *)sub_630F40((int)"SID_GENERIC_RESTORE");
      v8 = (const CHAR *)sub_630F40((int)"SID_SHELL_RESTORECHANGESIZE");
      sub_62FF10(v8, v15, 0);
      operator delete(v18);
      operator delete(v24);
      operator delete(v25);
      fclose(Stream);
      return 0;
    }
  }
  else
  {
    fread(&v31, 4u, 1u, Stream);
  }
  v29 = operator new(v31);
  fread(v29, v31, 1u, Stream);
  fclose(Stream);
  if ( (unsigned __int8)sub_6693F0(v24) )
  {
    if ( (unsigned __int8)sub_669580(v29) )
    {
      v16 = (const CHAR *)sub_630F40((int)"SID_SHELL_PLAYERDELETED");
      v9 = (const CHAR *)sub_630F40((int)"SID_SHELL_RESTOREDELETEDPLAYER");
      sub_62FF10(v9, v16, 0);
      v10 = (const char *)sub_673CB0(dword_16306D0);
      remove(v10);
      operator delete(v18);
      operator delete(v24);
      operator delete(v25);
      operator delete(v29);
      return 0;
    }
    v17 = (const CHAR *)sub_630F40((int)"SID_SHELL_PLAYERDELETED");
    v11 = (const CHAR *)sub_630F40((int)"SID_SHELL_REPLACINGDELETEDPLAYER");
    sub_62FF10(v11, v17, 0);
  }
  sub_5F87D0(dword_16306D0);
  sub_668FA0(v24);
  v20 = *(this + 1);
  v21 = *v18;
  v22 = (CImageDisplay *)sub_6375B0((_DWORD **)dword_162EE84);
  *(&CImageDisplay::GetDisplayFormat(v22)->bmiColors[1].rgbGreen + v21) = v20;
  sub_650550(dword_162EE80, v21, 0);
  sub_636EE0(dword_162EE84);
  sub_5F45D0(0);
  v12 = Concurrency::details::ContextBase::GetExecutingCollection(dword_162EE84);
  (*(void (__thiscall **)(Concurrency::details::ContextBase *, struct Concurrency::details::_TaskCollectionBase *, void *))(*(_DWORD *)dword_162EE84 + 816))(
    dword_162EE84,
    v12,
    v25);
  (*(void (__thiscall **)(int, void *))(*(_DWORD *)dword_162EE80 + 148))(dword_162EE80, v29);
  (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_162EE80 + 508))(dword_162EE80, 0);
  operator delete(v18);
  operator delete(v24);
  operator delete(v25);
  operator delete(v29);
  *(_BYTE *)(dword_162EE80 + 64) = 1;
  return 1;
}


//======================================================================
// sub_668D30
// entry 00668d30  size 221  status ok
//======================================================================

char __stdcall sub_668D30(char *Buffer)
{
  const char *v1; // eax
  FILE *ExecutingCollection; // eax
  FILE *v3; // esi
  FILE *Stream; // [esp+8h] [ebp-40Ch]
  char Destination[1028]; // [esp+Ch] [ebp-408h] BYREF

  memset(Destination, 0, 1024);
  v1 = (const char *)sub_673CB0(dword_16306D0);
  strcpy(Destination, v1);
  ExecutingCollection = sub_5EA9C0(Destination, "rb");
  Stream = ExecutingCollection;
  if ( ExecutingCollection )
  {
    fread(Buffer, 0x21496u, 1u, ExecutingCollection);
    fclose(Stream);
    v3 = (FILE *)*Buffer;
    ExecutingCollection = (FILE *)Concurrency::details::ContextBase::GetExecutingCollection(dword_162EE84);
    if ( v3 != ExecutingCollection )
      LOBYTE(ExecutingCollection) = sub_5E9F20(
                                      "header->whichGame == shell->GetCurrentRoomNum()",
                                      "..\\casinoShell\\savegame.cpp",
                                      303);
  }
  return (char)ExecutingCollection;
}


//======================================================================
// sub_668E10
// entry 00668e10  size 390  status ok
//======================================================================

int __stdcall sub_668E10(int a1)
{
  int result; // eax
  const struct tagVIDEOINFO *DisplayFormat; // eax
  char *v3; // eax
  CImageDisplay *v5; // [esp+Ch] [ebp-28h]
  int i; // [esp+30h] [ebp-4h]

  for ( i = 0; ; ++i )
  {
    result = (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 268))(dword_162EE84);
    if ( i >= result )
      break;
    if ( CImageDisplay::GetDisplayFormat(*(CImageDisplay **)(*((_DWORD *)dword_162EE84 + 22) + 4 * i))->rcSource.left )
    {
      *(_BYTE *)(a1 + 76 * i) = CImageDisplay::GetDisplayFormat(*(CImageDisplay **)(*((_DWORD *)dword_162EE84 + 22)
                                                                                  + 4 * i))->rcSource.left;
      *(_DWORD *)(a1 + 76 * i + 4) = *(_DWORD *)(*(_DWORD *)(*((_DWORD *)dword_162EE84 + 22) + 4 * i) + 8);
      DisplayFormat = CImageDisplay::GetDisplayFormat(*(CImageDisplay **)(*((_DWORD *)dword_162EE84 + 22) + 4 * i));
      strcpy((char *)(a1 + 76 * i + 8), (const char *)&DisplayFormat->rcSource.top);
      v5 = *(CImageDisplay **)(*((_DWORD *)dword_162EE84 + 22) + 4 * i);
      if ( CImageDisplay::GetDisplayFormat(v5)->rcSource.left == 2
        || CImageDisplay::GetDisplayFormat(v5)->rcSource.left == 3 )
      {
        v3 = sub_520E60(*(CImageDisplay **)(*((_DWORD *)dword_162EE84 + 22) + 4 * i));
        strcpy((char *)(a1 + 76 * i + 60), v3);
      }
    }
    else
    {
      *(_BYTE *)(a1 + 76 * i) = 0;
    }
  }
  return result;
}


//======================================================================
// sub_668FA0
// entry 00668fa0  size 878  status ok
//======================================================================

int __thiscall sub_668FA0(_DWORD *this, int a2)
{
  const struct tagVIDEOINFO *DisplayFormat; // eax
  char *v3; // eax
  int result; // eax
  CImageDisplay *v7; // [esp+14h] [ebp-24h]
  LONG v8; // [esp+28h] [ebp-10h]
  int i; // [esp+34h] [ebp-4h]
  int j; // [esp+34h] [ebp-4h]
  int k; // [esp+34h] [ebp-4h]
  int m; // [esp+34h] [ebp-4h]

  *(this + 1) = 0;
  for ( i = 0;
        i < (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 268))(dword_162EE84);
        ++i )
  {
    sub_63B2D0(*(int **)(*((_DWORD *)dword_162EE84 + 22) + 4 * i));
  }
  for ( j = 0;
        j < (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 268))(dword_162EE84);
        ++j )
  {
    if ( *(_BYTE *)(a2 + 76 * j) )
    {
      ++*(this + 1);
      if ( *(_BYTE *)(a2 + 76 * j) == 1 )
      {
        v8 = *(char *)(a2 + 76 * j);
        CImageDisplay::GetDisplayFormat(*(CImageDisplay **)(*((_DWORD *)dword_162EE84 + 22) + 4 * j))->rcSource.left = v8;
        sub_63B490(*(CImageDisplay **)(*((_DWORD *)dword_162EE84 + 22) + 4 * j), *(char **)(a2 + 76 * j + 4));
      }
      else
      {
        sub_63AB10(*(_DWORD *)(*((_DWORD *)dword_162EE84 + 22) + 4 * j), (char *)(a2 + 76 * j + 60));
      }
      DisplayFormat = CImageDisplay::GetDisplayFormat(*(CImageDisplay **)(*((_DWORD *)dword_162EE84 + 22) + 4 * j));
      strcpy((char *)&DisplayFormat->rcSource.top, (const char *)(a2 + 76 * j + 8));
    }
    else
    {
      sub_63A3E0(*(_DWORD *)(*((_DWORD *)dword_162EE84 + 22) + 4 * j), j, 0);
      CImageDisplay::GetDisplayFormat(*(CImageDisplay **)(*((_DWORD *)dword_162EE84 + 22) + 4 * j))->rcSource.left = 0;
    }
  }
  for ( k = 0;
        k < (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 268))(dword_162EE84);
        ++k )
  {
    if ( *(_BYTE *)(a2 + 76 * k) && *(_BYTE *)(a2 + 76 * k) != 1 && (unsigned __int8)sub_669450(a2 + 76 * k) )
    {
      CImageDisplay::GetDisplayFormat(*(CImageDisplay **)(*((_DWORD *)dword_162EE84 + 22) + 4 * k))->rcSource.left = 1;
      v3 = (char *)(*(int (__thiscall **)(Concurrency::details::ContextBase *, int))(*(_DWORD *)dword_162EE84 + 880))(
                     dword_162EE84,
                     1);
      sub_63B490(*(CImageDisplay **)(*((_DWORD *)dword_162EE84 + 22) + 4 * k), v3);
    }
  }
  for ( m = 0; ; ++m )
  {
    result = (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 268))(dword_162EE84);
    if ( m >= result )
      break;
    v7 = *(CImageDisplay **)(*((_DWORD *)dword_162EE84 + 22) + 4 * m);
    if ( CImageDisplay::GetDisplayFormat(v7)->rcSource.left == 2
      || CImageDisplay::GetDisplayFormat(v7)->rcSource.left == 3 )
    {
      sub_63A8D0(*(_DWORD *)(*((_DWORD *)dword_162EE84 + 22) + 4 * m), -1, 0, 1, 1, 1);
    }
    if ( CImageDisplay::GetDisplayFormat(*(CImageDisplay **)(*((_DWORD *)dword_162EE84 + 22) + 4 * m))->rcSource.left == 1 )
      sub_63A8D0(
        *(_DWORD *)(*((_DWORD *)dword_162EE84 + 22) + 4 * m),
        *(_DWORD *)(*(_DWORD *)(*((_DWORD *)dword_162EE84 + 22) + 4 * m) + 8),
        0,
        1,
        1,
        1);
  }
  return result;
}


//======================================================================
// sub_669310
// entry 00669310  size 183  status ok
//======================================================================

void __thiscall sub_669310(void *this, int a2)
{
  char Str[1028]; // [esp+4h] [ebp-410h] BYREF
  FILE *Stream; // [esp+40Ch] [ebp-8h]
  int Value; // [esp+410h] [ebp-4h]

  for ( Value = 0; Value < 100; ++Value )
  {
    memset(Str, 0, 1024);
    sub_667BE0(this, Str, Value);
    sub_667C70(Str);
    Stream = sub_5EA9C0(Str, "rb");
    if ( !Stream )
      break;
    fclose(Stream);
  }
}


//======================================================================
// sub_6693F0
// entry 006693f0  size 93  status ok
//======================================================================

char __stdcall sub_6693F0(int a1)
{
  int i; // [esp+4h] [ebp-4h]

  for ( i = 0;
        i < (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 268))(dword_162EE84);
        ++i )
  {
    if ( (unsigned __int8)sub_669450(a1 + 76 * i) )
      return 1;
  }
  return 0;
}


//======================================================================
// sub_669450
// entry 00669450  size 293  status ok
//======================================================================

char __stdcall sub_669450(int a1)
{
  char *Str2; // [esp+8h] [ebp-3CCh]
  _DWORD v3[237]; // [esp+10h] [ebp-3C4h] BYREF
  int v4; // [esp+3D0h] [ebp-4h]

  sub_63A0C0(v3);
  v4 = 0;
  if ( !*(_BYTE *)a1
    || *(_BYTE *)a1 == 1
    || sub_63AB10((int)v3, (char *)(a1 + 60))
    && (Str2 = (char *)&CImageDisplay::GetDisplayFormat((CImageDisplay *)v3)->rcSource.top,
        !strcmp((const char *)(a1 + 8), Str2)) )
  {
    v4 = -1;
    sub_63A120((CNoTrackObject *)v3);
    return 0;
  }
  else
  {
    v4 = -1;
    sub_63A120((CNoTrackObject *)v3);
    return 1;
  }
}


//======================================================================
// sub_669580
// entry 00669580  size 39  status ok
//======================================================================

int __stdcall sub_669580(int a1)
{
  return (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_162EE80 + 484))(dword_162EE80, a1);
}


//======================================================================
// sub_6695E0
// entry 006695e0  size 100  status ok
//======================================================================

_DWORD *__thiscall sub_6695E0(_DWORD *this)
{
  sub_64CBE0((int)this);
  *this = &SyncViewerRoom::`vftable';
  sub_5F1AD0(this, 2300004);
  return this;
}


//======================================================================
// sub_669650
// entry 00669650  size 136  status ok
//======================================================================

void __thiscall sub_669650(int this)
{
  *(_DWORD *)this = &SyncViewerRoom::`vftable';
  if ( *(_DWORD *)(this + 132) )
    (***(void (__thiscall ****)(_DWORD, int))(this + 132))(*(_DWORD *)(this + 132), 1);
  sub_64CC80((_DWORD *)this);
}


//======================================================================
// sub_6696E0
// entry 006696e0  size 1637  status ok
//======================================================================

int __thiscall sub_6696E0(int this)
{
  int v1; // eax
  _DWORD *v2; // eax
  _DWORD *v4; // [esp+4h] [ebp-44h]
  _DWORD *v5; // [esp+8h] [ebp-40h]
  _DWORD *v6; // [esp+Ch] [ebp-3Ch]
  int v8; // [esp+10h] [ebp-38h]
  int v9; // [esp+14h] [ebp-34h]
  int v10; // [esp+18h] [ebp-30h]
  int v11; // [esp+1Ch] [ebp-2Ch]
  _DWORD *v12; // [esp+20h] [ebp-28h]
  _DWORD *v13; // [esp+28h] [ebp-20h]
  _DWORD *v14; // [esp+30h] [ebp-18h]
  int v15; // [esp+38h] [ebp-10h]

  sub_64CE60((CDeferredCommand *)this);
  v15 = sub_607960(*(void **)(dword_7960D8 + 20), (int)"RoomChar", 0);
  v14 = operator new(0x3ACu);
  if ( v14 )
    v6 = sub_63A0C0(v14);
  else
    v6 = 0;
  *(_DWORD *)(this + 132) = v6;
  v1 = (*(int (__thiscall **)(Concurrency::details::ContextBase *, int))(*(_DWORD *)dword_162EE84 + 356))(
         dword_162EE84,
         v15);
  sub_63A8D0(*(_DWORD *)(this + 132), v1, 0, 1, 1, 1);
  v11 = *(_DWORD *)(*(_DWORD *)(this + 132) + 32);
  sub_646150(v11, 100, 77);
  v10 = *(_DWORD *)(*(_DWORD *)(this + 132) + 32);
  sub_646380(v10, 1);
  v9 = *(_DWORD *)(*(_DWORD *)(this + 132) + 32);
  sub_6464D0(v9, 0, 0);
  v13 = operator new(0xD0u);
  if ( v13 )
  {
    sub_6280D0((int)v13);
    *v13 = &SituationListBox::`vftable';
    v13[51] = this;
    v5 = v13;
  }
  else
  {
    v5 = 0;
  }
  *(_DWORD *)(this + 92) = sub_5FAC90(
                             *((void **)dword_162EE84 + 5),
                             v5,
                             0,
                             3300237,
                             10,
                             240,
                             1,
                             0,
                             3200204,
                             287,
                             206,
                             3200203,
                             287,
                             24,
                             3200207,
                             285,
                             38,
                             186,
                             285,
                             38,
                             16,
                             186,
                             7,
                             24,
                             275,
                             16,
                             12,
                             4,
                             4,
                             -1,
                             200,
                             200,
                             200,
                             0);
  v12 = operator new(0xD0u);
  if ( v12 )
  {
    sub_6280D0((int)v12);
    *v12 = &SituationInstanceListBox::`vftable';
    v12[51] = this;
    v4 = v12;
  }
  else
  {
    v4 = 0;
  }
  *(_DWORD *)(this + 96) = sub_5FAC90(
                             *((void **)dword_162EE84 + 5),
                             v4,
                             0,
                             3300237,
                             325,
                             240,
                             1,
                             0,
                             3200204,
                             287,
                             206,
                             3200203,
                             287,
                             24,
                             3200207,
                             285,
                             38,
                             186,
                             285,
                             38,
                             16,
                             186,
                             7,
                             24,
                             275,
                             16,
                             12,
                             4,
                             4,
                             -1,
                             200,
                             200,
                             200,
                             0);
  sub_5F9DE0(*((void **)dword_162EE84 + 5), 0, 0, 3200222, 5, 4, 1, (int)"Exit", 4, -1, -1, -1, 0);
  sub_5F9DE0(*((void **)dword_162EE84 + 5), 0, 1, 3200222, 18, 160, 1, (int)"Prev", 4, -1, -1, -1, 0);
  sub_5F9DE0(*((void **)dword_162EE84 + 5), 0, 2, 3200222, 183, 160, 1, (int)"Next", 4, -1, -1, -1, 0);
  sub_5F9DE0(*((void **)dword_162EE84 + 5), 0, 3, 3200222, 350, 235, 10, (int)"Prev", 4, -1, -1, -1, 0);
  sub_5F9DE0(*((void **)dword_162EE84 + 5), 0, 4, 3200222, 437, 235, 10, (int)"Play", 4, -1, -1, -1, 0);
  sub_5F9DE0(*((void **)dword_162EE84 + 5), 0, 5, 3200222, 523, 235, 10, (int)"Next", 4, -1, -1, -1, 0);
  sub_5FA880(
    *((void **)dword_162EE84 + 5),
    0,
    (struct CPaneDivider *)0xFFFFFFFF,
    70,
    70,
    20,
    60,
    1,
    200,
    200,
    200,
    200,
    200,
    200);
  *(_DWORD *)(this + 116) = sub_5F9FF0(
                              *((_DWORD *)dword_162EE84 + 5),
                              0,
                              0,
                              6,
                              0,
                              3200202,
                              25,
                              64,
                              2,
                              (int)"speech",
                              4,
                              4,
                              4,
                              -1,
                              20,
                              0);
  sub_5F9FF0(*((_DWORD *)dword_162EE84 + 5), 0, 0, 7, 0, 3200202, 25, 84, 2, (int)"habits", 4, 4, 4, -1, 20, 0);
  sub_5F9FF0(*((_DWORD *)dword_162EE84 + 5), 0, 0, 8, 0, 3200202, 25, 104, 2, (int)"blinks", 4, 4, 4, -1, 20, 0);
  sub_6065D0(*(void **)(this + 116), 6);
  sub_5FA880(
    *((void **)dword_162EE84 + 5),
    0,
    (struct CPaneDivider *)0xFFFFFFFF,
    125,
    84,
    195,
    40,
    1,
    200,
    200,
    200,
    200,
    200,
    200);
  *(_DWORD *)(this + 104) = sub_5F9EF0(
                              *((void **)dword_162EE84 + 5),
                              0,
                              -1,
                              3200201,
                              200,
                              49,
                              2,
                              (int)"reverse East/West",
                              4,
                              -1,
                              -1,
                              -1,
                              20,
                              0);
  *(_DWORD *)(this + 108) = sub_5F9EF0(
                              *((void **)dword_162EE84 + 5),
                              0,
                              -1,
                              3200201,
                              200,
                              77,
                              2,
                              (int)"lock situation",
                              4,
                              -1,
                              -1,
                              -1,
                              20,
                              0);
  *(_DWORD *)(this + 112) = sub_5F9EF0(
                              *((void **)dword_162EE84 + 5),
                              0,
                              -1,
                              3200201,
                              200,
                              105,
                              2,
                              (int)"lock character",
                              4,
                              -1,
                              -1,
                              -1,
                              20,
                              0);
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 112) + 244))(*(_DWORD *)(this + 112));
  v2 = sub_5FAC90(
         *((void **)dword_162EE84 + 5),
         0,
         0,
         3300237,
         325,
         0,
         1,
         0,
         3200204,
         287,
         206,
         3200203,
         287,
         24,
         3200207,
         285,
         38,
         186,
         285,
         38,
         16,
         186,
         7,
         24,
         275,
         16,
         12,
         4,
         4,
         -1,
         200,
         200,
         200,
         0);
  *(_DWORD *)(v8 + 100) = v2;
  return sub_669D50(-1);
}


//======================================================================
// sub_669D50
// entry 00669d50  size 439  status ok
//======================================================================

int __thiscall sub_669D50(int this)
{
  int v2; // [esp+0h] [ebp-120h]
  int v4; // [esp+8h] [ebp-118h]
  int v5; // [esp+Ch] [ebp-114h]
  char Destination[260]; // [esp+10h] [ebp-110h] BYREF
  int *v7; // [esp+118h] [ebp-8h]
  int i; // [esp+11Ch] [ebp-4h]

  sub_628BA0(*(_DWORD *)(this + 92));
  v4 = *(_DWORD *)(*(_DWORD *)(this + 132) + 8);
  v2 = sub_606570(*(void **)(this + 116));
  switch ( v2 )
  {
    case 6:
      for ( i = 0; i < sub_666C60(); ++i )
      {
        Destination[0] = 0;
        v7 = sub_666EB0((char *)dword_162EE84 + 92, i);
        if ( v7 )
          strcpy(Destination, (const char *)v7 + 4);
        sub_628980(*(pairNode **)(this + 92), 0, (int)Destination, -1, 0);
      }
      sub_628D80(*(_DWORD **)(this + 92));
      break;
    case 7:
      v5 = sub_639520(v4);
      for ( i = 0; i < 20 && dword_763580[224 * v5 + 11 * i]; ++i )
        sub_628980(*(pairNode **)(this + 92), 0, (int)&aScratchFace[896 * v5 + 44 * i], -1, 0);
      break;
    case 8:
      sub_628980(*(pairNode **)(this + 92), 0, (int)"<blinks>", -1, 0);
      break;
  }
  return sub_669F10(this);
}


//======================================================================
// sub_669F10
// entry 00669f10  size 762  status ok
//======================================================================

int *__thiscall sub_669F10(int this)
{
  int *result; // eax
  exception *v2; // eax
  int v3; // eax
  int v4; // esi
  char *String2; // [esp+4h] [ebp-138h]
  Concurrency::details::UMSFreeVirtualProcessorRoot *v7; // [esp+20h] [ebp-11Ch]
  char Buffer[256]; // [esp+2Ch] [ebp-110h] BYREF
  int v9; // [esp+130h] [ebp-Ch]
  int *v10; // [esp+134h] [ebp-8h]
  int i; // [esp+138h] [ebp-4h]

  sub_628BA0(*(_DWORD *)(this + 96));
  result = (int *)Concurrency::details::UMSFreeVirtualProcessorRoot::GetExecutingProxy(*(Concurrency::details::UMSFreeVirtualProcessorRoot **)(this + 92));
  if ( result != (int *)-1 )
  {
    result = (int *)sub_606570(*(void **)(this + 116));
    if ( result == (int *)6 )
    {
      v7 = *(Concurrency::details::UMSFreeVirtualProcessorRoot **)(this + 92);
      if ( sub_5E4390(v7) )
      {
        v2 = (exception *)sub_5E4390(v7);
        String2 = (char *)exception::what(v2);
        result = sub_666E40((char *)dword_162EE84 + 92, String2);
      }
      else
      {
        result = sub_666E40((char *)dword_162EE84 + 92, 0);
      }
      v10 = result;
      if ( result )
      {
        for ( i = 0; ; ++i )
        {
          result = (int *)sub_666C70((char *)dword_162EE84 + 92, *(_DWORD *)(*(_DWORD *)(this + 132) + 8), *v10);
          if ( i >= (int)result )
            break;
          sprintf(Buffer, "%d", i);
          v3 = sub_666740(*(_DWORD *)(*(_DWORD *)(this + 132) + 8), *v10, i);
          if ( !sub_666840(v3) )
            strcat(Buffer, " [missing line]");
          sub_628980(*(pairNode **)(this + 96), 0, (int)Buffer, -1, 0);
        }
      }
    }
    else if ( result == (int *)7 )
    {
      v9 = sub_639520(*(_DWORD *)(*(_DWORD *)(this + 132) + 8));
      for ( i = 0; ; ++i )
      {
        v4 = 224 * v9;
        result = (int *)(44
                       * (_DWORD)Concurrency::details::UMSFreeVirtualProcessorRoot::GetExecutingProxy(*(Concurrency::details::UMSFreeVirtualProcessorRoot **)(this + 92)));
        if ( i >= *(int *)((char *)dword_763584 + (_DWORD)&result[v4]) )
          break;
        sprintf(Buffer, "%d", i);
        sub_628980(*(pairNode **)(this + 96), 0, (int)Buffer, -1, 0);
      }
    }
    else if ( result == (int *)8 )
    {
      v9 = sub_639520(*(_DWORD *)(*(_DWORD *)(this + 132) + 8));
      for ( i = 0; ; ++i )
      {
        result = (int *)(896 * v9);
        if ( i >= dword_76357C[224 * v9] )
          break;
        sprintf(Buffer, "%d", i);
        sub_628980(*(pairNode **)(this + 96), 0, (int)Buffer, -1, 0);
      }
    }
  }
  return result;
}


//======================================================================
// sub_66A210
// entry 0066a210  size 1419  status ok
//======================================================================

int __thiscall sub_66A210(int this, int a2)
{
  int v2; // eax
  char *v3; // eax
  char *v4; // eax
  exception *v5; // eax
  exception *v6; // eax
  int v7; // eax
  char *v8; // eax
  exception *v9; // eax
  exception *v10; // eax
  const char *v12; // [esp+4h] [ebp-90h]
  const char *v13; // [esp+8h] [ebp-8Ch]
  const char *v14; // [esp+10h] [ebp-84h]
  const char *v15; // [esp+14h] [ebp-80h]
  Concurrency::details::UMSFreeVirtualProcessorRoot *v17; // [esp+2Ch] [ebp-68h]
  Concurrency::details::UMSFreeVirtualProcessorRoot *v18; // [esp+38h] [ebp-5Ch]
  Concurrency::details::UMSFreeVirtualProcessorRoot *v19; // [esp+44h] [ebp-50h]
  Concurrency::details::UMSFreeVirtualProcessorRoot *v20; // [esp+50h] [ebp-44h]
  struct Concurrency::details::UMSThreadProxy *v21; // [esp+60h] [ebp-34h]
  char Destination[32]; // [esp+64h] [ebp-30h] BYREF
  int v23; // [esp+88h] [ebp-Ch]
  struct Concurrency::details::UMSThreadProxy *ExecutingProxy; // [esp+8Ch] [ebp-8h]
  int v25; // [esp+90h] [ebp-4h]

  v23 = *(_DWORD *)(*(_DWORD *)(this + 132) + 32);
  v25 = sub_639590(dword_162EE84, *(_DWORD *)(*(_DWORD *)(this + 132) + 8));
  ExecutingProxy = Concurrency::details::UMSFreeVirtualProcessorRoot::GetExecutingProxy(*(Concurrency::details::UMSFreeVirtualProcessorRoot **)(this + 92));
  v21 = Concurrency::details::UMSFreeVirtualProcessorRoot::GetExecutingProxy(*(Concurrency::details::UMSFreeVirtualProcessorRoot **)(this + 96));
  switch ( a2 )
  {
    case 0:
      v2 = (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 600))(dword_162EE84);
      (*(void (__thiscall **)(Concurrency::details::ContextBase *, int))(*(_DWORD *)dword_162EE84 + 52))(
        dword_162EE84,
        v2);
      break;
    case 1:
      if ( --v25 < 0 )
        v25 = (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 360))(dword_162EE84)
            - 1;
      goto LABEL_6;
    case 2:
      if ( ++v25 >= (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 360))(dword_162EE84) )
        v25 = 0;
LABEL_6:
      v3 = (char *)(*(int (__thiscall **)(Concurrency::details::ContextBase *, int))(*(_DWORD *)dword_162EE84 + 356))(
                     dword_162EE84,
                     v25);
      sub_63B490(*(CImageDisplay **)(this + 132), v3);
      sub_6464D0(v23, 0, 0);
      sub_669D50(this);
      break;
    case 3:
      if ( v21 )
      {
        if ( (int)v21 > 0 )
          Concurrency::details::_NonReentrantPPLLock::_Acquire(
            *(Concurrency::details::_NonReentrantPPLLock **)(this + 96),
            (char *)v21 - 1);
      }
      else
      {
        if ( !sub_600230(*(_BYTE **)(this + 108)) && (int)ExecutingProxy > 0 )
          Concurrency::details::_NonReentrantPPLLock::_Acquire(
            *(Concurrency::details::_NonReentrantPPLLock **)(this + 92),
            (char *)ExecutingProxy - 1);
        if ( !sub_600230(*(_BYTE **)(this + 112)) )
        {
          if ( --v25 < 0 )
            v25 = (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 360))(dword_162EE84)
                - 1;
          v4 = (char *)(*(int (__thiscall **)(Concurrency::details::ContextBase *, int))(*(_DWORD *)dword_162EE84 + 356))(
                         dword_162EE84,
                         v25);
          sub_63B490(*(CImageDisplay **)(this + 132), v4);
          sub_6464D0(v23, 0, 0);
          v20 = *(Concurrency::details::UMSFreeVirtualProcessorRoot **)(this + 92);
          if ( sub_5E4390(v20) )
          {
            v5 = (exception *)sub_5E4390(v20);
            v15 = exception::what(v5);
          }
          else
          {
            v15 = 0;
          }
          if ( v15 )
          {
            v19 = *(Concurrency::details::UMSFreeVirtualProcessorRoot **)(this + 92);
            if ( sub_5E4390(v19) )
            {
              v6 = (exception *)sub_5E4390(v19);
              v14 = exception::what(v6);
            }
            else
            {
              v14 = 0;
            }
            strcpy(Destination, v14);
          }
          else
          {
            strcpy(Destination, &Source);
          }
          sub_669D50(this);
          sub_628F40(*(void **)(this + 92), (int)Destination, 1);
        }
        v7 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 96) + 184))(*(_DWORD *)(this + 96));
        Concurrency::details::_NonReentrantPPLLock::_Acquire(
          *(Concurrency::details::_NonReentrantPPLLock **)(this + 96),
          (void *)(v7 - 1));
      }
      break;
    case 4:
      if ( v21 != (struct Concurrency::details::UMSThreadProxy *)-1 )
        (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 96) + 200))(*(_DWORD *)(this + 96));
      break;
    case 5:
      if ( v21 == (struct Concurrency::details::UMSThreadProxy *)((*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 96)
                                                                                                + 184))(*(_DWORD *)(this + 96))
                                                                - 1) )
      {
        if ( !sub_600230(*(_BYTE **)(this + 108))
          && (int)ExecutingProxy < (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 92) + 184))(*(_DWORD *)(this + 92))
                                 - 1 )
        {
          Concurrency::details::_NonReentrantPPLLock::_Acquire(
            *(Concurrency::details::_NonReentrantPPLLock **)(this + 92),
            (char *)ExecutingProxy + 1);
        }
        if ( !sub_600230(*(_BYTE **)(this + 112)) )
        {
          if ( ++v25 >= (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 360))(dword_162EE84) )
            v25 = 0;
          v8 = (char *)(*(int (__thiscall **)(Concurrency::details::ContextBase *, int))(*(_DWORD *)dword_162EE84 + 356))(
                         dword_162EE84,
                         v25);
          sub_63B490(*(CImageDisplay **)(this + 132), v8);
          sub_6464D0(v23, 0, 0);
          v18 = *(Concurrency::details::UMSFreeVirtualProcessorRoot **)(this + 92);
          if ( sub_5E4390(v18) )
          {
            v9 = (exception *)sub_5E4390(v18);
            v13 = exception::what(v9);
          }
          else
          {
            v13 = 0;
          }
          if ( v13 )
          {
            v17 = *(Concurrency::details::UMSFreeVirtualProcessorRoot **)(this + 92);
            if ( sub_5E4390(v17) )
            {
              v10 = (exception *)sub_5E4390(v17);
              v12 = exception::what(v10);
            }
            else
            {
              v12 = 0;
            }
            strcpy(Destination, v12);
          }
          else
          {
            strcpy(Destination, &Source);
          }
          sub_669D50(this);
          sub_628F40(*(void **)(this + 92), (int)Destination, 1);
        }
        Concurrency::details::_NonReentrantPPLLock::_Acquire(
          *(Concurrency::details::_NonReentrantPPLLock **)(this + 96),
          0);
      }
      else if ( (int)v21 >= 0
             && (int)v21 < (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 96) + 184))(*(_DWORD *)(this + 96)) - 1 )
      {
        Concurrency::details::_NonReentrantPPLLock::_Acquire(
          *(Concurrency::details::_NonReentrantPPLLock **)(this + 96),
          (char *)v21 + 1);
      }
      break;
    case 6:
    case 7:
    case 8:
      sub_669D50(this);
      break;
    default:
      break;
  }
  if ( sub_600230(*(_BYTE **)(this + 104)) )
    *(_BYTE *)(*(_DWORD *)(*(_DWORD *)(this + 132) + 32) + 16) = 1;
  else
    *(_BYTE *)(*(_DWORD *)(*(_DWORD *)(this + 132) + 32) + 16) = 0;
  return sub_6464D0(*(_DWORD *)(*(_DWORD *)(this + 132) + 32), 0, 0);
}


//======================================================================
// sub_66AA20
// entry 0066aa20  size 33  status ok
//======================================================================

int *__thiscall sub_66AA20(int *this)
{
  sub_615EF0((pairNode *)this);
  return sub_669F10(*(this + 51));
}


//======================================================================
// sub_66AA80
// entry 0066aa80  size 428  status ok
//======================================================================

char __thiscall sub_66AA80(pairNode *this)
{
  int *ExecutingProxy; // eax
  exception *v2; // eax
  struct Concurrency::details::UMSThreadProxy *v3; // eax
  int v4; // eax
  struct Concurrency::details::UMSThreadProxy *v5; // eax
  struct Concurrency::details::UMSThreadProxy *v6; // eax
  struct Concurrency::details::UMSThreadProxy *v8; // [esp-10h] [ebp-3Ch]
  char *String2; // [esp+4h] [ebp-28h]
  int v11; // [esp+14h] [ebp-18h]
  Concurrency::details::UMSFreeVirtualProcessorRoot *v12; // [esp+18h] [ebp-14h]
  int *v13; // [esp+24h] [ebp-8h]
  int v14; // [esp+28h] [ebp-4h]

  sub_615EF0(this);
  ExecutingProxy = (int *)Concurrency::details::UMSFreeVirtualProcessorRoot::GetExecutingProxy(*(Concurrency::details::UMSFreeVirtualProcessorRoot **)(*((_DWORD *)this + 51) + 92));
  if ( ExecutingProxy != (int *)-1 )
  {
    ExecutingProxy = (int *)sub_606570(*(void **)(*((_DWORD *)this + 51) + 116));
    if ( ExecutingProxy == (int *)6 )
    {
      v12 = *(Concurrency::details::UMSFreeVirtualProcessorRoot **)(*((_DWORD *)this + 51) + 92);
      if ( sub_5E4390(v12) )
      {
        v2 = (exception *)sub_5E4390(v12);
        String2 = (char *)exception::what(v2);
        ExecutingProxy = sub_666E40((char *)dword_162EE84 + 92, String2);
      }
      else
      {
        ExecutingProxy = sub_666E40((char *)dword_162EE84 + 92, 0);
      }
      v13 = ExecutingProxy;
      if ( ExecutingProxy )
      {
        v11 = *(_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 51) + 132) + 8);
        v3 = Concurrency::details::UMSFreeVirtualProcessorRoot::GetExecutingProxy(this);
        v4 = sub_666740(v11, *v13, (int)v3);
        LOBYTE(ExecutingProxy) = sub_646FA0(
                                   *(_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 51) + 132) + 32),
                                   v4,
                                   -1,
                                   0,
                                   0,
                                   1);
      }
    }
    else if ( ExecutingProxy == (int *)7 )
    {
      v14 = sub_639520(*(_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 51) + 132) + 8));
      v8 = Concurrency::details::UMSFreeVirtualProcessorRoot::GetExecutingProxy(this);
      v5 = Concurrency::details::UMSFreeVirtualProcessorRoot::GetExecutingProxy(*(Concurrency::details::UMSFreeVirtualProcessorRoot **)(*((_DWORD *)this + 51) + 92));
      LOBYTE(ExecutingProxy) = sub_647210(
                                 *(_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 51) + 132) + 32),
                                 dword_763580[224 * v14 + 11 * (_DWORD)v5],
                                 (int)v8,
                                 0,
                                 -1,
                                 0);
    }
    else if ( ExecutingProxy == (int *)8 )
    {
      v6 = Concurrency::details::UMSFreeVirtualProcessorRoot::GetExecutingProxy(this);
      LOBYTE(ExecutingProxy) = sub_6473F0(*(_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 51) + 132) + 32), (int)v6, 0);
    }
  }
  return (char)ExecutingProxy;
}


//======================================================================
// sub_66AC60
// entry 0066ac60  size 53  status ok
//======================================================================

_DWORD *__thiscall sub_66AC60(_DWORD *this, char a2)
{
  *this = &SituationListBox::`vftable';
  sub_628220((int)this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}


//======================================================================
// sub_66ACA0
// entry 0066aca0  size 53  status ok
//======================================================================

_DWORD *__thiscall sub_66ACA0(_DWORD *this, char a2)
{
  *this = &SituationInstanceListBox::`vftable';
  sub_628220((int)this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}


//======================================================================
// sub_66ACE0
// entry 0066ace0  size 143  status ok
//======================================================================

_DWORD *__thiscall sub_66ACE0(_DWORD *this)
{
  int v1; // eax
  int v2; // eax
  _DWORD *v5; // [esp+4h] [ebp-10h]

  sub_64CBE0((int)this);
  *this = &CreditsRoom::`vftable';
  v1 = sub_630F40((int)"SID_SHELL_CREDITS");
  sub_5F38B0(dword_162EE84, v1);
  v2 = (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 728))(dword_162EE84);
  sub_5F1AD0(v5, v2);
  return v5;
}


//======================================================================
// sub_66AF30
// entry 0066af30  size 126  status ok
//======================================================================

int __thiscall sub_66AF30(void *this, int a2)
{
  int v2; // eax
  int v4; // [esp+0h] [ebp-8h]

  if ( !*(_BYTE *)(a2 + 4) && *(_DWORD *)(a2 + 32) == *((_DWORD *)dword_162EE84 + 5) )
  {
    v4 = *(_DWORD *)(a2 + 24);
    if ( v4 == 2 || v4 == 4 )
    {
      v2 = (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 600))(dword_162EE84);
      (*(void (__thiscall **)(Concurrency::details::ContextBase *, int))(*(_DWORD *)dword_162EE84 + 52))(
        dword_162EE84,
        v2);
      *(_BYTE *)(a2 + 4) = 1;
    }
  }
  return sub_5F1680((int)this, a2);
}


//======================================================================
// sub_66AFB0
// entry 0066afb0  size 589  status ok
//======================================================================

int __thiscall sub_66AFB0(void *this)
{
  int result; // eax
  int *v2; // eax
  int v3; // edx
  _DWORD *v4; // eax
  int *v5; // eax
  int v6; // edx
  int v7; // eax
  int v8; // eax
  _DWORD *v9; // eax
  int *v10; // eax
  int v11; // edx
  int v12; // eax
  int v13; // [esp+0h] [ebp-44h]
  int v14; // [esp+4h] [ebp-40h]
  int v15; // [esp+8h] [ebp-3Ch]
  _BYTE v17[8]; // [esp+14h] [ebp-30h] BYREF
  _BYTE v18[8]; // [esp+1Ch] [ebp-28h] BYREF
  _BYTE v19[8]; // [esp+24h] [ebp-20h] BYREF
  int v20; // [esp+2Ch] [ebp-18h]
  int v21; // [esp+30h] [ebp-14h]
  int v22; // [esp+34h] [ebp-10h]
  int v23; // [esp+38h] [ebp-Ch]
  int v24; // [esp+3Ch] [ebp-8h]
  int v25; // [esp+40h] [ebp-4h]

  result = unknown_libname_843(this);
  if ( result )
  {
    if ( result == 1 )
    {
      v14 = sub_5FB2B0(*((_DWORD *)dword_162EE84 + 5), 0);
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v14 + 80))(v14, dword_16306B8);
      dword_16306B8 -= (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 748))(dword_162EE84);
      v4 = (_DWORD *)sub_5FB2B0(*((_DWORD *)dword_162EE84 + 5), 0);
      if ( dword_16306B8 >= -sub_5F5590(v4) )
      {
        v8 = (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 752))(dword_162EE84);
        return (*(int (__thiscall **)(void *, int, int))(*(_DWORD *)this + 8))(this, 1, v8);
      }
      else
      {
        v5 = (int *)(*(int (__thiscall **)(Concurrency::details::ContextBase *, _BYTE *))(*(_DWORD *)dword_162EE84 + 744))(
                      dword_162EE84,
                      v18);
        v6 = v5[1];
        v22 = *v5;
        v23 = v6;
        dword_16306B8 = v6;
        v7 = (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 752))(dword_162EE84);
        return (*(int (__thiscall **)(void *, int, int))(*(_DWORD *)this + 8))(this, 2, v7);
      }
    }
    else if ( result == 2 )
    {
      v13 = sub_5FB2B0(*((_DWORD *)dword_162EE84 + 5), 0);
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v13 + 80))(v13, dword_16306B8);
      dword_16306B8 -= (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 748))(dword_162EE84);
      v9 = (_DWORD *)sub_5FB2B0(*((_DWORD *)dword_162EE84 + 5), 0);
      if ( dword_16306B8 < -sub_5F5590(v9) )
      {
        v10 = (int *)(*(int (__thiscall **)(Concurrency::details::ContextBase *, _BYTE *))(*(_DWORD *)dword_162EE84 + 744))(
                       dword_162EE84,
                       v17);
        v11 = v10[1];
        v20 = *v10;
        v21 = v11;
        dword_16306B8 = v11;
      }
      v12 = (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 752))(dword_162EE84);
      return (*(int (__thiscall **)(void *, int, int))(*(_DWORD *)this + 8))(this, 2, v12);
    }
  }
  else
  {
    v2 = (int *)(*(int (__thiscall **)(Concurrency::details::ContextBase *, _BYTE *))(*(_DWORD *)dword_162EE84 + 740))(
                  dword_162EE84,
                  v19);
    v3 = v2[1];
    v24 = *v2;
    v25 = v3;
    dword_16306BC = v24;
    dword_16306B8 = v3;
    v15 = sub_5FB2B0(*((_DWORD *)dword_162EE84 + 5), 0);
    (*(void (__thiscall **)(int))(*(_DWORD *)v15 + 116))(v15);
    return (*(int (__thiscall **)(void *, int, _DWORD))(*(_DWORD *)this + 8))(this, 1, 0);
  }
  return result;
}


//======================================================================
// sub_66B230
// entry 0066b230  size 134  status ok
//======================================================================

_DWORD *__thiscall sub_66B230(_DWORD *this)
{
  sub_64CBE0((int)this);
  *this = &IntroScreenRoom::`vftable';
  *(this + 23) = 0;
  *(this + 24) = 0;
  sub_5F1B10(0, 0, 0);
  sub_613F80(*(_DWORD *)(dword_7960D8 + 16));
  return this;
}


//======================================================================
// sub_66B2C0
// entry 0066b2c0  size 126  status ok
//======================================================================

void __thiscall sub_66B2C0(int this)
{
  *(_DWORD *)this = &IntroScreenRoom::`vftable';
  if ( *(_DWORD *)(this + 96) )
    sub_5FB9E0(*((_DWORD *)dword_162EE84 + 5), *(pairNode **)(this + 96), -1);
  *(_DWORD *)(this + 96) = 0;
  sub_64CC80((_DWORD *)this);
}


//======================================================================
// sub_66B340
// entry 0066b340  size 19  status ok
//======================================================================

int __thiscall sub_66B340(CDeferredCommand *this)
{
  return sub_64CE60(this);
}


//======================================================================
// sub_66B360
// entry 0066b360  size 47  status ok
//======================================================================

int __thiscall sub_66B360(void *this, int a2)
{
  int result; // eax

  result = a2;
  if ( *(_DWORD *)(a2 + 24) == 1 )
    result = sub_66B7A0(this);
  if ( *(_DWORD *)(a2 + 24) == 4 )
    return sub_66B7A0(this);
  return result;
}


//======================================================================
// sub_66B390
// entry 0066b390  size 27  status ok
//======================================================================

BOOL __stdcall sub_66B390(int a1)
{
  return *(unsigned __int8 *)(a1 + 4) == 0;
}


//======================================================================
// sub_66B3B0
// entry 0066b3b0  size 993  status ok
//======================================================================

int __thiscall sub_66B3B0(int this)
{
  int result; // eax
  int v2; // esi
  int v3; // eax
  int v4; // esi
  int v5; // esi
  int v6; // eax
  int v7; // [esp-4h] [ebp-58h]
  int v8; // [esp+Ch] [ebp-48h]
  void (__thiscall ***v9)(_DWORD, _DWORD); // [esp+10h] [ebp-44h]
  _DWORD *v10; // [esp+14h] [ebp-40h]
  void (__thiscall ***v11)(_DWORD, _DWORD); // [esp+18h] [ebp-3Ch]
  _DWORD *v13; // [esp+20h] [ebp-34h]
  _DWORD *v14; // [esp+28h] [ebp-2Ch]
  _DWORD *v15; // [esp+30h] [ebp-24h]
  _DWORD *v16; // [esp+38h] [ebp-1Ch]
  _DWORD *v17; // [esp+40h] [ebp-14h]
  int v18; // [esp+44h] [ebp-10h]

  sub_64D030((_DWORD *)this);
  if ( *(_DWORD *)(this + 96) )
  {
    result = CMFCVisualManagerOffice2003::GetHighlightMenuItemColor(*(CMFCVisualManagerOffice2003 **)(this + 96));
    if ( result )
      return result;
  }
  if ( !*(_DWORD *)(this + 96) )
    goto LABEL_30;
  if ( (unsigned __int8)sub_5EB610(*(_BYTE **)(this + 96)) > 0x80u )
  {
    v16 = operator new(0x34u);
    if ( v16 )
    {
      CMFCComObject<ATL::CAccessibleProxy>::CMFCComObject<ATL::CAccessibleProxy>(0);
      *v16 = &sciFadeMotion::`vftable';
      v16[11] = -12;
      v16[12] = 180;
      v16[5] = -1;
      v16[4] = -1;
      v11 = (void (__thiscall ***)(_DWORD, _DWORD))v16;
    }
    else
    {
      v11 = 0;
    }
    sub_5F6050(*(void (__thiscall *****)(_DWORD, _DWORD))(this + 96), v11);
    v15 = operator new(0x20u);
    if ( v15 )
      v10 = sub_6010A0(v15, 0);
    else
      v10 = 0;
    return sub_5F5D50(*(_DWORD **)(this + 96), (int)v10);
  }
  v2 = sub_5EB110(*(_DWORD **)(this + 96));
  if ( v2 < CMFCRibbonButton::IsDefaultCommand(*(CMFCRibbonButton **)(this + 96)) )
  {
    v3 = sub_5EB110(*(_DWORD **)(this + 96));
    sub_5EB000(*(CMFCRibbonButton **)(this + 96), v3 + 1);
    v14 = operator new(0x34u);
    if ( v14 )
    {
      CMFCComObject<ATL::CAccessibleProxy>::CMFCComObject<ATL::CAccessibleProxy>(0);
      *v14 = &sciFadeMotion::`vftable';
      v14[11] = 12;
      v14[12] = 0;
      v14[5] = -1;
      v14[4] = -1;
      v9 = (void (__thiscall ***)(_DWORD, _DWORD))v14;
    }
    else
    {
      v9 = 0;
    }
    return sub_5F6050(*(void (__thiscall *****)(_DWORD, _DWORD))(this + 96), v9);
  }
  else
  {
LABEL_30:
    if ( *(_DWORD *)(this + 96) )
      sub_5FB9E0(*((_DWORD *)dword_162EE84 + 5), *(pairNode **)(this + 96), -1);
    *(_DWORD *)(this + 96) = 0;
    if ( *(_DWORD *)(this + 92) )
      v8 = *(_DWORD *)(this + 92) + 1;
    else
      v8 = (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 344))(dword_162EE84);
    *(_DWORD *)(this + 92) = v8;
    v18 = sub_603C50(*(void **)(dword_7960D8 + 24), 542655828, *(_DWORD *)(this + 92), 0);
    if ( v18 && (*(int (__thiscall **)(int))(*(_DWORD *)v18 + 4))(v18) )
    {
      v17 = (_DWORD *)*((_DWORD *)dword_162EE84 + 5);
      *(_DWORD *)(this + 96) = sub_5F9B40(0, 0, *(_DWORD *)(this + 92), 0, 0, 0, 0, 0, 0, 0, 0, 0);
      sub_62FDE0("Made %X\n", *(_DWORD *)(this + 96));
      v4 = sub_5F8570(v17) / 2;
      v7 = v4 - sub_5F5590(*(_DWORD **)(this + 96)) / 2;
      v5 = sub_5F8550(v17) / 2;
      v6 = sub_5F5550(*(_DWORD **)(this + 96));
      (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 96) + 68))(
        *(_DWORD *)(this + 96),
        v5 - v6 / 2,
        v7);
      v13 = operator new(0x34u);
      if ( v13 )
      {
        CMFCComObject<ATL::CAccessibleProxy>::CMFCComObject<ATL::CAccessibleProxy>(0);
        *v13 = &sciFadeMotion::`vftable';
        v13[11] = 12;
        v13[12] = 0;
        v13[5] = -1;
        v13[4] = -1;
        return sub_5F6050(
                 *(void (__thiscall *****)(_DWORD, _DWORD))(this + 96),
                 (void (__thiscall ***)(_DWORD, _DWORD))v13);
      }
      else
      {
        return sub_5F6050(*(void (__thiscall *****)(_DWORD, _DWORD))(this + 96), 0);
      }
    }
    else
    {
      return sub_66B7A0(this);
    }
  }
}


//======================================================================
// sub_66B7A0
// entry 0066b7a0  size 72  status ok
//======================================================================

int __thiscall sub_66B7A0(void *this)
{
  int v1; // eax
  int v2; // eax

  v1 = (*(int (__thiscall **)(Concurrency::details::ContextBase *, void *))(*(_DWORD *)dword_162EE84 + 600))(
         dword_162EE84,
         this);
  v2 = sub_607960(*(void **)(dword_7960D8 + 20), (int)"Room", v1);
  return (*(int (__thiscall **)(Concurrency::details::ContextBase *, int))(*(_DWORD *)dword_162EE84 + 52))(
           dword_162EE84,
           v2);
}


//======================================================================
// sub_66B970
// entry 0066b970  size 456  status ok
//======================================================================

void __thiscall sub_66B970(int this)
{
  *(_DWORD *)this = &MainScreenRoom::`vftable';
  dword_16306C0 = 0;
  if ( *(_DWORD *)(this + 96) )
  {
    (***(void (__thiscall ****)(_DWORD, int))(this + 96))(*(_DWORD *)(this + 96), 1);
    *(_DWORD *)(this + 96) = 0;
  }
  if ( *(_DWORD *)(this + 100) )
    (***(void (__thiscall ****)(_DWORD, int))(this + 100))(*(_DWORD *)(this + 100), 1);
  if ( *(_DWORD *)(this + 104) )
    (***(void (__thiscall ****)(_DWORD, int))(this + 104))(*(_DWORD *)(this + 104), 1);
  if ( *(_DWORD *)(this + 108) )
    (***(void (__thiscall ****)(_DWORD, int))(this + 108))(*(_DWORD *)(this + 108), 1);
  if ( *(_DWORD *)(this + 112) )
    (***(void (__thiscall ****)(_DWORD, int))(this + 112))(*(_DWORD *)(this + 112), 1);
  operator delete(*(void **)(this + 92));
  if ( *(_DWORD *)(this + 116) )
  {
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 116) + 112))(*(_DWORD *)(this + 116));
    if ( *(_DWORD *)(this + 116) )
      (***(void (__thiscall ****)(_DWORD, int))(this + 116))(*(_DWORD *)(this + 116), 1);
    *(_DWORD *)(this + 116) = 0;
  }
  sub_64CC80((_DWORD *)this);
}


//======================================================================
// sub_66BB40
// entry 0066bb40  size 2521  status ok
//======================================================================

int __thiscall sub_66BB40(CDeferredCommand *this)
{
  int v1; // eax
  int v2; // eax
  int *v3; // eax
  int v4; // edx
  int v5; // eax
  struct Concurrency::details::SchedulerProxy *v6; // eax
  int v7; // eax
  _DWORD *v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int *v14; // eax
  int v15; // edx
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // eax
  int *v21; // eax
  int v22; // edx
  int v23; // eax
  int v24; // eax
  int *v25; // eax
  int v26; // edx
  int v27; // eax
  int result; // eax
  struct Concurrency::details::SchedulerNode *v29; // [esp-2Ch] [ebp-D8h]
  int v30; // [esp-28h] [ebp-D4h]
  int v31; // [esp-24h] [ebp-D0h]
  int v32; // [esp-20h] [ebp-CCh]
  int v33; // [esp-10h] [ebp-BCh]
  int v34; // [esp-10h] [ebp-BCh]
  int v35; // [esp-10h] [ebp-BCh]
  int v36; // [esp-Ch] [ebp-B8h]
  int v37; // [esp-Ch] [ebp-B8h]
  int v38; // [esp-Ch] [ebp-B8h]
  struct Concurrency::details::SchedulerNode *v39; // [esp-8h] [ebp-B4h]
  struct Concurrency::details::SchedulerNode *v40; // [esp-8h] [ebp-B4h]
  int v41; // [esp-8h] [ebp-B4h]
  int v42; // [esp-8h] [ebp-B4h]
  int v43; // [esp-8h] [ebp-B4h]
  unsigned int v44; // [esp-4h] [ebp-B0h]
  struct Concurrency::details::SchedulerNode *v45; // [esp+0h] [ebp-ACh]
  int v46; // [esp+4h] [ebp-A8h]
  int v47; // [esp+8h] [ebp-A4h]
  int v48; // [esp+Ch] [ebp-A0h]
  _DWORD *v49; // [esp+10h] [ebp-9Ch]
  _DWORD *v50; // [esp+14h] [ebp-98h]
  _DWORD *v51; // [esp+18h] [ebp-94h]
  _DWORD *v52; // [esp+1Ch] [ebp-90h]
  _DWORD *v53; // [esp+20h] [ebp-8Ch]
  int v54; // [esp+24h] [ebp-88h]
  char v56[8]; // [esp+2Ch] [ebp-80h] BYREF
  void *v57; // [esp+34h] [ebp-78h]
  int v58; // [esp+38h] [ebp-74h]
  char v59[8]; // [esp+3Ch] [ebp-70h] BYREF
  void *v60; // [esp+44h] [ebp-68h]
  int v61; // [esp+48h] [ebp-64h]
  void *v62; // [esp+4Ch] [ebp-60h]
  int v63; // [esp+50h] [ebp-5Ch]
  void *v64; // [esp+54h] [ebp-58h]
  _DWORD *v65; // [esp+58h] [ebp-54h]
  void *v66; // [esp+5Ch] [ebp-50h]
  _DWORD *v67; // [esp+60h] [ebp-4Ch]
  void *v68; // [esp+64h] [ebp-48h]
  _DWORD *v69; // [esp+68h] [ebp-44h]
  char v70[8]; // [esp+6Ch] [ebp-40h] BYREF
  void *v71; // [esp+74h] [ebp-38h]
  _DWORD *v72; // [esp+78h] [ebp-34h]
  Concurrency::details::FreeVirtualProcessorRoot *v73; // [esp+7Ch] [ebp-30h]
  _DWORD *v74; // [esp+80h] [ebp-2Ch]
  char v75[8]; // [esp+84h] [ebp-28h] BYREF
  int v76; // [esp+8Ch] [ebp-20h]
  int v77; // [esp+90h] [ebp-1Ch]
  struct Concurrency::details::SchedulerNode *i; // [esp+94h] [ebp-18h]
  int v79; // [esp+98h] [ebp-14h]
  int v80; // [esp+9Ch] [ebp-10h]
  int v81; // [esp+A8h] [ebp-4h]

  sub_64CE60(this);
  if ( (*(unsigned __int8 (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 176))(dword_162EE84) )
  {
    if ( (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 640))(dword_162EE84) )
    {
      v1 = (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 640))(dword_162EE84);
      sub_5F9CE0(*((void **)dword_162EE84 + 5), 0, 0, v1, 0, 0, 2, 0, 0xFFu, 0);
      v54 = sub_5FB2B0(*((_DWORD *)dword_162EE84 + 5), 0);
      (*(void (__thiscall **)(int))(*(_DWORD *)v54 + 112))(v54);
    }
    for ( i = 0; ; i = (struct Concurrency::details::SchedulerNode *)((char *)i + 1) )
    {
      v2 = (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 604))(dword_162EE84);
      if ( (int)i >= v2 )
        break;
      v3 = (int *)(*(int (__thiscall **)(Concurrency::details::ContextBase *, char *, struct Concurrency::details::SchedulerNode *))(*(_DWORD *)dword_162EE84 + 632))(
                    dword_162EE84,
                    v75,
                    i);
      v4 = v3[1];
      v79 = *v3;
      v80 = v4;
      v73 = (Concurrency::details::FreeVirtualProcessorRoot *)operator new(0x1E8u);
      v81 = 0;
      if ( v73 )
      {
        v44 = (*(int (__thiscall **)(Concurrency::details::ContextBase *, struct Concurrency::details::SchedulerNode *))(*(_DWORD *)dword_162EE84 + 624))(
                dword_162EE84,
                i);
        v39 = i;
        v5 = (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 620))(dword_162EE84);
        v6 = (struct Concurrency::details::SchedulerProxy *)(*(int (__thiscall **)(Concurrency::details::ContextBase *, struct Concurrency::details::SchedulerNode *, int))(*(_DWORD *)dword_162EE84 + 628))(
                                                              dword_162EE84,
                                                              i,
                                                              v5);
        v53 = (_DWORD *)Concurrency::details::FreeVirtualProcessorRoot::FreeVirtualProcessorRoot(v73, v6, v39, v44);
      }
      else
      {
        v53 = 0;
      }
      v74 = v53;
      v81 = -1;
      v32 = v80;
      v31 = v79;
      v30 = (*(int (__thiscall **)(Concurrency::details::ContextBase *, struct Concurrency::details::SchedulerNode *))(*(_DWORD *)dword_162EE84 + 608))(
              dword_162EE84,
              i);
      v29 = i;
      v7 = (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 616))(dword_162EE84);
      v8 = sub_5F9DE0(*((void **)dword_162EE84 + 5), v53, v7, (int)v29, v30, v31, v32, 5, (int)&Source, -1, -1, -1, -1);
      *(_DWORD *)(*((_DWORD *)this + 23) + 4 * (_DWORD)i) = v8;
      v40 = i;
      v9 = (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 612))(dword_162EE84);
      v10 = (*(int (__thiscall **)(Concurrency::details::ContextBase *, struct Concurrency::details::SchedulerNode *, int))(*(_DWORD *)dword_162EE84 + 612))(
              dword_162EE84,
              i,
              v9 + 1);
      v11 = (*(int (__thiscall **)(Concurrency::details::ContextBase *, struct Concurrency::details::SchedulerNode *, int))(*(_DWORD *)dword_162EE84 + 612))(
              dword_162EE84,
              i,
              v10);
      v12 = (*(int (__thiscall **)(Concurrency::details::ContextBase *, struct Concurrency::details::SchedulerNode *, int))(*(_DWORD *)dword_162EE84 + 612))(
              dword_162EE84,
              i,
              v11 + 1);
      sub_6023D0(*(_DWORD **)(*((_DWORD *)this + 23) + 4 * (_DWORD)i), v12, (int)v40, 0, (int)v45);
      v45 = i;
      v13 = (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 612))(dword_162EE84);
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(*((_DWORD *)this + 23) + 4 * (_DWORD)i) + 176))(
        *(_DWORD *)(*((_DWORD *)this + 23) + 4 * (_DWORD)i),
        v13);
      sub_5EB720(*(_BYTE **)(*((_DWORD *)this + 23) + 4 * (_DWORD)i), 128);
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(*((_DWORD *)this + 23) + 4 * (_DWORD)i) + 116))(*(_DWORD *)(*((_DWORD *)this + 23) + 4 * (_DWORD)i));
      if ( (*(int (__thiscall **)(Concurrency::details::ContextBase *, struct Concurrency::details::SchedulerNode *))(*(_DWORD *)dword_162EE84 + 616))(
             dword_162EE84,
             i) == 2000
        || (*(int (__thiscall **)(Concurrency::details::ContextBase *, struct Concurrency::details::SchedulerNode *))(*(_DWORD *)dword_162EE84 + 616))(
             dword_162EE84,
             i) == 2001 )
      {
        sub_5EB700(*(_BYTE **)(*((_DWORD *)this + 23) + 4 * (_DWORD)i), 1);
      }
      if ( dword_795F90 == 3
        && (*(int (__thiscall **)(Concurrency::details::ContextBase *, struct Concurrency::details::SchedulerNode *))(*(_DWORD *)dword_162EE84 + 616))(
             dword_162EE84,
             i) == 2000 )
      {
        (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(*((_DWORD *)this + 23) + 4 * (_DWORD)i) + 208))(*(_DWORD *)(*((_DWORD *)this + 23) + 4 * (_DWORD)i));
        (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(*((_DWORD *)this + 23) + 4 * (_DWORD)i) + 112))(*(_DWORD *)(*((_DWORD *)this + 23) + 4 * (_DWORD)i));
      }
    }
    if ( dword_795F90 != 3 )
    {
      if ( !*((_DWORD *)this + 25) )
      {
        v71 = operator new(0x184u);
        v81 = 1;
        if ( v71 )
          v52 = sub_5F5BF0(v71);
        else
          v52 = 0;
        v72 = v52;
        v81 = -1;
        *((_DWORD *)this + 25) = v52;
      }
      v14 = (int *)(*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 684))(dword_162EE84);
      v15 = v14[1];
      v76 = *v14;
      v77 = v15;
      v41 = (*(int (__thiscall **)(Concurrency::details::ContextBase *, int))(*(_DWORD *)dword_162EE84 + 688))(
              dword_162EE84,
              -1);
      v36 = v77;
      v33 = v76;
      v16 = (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 676))(dword_162EE84);
      sub_5EAE80(v16, v33, v36, v41, (int)v70);
      (*(void (__thiscall **)(_DWORD))(**((_DWORD **)this + 25) + 116))(*((_DWORD *)this + 25));
      if ( (*(unsigned __int8 (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 680))(dword_162EE84) )
      {
        v68 = operator new(0x1Cu);
        v81 = 2;
        if ( v68 )
          v51 = sub_600A70(v68, 0);
        else
          v51 = 0;
        v69 = v51;
        v81 = -1;
        sub_5F5D50(*((_DWORD **)this + 25), (int)v51);
      }
    }
    if ( (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 668))(dword_162EE84) )
    {
      if ( !*((_DWORD *)this + 24) )
      {
        v66 = operator new(0x184u);
        v81 = 3;
        if ( v66 )
          v50 = sub_5F5BF0(v66);
        else
          v50 = 0;
        v67 = v50;
        v81 = -1;
        *((_DWORD *)this + 24) = v50;
      }
      v17 = (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 668))(dword_162EE84);
      sub_5EAE80(v17, 0, 0, 1, -1);
      *(_DWORD *)(*((_DWORD *)this + 24) + 376) = (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 672))(dword_162EE84);
      (*(void (__thiscall **)(_DWORD))(**((_DWORD **)this + 24) + 116))(*((_DWORD *)this + 24));
      v64 = operator new(0x1Cu);
      v81 = 4;
      if ( v64 )
        v49 = sub_600A70(v64, 0);
      else
        v49 = 0;
      v65 = v49;
      v81 = -1;
      sub_5F5D50(*((_DWORD **)this + 24), (int)v49);
    }
    if ( !*((_DWORD *)this + 26) )
    {
      v62 = operator new(0x178u);
      v81 = 5;
      if ( v62 )
      {
        sub_5EAAF0(v62);
        v48 = v18;
      }
      else
      {
        v48 = 0;
      }
      v63 = v48;
      v81 = -1;
      *((_DWORD *)this + 26) = v48;
    }
    v19 = (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 660))(dword_162EE84);
    sub_5EAE80(v19, 0, 0, 1, -1);
    *((_DWORD *)this + 30) = 0;
    *((_DWORD *)this + 31) = 0;
    *((_DWORD *)this + 32) = 0;
    if ( !*((_DWORD *)this + 27) )
    {
      v60 = operator new(0x178u);
      v81 = 6;
      if ( v60 )
      {
        sub_5EAAF0(v60);
        v47 = v20;
      }
      else
      {
        v47 = 0;
      }
      v61 = v47;
      v81 = -1;
      *((_DWORD *)this + 27) = v47;
    }
    v21 = (int *)(*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 652))(dword_162EE84);
    v22 = v21[1];
    v79 = *v21;
    v80 = v22;
    v42 = (*(int (__thiscall **)(Concurrency::details::ContextBase *, int))(*(_DWORD *)dword_162EE84 + 656))(
            dword_162EE84,
            -1);
    v37 = v80;
    v34 = v79;
    v23 = (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 648))(dword_162EE84);
    sub_5EAE80(v23, v34, v37, v42, (int)v59);
    (*(void (__thiscall **)(_DWORD))(**((_DWORD **)this + 27) + 116))(*((_DWORD *)this + 27));
    if ( !*((_DWORD *)this + 28) )
    {
      v57 = operator new(0x178u);
      v81 = 7;
      if ( v57 )
      {
        sub_5EAAF0(v57);
        v46 = v24;
      }
      else
      {
        v46 = 0;
      }
      v58 = v46;
      v81 = -1;
      *((_DWORD *)this + 28) = v46;
    }
    v25 = (int *)(*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 652))(dword_162EE84);
    v26 = v25[1];
    v79 = *v25;
    v80 = v26;
    v43 = (*(int (__thiscall **)(Concurrency::details::ContextBase *, int))(*(_DWORD *)dword_162EE84 + 656))(
            dword_162EE84,
            -1);
    v38 = v80;
    v35 = v79;
    v27 = (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 648))(dword_162EE84);
    sub_5EAE80(v27, v35, v38, v43, (int)v56);
    sub_5EB5D0(*((_BYTE **)this + 28), 0);
    (*(void (__thiscall **)(_DWORD))(**((_DWORD **)this + 28) + 116))(*((_DWORD *)this + 28));
  }
  if ( !(*(unsigned __int8 (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 176))(dword_162EE84)
    && !sub_636760(dword_162EE84) )
  {
    sub_6361F0();
  }
  result = sub_636760(dword_162EE84);
  if ( (_BYTE)result )
  {
    result = (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 176))(dword_162EE84);
    if ( (_BYTE)result )
      return (*(int (__thiscall **)(CDeferredCommand *, int, _DWORD, int, int, _DWORD))(*(_DWORD *)this + 364))(
               this,
               1,
               0,
               -1,
               -1,
               0);
  }
  return result;
}


//======================================================================
// sub_66C680
// entry 0066c680  size 217  status ok
//======================================================================

int __thiscall sub_66C680(_DWORD *this)
{
  int v1; // eax
  int v3; // [esp+4h] [ebp-1Ch]

  if ( !*(this + 29) )
  {
    if ( operator new(0x180u) )
      v3 = sub_66CEC0();
    else
      v3 = 0;
    *(this + 29) = v3;
  }
  sub_5EAE80(1101005, 0, 0, 400, -1);
  v1 = sub_5EB240((_DWORD *)*(this + 29));
  (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)*(this + 29) + 176))(*(this + 29), v1);
  return (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 29) + 116))(*(this + 29));
}


//======================================================================
// sub_66C760
// entry 0066c760  size 55  status ok
//======================================================================

int __thiscall sub_66C760(_DWORD *this)
{
  int result; // eax

  sub_64D030(this);
  result = (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 176))(dword_162EE84);
  if ( (_BYTE)result )
    return sub_66C950(this);
  return result;
}


//======================================================================
// sub_66C7B0
// entry 0066c7b0  size 377  status ok
//======================================================================

char __stdcall sub_66C7B0(int a1)
{
  int v1; // eax
  CImageDisplay *v3; // eax
  char *v4; // eax
  CImageDisplay *v5; // [esp+10h] [ebp-10Ch]
  _BYTE v6[260]; // [esp+14h] [ebp-108h] BYREF

  if ( !byte_795F95
    || a1 < 0
    || a1 >= (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 236))(dword_162EE84)
    || (*(unsigned __int8 (__thiscall **)(Concurrency::details::ContextBase *, int))(*(_DWORD *)dword_162EE84 + 832))(
         dword_162EE84,
         a1) )
  {
    if ( a1 == 2000 )
    {
      return (*(int (__thiscall **)(Concurrency::details::ContextBase *, char *))(*(_DWORD *)dword_162EE84 + 844))(
               dword_162EE84,
               byte_7953C8);
    }
    else if ( a1 == 2001 )
    {
      v5 = (CImageDisplay *)sub_6375B0((_DWORD **)dword_162EE84);
      if ( CImageDisplay::GetDisplayFormat(v5)->rcSource.left == 3 )
      {
        v3 = (CImageDisplay *)sub_6375B0((_DWORD **)dword_162EE84);
        v4 = (char *)sub_57A470(v3);
        return sub_64F470(v4);
      }
      else
      {
        return sub_64F470(0);
      }
    }
    else
    {
      return (*(int (__thiscall **)(Concurrency::details::ContextBase *, int))(*(_DWORD *)dword_162EE84 + 840))(
               dword_162EE84,
               a1);
    }
  }
  else
  {
    (*(void (__thiscall **)(Concurrency::details::ContextBase *, int, _BYTE *))(*(_DWORD *)dword_162EE84 + 824))(
      dword_162EE84,
      a1,
      v6);
    v1 = sub_630F40((int)"SID_SHELL_PLAYDEMO");
    return sub_635CD0(v1, (int)v6);
  }
}


//======================================================================
// sub_66C930
// entry 0066c930  size 32  status ok
//======================================================================

int __thiscall sub_66C930(void *this)
{
  return (*(int (__thiscall **)(Concurrency::details::ContextBase *, void *))(*(_DWORD *)dword_162EE84 + 176))(
           dword_162EE84,
           this);
}


//======================================================================
// sub_66C950
// entry 0066c950  size 439  status ok
//======================================================================

int __thiscall sub_66C950(int this)
{
  int v3; // [esp+4h] [ebp-8h]
  int v4; // [esp+8h] [ebp-4h]

  v4 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(dword_7960D8 + 12) + 8))(*(_DWORD *)(dword_7960D8 + 12));
  v3 = v4 - *(_DWORD *)(this + 128);
  if ( v3 > 1020 )
  {
    if ( v3 > 2040 )
    {
      if ( v3 > 3060 )
      {
        if ( v3 > 4080 )
        {
          *(_DWORD *)(this + 128) = v4;
          return this;
        }
        else
        {
          sub_5EB5D0(*(_BYTE **)(this + 108), (v3 - 3060) / 4);
          return sub_5EB5D0(*(_BYTE **)(this + 112), (4080 - v3) / 4);
        }
      }
      else
      {
        *(_DWORD *)(this + 120) = *(_DWORD *)(this + 124) + 1;
        if ( *(_DWORD *)(this + 120) > sub_5EB240(*(_DWORD **)(this + 108)) )
          *(_DWORD *)(this + 120) = 0;
        sub_5EB5D0(*(_BYTE **)(this + 108), 0);
        sub_5EB5D0(*(_BYTE **)(this + 112), 0xFFu);
        return (*(int (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(this + 108) + 176))(
                 *(_DWORD *)(this + 108),
                 *(_DWORD *)(this + 120));
      }
    }
    else
    {
      sub_5EB5D0(*(_BYTE **)(this + 108), (2040 - v3) / 4);
      return sub_5EB5D0(*(_BYTE **)(this + 112), (v3 - 1020) / 4);
    }
  }
  else
  {
    *(_DWORD *)(this + 124) = *(_DWORD *)(this + 120) + 1;
    if ( *(_DWORD *)(this + 124) > sub_5EB240(*(_DWORD **)(this + 108)) )
      *(_DWORD *)(this + 124) = 0;
    sub_5EB5D0(*(_BYTE **)(this + 108), 0xFFu);
    sub_5EB5D0(*(_BYTE **)(this + 112), 0);
    return (*(int (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(this + 112) + 176))(
             *(_DWORD *)(this + 112),
             *(_DWORD *)(this + 124));
  }
}


//======================================================================
// sub_66CB40
// entry 0066cb40  size 367  status ok
//======================================================================

int __thiscall sub_66CB40(_DWORD *this, int a2)
{
  int v3; // [esp+4h] [ebp-10h]
  __int16 i; // [esp+Ch] [ebp-8h]
  __int16 v6; // [esp+10h] [ebp-4h]

  v6 = 0;
  for ( i = 0;
        i < (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 604))(dword_162EE84);
        ++i )
  {
    if ( dword_16306C0 )
    {
      if ( (*(unsigned __int8 (__thiscall **)(_DWORD, int))(**(_DWORD **)(*(_DWORD *)(dword_16306C0 + 92) + 4 * i) + 132))(
             *(_DWORD *)(*(_DWORD *)(dword_16306C0 + 92) + 4 * i),
             a2) )
      {
        ++v6;
      }
    }
  }
  if ( v6 > 1 )
    (*(void (__thiscall **)(_DWORD *, _DWORD))(*this + 216))(this, 0);
  if ( !(*(unsigned __int8 (__thiscall **)(_DWORD *, int))(*this + 132))(this, a2) )
  {
    v3 = *(_DWORD *)(*(_DWORD *)(dword_16306C0 + 92)
                   + 4
                   * (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 664))(dword_162EE84));
    if ( (*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)v3 + 132))(v3, a2) )
      return sub_5F4D00(this, a2);
LABEL_14:
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(dword_16306C0 + 104) + 112))(*(_DWORD *)(dword_16306C0 + 104));
    return sub_5F4D00(this, a2);
  }
  if ( *(this + 3) != 2001 )
    goto LABEL_14;
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(dword_16306C0 + 104) + 116))(*(_DWORD *)(dword_16306C0 + 104));
  return sub_5F4D00(this, a2);
}


//======================================================================
// sub_66CCB0
// entry 0066ccb0  size 320  status ok
//======================================================================

int __thiscall sub_66CCB0(_DWORD *this, int a2)
{
  int v2; // eax
  int v3; // eax
  int v5; // [esp+4h] [ebp-10h]
  int v6; // [esp+8h] [ebp-Ch]
  int i; // [esp+10h] [ebp-4h]

  if ( !*(this + 101)
    && a2 == 3
    && (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 640))(dword_162EE84) )
  {
    for ( i = 0;
          i < (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 604))(dword_162EE84);
          ++i )
    {
      if ( *(_DWORD **)(*(_DWORD *)(dword_16306C0 + 92) + 4 * i) == this )
      {
        v6 = sub_5FB2B0(*((_DWORD *)dword_162EE84 + 5), 0);
        v2 = (*(int (__thiscall **)(Concurrency::details::ContextBase *, int))(*(_DWORD *)dword_162EE84 + 644))(
               dword_162EE84,
               i);
        (*(void (__thiscall **)(int, int))(*(_DWORD *)v6 + 176))(v6, v2);
        break;
      }
    }
    v5 = sub_5FB2B0(*((_DWORD *)dword_162EE84 + 5), 0);
    (*(void (__thiscall **)(int))(*(_DWORD *)v5 + 116))(v5);
  }
  if ( *(this + 101) == 3
    && !a2
    && (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 640))(dword_162EE84) )
  {
    v3 = sub_5FB2B0(*((_DWORD *)dword_162EE84 + 5), 0);
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v3 + 112))(v3, v3);
  }
  return sub_6031D0(this, a2);
}


//======================================================================
// sub_66CE30
// entry 0066ce30  size 135  status ok
//======================================================================

int sub_66CE30()
{
  int result; // eax
  int v1; // [esp+10h] [ebp-4h]

  result = _RTDynamicCast(dword_162EE80, 0, &Room `RTTI Type Descriptor', &MainScreenRoom `RTTI Type Descriptor', 0);
  v1 = result;
  if ( result && *(_DWORD *)(result + 116) )
  {
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(result + 116) + 112))(*(_DWORD *)(result + 116));
    result = *(_DWORD *)(v1 + 116);
    if ( result )
      result = (***(int (__thiscall ****)(_DWORD, int))(v1 + 116))(*(_DWORD *)(v1 + 116), 1);
    *(_DWORD *)(v1 + 116) = 0;
  }
  return result;
}


//======================================================================
// sub_66CEC0
// entry 0066cec0  size 443  status ok
//======================================================================

_DWORD *__thiscall sub_66CEC0(_DWORD *this)
{
  int v1; // eax
  _AFX_OLE_STATE *v3; // [esp+4h] [ebp-34h]
  int v4; // [esp+8h] [ebp-30h]
  _DWORD *v5; // [esp+Ch] [ebp-2Ch]
  _AFX_OLE_STATE *v7; // [esp+14h] [ebp-24h]
  _DWORD *v8; // [esp+24h] [ebp-14h]

  sub_5EAAF0(this);
  *this = &FaceDemoBackground::`vftable';
  v8 = operator new(0x184u);
  if ( v8 )
    v5 = sub_5F5BF0(v8);
  else
    v5 = 0;
  *(this + 94) = v5;
  sub_5EAE80(1101005, 0, 0, 500, -1);
  (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 94) + 116))(*(this + 94));
  *(_DWORD *)(*(this + 94) + 376) = 75;
  if ( operator new(0x20u) )
  {
    v1 = sub_5EB240((_DWORD *)*(this + 94));
    v4 = sub_66D170(v1 - 1);
  }
  else
  {
    v4 = 0;
  }
  sub_5F5D50((_DWORD *)*(this + 94), v4);
  v7 = (_AFX_OLE_STATE *)operator new(0x1DCu);
  if ( v7 )
    v3 = _AFX_OLE_STATE::_AFX_OLE_STATE(v7);
  else
    v3 = 0;
  *(this + 95) = v3;
  sub_5EAE80(1101006, 0, 0, 501, -1);
  (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 95) + 116))(*(this + 95));
  return this;
}


//======================================================================
// sub_66D080
// entry 0066d080  size 186  status ok
//======================================================================

void __thiscall sub_66D080(int this)
{
  *(_DWORD *)this = &FaceDemoBackground::`vftable';
  if ( *(_DWORD *)(this + 376) )
    (***(void (__thiscall ****)(_DWORD, int))(this + 376))(*(_DWORD *)(this + 376), 1);
  if ( *(_DWORD *)(this + 380) )
    (***(void (__thiscall ****)(_DWORD, int))(this + 380))(*(_DWORD *)(this + 380), 1);
  sub_5EAC00((_DWORD *)this);
}


//======================================================================
// sub_66D140
// entry 0066d140  size 47  status ok
//======================================================================

int __thiscall sub_66D140(void *this, int a2)
{
  int result; // eax

  result = (*(int (__thiscall **)(void *, int))(*(_DWORD *)this + 132))(this, a2);
  if ( (_BYTE)result )
    *(_BYTE *)(a2 + 4) = 1;
  return result;
}


//======================================================================
// sub_66D170
// entry 0066d170  size 39  status ok
//======================================================================

_DWORD *__thiscall sub_66D170(_DWORD *this, int a2)
{
  sub_600F30(this, a2, 0);
  *this = &FaceDemoCycler::`vftable';
  return this;
}


//======================================================================
// sub_66D1C0
// entry 0066d1c0  size 130  status ok
//======================================================================

int __thiscall sub_66D1C0(CMFCToolBarsCustomizeDialog **this)
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
// sub_66D310
// entry 0066d310  size 214  status ok
//======================================================================

_DWORD *__thiscall sub_66D310(_DWORD *this)
{
  int i; // [esp+4h] [ebp-4h]

  sub_5EAAF0(this);
  *this = &HighScoresDialog::`vftable';
  for ( i = 0; i < 10; ++i )
  {
    *(this + i + 94) = 0;
    *(this + i + 104) = 0;
    *(this + i + 114) = 0;
  }
  *(this + 131) = 0;
  *(this + 125) = 0;
  *(this + 126) = 0;
  *(this + 128) = 0;
  *(this + 127) = 0;
  *(this + 124) = 0;
  *(this + 129) = 0;
  *(this + 130) = 0;
  return this;
}


//======================================================================
// sub_66D3F0
// entry 0066d3f0  size 1019  status ok
//======================================================================

void __thiscall sub_66D3F0(int this)
{
  int i; // [esp+8Ch] [ebp-10h]

  *(_DWORD *)this = &HighScoresDialog::`vftable';
  if ( *(_DWORD *)(this + 524) )
  {
    (***(void (__thiscall ****)(_DWORD, int))(this + 524))(*(_DWORD *)(this + 524), 1);
    *(_DWORD *)(this + 524) = 0;
  }
  if ( *(_DWORD *)(this + 500) )
  {
    (***(void (__thiscall ****)(_DWORD, int))(this + 500))(*(_DWORD *)(this + 500), 1);
    *(_DWORD *)(this + 500) = 0;
  }
  if ( *(_DWORD *)(this + 508) )
  {
    (***(void (__thiscall ****)(_DWORD, int))(this + 508))(*(_DWORD *)(this + 508), 1);
    *(_DWORD *)(this + 508) = 0;
  }
  if ( *(_DWORD *)(this + 512) )
  {
    (***(void (__thiscall ****)(_DWORD, int))(this + 512))(*(_DWORD *)(this + 512), 1);
    *(_DWORD *)(this + 512) = 0;
  }
  for ( i = 0; i < 10; ++i )
  {
    if ( *(_DWORD *)(this + 4 * i + 376) )
    {
      (***(void (__thiscall ****)(_DWORD, int))(this + 4 * i + 376))(*(_DWORD *)(this + 4 * i + 376), 1);
      *(_DWORD *)(this + 4 * i + 376) = 0;
    }
    if ( *(_DWORD *)(this + 4 * i + 416) )
    {
      (***(void (__thiscall ****)(_DWORD, int))(this + 4 * i + 416))(*(_DWORD *)(this + 4 * i + 416), 1);
      *(_DWORD *)(this + 4 * i + 416) = 0;
    }
    if ( *(_DWORD *)(this + 4 * i + 456) )
    {
      (***(void (__thiscall ****)(_DWORD, int))(this + 4 * i + 456))(*(_DWORD *)(this + 4 * i + 456), 1);
      *(_DWORD *)(this + 4 * i + 456) = 0;
    }
  }
  if ( *(_DWORD *)(this + 496) )
  {
    (***(void (__thiscall ****)(_DWORD, int))(this + 496))(*(_DWORD *)(this + 496), 1);
    *(_DWORD *)(this + 496) = 0;
  }
  if ( *(_DWORD *)(this + 504) )
  {
    (***(void (__thiscall ****)(_DWORD, int))(this + 504))(*(_DWORD *)(this + 504), 1);
    *(_DWORD *)(this + 504) = 0;
  }
  if ( *(_DWORD *)(this + 516) )
  {
    (***(void (__thiscall ****)(_DWORD, int))(this + 516))(*(_DWORD *)(this + 516), 1);
    *(_DWORD *)(this + 516) = 0;
  }
  if ( *(_DWORD *)(this + 520) )
  {
    (***(void (__thiscall ****)(_DWORD, int))(this + 520))(*(_DWORD *)(this + 520), 1);
    *(_DWORD *)(this + 520) = 0;
  }
  sub_5EAC00((_DWORD *)this);
}


//======================================================================
// sub_66D7F0
// entry 0066d7f0  size 4588  status ok
//======================================================================

int __thiscall sub_66D7F0(int this)
{
  struct Concurrency::details::_TaskCollectionBase *ExecutingCollection; // eax
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
  const CHAR *v13; // eax
  int result; // eax
  int IsFixedSize; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // eax
  int v21; // eax
  int v22; // eax
  int v23; // eax
  int v24; // eax
  char v25; // ecx^3
  int v26; // eax
  const char *v27; // eax
  int v28; // eax
  int v29; // eax
  int v30; // eax
  int v31; // [esp-14h] [ebp-528h]
  int v32; // [esp-14h] [ebp-528h]
  int v33; // [esp-10h] [ebp-524h]
  int v34; // [esp-10h] [ebp-524h]
  int v35; // [esp-10h] [ebp-524h]
  int v36; // [esp-10h] [ebp-524h]
  int v37; // [esp-10h] [ebp-524h]
  int v38; // [esp-10h] [ebp-524h]
  int v39; // [esp-10h] [ebp-524h]
  int v40; // [esp-10h] [ebp-524h]
  int v41; // [esp-10h] [ebp-524h]
  int v42; // [esp-10h] [ebp-524h]
  int v43; // [esp-Ch] [ebp-520h]
  int v44; // [esp-Ch] [ebp-520h]
  int v45; // [esp-Ch] [ebp-520h]
  int v46; // [esp-Ch] [ebp-520h]
  int v47; // [esp-Ch] [ebp-520h]
  int v48; // [esp-Ch] [ebp-520h]
  int v49; // [esp-Ch] [ebp-520h]
  int v50; // [esp-Ch] [ebp-520h]
  int v51; // [esp-Ch] [ebp-520h]
  int v52; // [esp-Ch] [ebp-520h]
  int v53; // [esp-Ch] [ebp-520h]
  int v54; // [esp-Ch] [ebp-520h]
  int v55; // [esp-8h] [ebp-51Ch]
  int v56; // [esp-8h] [ebp-51Ch]
  const CHAR *v57; // [esp-8h] [ebp-51Ch]
  int v58; // [esp-8h] [ebp-51Ch]
  int v59; // [esp-4h] [ebp-518h]
  int v60; // [esp-4h] [ebp-518h]
  int v61; // [esp-4h] [ebp-518h]
  int v62; // [esp-4h] [ebp-518h]
  int v63; // [esp+Ch] [ebp-508h]
  int v64; // [esp+10h] [ebp-504h]
  int v65; // [esp+14h] [ebp-500h]
  int v66; // [esp+18h] [ebp-4FCh]
  int v67; // [esp+1Ch] [ebp-4F8h]
  int v68; // [esp+20h] [ebp-4F4h]
  int v69; // [esp+24h] [ebp-4F0h]
  _BYTE *v70; // [esp+28h] [ebp-4ECh]
  int v71; // [esp+2Ch] [ebp-4E8h]
  int v72; // [esp+30h] [ebp-4E4h]
  int v73; // [esp+34h] [ebp-4E0h]
  int v74; // [esp+38h] [ebp-4DCh]
  int v75; // [esp+3Ch] [ebp-4D8h]
  DWORD v77; // [esp+44h] [ebp-4D0h]
  LONG v78; // [esp+4Ch] [ebp-4C8h]
  void *v79; // [esp+54h] [ebp-4C0h]
  void *v80; // [esp+5Ch] [ebp-4B8h]
  void *v81; // [esp+64h] [ebp-4B0h]
  void *v82; // [esp+6Ch] [ebp-4A8h]
  void *v83; // [esp+74h] [ebp-4A0h]
  _DWORD *v84; // [esp+7Ch] [ebp-498h]
  _BYTE *v85; // [esp+84h] [ebp-490h]
  void *v86; // [esp+8Ch] [ebp-488h]
  void *v87; // [esp+94h] [ebp-480h]
  void *v88; // [esp+9Ch] [ebp-478h]
  void *v89; // [esp+A4h] [ebp-470h]
  _DWORD *v90; // [esp+ACh] [ebp-468h]
  const char *v91; // [esp+B4h] [ebp-460h]
  int v92; // [esp+B8h] [ebp-45Ch]
  int v93; // [esp+BCh] [ebp-458h]
  char v94[52]; // [esp+C0h] [ebp-454h] BYREF
  int v95; // [esp+F4h] [ebp-420h]
  FILE *Stream; // [esp+F8h] [ebp-41Ch]
  int i; // [esp+FCh] [ebp-418h]
  char Buffer[1028]; // [esp+100h] [ebp-414h] BYREF
  int v99; // [esp+510h] [ebp-4h]

  memset(Buffer, 0, 1024);
  sub_5EAE80(2505000, 0, 0, 10000, -1);
  ExecutingCollection = Concurrency::details::ContextBase::GetExecutingCollection(dword_162EE84);
  v93 = (*(int (__thiscall **)(Concurrency::details::ContextBase *, struct Concurrency::details::_TaskCollectionBase *))(*(_DWORD *)dword_162EE84 + 224))(
          dword_162EE84,
          ExecutingCollection);
  v90 = operator new(0x178u);
  v99 = 0;
  if ( v90 )
  {
    sub_5EAAF0(v90);
    v75 = v2;
  }
  else
  {
    v75 = 0;
  }
  v99 = -1;
  *(_DWORD *)(this + 504) = v75;
  v55 = CMediaType::IsFixedSize((CMediaType *)this) + 5;
  v43 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 84))(this);
  v3 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 76))(this);
  sub_5EAE80(2505001, v3, v43, v55, -1);
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 504) + 112))(*(_DWORD *)(this + 504));
  v89 = operator new(0x1D0u);
  v99 = 1;
  if ( v89 )
  {
    sub_5EC5A0(v89);
    v74 = v4;
  }
  else
  {
    v74 = 0;
  }
  v99 = -1;
  *(_DWORD *)(this + 508) = v74;
  v44 = CMediaType::IsFixedSize((CMediaType *)this) + 5;
  v33 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 84))(this) + 11;
  v31 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 76))(this);
  v5 = (*(int (__thiscall **)(int))(*(_DWORD *)v93 + 180))(v93);
  sub_5EC8F0(*(void **)(this + 508), v5, 153, 599, 39, v31, v33, v44, 48, -1);
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 508) + 112))(*(_DWORD *)(this + 508));
  if ( (*(int (__thiscall **)(int))(*(_DWORD *)v93 + 184))(v93) )
  {
    v88 = operator new(0x1D0u);
    v99 = 2;
    if ( v88 )
    {
      sub_5EC5A0(v88);
      v73 = v6;
    }
    else
    {
      v73 = 0;
    }
    v99 = -1;
    *(_DWORD *)(this + 512) = v73;
    v45 = CMediaType::IsFixedSize((CMediaType *)this) + 5;
    v34 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 84))(this) + 46;
    v32 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 76))(this);
    v7 = (*(int (__thiscall **)(int))(*(_DWORD *)v93 + 184))(v93);
    sub_5EC8F0(*(void **)(this + 512), v7, 150, 599, 25, v32, v34, v45, 48, -1);
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 512) + 112))(*(_DWORD *)(this + 512));
  }
  v87 = operator new(0x1D0u);
  v99 = 3;
  if ( v87 )
  {
    sub_5EC5A0(v87);
    v72 = v8;
  }
  else
  {
    v72 = 0;
  }
  v99 = -1;
  *(_DWORD *)(this + 376) = v72;
  v46 = CMediaType::IsFixedSize((CMediaType *)this) + 4;
  v35 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 84))(this) + 101;
  v9 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 76))(this);
  sub_5EC8F0(*(void **)(this + 376), (int)&Source, 153, 249, 34, v9 + 226, v35, v46, 17, -1);
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 376) + 112))(*(_DWORD *)(this + 376));
  v86 = operator new(0x1D0u);
  v99 = 4;
  if ( v86 )
  {
    sub_5EC5A0(v86);
    v71 = v10;
  }
  else
  {
    v71 = 0;
  }
  v99 = -1;
  *(_DWORD *)(this + 416) = v71;
  v47 = CMediaType::IsFixedSize((CMediaType *)this) + 4;
  v36 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 84))(this) + 101;
  v11 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 76))(this);
  sub_5EC8F0(*(void **)(this + 416), (int)&Source, 153, 249, 34, v11 + 226, v36, v47, 18, -1);
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 416) + 112))(*(_DWORD *)(this + 416));
  v85 = operator new(0x5Cu);
  v99 = 5;
  if ( v85 )
    v70 = sub_5F6130(v85);
  else
    v70 = 0;
  v99 = -1;
  *(_DWORD *)(this + 496) = v70;
  v56 = CMediaType::IsFixedSize((CMediaType *)this) + 2;
  v48 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 84))(this) + 101;
  v12 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 76))(this);
  sub_5F61D0(*(CPaneContainer **)(this + 496), 393, 34, v12 + 103, v48, v56, (struct CPaneDivider *)0xFFFFFFFF);
  sub_5F6490(*(void **)(this + 496), 222, 255, 0);
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 496) + 112))(*(_DWORD *)(this + 496));
  v95 = (*(int (__thiscall **)(int))(*(_DWORD *)v93 + 200))(v93);
  v91 = (const char *)(*(int (__thiscall **)(int))(*(_DWORD *)v93 + 204))(v93);
  sprintf(Buffer, "data\\%s.hs", v91);
  Stream = sub_5EA9C0(Buffer, "rb");
  if ( Stream )
  {
    if ( v95 > 0 )
      fseek(Stream, 1520 * v95, 0);
    fread((void *)(this + 528), 0x98u, 0xAu, Stream);
    fclose(Stream);
    *(_DWORD *)(this + 524) = (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 796))(dword_162EE84);
    sub_63A3E0(*(_DWORD *)(this + 524), -1, 0);
    sub_63A8D0(*(_DWORD *)(this + 524), *(_DWORD *)(this + 588), *(_DWORD *)(this + 4), 0, 0, 0);
    v78 = *(_DWORD *)(this + 584);
    CImageDisplay::GetDisplayFormat(*(CImageDisplay **)(this + 524))->rcSource.left = v78;
    v69 = *(_DWORD *)(this + 584);
    if ( v69 == 2 )
    {
      v77 = (*(int (__thiscall **)(Concurrency::details::ContextBase *, _DWORD, _DWORD, _DWORD))(*(_DWORD *)dword_162EE84
                                                                                               + 496))(
              dword_162EE84,
              *(_DWORD *)(this + 592),
              *(_DWORD *)(this + 596),
              *(_DWORD *)(this + 600));
      CImageDisplay::GetDisplayFormat(*(CImageDisplay **)(this + 524))->bmiHeader.biClrImportant = v77;
    }
    else if ( v69 == 3 )
    {
      qmemcpy(
        (void *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(this + 524) + 32) + 20) + 16),
        (const void *)(this + 604),
        0x4Cu);
    }
    IsFixedSize = CMediaType::IsFixedSize((CMediaType *)this);
    sub_646380(*(_DWORD *)(*(_DWORD *)(this + 524) + 32), IsFixedSize + 8);
    v59 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 84))(this) + 74;
    v16 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 76))(this);
    sub_646150(*(_DWORD *)(*(_DWORD *)(this + 524) + 32), v16 + 119, v59);
    sub_646C20(*(_DWORD *)(*(_DWORD *)(this + 524) + 32), 1);
    v84 = operator new(0x178u);
    v99 = 6;
    if ( v84 )
    {
      sub_5EAAF0(v84);
      v68 = v17;
    }
    else
    {
      v68 = 0;
    }
    v99 = -1;
    *(_DWORD *)(this + 500) = v68;
    v58 = CMediaType::IsFixedSize((CMediaType *)this) + 6;
    v49 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 84))(this) + 74;
    v37 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 76))(this) + 119;
    v18 = (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 560))(dword_162EE84);
    sub_5EAE80(v18, v37, v49, v58, -1);
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 500) + 112))(*(_DWORD *)(this + 500));
    for ( i = 1; i < 10; ++i )
    {
      v83 = operator new(0x1D0u);
      v99 = 7;
      if ( v83 )
      {
        sub_5EC5A0(v83);
        v67 = v19;
      }
      else
      {
        v67 = 0;
      }
      v99 = -1;
      *(_DWORD *)(this + 4 * i + 376) = v67;
      v50 = CMediaType::IsFixedSize((CMediaType *)this) + 2;
      v38 = 24 * (i - 1) + (*(int (__thiscall **)(int))(*(_DWORD *)this + 84))(this) + 162;
      v20 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 76))(this);
      sub_5EC8F0(*(void **)(this + 4 * i + 376), (int)&Source, 151, 295, 24, v20 + 166, v38, v50, 17, -1);
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 4 * i + 376) + 112))(*(_DWORD *)(this + 4 * i + 376));
      v82 = operator new(0x1D0u);
      v99 = 8;
      if ( v82 )
      {
        sub_5EC5A0(v82);
        v66 = v21;
      }
      else
      {
        v66 = 0;
      }
      v99 = -1;
      *(_DWORD *)(this + 4 * i + 416) = v66;
      v51 = CMediaType::IsFixedSize((CMediaType *)this) + 2;
      v39 = 24 * (i - 1) + (*(int (__thiscall **)(int))(*(_DWORD *)this + 84))(this) + 162;
      v22 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 76))(this);
      sub_5EC8F0(*(void **)(this + 4 * i + 416), (int)&Source, 151, 295, 24, v22 + 166, v39, v51, 18, -1);
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 4 * i + 416) + 112))(*(_DWORD *)(this + 4 * i + 416));
      v81 = operator new(0x1D0u);
      v99 = 9;
      if ( v81 )
      {
        sub_5EC5A0(v81);
        v65 = v23;
      }
      else
      {
        v65 = 0;
      }
      v99 = -1;
      *(_DWORD *)(this + 4 * i + 456) = v65;
      v52 = CMediaType::IsFixedSize((CMediaType *)this) + 2;
      v40 = 24 * (i - 1) + (*(int (__thiscall **)(int))(*(_DWORD *)this + 84))(this) + 162;
      v24 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 76))(this);
      sub_5EC8F0(*(void **)(this + 4 * i + 456), (int)&Source, 151, 25, 24, v24 + 130, v40, v52, 18, -1);
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 4 * i + 456) + 112))(*(_DWORD *)(this + 4 * i + 456));
    }
    for ( i = 0; i < 10; ++i )
    {
      if ( *((int *)dword_162EE84 + i + 25) >= 0 )
      {
        HIBYTE(v60) = HIBYTE(i);
        LOWORD(v60) = word_75EE1C;
        BYTE2(v60) = byte_75EE1E;
        sub_5ECD00(
          *(_DWORD **)(this + 4 * *((_DWORD *)dword_162EE84 + i + 25) + 376),
          155 - (*((_DWORD *)dword_162EE84 + i + 25) != 0),
          -1,
          v60);
        (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 4 * *((_DWORD *)dword_162EE84 + i + 25) + 376) + 116))(*(_DWORD *)(this + 4 * *((_DWORD *)dword_162EE84 + i + 25) + 376));
        HIBYTE(v61) = v25;
        LOWORD(v61) = word_75EE1C;
        BYTE2(v61) = byte_75EE1E;
        sub_5ECD00(
          *(_DWORD **)(this + 4 * *((_DWORD *)dword_162EE84 + i + 25) + 416),
          155 - (*((_DWORD *)dword_162EE84 + i + 25) != 0),
          -1,
          v61);
        (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 4 * *((_DWORD *)dword_162EE84 + i + 25) + 416) + 116))(*(_DWORD *)(this + 4 * *((_DWORD *)dword_162EE84 + i + 25) + 416));
        if ( *((_DWORD *)dword_162EE84 + i + 25) )
        {
          HIBYTE(v62) = HIBYTE(dword_162EE84);
          LOWORD(v62) = word_75EE1C;
          BYTE2(v62) = byte_75EE1E;
          sub_5ECD00(*(_DWORD **)(this + 4 * *((_DWORD *)dword_162EE84 + i + 25) + 456), 154, -1, v62);
          (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 4 * *((_DWORD *)dword_162EE84 + i + 25) + 456) + 116))(*(_DWORD *)(this + 4 * *((_DWORD *)dword_162EE84 + i + 25) + 456));
        }
        if ( !*((_DWORD *)dword_162EE84 + i + 25) )
          sub_5F6490(*(void **)(this + 496), 128, 216, 255);
      }
    }
    v80 = operator new(0x1D0u);
    v99 = 10;
    if ( v80 )
    {
      sub_5EC5A0(v80);
      v64 = v26;
    }
    else
    {
      v64 = 0;
    }
    v99 = -1;
    *(_DWORD *)(this + 516) = v64;
    v27 = (const char *)sub_630F40((int)"SID_SHELL_HIGHSCORES_CLICKTOEND");
    sprintf(v94, "%s ", v27);
    v53 = CMediaType::IsFixedSize((CMediaType *)this) + 2;
    v41 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 84))(this) + 380;
    v28 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 76))(this);
    sub_5EC8F0(*(void **)(this + 516), (int)v94, 139, 200, 20, v28 + 390, v41, v53, 18, -1);
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 516) + 116))(*(_DWORD *)(this + 516));
    result = (*(int (__thiscall **)(int))(*(_DWORD *)v93 + 188))(v93);
    v92 = result;
    if ( result )
    {
      v79 = operator new(0x1D0u);
      v99 = 11;
      if ( v79 )
      {
        sub_5EC5A0(v79);
        v63 = v29;
      }
      else
      {
        v63 = 0;
      }
      v99 = -1;
      *(_DWORD *)(this + 520) = v63;
      v54 = CMediaType::IsFixedSize((CMediaType *)this) + 5;
      v42 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 84))(this) + 46;
      v30 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 76))(this);
      sub_5EC8F0(*(void **)(this + 520), v92, 139, 599, 25, v30, v42, v54, 48, -1);
      return (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 520) + 112))(*(_DWORD *)(this + 520));
    }
  }
  else
  {
    v57 = (const CHAR *)sub_630F40((int)"SID_GENERIC_ERROR");
    v13 = (const CHAR *)sub_630F40((int)"SID_SHELL_HIGHSCORES_FILENOTFOUND");
    sub_62FF10(v13, v57, 0);
    return sub_66F370(0);
  }
  return result;
}


//======================================================================
// sub_66E9E0
// entry 0066e9e0  size 83  status ok
//======================================================================

int __thiscall sub_66E9E0(void *this, unsigned __int8 a2, int a3)
{
  int result; // eax

  result = a2;
  if ( !a2 || a3 == 1 )
    result = sub_66F1A0(this);
  if ( !a2 || a3 == 2 )
    result = sub_66EA40(0);
  if ( !a2 || a3 == 3 )
    return sub_66EA40(1);
  return result;
}


//======================================================================
// sub_66EA40
// entry 0066ea40  size 1567  status ok
//======================================================================

int __thiscall sub_66EA40(char *this, int a2)
{
  int result; // eax
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // esi
  int v12; // eax
  int v13; // eax
  struct Concurrency::details::_TaskCollectionBase *ExecutingCollection; // eax
  int v15; // eax
  int v16; // eax
  int v17; // esi
  int v18; // eax
  int v19; // eax
  int v20; // esi
  int v21; // eax
  int v22; // eax
  int v23; // eax
  int v24; // [esp-4h] [ebp-184h]
  int v25; // [esp+4h] [ebp-17Ch]
  int v27; // [esp+Ch] [ebp-174h]
  char v28[256]; // [esp+10h] [ebp-170h] BYREF
  char Buffer[104]; // [esp+110h] [ebp-70h] BYREF
  int i; // [esp+17Ch] [ebp-4h]

  result = (*(int (__thiscall **)(Concurrency::details::ContextBase *, int))(*(_DWORD *)dword_162EE84 + 828))(
             dword_162EE84,
             -1);
  if ( (_BYTE)result )
  {
    if ( CMFCScanliner::channels(*((CMFCScanliner **)this + 124)) )
    {
      v3 = (*(int (__thiscall **)(char *))(*(_DWORD *)this + 84))(this);
      v4 = (*(int (__thiscall **)(char *, int))(*(_DWORD *)this + 76))(this, v3 + 101);
      (*(void (__thiscall **)(_DWORD, int))(**((_DWORD **)this + 124) + 68))(*((_DWORD *)this + 124), v4 + 103);
      (*(void (__thiscall **)(_DWORD))(**((_DWORD **)this + 124) + 116))(*((_DWORD *)this + 124));
    }
    if ( CMFCScanliner::channels(*((CMFCScanliner **)this + 125)) )
    {
      v5 = (*(int (__thiscall **)(char *))(*(_DWORD *)this + 84))(this);
      v6 = (*(int (__thiscall **)(char *, int))(*(_DWORD *)this + 76))(this, v5 + 74);
      (*(void (__thiscall **)(_DWORD, int))(**((_DWORD **)this + 125) + 68))(*((_DWORD *)this + 125), v6 + 119);
      (*(void (__thiscall **)(_DWORD))(**((_DWORD **)this + 125) + 116))(*((_DWORD *)this + 125));
    }
    v7 = (*(int (__thiscall **)(char *))(*(_DWORD *)this + 84))(this);
    v8 = (*(int (__thiscall **)(char *, int))(*(_DWORD *)this + 76))(this, v7 + 380);
    (*(void (__thiscall **)(_DWORD, int))(**((_DWORD **)this + 129) + 68))(*((_DWORD *)this + 129), v8 + 390);
    result = (*(int (__thiscall **)(_DWORD))(**((_DWORD **)this + 129) + 116))(*((_DWORD *)this + 129));
    for ( i = a2; i < 10; ++i )
    {
      sprintf(Buffer, "%s", this + 152 * i + 528);
      (*(void (__thiscall **)(_DWORD, char *))(**((_DWORD **)this + i + 94) + 180))(*((_DWORD *)this + i + 94), Buffer);
      if ( a2 )
      {
        v11 = 24 * (i - 1);
        v12 = (*(int (__thiscall **)(char *))(*(_DWORD *)this + 84))(this);
        v13 = (*(int (__thiscall **)(char *, int))(*(_DWORD *)this + 76))(this, v11 + v12 + 162);
        (*(void (__thiscall **)(_DWORD, int))(**((_DWORD **)this + i + 94) + 68))(*((_DWORD *)this + i + 94), v13 + 166);
      }
      else
      {
        v9 = (*(int (__thiscall **)(char *))(*(_DWORD *)this + 84))(this);
        v10 = (*(int (__thiscall **)(char *, int))(*(_DWORD *)this + 76))(this, v9 + 101);
        (*(void (__thiscall **)(_DWORD, int))(**((_DWORD **)this + i + 94) + 68))(*((_DWORD *)this + i + 94), v10 + 226);
      }
      (*(void (__thiscall **)(_DWORD))(**((_DWORD **)this + i + 94) + 116))(*((_DWORD *)this + i + 94));
      ExecutingCollection = Concurrency::details::ContextBase::GetExecutingCollection(dword_162EE84);
      v25 = (*(int (__thiscall **)(Concurrency::details::ContextBase *, struct Concurrency::details::_TaskCollectionBase *))(*(_DWORD *)dword_162EE84 + 224))(
              dword_162EE84,
              ExecutingCollection);
      (*(void (__thiscall **)(int, _DWORD, char *))(*(_DWORD *)v25 + 216))(v25, *((_DWORD *)this + 38 * i + 145), v28);
      (*(void (__thiscall **)(_DWORD, char *))(**((_DWORD **)this + i + 104) + 180))(*((_DWORD *)this + i + 104), v28);
      if ( a2 )
      {
        v17 = 24 * (i - 1);
        v18 = (*(int (__thiscall **)(char *))(*(_DWORD *)this + 84))(this);
        v19 = (*(int (__thiscall **)(char *, int))(*(_DWORD *)this + 76))(this, v17 + v18 + 162);
        (*(void (__thiscall **)(_DWORD, int))(**((_DWORD **)this + i + 104) + 68))(
          *((_DWORD *)this + i + 104),
          v19 + 166);
      }
      else
      {
        v15 = (*(int (__thiscall **)(char *))(*(_DWORD *)this + 84))(this);
        v16 = (*(int (__thiscall **)(char *, int))(*(_DWORD *)this + 76))(this, v15 + 101);
        (*(void (__thiscall **)(_DWORD, int))(**((_DWORD **)this + i + 104) + 68))(
          *((_DWORD *)this + i + 104),
          v16 + 226);
      }
      (*(void (__thiscall **)(_DWORD))(**((_DWORD **)this + i + 104) + 116))(*((_DWORD *)this + i + 104));
      result = sprintf(Buffer, "%d", i + 1);
      if ( i > 0 )
      {
        (*(void (__thiscall **)(_DWORD, char *))(**((_DWORD **)this + i + 114) + 180))(
          *((_DWORD *)this + i + 114),
          Buffer);
        v20 = 24 * (i - 1);
        v21 = (*(int (__thiscall **)(char *))(*(_DWORD *)this + 84))(this);
        v22 = (*(int (__thiscall **)(char *, int))(*(_DWORD *)this + 76))(this, v20 + v21 + 162);
        (*(void (__thiscall **)(_DWORD, int))(**((_DWORD **)this + i + 114) + 68))(
          *((_DWORD *)this + i + 114),
          v22 + 130);
        result = (*(int (__thiscall **)(_DWORD))(**((_DWORD **)this + i + 114) + 116))(*((_DWORD *)this + i + 114));
      }
      if ( !a2 )
        break;
    }
    if ( !a2 )
    {
      v27 = *(_DWORD *)(*((_DWORD *)this + 131) + 32);
      sub_6464D0(v27, 1, 0);
      *(_BYTE *)(v27 + 40) = 0;
      *(_BYTE *)(v27 + 41) = 0;
      v24 = (*(int (__thiscall **)(char *))(*(_DWORD *)this + 84))(this) + 74;
      v23 = (*(int (__thiscall **)(char *))(*(_DWORD *)this + 76))(this);
      sub_646150(*(_DWORD *)(*((_DWORD *)this + 131) + 32), v23 + 119, v24);
      return sub_6464D0(*(_DWORD *)(*((_DWORD *)this + 131) + 32), 0, 0);
    }
  }
  return result;
}


//======================================================================
// sub_66F1A0
// entry 0066f1a0  size 454  status ok
//======================================================================

int __thiscall sub_66F1A0(int this)
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

  sub_5EB570((_BYTE *)this);
  v1 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 84))(this);
  v2 = (*(int (__thiscall **)(int, int))(*(_DWORD *)this + 76))(this, v1);
  (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 504) + 68))(*(_DWORD *)(this + 504), v2);
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 504) + 116))(*(_DWORD *)(this + 504));
  v3 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 84))(this);
  v4 = (*(int (__thiscall **)(int, int))(*(_DWORD *)this + 76))(this, v3 + 11);
  (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 508) + 68))(*(_DWORD *)(this + 508), v4);
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 508) + 116))(*(_DWORD *)(this + 508));
  if ( *(_DWORD *)(this + 512) )
  {
    v5 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 84))(this);
    v6 = (*(int (__thiscall **)(int, int))(*(_DWORD *)this + 76))(this, v5 + 46);
    (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 512) + 68))(*(_DWORD *)(this + 512), v6);
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 512) + 116))(*(_DWORD *)(this + 512));
  }
  else if ( *(_DWORD *)(this + 520) )
  {
    v7 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 84))(this);
    v8 = (*(int (__thiscall **)(int, int))(*(_DWORD *)this + 76))(this, v7 + 46);
    (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 520) + 68))(*(_DWORD *)(this + 520), v8);
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 520) + 116))(*(_DWORD *)(this + 520));
  }
  v9 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 84))(this);
  v10 = (*(int (__thiscall **)(int, int))(*(_DWORD *)this + 76))(this, v9 + 380);
  (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 516) + 68))(*(_DWORD *)(this + 516), v10 + 390);
  return (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 516) + 116))(*(_DWORD *)(this + 516));
}


//======================================================================
// sub_66F370
// entry 0066f370  size 114  status ok
//======================================================================

void __thiscall sub_66F370(void *this, int a2)
{
  int v2; // eax

  if ( a2 )
  {
    if ( !*(_BYTE *)(dword_162EE80 + 72)
      || (v2 = (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 232))(dword_162EE84),
          !(*(unsigned __int8 (__thiscall **)(int, int, void *))(*(_DWORD *)v2 + 220))(v2, v2, this)) )
    {
      *(_BYTE *)(a2 + 4) = 1;
    }
  }
  sub_64FA40();
}


//======================================================================
// sub_66F3F0
// entry 0066f3f0  size 80  status ok
//======================================================================

char *__thiscall sub_66F3F0(char *this)
{
  sub_5EC5A0(this);
  *(_DWORD *)this = &HighScoresTag::`vftable';
  strcpy(this + 464, &Source);
  *((_DWORD *)this + 141) = -1;
  *((_DWORD *)this + 142) = 0;
  return this;
}


//======================================================================
// sub_66F440
// entry 0066f440  size 161  status ok
//======================================================================

void __thiscall sub_66F440(int this)
{
  *(_DWORD *)this = &HighScoresTag::`vftable';
  if ( *(_DWORD *)(this + 568) )
  {
    (***(void (__thiscall ****)(_DWORD, int))(this + 568))(*(_DWORD *)(this + 568), 1);
    *(_DWORD *)(this + 568) = 0;
  }
  sub_5EC760((void **)this);
}


//======================================================================
// sub_66F4F0
// entry 0066f4f0  size 288  status ok
//======================================================================

int __thiscall sub_66F4F0(_DWORD *this)
{
  struct Concurrency::details::_TaskCollectionBase *ExecutingCollection; // eax
  int result; // eax
  int v3; // eax
  int IsFixedSize; // eax
  int v5; // [esp+4h] [ebp-20h]
  int v6; // [esp+8h] [ebp-1Ch]
  _DWORD *v8; // [esp+10h] [ebp-14h]

  sub_5EC8F0(this, (int)&Source, 0, 0, 0, 0, 0, 5000, 48, -1);
  sub_5F62B0((CWnd *)this);
  ExecutingCollection = Concurrency::details::ContextBase::GetExecutingCollection(dword_162EE84);
  v6 = (*(int (__thiscall **)(Concurrency::details::ContextBase *, struct Concurrency::details::_TaskCollectionBase *))(*(_DWORD *)dword_162EE84 + 224))(
         dword_162EE84,
         ExecutingCollection);
  result = (*(int (__thiscall **)(int))(*(_DWORD *)v6 + 236))(v6);
  if ( result )
  {
    v8 = operator new(0x178u);
    if ( v8 )
    {
      sub_5EAAF0(v8);
      v5 = v3;
    }
    else
    {
      v5 = 0;
    }
    *(this + 142) = v5;
    IsFixedSize = CMediaType::IsFixedSize((CMediaType *)this);
    sub_5EAE80(0, 0, 0, IsFixedSize - 1, -1);
    return (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 142) + 112))(*(this + 142));
  }
  return result;
}


//======================================================================
// sub_66F610
// entry 0066f610  size 504  status ok
//======================================================================

char __thiscall sub_66F610(int this, char a2)
{
  int v2; // eax
  char v3; // ecx^3
  int v4; // eax
  char result; // al
  int v6; // eax
  int v7; // [esp-Ch] [ebp-F8h]
  int v8; // [esp-8h] [ebp-F4h]
  struct Concurrency::details::_TaskCollectionBase *ExecutingCollection; // [esp-4h] [ebp-F0h]
  char Source[52]; // [esp+4h] [ebp-E8h] BYREF
  int v12; // [esp+38h] [ebp-B4h]
  int v13; // [esp+A0h] [ebp-4Ch]
  char Buffer[52]; // [esp+A4h] [ebp-48h] BYREF
  char v15[16]; // [esp+D8h] [ebp-14h] BYREF

  v13 = 0;
  ExecutingCollection = Concurrency::details::ContextBase::GetExecutingCollection(dword_162EE84);
  v13 = (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 224))(dword_162EE84);
  sub_5ECC60((_DWORD *)this, 295);
  sub_5ECCB0((_DWORD *)this, 17);
  v8 = (*(int (__thiscall **)(int))(*(_DWORD *)v13 + 228))(v13);
  v2 = (*(int (__thiscall **)(int))(*(_DWORD *)v13 + 224))(v13);
  (*(void (__thiscall **)(int, int))(*(_DWORD *)this + 68))(this, v2);
  HIBYTE(v7) = v3;
  LOWORD(v7) = word_75EE1C;
  BYTE2(v7) = byte_75EE1E;
  v4 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)v13 + 232))(v13, -1, v7);
  sub_5ECD00((_DWORD *)this, v4, v8, (int)ExecutingCollection);
  if ( *(_DWORD *)(this + 564) == -1 || a2 )
  {
    result = sub_633EA0(dword_162EE84, Source, 1u);
    if ( !result )
      return result;
    strcpy((char *)(this + 464), Source);
    *(_DWORD *)(this + 564) = v12;
  }
  sub_5EF310((_DWORD *)this, 18);
  (*(void (__thiscall **)(int, _DWORD, char *))(*(_DWORD *)v13 + 216))(v13, *(_DWORD *)(this + 564), v15);
  sprintf(Buffer, "%s   %s", (const char *)(this + 464), v15);
  sub_5EE710((_DWORD *)this, Buffer);
  result = sub_5F6270((CMFCScanliner *)this);
  if ( *(_DWORD *)(this + 568) )
  {
    v6 = (*(int (__thiscall **)(int))(*(_DWORD *)v13 + 236))(v13);
    sub_5EAF00(*(_DWORD *)(this + 568), v6);
    return (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 568) + 116))(*(_DWORD *)(this + 568));
  }
  return result;
}


//======================================================================
// sub_66F810
// entry 0066f810  size 56  status ok
//======================================================================

int __thiscall sub_66F810(CWnd *this)
{
  int result; // eax

  sub_5F62B0(this);
  result = (int)this;
  if ( *((_DWORD *)this + 142) )
    return (*(int (__thiscall **)(_DWORD))(**((_DWORD **)this + 142) + 112))(*((_DWORD *)this + 142));
  return result;
}


//======================================================================
// sub_66F8B0
// entry 0066f8b0  size 129  status ok
//======================================================================

ATL::CCRTHeap *__thiscall sub_66F8B0(ATL::CCRTHeap *this, int a2)
{
  int i; // [esp+4h] [ebp-4h]

  ATL::CCRTHeap::CCRTHeap(this);
  *(_DWORD *)this = &Rewards::`vftable';
  for ( i = 0; i < 700; ++i )
    *((_DWORD *)this + i + 1) = 0;
  *((_DWORD *)this + 701) = 0;
  *((_DWORD *)this + 702) = 0;
  *((_DWORD *)this + 704) = -1;
  *((_DWORD *)this + 703) = a2;
  return this;
}


//======================================================================
// sub_66F960
// entry 0066f960  size 321  status ok
//======================================================================

char __thiscall sub_66F960(_DWORD *this, int a2)
{
  char Buffer[8]; // [esp+4h] [ebp-18h] BYREF
  int v5; // [esp+Ch] [ebp-10h] BYREF
  int v6; // [esp+10h] [ebp-Ch] BYREF
  FILE *Stream; // [esp+18h] [ebp-4h]

  *(this + 703) = a2;
  sub_6705C0(this);
  if ( *(this + 704) == -1 )
    return sub_5E9F20("false", "..\\casinoShell\\rewards.cpp", 57);
  Stream = (FILE *)sub_66FAB0("r");
  if ( !Stream )
    return sub_5E9F20("false", "..\\casinoShell\\rewards.cpp", 64);
  fread(Buffer, 5u, 1u, Stream);
  if ( strcmp(Buffer, "REWC") )
    return sub_5E9F20("false", "..\\casinoShell\\rewards.cpp", 71);
  fread(&v5, 4u, 1u, Stream);
  fread(&v6, 4u, 1u, Stream);
  *(this + 701) = v5;
  *(this + 702) = v6;
  fread(this + 1, 4u, 0x2BCu, Stream);
  return fclose(Stream);
}


//======================================================================
// sub_66FAB0
// entry 0066fab0  size 419  status ok
//======================================================================

FILE *__thiscall sub_66FAB0(int *this, char *Str1)
{
  FILE *Stream; // [esp+4h] [ebp-434h]
  char Buffer[32]; // [esp+8h] [ebp-430h] BYREF
  char v6[8]; // [esp+28h] [ebp-410h] BYREF
  char Destination[1028]; // [esp+30h] [ebp-408h] BYREF

  memset(Destination, 0, 1024);
  if ( *(this + 704) < 0 )
    return 0;
  sprintf(Buffer, "rchk%d.log", *(this + 704));
  strcpy(Destination, Buffer);
  Stream = sub_5EA9C0(Destination, Str1);
  if ( Stream )
    goto LABEL_14;
  if ( !strcmp(Str1, "w") )
    return 0;
  sub_66FE10(this);
  Stream = sub_5EA9C0(Destination, Str1);
  if ( !Stream )
    return 0;
LABEL_14:
  if ( !strcmp(Str1, "w") || (fread(v6, 1u, 5u, Stream), -(strcmp(v6, "REWC") != 0) != -1) )
  {
    fseek(Stream, 0, 0);
    return Stream;
  }
  else
  {
    fclose(Stream);
    sub_5E9F20("false", "..\\casinoShell\\rewards.cpp", 114);
    return 0;
  }
}


//======================================================================
// sub_66FC60
// entry 0066fc60  size 393  status ok
//======================================================================

FILE *__thiscall sub_66FC60(int *this, char *Str1)
{
  FILE *Stream; // [esp+4h] [ebp-434h]
  char Buffer[32]; // [esp+8h] [ebp-430h] BYREF
  char v6[8]; // [esp+28h] [ebp-410h] BYREF
  char Destination[1028]; // [esp+30h] [ebp-408h] BYREF

  if ( *(this + 704) < 0 )
    return 0;
  sprintf(Buffer, "rled%d.log", *(this + 704));
  strcpy(Destination, Buffer);
  Stream = sub_5EA9C0(Destination, Str1);
  if ( Stream )
    goto LABEL_14;
  if ( !strcmp(Str1, "w") )
    return 0;
  sub_66FF30(this);
  Stream = sub_5EA9C0(Destination, Str1);
  if ( !Stream )
    return 0;
LABEL_14:
  if ( !strcmp(Str1, "w") || (fread(v6, 1u, 5u, Stream), -(strcmp(v6, "REWL") != 0) != -1) )
  {
    fseek(Stream, 0, 0);
    return Stream;
  }
  else
  {
    fclose(Stream);
    sub_5E9F20("false", "..\\casinoShell\\rewards.cpp", 154);
    return 0;
  }
}


//======================================================================
// sub_66FE10
// entry 0066fe10  size 285  status ok
//======================================================================

char __thiscall sub_66FE10(int *this)
{
  char Destination[8]; // [esp+4h] [ebp-18h] BYREF
  int Buffer; // [esp+Ch] [ebp-10h] BYREF
  int v5; // [esp+10h] [ebp-Ch] BYREF
  FILE *Stream; // [esp+18h] [ebp-4h]

  sub_6705C0(this);
  if ( *(this + 704) == -1 )
    return sub_5E9F20("false", "..\\casinoShell\\rewards.cpp", 181);
  Stream = sub_66FAB0(this, "w");
  if ( !Stream )
    return sub_5E9F20("false", "..\\casinoShell\\rewards.cpp", 187);
  strcpy(Destination, "REWC");
  Buffer = sub_634420(500);
  v5 = 0;
  fwrite(Destination, 1u, 5u, Stream);
  fwrite(&Buffer, 4u, 1u, Stream);
  fwrite(&v5, 4u, 1u, Stream);
  fwrite(this + 1, 4u, 0x2BCu, Stream);
  return fclose(Stream);
}


//======================================================================
// sub_66FF30
// entry 0066ff30  size 184  status ok
//======================================================================

char __thiscall sub_66FF30(int *this)
{
  char Destination[16]; // [esp+4h] [ebp-18h] BYREF
  FILE *Stream; // [esp+18h] [ebp-4h]

  sub_6705C0(this);
  if ( *(this + 704) == -1 )
    return sub_5E9F20("false", "..\\casinoShell\\rewards.cpp", 210);
  Stream = sub_66FC60(this, "w");
  if ( !Stream )
    return sub_5E9F20("false", "..\\casinoShell\\rewards.cpp", 217);
  strcpy(Destination, "REWL");
  fwrite(Destination, 1u, 5u, Stream);
  return fclose(Stream);
}


//======================================================================
// sub_66FFF0
// entry 0066fff0  size 425  status ok
//======================================================================

char __thiscall sub_66FFF0(int *this, int a2, int a3, char a4)
{
  FILE *Stream; // [esp+4h] [ebp-2Ch]
  FILE *Streama; // [esp+4h] [ebp-2Ch]
  int Buffer; // [esp+8h] [ebp-28h] BYREF
  __time64_t v9; // [esp+10h] [ebp-20h]
  char v10; // [esp+18h] [ebp-18h]
  __time64_t Time; // [esp+20h] [ebp-10h] BYREF
  int v12; // [esp+2Ch] [ebp-4h] BYREF

  Stream = sub_66FC60(this, "rb+");
  if ( Stream )
  {
    fseek(Stream, 0, 2);
    Buffer = a2;
    v9 = time64(&Time);
    v10 = a4;
    fwrite(&Buffer, 0x18u, 1u, Stream);
    fclose(Stream);
    Streama = sub_66FAB0(this, "rb+");
    if ( Streama )
    {
      sub_670520(a2, a4);
      fseek(Streama, 5, 0);
      fwrite(this + 701, 4u, 1u, Streama);
      fwrite(this + 702, 4u, 1u, Streama);
      if ( !sub_634560(a2) )
        a2 = a2 + sub_6344D0(dword_162EE84) - 1000;
      v12 = sub_6704E0(a2);
      fseek(Streama, 4 * a2, 1);
      fwrite(&v12, 4u, 1u, Streama);
      fclose(Streama);
      sub_634C70((const void **)dword_162EE84);
      return 1;
    }
    else
    {
      sub_5E9F20("false", "..\\casinoShell\\rewards.cpp", 257);
      return 0;
    }
  }
  else
  {
    sub_5E9F20("false", "..\\casinoShell\\rewards.cpp", 237);
    return 0;
  }
}


//======================================================================
// sub_670360
// entry 00670360  size 20  status ok
//======================================================================

int __thiscall sub_670360(_DWORD *this)
{
  return *(this + 701);
}


//======================================================================
// sub_670380
// entry 00670380  size 96  status ok
//======================================================================

char __thiscall sub_670380(_DWORD *this, int a2)
{
  int v2; // eax

  *(this + 701) += a2;
  LOBYTE(v2) = (_BYTE)this;
  if ( (int)*(this + 701) < 0 )
    LOBYTE(v2) = sub_5E9F20("rewBalance >= 0", "..\\casinoShell\\rewards.cpp", 349);
  if ( a2 > 0 )
  {
    v2 = a2 + *(this + 702);
    *(this + 702) = v2;
  }
  return v2;
}


//======================================================================
// sub_6703E0
// entry 006703e0  size 20  status ok
//======================================================================

int __thiscall sub_6703E0(_DWORD *this)
{
  return *(this + 702);
}


//======================================================================
// sub_6704E0
// entry 006704e0  size 61  status ok
//======================================================================

int __thiscall sub_6704E0(_DWORD *this, unsigned int a2)
{
  if ( a2 >= 0x2BC )
    sub_5E9F20("id >= 0 && id < REWARDS_CHECKLIST_SIZE", "..\\casinoShell\\rewards.cpp", 379);
  return *(this + a2 + 1);
}


//======================================================================
// sub_670520
// entry 00670520  size 150  status ok
//======================================================================

char __thiscall sub_670520(_DWORD *this, int a2, char a3)
{
  int v3; // eax
  int v5; // [esp+0h] [ebp-Ch]
  int v6; // [esp+4h] [ebp-8h]

  if ( a3 || sub_634560(a2) )
  {
    v5 = *(this + a2 + 1) + 1;
  }
  else
  {
    if ( *(this + a2 + 1) - 1 >= 0 )
      v6 = *(this + a2 + 1) - 1;
    else
      v6 = 0;
    v5 = v6;
  }
  *(this + a2 + 1) = v5;
  v3 = sub_634310(dword_162EE84, a2, a3);
  return sub_670380(this, v3);
}


//======================================================================
// sub_6705C0
// entry 006705c0  size 188  status ok
//======================================================================

int __thiscall sub_6705C0(int this)
{
  char v3; // [esp+Bh] [ebp-19h]
  char String[8]; // [esp+10h] [ebp-14h] BYREF
  char *v5; // [esp+1Ch] [ebp-8h]
  int v6; // [esp+20h] [ebp-4h]

  v3 = 0;
  v5 = sub_520E60(*(CImageDisplay **)(this + 2812));
  v6 = 0;
  while ( *v5 )
  {
    if ( *v5 < 48 || *v5 > 57 )
    {
      if ( v3 )
      {
        String[v6] = 0;
        *(_DWORD *)(this + 2816) = atoi(String);
        return *(_DWORD *)(this + 2816);
      }
    }
    else
    {
      v3 = 1;
      String[v6++] = *v5;
    }
    ++v5;
  }
  return *(_DWORD *)(this + 2816);
}


//======================================================================
// sub_670680
// entry 00670680  size 106  status ok
//======================================================================

int __thiscall sub_670680(int this)
{
  sub_5F5BF0((_DWORD *)this);
  *(_DWORD *)this = &RewardTagDisplay::`vftable';
  *(_DWORD *)(this + 392) = 0;
  *(_DWORD *)(this + 396) = 0;
  *(_DWORD *)(this + 404) = 0;
  *(_DWORD *)(this + 400) = 0;
  *(_BYTE *)(this + 388) = 0;
  *(_DWORD *)(this + 408) = 0;
  return this;
}


//======================================================================
// sub_6706F0
// entry 006706f0  size 461  status ok
//======================================================================

void __thiscall sub_6706F0(int this)
{
  *(_DWORD *)this = &RewardTagDisplay::`vftable';
  if ( *(_DWORD *)(this + 392) )
  {
    (***(void (__thiscall ****)(_DWORD, int))(this + 392))(*(_DWORD *)(this + 392), 1);
    *(_DWORD *)(this + 392) = 0;
  }
  if ( *(_DWORD *)(this + 396) )
  {
    (***(void (__thiscall ****)(_DWORD, int))(this + 396))(*(_DWORD *)(this + 396), 1);
    *(_DWORD *)(this + 396) = 0;
  }
  if ( *(_DWORD *)(this + 404) )
  {
    (***(void (__thiscall ****)(_DWORD, int))(this + 404))(*(_DWORD *)(this + 404), 1);
    *(_DWORD *)(this + 404) = 0;
  }
  if ( *(_DWORD *)(this + 400) )
  {
    (***(void (__thiscall ****)(_DWORD, int))(this + 400))(*(_DWORD *)(this + 400), 1);
    *(_DWORD *)(this + 400) = 0;
  }
  if ( *(_DWORD *)(this + 408) )
  {
    (***(void (__thiscall ****)(_DWORD, int))(this + 408))(*(_DWORD *)(this + 408), 1);
    *(_DWORD *)(this + 408) = 0;
  }
  sub_5F5C40((_DWORD *)this);
}


//======================================================================
// sub_6708C0
// entry 006708c0  size 707  status ok
//======================================================================

int __thiscall sub_6708C0(int this)
{
  int v1; // eax
  int v2; // eax
  int IsFixedSize; // eax
  int v4; // eax
  struct Concurrency::location *v6; // [esp+0h] [ebp-50h]
  int v7; // [esp+0h] [ebp-50h]
  int v8; // [esp+4h] [ebp-4Ch]
  int v9; // [esp+8h] [ebp-48h]
  int v10; // [esp+Ch] [ebp-44h]
  int v11; // [esp+10h] [ebp-40h]
  int v12; // [esp+14h] [ebp-3Ch]
  _DWORD *v14; // [esp+1Ch] [ebp-34h]
  void *v15; // [esp+2Ch] [ebp-24h]
  _DWORD *v16; // [esp+34h] [ebp-1Ch]
  Concurrency::details::ScheduleGroupBase *v17; // [esp+3Ch] [ebp-14h]

  sub_5EAE80(2600000, 0, 0, 3, -1);
  sub_5EB5A0((CWnd *)this);
  v17 = (Concurrency::details::ScheduleGroupBase *)operator new(0x1E8u);
  if ( v17 )
    v12 = Concurrency::details::ScheduleGroupBase::ScheduleGroupBase(
            v17,
            (struct Concurrency::details::SchedulerBase *)this,
            v6);
  else
    v12 = 0;
  *(_DWORD *)(this + 392) = v12;
  sub_671950(v6);
  v16 = operator new(0x178u);
  if ( v16 )
  {
    sub_5EAAF0(v16);
    v11 = v1;
  }
  else
  {
    v11 = 0;
  }
  *(_DWORD *)(this + 400) = v11;
  sub_5EAE80(2600005, 0, 0, 10, -1);
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 400) + 112))(*(_DWORD *)(this + 400));
  v15 = operator new(0x1D0u);
  if ( v15 )
  {
    sub_5EC5A0(v15);
    v10 = v2;
  }
  else
  {
    v10 = 0;
  }
  *(_DWORD *)(this + 396) = v10;
  IsFixedSize = CMediaType::IsFixedSize(*(CMediaType **)(this + 400));
  sub_5EC8F0(*(void **)(this + 396), (int)&Source, 77, 96, 15, 481, 581, IsFixedSize + 1, 18, -1);
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 396) + 112))(*(_DWORD *)(this + 396));
  if ( operator new(0x18Cu) )
    v9 = sub_6711A0(this);
  else
    v9 = 0;
  *(_DWORD *)(this + 404) = v9;
  sub_6712D0(v7);
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 404) + 112))(*(_DWORD *)(this + 404));
  v14 = operator new(0x178u);
  if ( v14 )
  {
    sub_5EAAF0(v14);
    v8 = v4;
  }
  else
  {
    v8 = 0;
  }
  *(_DWORD *)(this + 408) = v8;
  sub_5EAE80(2600007, 0, 0, 50, -1);
  return (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 408) + 112))(*(_DWORD *)(this + 408));
}


//======================================================================
// sub_670B90
// entry 00670b90  size 535  status ok
//======================================================================

int __thiscall sub_670B90(CWnd *this)
{
  int result; // eax
  BYTE v2; // al
  int v3; // eax
  char Buffer[28]; // [esp+4h] [ebp-24h] BYREF
  int v6; // [esp+24h] [ebp-4h]

  result = (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 220))(dword_162EE84);
  if ( (_BYTE)result )
  {
    if ( *((_BYTE *)this + 388) )
    {
      (*(void (__thiscall **)(CWnd *))(*(_DWORD *)this + 112))(this);
      (*(void (__thiscall **)(_DWORD))(**((_DWORD **)this + 98) + 208))(*((_DWORD *)this + 98));
      v2 = sub_6378E0((_DWORD **)dword_162EE84);
      sub_5EAF00((int)this, (v2 != 0) + 2600008);
      sub_5EB570(this);
      return (*(int (__thiscall **)(_DWORD))(**((_DWORD **)this + 102) + 112))(*((_DWORD *)this + 102));
    }
    else
    {
      if ( sub_6378E0((_DWORD **)dword_162EE84) )
      {
        sub_5EAF00((int)this, 2600000);
        sub_5EB570(this);
        (*(void (__thiscall **)(_DWORD))(**((_DWORD **)this + 100) + 116))(*((_DWORD *)this + 100));
        (*(void (__thiscall **)(_DWORD, int, int))(**((_DWORD **)this + 99) + 68))(*((_DWORD *)this + 99), 481, 581);
        v3 = sub_6375B0((_DWORD **)dword_162EE84);
        v6 = sub_670360(*(_DWORD **)(v3 + 36));
        sub_6347C0(Buffer, v6);
        sub_5EE710(*((_DWORD **)this + 99), Buffer);
        (*(void (__thiscall **)(_DWORD))(**((_DWORD **)this + 99) + 116))(*((_DWORD *)this + 99));
        sub_671430(0);
      }
      else
      {
        sub_5EB5A0(this);
        (*(void (__thiscall **)(_DWORD))(**((_DWORD **)this + 100) + 112))(*((_DWORD *)this + 100));
        (*(void (__thiscall **)(_DWORD))(**((_DWORD **)this + 99) + 112))(*((_DWORD *)this + 99));
        (*(void (__thiscall **)(_DWORD))(**((_DWORD **)this + 101) + 112))(*((_DWORD *)this + 101));
      }
      (*(void (__thiscall **)(_DWORD))(**((_DWORD **)this + 98) + 204))(*((_DWORD *)this + 98));
      return (*(int (__thiscall **)(_DWORD))(**((_DWORD **)this + 98) + 116))(*((_DWORD *)this + 98));
    }
  }
  return result;
}


//======================================================================
// sub_670DB0
// entry 00670db0  size 121  status ok
//======================================================================

int __thiscall sub_670DB0(CWnd *this)
{
  sub_5EB5A0(this);
  (*(void (__thiscall **)(_DWORD))(**((_DWORD **)this + 98) + 112))(*((_DWORD *)this + 98));
  (*(void (__thiscall **)(_DWORD))(**((_DWORD **)this + 100) + 112))(*((_DWORD *)this + 100));
  (*(void (__thiscall **)(_DWORD))(**((_DWORD **)this + 99) + 112))(*((_DWORD *)this + 99));
  return (*(int (__thiscall **)(_DWORD))(**((_DWORD **)this + 101) + 112))(*((_DWORD *)this + 101));
}


//======================================================================
// sub_670E30
// entry 00670e30  size 146  status ok
//======================================================================

void (__thiscall ****__thiscall sub_670E30(int this, char a2))(_DWORD, _DWORD)
{
  void (__thiscall ***v3)(_DWORD, _DWORD); // [esp+4h] [ebp-1Ch]

  *(_BYTE *)(this + 388) = 1;
  if ( operator new(0x28u) )
    v3 = (void (__thiscall ***)(_DWORD, _DWORD))sub_671C80(a2, this);
  else
    v3 = 0;
  return sub_5F5DF0((void (__thiscall ****)(_DWORD, _DWORD))this, v3);
}


//======================================================================
// sub_670ED0
// entry 00670ed0  size 186  status ok
//======================================================================

bool __thiscall sub_670ED0(_DWORD **this, int a2)
{
  if ( *(_DWORD *)(a2 + 24) == 3 )
    return 1;
  if ( *(_BYTE *)(a2 + 4)
    || !(unsigned __int8)sub_5F56A0(this, a2)
    && !(*(unsigned __int8 (__thiscall **)(_DWORD, int))(**(this + 100) + 132))(*(this + 100), a2)
    && !(*(unsigned __int8 (__thiscall **)(_DWORD, int))(**(this + 101) + 132))(*(this + 101), a2) )
  {
    return 0;
  }
  return (*(_DWORD *)(a2 + 28) & 8) != 0 && *(_DWORD *)(a2 + 24) == 2;
}


//======================================================================
// sub_670F90
// entry 00670f90  size 291  status ok
//======================================================================

BYTE __thiscall sub_670F90(_DWORD **this, int a2)
{
  BYTE result; // al

  result = (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 220))(dword_162EE84);
  if ( result )
  {
    result = sub_6378E0((_DWORD **)dword_162EE84);
    if ( result )
    {
      if ( (unsigned __int8)sub_5F56A0(this, a2) )
        return (*(int (__thiscall **)(_DWORD))(**(this + 102) + 116))(*(this + 102));
      if ( (*(unsigned __int8 (__thiscall **)(_DWORD, int))(**(this + 98) + 132))(*(this + 98), a2) )
        return (*(int (__thiscall **)(_DWORD))(**(this + 102) + 116))(*(this + 102));
      if ( (*(unsigned __int8 (__thiscall **)(_DWORD, int))(**(this + 100) + 132))(*(this + 100), a2) )
        return (*(int (__thiscall **)(_DWORD))(**(this + 102) + 116))(*(this + 102));
      result = (*(int (__thiscall **)(_DWORD, int))(**(this + 101) + 132))(*(this + 101), a2);
      if ( result )
      {
        if ( *(int *)(a2 + 12) >= 571 )
          return (*(int (__thiscall **)(_DWORD))(**(this + 102) + 116))(*(this + 102));
      }
    }
  }
  if ( *(this + 102) )
    return (*(int (__thiscall **)(_DWORD))(**(this + 102) + 112))(*(this + 102));
  return result;
}


//======================================================================
// sub_6710C0
// entry 006710c0  size 65  status ok
//======================================================================

int __stdcall sub_6710C0(int a1)
{
  return (*(int (__thiscall **)(Concurrency::details::ContextBase *, int, _DWORD, _DWORD, int, int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)dword_162EE84 + 128))(
           dword_162EE84,
           2600003,
           0,
           0,
           5,
           1,
           1.0,
           0.5,
           0);
}


//======================================================================
// sub_671120
// entry 00671120  size 65  status ok
//======================================================================

int __stdcall sub_671120(int a1)
{
  return (*(int (__thiscall **)(Concurrency::details::ContextBase *, int, _DWORD, _DWORD, int, int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)dword_162EE84 + 128))(
           dword_162EE84,
           2600000,
           0,
           0,
           5,
           1,
           1.0,
           0.5,
           0);
}


//======================================================================
// sub_671170
// entry 00671170  size 43  status ok
//======================================================================

_DWORD *__thiscall sub_671170(_DWORD *this, int a2)
{
  _DWORD *result; // eax

  result = this;
  if ( *(this + 101) )
    return (_DWORD *)sub_6715F0(a2);
  return result;
}


//======================================================================
// sub_6711A0
// entry 006711a0  size 90  status ok
//======================================================================

_DWORD *__thiscall sub_6711A0(_DWORD *this, int a2)
{
  int i; // [esp+4h] [ebp-4h]

  sub_5EAAF0(this);
  *this = &RewardsTriggerTextBox::`vftable';
  *(this + 98) = a2;
  for ( i = 0; i < 4; ++i )
    *(this + i + 94) = 0;
  return this;
}


//======================================================================
// sub_671200
// entry 00671200  size 199  status ok
//======================================================================

void __thiscall sub_671200(_DWORD *this)
{
  int i; // [esp+14h] [ebp-10h]

  *this = &RewardsTriggerTextBox::`vftable';
  for ( i = 0; i < 4; ++i )
  {
    if ( *(this + i + 94) )
    {
      (**(void (__thiscall ***)(_DWORD, int))*(this + i + 94))(*(this + i + 94), 1);
      *(this + i + 94) = 0;
    }
  }
  sub_5EAC00(this);
}


//======================================================================
// sub_6712D0
// entry 006712d0  size 346  status ok
//======================================================================

int __thiscall sub_6712D0(void **this)
{
  const char *v1; // eax
  void *v2; // eax
  void *v4; // [esp+8h] [ebp-40h]
  void *v6; // [esp+10h] [ebp-38h]
  char Destination[28]; // [esp+18h] [ebp-30h] BYREF
  int i; // [esp+38h] [ebp-10h]
  int v9; // [esp+44h] [ebp-4h]

  sub_5EAE80(2600006, 0, 0, 5, -1);
  v1 = (const char *)sub_630F40((int)"SID_SHELL_REWARDS_NORECENTTRIGGER");
  strcpy(Destination, v1);
  for ( i = 0; i < 4; ++i )
  {
    v6 = operator new(0x1D0u);
    v9 = 0;
    if ( v6 )
    {
      sub_5EC5A0(v6);
      v4 = v2;
    }
    else
    {
      v4 = 0;
    }
    v9 = -1;
    *(this + i + 94) = v4;
    if ( i )
      sub_5EC8F0(*(this + i + 94), (int)&Source, 77, 200, 15, 593, 581 - 11 * i, 20, 48, -1);
    else
      sub_5EC8F0(*(this + 94), (int)Destination, 77, 200, 15, 593, 581, 20, 48, -1);
    (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + i + 94) + 112))(*(this + i + 94));
  }
  return sub_671430(0);
}


//======================================================================
// sub_671430
// entry 00671430  size 357  status ok
//======================================================================

int __thiscall sub_671430(_BYTE *this, char a2)
{
  char v4; // [esp+7h] [ebp-9h]
  char *Str; // [esp+8h] [ebp-8h]
  int i; // [esp+Ch] [ebp-4h]

  if ( !sub_6378E0((_DWORD **)dword_162EE84) )
    return (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)this + 112))(this);
  Str = (char *)(*(int (__thiscall **)(_DWORD))(**((_DWORD **)this + 95) + 184))(*((_DWORD *)this + 95));
  if ( a2 && Str && strlen(Str) && !*(_BYTE *)(*((_DWORD *)this + 98) + 388) )
  {
    (*(void (__thiscall **)(_BYTE *, int))(*(_DWORD *)this + 176))(this, 1);
    v4 = 1;
  }
  else
  {
    (*(void (__thiscall **)(_BYTE *, _DWORD))(*(_DWORD *)this + 176))(this, 0);
    v4 = 0;
  }
  for ( i = 0; i < 4; ++i )
  {
    (*(void (__thiscall **)(_DWORD, int, int))(**((_DWORD **)this + i + 94) + 68))(
      *((_DWORD *)this + i + 94),
      593,
      581 - 11 * i);
    if ( !v4 && i )
      (*(void (__thiscall **)(_DWORD))(**((_DWORD **)this + i + 94) + 112))(*((_DWORD *)this + i + 94));
    else
      (*(void (__thiscall **)(_DWORD))(**((_DWORD **)this + i + 94) + 116))(*((_DWORD *)this + i + 94));
  }
  return sub_5EB570(this);
}


//======================================================================
// sub_6715A0
// entry 006715a0  size 80  status ok
//======================================================================

void __thiscall sub_6715A0(CWnd *this)
{
  int i; // [esp+4h] [ebp-4h]

  for ( i = 0; i < 4; ++i )
    (*(void (__thiscall **)(_DWORD))(**((_DWORD **)this + i + 94) + 112))(*((_DWORD *)this + i + 94));
  sub_5EB5A0(this);
}


//======================================================================
// sub_6715F0
// entry 006715f0  size 352  status ok
//======================================================================

int __thiscall sub_6715F0(_DWORD **this, int a2)
{
  const char *v2; // eax
  int v3; // eax
  const char *v5; // [esp-4h] [ebp-6Ch]
  int v6; // [esp+0h] [ebp-68h]
  char Buffer[80]; // [esp+8h] [ebp-60h] BYREF
  int i; // [esp+5Ch] [ebp-Ch]
  const char *v10; // [esp+60h] [ebp-8h]
  int v11; // [esp+64h] [ebp-4h]

  v5 = (const char *)sub_630F40((int)"SID_SHELL_REWARDS_NORECENTTRIGGER");
  v2 = (const char *)(*(int (__thiscall **)(_DWORD))(**(this + 94) + 184))(*(this + 94));
  if ( !strcmp(v2, v5) )
    (*(void (__thiscall **)(_DWORD, const char *))(**(this + 94) + 180))(*(this + 94), &Source);
  for ( i = 3; i > 0; --i )
  {
    v3 = (*(int (__thiscall **)(_DWORD))(**(this + i + 93) + 184))(*(this + i + 93));
    (*(void (__thiscall **)(_DWORD, int))(**(this + i + 94) + 180))(*(this + i + 94), v3);
  }
  v11 = sub_634310(dword_162EE84, a2, 0);
  v6 = (*(int (__thiscall **)(Concurrency::details::ContextBase *))(*(_DWORD *)dword_162EE84 + 232))(dword_162EE84);
  v10 = (const char *)(*(int (__thiscall **)(int, int))(*(_DWORD *)v6 + 244))(v6, a2);
  sprintf(Buffer, "%s: HB %d.00", v10, v11);
  return (*(int (__thiscall **)(_DWORD, char *))(**(this + 94) + 180))(*(this + 94), Buffer);
}


//======================================================================
// sub_671750
// entry 00671750  size 40  status ok
//======================================================================

bool __stdcall sub_671750(int a1)
{
  return !*(_BYTE *)(a1 + 4) && *(_DWORD *)(a1 + 24) == 3;
}


//======================================================================
// sub_671780
// entry 00671780  size 136  status ok
//======================================================================

int __thiscall sub_671780(int this, int a2)
{
  char *Str; // [esp+4h] [ebp-4h]

  Str = 0;
  if ( *(_DWORD *)(this + 380) )
    Str = (char *)(*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 380) + 184))(*(_DWORD *)(this + 380));
  if ( (*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)this + 132))(this, a2) && Str && strlen(Str) )
    return sub_671430((_BYTE *)this, 1);
  else
    return sub_671430((_BYTE *)this, 0);
}


//======================================================================
// sub_671950
// entry 00671950  size 190  status ok
//======================================================================

int __thiscall sub_671950(_DWORD *this)
{
  _DWORD *v2; // [esp+4h] [ebp-1Ch]
  _DWORD *v4; // [esp+Ch] [ebp-14h]

  sub_5EAE80(2600001, 0, 0, 5, -1);
  v4 = operator new(0x184u);
  if ( v4 )
    v2 = sub_5F5BF0(v4);
  else
    v2 = 0;
  *(this + 120) = v2;
  sub_5EAE80(2600003, 0, 0, 10, -1);
  return (*(int (__thiscall **)(_DWORD *))(*this + 112))(this);
}


//======================================================================
// sub_671A10
// entry 00671a10  size 144  status ok
//======================================================================

int __thiscall sub_671A10(int *this)
{
  if ( sub_6378E0((_DWORD **)dword_162EE84) )
  {
    (*(void (__thiscall **)(int *, int))(*this + 200))(this, 2600001);
    sub_5EAF00(*(this + 120), 2600003);
  }
  else
  {
    (*(void (__thiscall **)(int *, int))(*this + 200))(this, 2600002);
    sub_5EAF00(*(this + 120), 2600004);
  }
  (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 120) + 116))(*(this + 120));
  return sub_602500((int)this);
}


//======================================================================
// sub_671AA0
// entry 00671aa0  size 46  status ok
//======================================================================

void __thiscall sub_671AA0(_DWORD **this)
{
  (*(void (__thiscall **)(_DWORD))(**(this + 120) + 112))(*(this + 120));
  sub_602550((int)this);
}


