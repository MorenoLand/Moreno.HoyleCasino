//======================================================================
// sub_686620
// entry 00686620  size 319  status ok
//======================================================================

int __cdecl sub_686620(_DWORD *a1, int *a2)
{
  int v2; // eax
  int v3; // edi
  int v4; // ebx
  int result; // eax
  int v6; // ebp
  int v7; // ebp
  int v8; // ecx
  char *v9; // ecx
  int v10; // eax
  int v11; // ecx
  int v12; // [esp+10h] [ebp-10h] BYREF
  int v13; // [esp+14h] [ebp-Ch]
  int v14; // [esp+18h] [ebp-8h]
  int v15; // [esp+1Ch] [ebp-4h]

  v2 = a1[3];
  v3 = v2 + *a1;
  v4 = a1[2] - v2;
  if ( !a1[5] )
  {
    if ( v4 < 27 )
      return 0;
    if ( *(_DWORD *)v3 != *(_DWORD *)aOggs )
      goto LABEL_13;
    result = 0;
    v6 = *(unsigned __int8 *)(v3 + 26) + 27;
    if ( v4 < v6 )
      return result;
    if ( *(_BYTE *)(v3 + 26) )
    {
      do
        a1[6] += *(unsigned __int8 *)(v3 + result++ + 27);
      while ( result < *(unsigned __int8 *)(v3 + 26) );
    }
    a1[5] = v6;
  }
  if ( a1[6] + a1[5] > v4 )
    return 0;
  v7 = *(_DWORD *)(v3 + 22);
  *(_DWORD *)(v3 + 22) = 0;
  v8 = a1[6];
  v13 = a1[5];
  v12 = v3;
  v14 = v3 + v13;
  v15 = v8;
  sub_686400(v3 + v13, &v12);
  if ( v7 != *(_DWORD *)(v3 + 22) )
  {
    *(_DWORD *)(v3 + 22) = v7;
LABEL_13:
    a1[5] = 0;
    a1[6] = 0;
    v9 = (char *)memchr((const void *)(v3 + 1), 79, v4 - 1);
    if ( !v9 )
      v9 = (char *)(*a1 + a1[2]);
    a1[3] = &v9[-*a1];
    return v3 - (_DWORD)v9;
  }
  v10 = a1[3] + *a1;
  if ( a2 )
  {
    *a2 = v10;
    a2[1] = a1[5];
    a2[2] = v10 + a1[5];
    a2[3] = a1[6];
  }
  v11 = a1[3];
  result = a1[6] + a1[5];
  a1[4] = 0;
  a1[3] = result + v11;
  a1[5] = 0;
  a1[6] = 0;
  return result;
}


//======================================================================
// sub_686760
// entry 00686760  size 714  status ok
//======================================================================

int __cdecl sub_686760(int a1, int *a2)
{
  int v2; // ebp
  int v3; // ebx
  unsigned int v4; // esi
  int v5; // edx
  int v6; // eax
  int v7; // edi
  size_t v8; // ecx
  int v9; // ecx
  int v10; // eax
  int v12; // edx
  int v13; // ecx
  int v14; // ecx
  int *v15; // eax
  int v16; // edi
  int v17; // eax
  int v18; // eax
  int v19; // edi
  int v20; // eax
  int v21; // edx
  int v22; // eax
  int v23; // ecx
  int v24; // esi
  _DWORD *v25; // ecx
  int v26; // ecx
  int v27; // eax
  int v28; // eax
  int v29; // edx
  int v30; // ecx
  char *v31; // [esp+10h] [ebp-2Ch]
  unsigned int v32; // [esp+14h] [ebp-28h]
  int v33; // [esp+18h] [ebp-24h]
  int v34; // [esp+1Ch] [ebp-20h]
  int v35; // [esp+20h] [ebp-1Ch]
  int v36; // [esp+24h] [ebp-18h]
  int v37; // [esp+28h] [ebp-14h]
  int v38; // [esp+2Ch] [ebp-10h]
  int v39; // [esp+30h] [ebp-Ch]
  int v40; // [esp+34h] [ebp-8h]
  int v41; // [esp+38h] [ebp-4h]
  int v42; // [esp+44h] [ebp+8h]

  v2 = 0;
  v3 = *a2;
  v4 = a2[3];
  v34 = *a2;
  v31 = (char *)a2[2];
  v32 = v4;
  v37 = sub_686210((int)a2);
  v38 = sub_686220((int)a2);
  v33 = sub_686230((int)a2);
  v39 = sub_686240((int)a2);
  v40 = sub_686250((int)a2);
  v41 = v5;
  v36 = sub_6862E0((int)a2);
  v35 = sub_686310((int)a2);
  v42 = *(unsigned __int8 *)(v3 + 26);
  v6 = *(_DWORD *)(a1 + 12);
  v7 = *(_DWORD *)(a1 + 36);
  if ( v6 )
  {
    v8 = *(_DWORD *)(a1 + 8) - v6;
    *(_DWORD *)(a1 + 8) = v8;
    if ( v8 )
      memmove(*(void **)a1, (const void *)(*(_DWORD *)a1 + v6), v8);
    *(_DWORD *)(a1 + 12) = 0;
  }
  if ( v7 )
  {
    v9 = *(_DWORD *)(a1 + 28) - v7;
    if ( v9 )
    {
      memmove(*(void **)(a1 + 16), (const void *)(*(_DWORD *)(a1 + 16) + 4 * v7), 4 * v9);
      memmove(*(void **)(a1 + 20), (const void *)(*(_DWORD *)(a1 + 20) + 8 * v7), 8 * (*(_DWORD *)(a1 + 28) - v7));
    }
    v10 = *(_DWORD *)(a1 + 32) - v7;
    *(_DWORD *)(a1 + 28) -= v7;
    *(_DWORD *)(a1 + 32) = v10;
    *(_DWORD *)(a1 + 36) = 0;
  }
  if ( v36 != *(_DWORD *)(a1 + 336) )
    return -1;
  if ( v37 > 0 )
    return -1;
  sub_6864E0(a1, v42 + 1);
  if ( v35 == *(_DWORD *)(a1 + 340) )
  {
    v19 = v42;
  }
  else
  {
    v12 = *(_DWORD *)(a1 + 32);
    v13 = *(_DWORD *)(a1 + 28);
    if ( v12 < v13 )
    {
      v14 = v13 - v12;
      v15 = (int *)(*(_DWORD *)(a1 + 16) + 4 * v12);
      do
      {
        v16 = *v15++;
        *(_DWORD *)(a1 + 8) -= (unsigned __int8)v16;
        --v14;
      }
      while ( v14 );
    }
    v17 = *(_DWORD *)(a1 + 340);
    *(_DWORD *)(a1 + 28) = v12;
    if ( v17 != -1 )
    {
      *(_DWORD *)(*(_DWORD *)(a1 + 16) + 4 * v12) = 1024;
      v18 = *(_DWORD *)(a1 + 32) + 1;
      ++*(_DWORD *)(a1 + 28);
      *(_DWORD *)(a1 + 32) = v18;
    }
    v19 = v42;
    if ( v38 )
    {
      v33 = 0;
      if ( v42 > 0 )
      {
        do
        {
          v20 = *(unsigned __int8 *)(v34 + v2 + 27);
          v4 -= v20;
          ++v2;
          v31 += v20;
        }
        while ( v20 >= 255 && v2 < v42 );
        v32 = v4;
      }
    }
  }
  if ( v4 )
  {
    sub_6864B0(a1, v4);
    qmemcpy((void *)(*(_DWORD *)a1 + *(_DWORD *)(a1 + 8)), v31, v4);
    v19 = v42;
    *(_DWORD *)(a1 + 8) += v32;
  }
  v21 = -1;
  if ( v2 < v19 )
  {
    do
    {
      v22 = *(unsigned __int8 *)(v34 + v2 + 27);
      *(_DWORD *)(*(_DWORD *)(a1 + 16) + 4 * *(_DWORD *)(a1 + 28)) = v22;
      v23 = *(_DWORD *)(a1 + 28);
      v24 = *(_DWORD *)(a1 + 20);
      *(_DWORD *)(v24 + 8 * v23) = -1;
      *(_DWORD *)(v24 + 8 * v23 + 4) = -1;
      if ( v33 )
      {
        v33 = 0;
        v25 = (_DWORD *)(*(_DWORD *)(a1 + 16) + 4 * *(_DWORD *)(a1 + 28));
        *v25 |= 0x100u;
      }
      if ( v22 < 255 )
        v21 = *(_DWORD *)(a1 + 28);
      v26 = *(_DWORD *)(a1 + 28) + 1;
      ++v2;
      *(_DWORD *)(a1 + 28) = v26;
      if ( v22 < 255 )
        *(_DWORD *)(a1 + 32) = v26;
    }
    while ( v2 < v19 );
    if ( v21 != -1 )
    {
      v27 = *(_DWORD *)(a1 + 20);
      *(_DWORD *)(v27 + 8 * v21) = v40;
      *(_DWORD *)(v27 + 8 * v21 + 4) = v41;
    }
  }
  if ( v39 )
  {
    v28 = *(_DWORD *)(a1 + 28);
    *(_DWORD *)(a1 + 328) = 1;
    if ( v28 > 0 )
    {
      v29 = *(_DWORD *)(a1 + 16);
      v30 = *(_DWORD *)(v29 + 4 * v28 - 4);
      BYTE1(v30) |= 2u;
      *(_DWORD *)(v29 + 4 * v28 - 4) = v30;
    }
  }
  *(_DWORD *)(a1 + 340) = v35 + 1;
  return 0;
}


//======================================================================
// sub_686A30
// entry 00686a30  size 24  status ok
//======================================================================

int __cdecl sub_686A30(_DWORD *a1)
{
  a1[2] = 0;
  a1[3] = 0;
  a1[4] = 0;
  a1[5] = 0;
  a1[6] = 0;
  return 0;
}


//======================================================================
// sub_686A50
// entry 00686a50  size 76  status ok
//======================================================================

int __cdecl sub_686A50(_DWORD *a1)
{
  a1[2] = 0;
  a1[3] = 0;
  a1[7] = 0;
  a1[8] = 0;
  a1[9] = 0;
  a1[81] = 0;
  a1[82] = 0;
  a1[83] = 0;
  a1[85] = -1;
  a1[86] = 0;
  a1[87] = 0;
  a1[88] = 0;
  a1[89] = 0;
  return 0;
}


//======================================================================
// sub_686AA0
// entry 00686aa0  size 26  status ok
//======================================================================

int __cdecl sub_686AA0(_DWORD *a1, int a2)
{
  int v2; // edx

  sub_686A50(a1);
  *(_DWORD *)(v2 + 336) = a2;
  return 0;
}


//======================================================================
// sub_686AC0
// entry 00686ac0  size 21  status ok
//======================================================================

int __cdecl sub_686AC0(int a1, int a2)
{
  return sub_686AE0(a1, a2, 1);
}


//======================================================================
// sub_686AE0
// entry 00686ae0  size 297  status ok
//======================================================================

int __cdecl sub_686AE0(int a1, _DWORD *a2, int a3)
{
  int v4; // ebx
  int *v6; // ebp
  int v7; // ecx
  __int64 v8; // kr00_8
  int v9; // edi
  int v10; // edx
  int v11; // edx
  int v12; // edx
  int v13; // edx
  __int64 v14; // kr08_8
  int v15; // [esp+10h] [ebp+4h]

  v4 = *(_DWORD *)(a1 + 36);
  if ( *(_DWORD *)(a1 + 32) <= v4 )
    return 0;
  v6 = (int *)(*(_DWORD *)(a1 + 16) + 4 * v4);
  v7 = *v6;
  if ( (*v6 & 0x400) != 0 )
  {
    v8 = *(_QWORD *)(a1 + 344) + 1LL;
    *(_DWORD *)(a1 + 36) = v4 + 1;
    *(_QWORD *)(a1 + 344) = v8;
    return -1;
  }
  else
  {
    if ( a2 || a3 )
    {
      v9 = (unsigned __int8)v7;
      v10 = *v6 & 0x200;
      v15 = v10;
      if ( (unsigned __int8)v7 == 255 )
      {
        do
        {
          v11 = v6[1];
          ++v6;
          ++v4;
          if ( (v11 & 0x200) != 0 )
            v15 = 512;
          v9 += (unsigned __int8)v11;
        }
        while ( (unsigned __int8)v11 == 255 );
        v10 = v15;
      }
      if ( a2 )
      {
        a2[3] = v10;
        a2[2] = v7 & 0x100;
        *a2 = *(_DWORD *)a1 + *(_DWORD *)(a1 + 12);
        a2[6] = *(_DWORD *)(a1 + 344);
        a2[7] = *(_DWORD *)(a1 + 348);
        v12 = *(_DWORD *)(a1 + 20);
        a2[4] = *(_DWORD *)(v12 + 8 * v4);
        v13 = *(_DWORD *)(v12 + 8 * v4 + 4);
        a2[1] = v9;
        a2[5] = v13;
      }
      if ( a3 )
      {
        v14 = *(_QWORD *)(a1 + 344) + 1LL;
        *(_DWORD *)(a1 + 12) += v9;
        *(_DWORD *)(a1 + 36) = v4 + 1;
        *(_QWORD *)(a1 + 344) = v14;
      }
    }
    return 1;
  }
}


//======================================================================
// sub_686C10
// entry 00686c10  size 21  status ok
//======================================================================

int __cdecl sub_686C10(int a1, _DWORD *a2)
{
  return sub_686AE0(a1, a2, 0);
}


//======================================================================
// freetype6_67
// entry 00686c30  size 6  status ok
//======================================================================

// attributes: thunk
int __cdecl freetype6_67(int a1)
{
  return __imp_freetype6_67(a1);
}


//======================================================================
// freetype6_66
// entry 00686c36  size 6  status ok
//======================================================================

// attributes: thunk
int __cdecl freetype6_66(int a1)
{
  return __imp_freetype6_66(a1);
}


//======================================================================
// freetype6_125
// entry 00686c3c  size 6  status ok
//======================================================================

// attributes: thunk
int __cdecl freetype6_125(int a1, int a2, int a3)
{
  return __imp_freetype6_125(a1, a2, a3);
}


//======================================================================
// freetype6_168
// entry 00686c42  size 6  status ok
//======================================================================

// attributes: thunk
int __cdecl freetype6_168(int a1, int a2, int a3, int a4, int a5)
{
  return __imp_freetype6_168(a1, a2, a3, a4, a5);
}


//======================================================================
// freetype6_139
// entry 00686c48  size 6  status ok
//======================================================================

// attributes: thunk
int __cdecl freetype6_139(int a1, int a2)
{
  return __imp_freetype6_139(a1, a2);
}


//======================================================================
// freetype6_116
// entry 00686c4e  size 6  status ok
//======================================================================

// attributes: thunk
int __cdecl freetype6_116(int a1)
{
  return __imp_freetype6_116(a1);
}


//======================================================================
// freetype6_82
// entry 00686c54  size 6  status ok
//======================================================================

// attributes: thunk
int __cdecl freetype6_82(int a1, int a2)
{
  return __imp_freetype6_82(a1, a2);
}


//======================================================================
// freetype6_78
// entry 00686c5a  size 6  status ok
//======================================================================

// attributes: thunk
int __cdecl freetype6_78(int a1, int a2)
{
  return __imp_freetype6_78(a1, a2);
}


//======================================================================
// j_??2@YAPAXI@Z
// entry 00686c60  size 5  status ok
//======================================================================

// attributes: thunk
void *__cdecl operator new(unsigned int a1)
{
  return ??2@YAPAXI@Z(a1);
}


//======================================================================
// __CxxFrameHandler3
// entry 00686d6c  size 6  status ok
//======================================================================

// attributes: thunk
int _CxxFrameHandler3()
{
  return __CxxFrameHandler3();
}


//======================================================================
// sub_686D72
// entry 00686d72  size 15  status ok
//======================================================================

void __thiscall sub_686D72(void *this)
{
  if ( this != (void *)dword_781870 )
    __report_gsfailure();
}


//======================================================================
// _purecall
// entry 00686d88  size 6  status ok
//======================================================================

// attributes: thunk
int purecall()
{
  return _purecall();
}


//======================================================================
// strcpy
// entry 00686d8e  size 6  status ok
//======================================================================

// attributes: thunk
char *__cdecl strcpy(char *Destination, const char *Source)
{
  return __imp_strcpy(Destination, Source);
}


//======================================================================
// abs
// entry 00686eba  size 6  status ok
//======================================================================

// attributes: thunk
int __cdecl abs(int Number)
{
  return __imp_abs(Number);
}


//======================================================================
// strcmp
// entry 00686ec0  size 6  status ok
//======================================================================

// attributes: thunk
int __cdecl strcmp(const char *Str1, const char *Str2)
{
  return __imp_strcmp(Str1, Str2);
}


//======================================================================
// strcat
// entry 00686ec6  size 6  status ok
//======================================================================

// attributes: thunk
char *__cdecl strcat(char *Destination, const char *Source)
{
  return __imp_strcat(Destination, Source);
}


//======================================================================
// strlen
// entry 00686ecc  size 6  status ok
//======================================================================

// attributes: thunk
size_t __cdecl strlen(const char *Str)
{
  return __imp_strlen(Str);
}


//======================================================================
// ceil
// entry 00686ed2  size 6  status ok
//======================================================================

// attributes: thunk
double __cdecl ceil(double X)
{
  return __imp_ceil(X);
}


//======================================================================
// qsort
// entry 00686ed8  size 6  status ok
//======================================================================

// attributes: thunk
void __cdecl qsort(
        void *Base,
        size_t NumOfElements,
        size_t SizeOfElements,
        _CoreCrtNonSecureSearchSortCompareFunction CompareFunction)
{
  __imp_qsort(Base, NumOfElements, SizeOfElements, CompareFunction);
}


//======================================================================
// __RTDynamicCast
// entry 00686ede  size 6  status ok
//======================================================================

// attributes: thunk
int __cdecl _RTDynamicCast(int a1, int a2, int a3, int a4, int a5)
{
  return __RTDynamicCast(a1, a2, a3, a4, a5);
}


//======================================================================
// sqrt
// entry 00686ee4  size 6  status ok
//======================================================================

// attributes: thunk
double __cdecl sqrt(double X)
{
  return __imp_sqrt(X);
}


//======================================================================
// memset
// entry 00686fa2  size 6  status ok
//======================================================================

// attributes: thunk
void *__cdecl memset(void *a1, int Val, size_t Size)
{
  return __imp_memset(a1, Val, Size);
}


//======================================================================
// fclose
// entry 00686fa8  size 6  status ok
//======================================================================

// attributes: thunk
int __cdecl fclose(FILE *Stream)
{
  return __imp_fclose(Stream);
}


//======================================================================
// fread
// entry 00686fae  size 6  status ok
//======================================================================

// attributes: thunk
size_t __cdecl fread(void *Buffer, size_t ElementSize, size_t ElementCount, FILE *Stream)
{
  return __imp_fread(Buffer, ElementSize, ElementCount, Stream);
}


//======================================================================
// floor
// entry 00686fb4  size 6  status ok
//======================================================================

// attributes: thunk
double __cdecl floor(double X)
{
  return __imp_floor(X);
}


//======================================================================
// fmod
// entry 00686fba  size 6  status ok
//======================================================================

// attributes: thunk
double __cdecl fmod(double X, double Y)
{
  return __imp_fmod(X, Y);
}


//======================================================================
// _CxxThrowException
// entry 00686fc0  size 6  status ok
//======================================================================

// attributes: thunk
void __stdcall __noreturn CxxThrowException(void *pExceptionObject, _ThrowInfo *pThrowInfo)
{
  _CxxThrowException(pExceptionObject, pThrowInfo);
}


//======================================================================
// ??1exception@std@@UAE@XZ
// entry 00686fc6  size 6  status ok
//======================================================================

// attributes: thunk
void __thiscall std::exception::~exception(std::exception *this)
{
  __imp_??1exception@std@@UAE@XZ(this);
}


//======================================================================
// ??0exception@std@@QAE@ABV01@@Z
// entry 00686fcc  size 6  status ok
//======================================================================

// attributes: thunk
int __thiscall std::exception::exception(std::exception *this, const struct exception *a2)
{
  return __imp_??0exception@std@@QAE@ABV01@@Z(this, a2);
}


//======================================================================
// ?what@exception@std@@UBEPBDXZ
// entry 00686fd2  size 6  status ok
//======================================================================

// attributes: thunk
const char *__thiscall std::exception::what(std::exception *this)
{
  return __imp_?what@exception@std@@UBEPBDXZ(this);
}


//======================================================================
// log10
// entry 00686fd8  size 6  status ok
//======================================================================

// attributes: thunk
double __cdecl log10(double X)
{
  return __imp_log10(X);
}


//======================================================================
// memcpy
// entry 00686fde  size 6  status ok
//======================================================================

// attributes: thunk
void *__cdecl memcpy(void *a1, const void *Src, size_t Size)
{
  return __imp_memcpy(a1, Src, Size);
}


//======================================================================
// malloc
// entry 006872fa  size 6  status ok
//======================================================================

// attributes: thunk
void *__cdecl malloc(size_t Size)
{
  return __imp_malloc(Size);
}


//======================================================================
// free
// entry 00687300  size 6  status ok
//======================================================================

// attributes: thunk
void __cdecl free(void *Block)
{
  __imp_free(Block);
}


//======================================================================
// memcmp
// entry 00687306  size 6  status ok
//======================================================================

// attributes: thunk
int __cdecl memcmp(const void *Buf1, const void *Buf2, size_t Size)
{
  return __imp_memcmp(Buf1, Buf2, Size);
}


//======================================================================
// sin
// entry 0068730c  size 6  status ok
//======================================================================

// attributes: thunk
double __cdecl sin(double X)
{
  return __imp_sin(X);
}


//======================================================================
// cos
// entry 00687312  size 6  status ok
//======================================================================

// attributes: thunk
double __cdecl cos(double X)
{
  return __imp_cos(X);
}


//======================================================================
// memmove
// entry 00687318  size 6  status ok
//======================================================================

// attributes: thunk
void *__cdecl memmove(void *a1, const void *Src, size_t Size)
{
  return __imp_memmove(a1, Src, Size);
}


//======================================================================
// ??_V@YAXPAX@Z
// entry 0068731e  size 6  status ok
//======================================================================

// attributes: thunk
void __cdecl operator delete[](void *a1)
{
  __imp_??_V@YAXPAX@Z(a1);
}


//======================================================================
// exit
// entry 00687324  size 6  status ok
//======================================================================

// attributes: thunk
void __cdecl __noreturn exit(int Code)
{
  __imp_exit(Code);
}


//======================================================================
// fabs
// entry 0068732a  size 6  status ok
//======================================================================

// attributes: thunk
double __cdecl fabs(double X)
{
  return __imp_fabs(X);
}


//======================================================================
// fseek
// entry 00687330  size 6  status ok
//======================================================================

// attributes: thunk
int __cdecl fseek(FILE *Stream, int Offset, int Origin)
{
  return __imp_fseek(Stream, Offset, Origin);
}


//======================================================================
// ftell
// entry 00687336  size 6  status ok
//======================================================================

// attributes: thunk
int __cdecl ftell(FILE *Stream)
{
  return __imp_ftell(Stream);
}


//======================================================================
// calloc
// entry 0068738e  size 6  status ok
//======================================================================

// attributes: thunk
void *__cdecl calloc(size_t Count, size_t Size)
{
  return __imp_calloc(Count, Size);
}


//======================================================================
// _errno
// entry 00687394  size 6  status ok
//======================================================================

// attributes: thunk
int *__cdecl errno()
{
  return _errno();
}


//======================================================================
// realloc
// entry 0068744a  size 6  status ok
//======================================================================

// attributes: thunk
void *__cdecl realloc(void *Block, size_t Size)
{
  return __imp_realloc(Block, Size);
}


//======================================================================
// _ftol
// entry 00687450  size 6  status ok
//======================================================================

// attributes: thunk
int ftol()
{
  return _ftol();
}


//======================================================================
// memchr
// entry 006874c2  size 6  status ok
//======================================================================

// attributes: thunk
void *__cdecl memchr(const void *Buf, int Val, size_t MaxCount)
{
  return __imp_memchr(Buf, Val, MaxCount);
}


//======================================================================
// _unlock
// entry 006876ec  size 6  status ok
//======================================================================

// attributes: thunk
int unlock()
{
  return _unlock();
}


//======================================================================
// __dllonexit
// entry 006876f2  size 6  status ok
//======================================================================

// attributes: thunk
int _dllonexit()
{
  return __dllonexit();
}


//======================================================================
// _lock
// entry 006876f8  size 6  status ok
//======================================================================

// attributes: thunk
int lock()
{
  return _lock();
}


//======================================================================
// _amsg_exit
// entry 0068774a  size 6  status ok
//======================================================================

// attributes: thunk
int amsg_exit()
{
  return _amsg_exit();
}


//======================================================================
// sub_687750
// entry 00687750  size 36  status ok
//======================================================================

void *sub_687750()
{
  return &unk_6F2EBC;
}


//======================================================================
// sub_687774
// entry 00687774  size 36  status ok
//======================================================================

void __cdecl sub_687774()
{
  ;
}


//======================================================================
// _XcptFilter
// entry 00687798  size 6  status ok
//======================================================================

// attributes: thunk
int XcptFilter()
{
  return _XcptFilter();
}


//======================================================================
// _initterm
// entry 006878dc  size 6  status ok
//======================================================================

// attributes: thunk
void __cdecl initterm(_PVFV *First, _PVFV *Last)
{
  _initterm(First, Last);
}


//======================================================================
// _initterm_e
// entry 006878e2  size 6  status ok
//======================================================================

// attributes: thunk
int __cdecl initterm_e(_PIFV *First, _PIFV *Last)
{
  return _initterm_e(First, Last);
}


//======================================================================
// UserMathErrorFunction
// entry 00687911  size 3  status ok
//======================================================================

int __cdecl UserMathErrorFunction()
{
  return 0;
}


//======================================================================
// _except_handler4_common
// entry 006879a8  size 6  status ok
//======================================================================

// attributes: thunk
int except_handler4_common()
{
  return _except_handler4_common();
}


//======================================================================
// ?_type_info_dtor_internal_method@type_info@@QAEXXZ
// entry 006879ae  size 6  status ok
//======================================================================

// attributes: thunk
void __thiscall type_info::_type_info_dtor_internal_method(type_info *this)
{
  __imp_?_type_info_dtor_internal_method@type_info@@QAEXXZ(this);
}


//======================================================================
// _crt_debugger_hook
// entry 006879b4  size 6  status ok
//======================================================================

// attributes: thunk
int crt_debugger_hook()
{
  return _crt_debugger_hook();
}


//======================================================================
// _invoke_watson
// entry 006879ba  size 6  status ok
//======================================================================

// attributes: thunk
void __cdecl __noreturn invoke_watson(
        const wchar_t *Expression,
        const wchar_t *FunctionName,
        const wchar_t *FileName,
        unsigned int LineNo,
        uintptr_t Reserved)
{
  _invoke_watson(Expression, FunctionName, FileName, LineNo, Reserved);
}


//======================================================================
// _controlfp_s
// entry 006879c0  size 6  status ok
//======================================================================

// attributes: thunk
errno_t __cdecl controlfp_s(unsigned int *CurrentState, unsigned int NewValue, unsigned int Mask)
{
  return _controlfp_s(CurrentState, NewValue, Mask);
}


//======================================================================
// sub_6879D0
// entry 006879d0  size 2659  status ok
//======================================================================

int __cdecl sub_6879D0(_DWORD *a1, char a2)
{
  void *v2; // esp
  HANDLE CurrentProcess; // eax
  HANDLE v5; // eax
  int v6; // eax
  HANDLE v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  HANDLE v11; // eax
  int v12; // eax
  int v13; // eax
  HANDLE v14; // eax
  HANDLE CurrentThread; // [esp-2Ch] [ebp-1470h]
  DWORD v16; // [esp-1Ch] [ebp-1460h]
  LPCVOID v17; // [esp-1Ch] [ebp-1460h]
  struct _IMAGEHLP_SYMBOL *v18; // [esp-14h] [ebp-1458h]
  struct _IMAGEHLP_SYMBOL *v19; // [esp-14h] [ebp-1458h]
  unsigned int v20; // [esp-10h] [ebp-1454h]
  char v21; // [esp-10h] [ebp-1454h]
  char v22; // [esp-10h] [ebp-1454h]
  char v23; // [esp-10h] [ebp-1454h]
  const char *v24; // [esp+0h] [ebp-1444h]
  struct _tagSTACKFRAME StackFrame; // [esp+4h] [ebp-1440h] BYREF
  DWORD pdwDisplacement; // [esp+B0h] [ebp-1394h] BYREF
  char v27[1004]; // [esp+B4h] [ebp-1390h] BYREF
  int v28; // [esp+4A0h] [ebp-FA4h]
  char v29; // [esp+4A4h] [ebp-FA0h] BYREF
  int v30; // [esp+CC0h] [ebp-784h]
  _DWORD *v31; // [esp+CC4h] [ebp-780h]
  _DWORD *StackBase; // [esp+CC8h] [ebp-77Ch]
  char *v33; // [esp+CCCh] [ebp-778h]
  LPSTR v34; // [esp+CD0h] [ebp-774h]
  int v35; // [esp+CD4h] [ebp-770h]
  void *lp; // [esp+CD8h] [ebp-76Ch]
  PIMAGEHLP_SYMBOL Symbol; // [esp+CDCh] [ebp-768h]
  int i; // [esp+CE0h] [ebp-764h]
  CHAR v39[1004]; // [esp+CE4h] [ebp-760h] BYREF
  const char *v40; // [esp+10D0h] [ebp-374h]
  struct _MEMORY_BASIC_INFORMATION Buffer; // [esp+10D4h] [ebp-370h] BYREF
  char *v42; // [esp+10F0h] [ebp-354h]
  CHAR Filename[264]; // [esp+10F4h] [ebp-350h] BYREF
  int v44; // [esp+11FCh] [ebp-248h]
  char *Destination; // [esp+1200h] [ebp-244h]
  CHAR String1[264]; // [esp+1204h] [ebp-240h] BYREF
  LPCSTR lpString2; // [esp+130Ch] [ebp-138h]
  int v48; // [esp+1310h] [ebp-134h]
  _DWORD *v49; // [esp+1314h] [ebp-130h]
  HANDLE hFile; // [esp+1318h] [ebp-12Ch]
  CHAR Str[268]; // [esp+131Ch] [ebp-128h] BYREF
  unsigned int v52; // [esp+1428h] [ebp-1Ch]
  CPPEH_RECORD ms_exc; // [esp+142Ch] [ebp-18h]
  int savedregs; // [esp+1444h] [ebp+0h] BYREF

  v2 = alloca(5164);
  ms_exc.registration.ScopeTable = (PSCOPETABLE_ENTRY)((int)ms_exc.registration.ScopeTable ^ dword_781870);
  v52 = (unsigned int)&savedregs ^ dword_781870;
  v20 = (unsigned int)&savedregs ^ dword_781870;
  if ( dword_1631BB0 )
    return 0;
  dword_1631BB0 = 1;
  strcpy(String1, "Unknown");
  memset(&String1[8], 0, 0xFCu);
  if ( !GetModuleFileNameA(0, Filename, 0x104u) )
    Filename[0] = 0;
  lpString2 = (LPCSTR)sub_688B20(Filename);
  lstrcpyA(String1, lpString2);
  v42 = strrchr(String1, 46);
  if ( v42 )
    *v42 = 0;
  lstrcpyA((LPSTR)lpString2, "errorlog.txt");
  hFile = CreateFileA(Filename, 0x40000000u, 0, 0, 4u, 0x80000080, 0);
  if ( hFile == (HANDLE)-1 )
  {
    OutputDebugStringA("Error creating exception report");
    return 0;
  }
  else
  {
    SetFilePointer(hFile, 0, 0, 2u);
    sub_688440(hFile, "\r\n%s\r\n%s\r\n\r\n", (char)asc_781890);
    v49 = (_DWORD *)*a1;
    v44 = a1[1];
    Destination = (char *)dword_6E5214;
    if ( VirtualQuery(*(LPCVOID *)(v44 + 184), &Buffer, 0x1Cu)
      && GetModuleFileNameA((HMODULE)Buffer.AllocationBase, Str, 0x104u) )
    {
      Destination = (char *)sub_688B20(Str);
    }
    sub_688940(*v49);
    sub_688440(hFile, "%s caused %s in module %s at 0x%04x:0x%08x.\r\n", (char)String1);
    sub_688440(hFile, "Exception handler called in %s.\r\n", a2);
    sub_688820(hFile);
    if ( *v49 == -1073741819 && v49[4] >= 2u )
    {
      v40 = "Read from";
      if ( v49[5] )
        v40 = "Write to";
      wsprintfA(v39, "%s location 0x%08x caused an access violation.\r\n", v40, v49[6]);
      sub_688440(hFile, "%s", (char)v39);
    }
    sub_688440(hFile, "\r\n", v20);
    sub_688440(hFile, "Registers:\r\n", v21);
    sub_688440(hFile, "EAX=0x%08x CS=0x%04x EIP=%08x EFLGS=0x%08x\r\n", *(_DWORD *)(v44 + 176));
    sub_688440(hFile, "EBX=0x%08x SS=0x%04x ESP=0x%08x EBP=0x%08x\r\n", *(_DWORD *)(v44 + 164));
    sub_688440(hFile, "ECX=0x%08x DS=0x%04x ESI=0x%08x FS=0x%04x\r\n", *(_DWORD *)(v44 + 172));
    sub_688440(hFile, "EDX=0x%08x ES=0x%04x EDI=0x%08x GS=0x%04x\r\n\r\n", *(_DWORD *)(v44 + 168));
    sub_688440(hFile, "Bytes at CS:EIP:\r\n", v22);
    v48 = *(_DWORD *)(v44 + 184);
    for ( i = 0; i < 16; ++i )
    {
      ms_exc.registration.TryLevel = 0;
      sub_688440(hFile, "0x%02x ", *(_BYTE *)(i + v48));
      ms_exc.registration.TryLevel = -2;
    }
    sub_688440(hFile, "\r\n\r\nStack dump:\r\n", v23);
    ms_exc.registration.TryLevel = 1;
    v31 = *(_DWORD **)(v44 + 196);
    StackBase = NtCurrentTeb()->NtTib.StackBase;
    if ( StackBase > v31 + 2048 )
      StackBase = v31 + 2048;
    memset(v27, 0, 1000);
    v28 = 128;
    v33 = &v27[872];
    v34 = v27;
    v30 = 2048;
    Symbol = (PIMAGEHLP_SYMBOL)&v29;
    CurrentProcess = GetCurrentProcess();
    if ( SymInitialize(CurrentProcess, ".\\;..\\", 1) )
    {
      memset(&StackFrame, 0, sizeof(StackFrame));
      StackFrame.AddrPC.Offset = *(_DWORD *)(v44 + 184);
      StackFrame.AddrPC.Mode = AddrModeFlat;
      StackFrame.AddrFrame.Offset = *(_DWORD *)(v44 + 180);
      StackFrame.AddrFrame.Mode = AddrModeFlat;
      StackFrame.AddrStack.Offset = *(_DWORD *)(v44 + 196);
      StackFrame.AddrStack.Mode = AddrModeFlat;
      v18 = Symbol;
      v16 = *(_DWORD *)(v44 + 184);
      v5 = GetCurrentProcess();
      if ( SymGetSymFromAddr(v5, v16, &pdwDisplacement, v18) )
        v6 = wsprintfA(v34, "%s!%s+%d (0x%08x)\r\n", Destination, Symbol->Name, pdwDisplacement, *(_DWORD *)(v44 + 184));
      else
        v6 = wsprintfA(v34, "%s (0x%08x)\r\n", Destination, *(_DWORD *)(v44 + 184));
      v34 += v6;
      while ( v31 <= StackBase )
      {
        CurrentThread = GetCurrentThread();
        v7 = GetCurrentProcess();
        if ( !StackWalk(0x14Cu, v7, CurrentThread, &StackFrame, 0, 0, SymFunctionTableAccess, SymGetModuleBase, 0)
          || !StackFrame.AddrPC.Offset )
        {
          break;
        }
        lp = (void *)(StackFrame.AddrFrame.Offset + 4);
        if ( IsBadReadPtr((const void *)(StackFrame.AddrFrame.Offset + 4), 4u) || !lp || !*(_DWORD *)lp )
          lp = StackBase;
        v35 = 0;
        while ( v31 <= StackBase && v31 <= lp )
        {
          if ( !(v35 % 8) )
          {
            v8 = wsprintfA(v34, "0x%08x: ", v31);
            v34 += v8;
          }
          v24 = " ";
          if ( !(++v35 % 8) )
            v24 = "\r\n";
          v9 = wsprintfA(v34, "0x%08x%s", *v31, v24);
          v34 += v9;
          ++v31;
          if ( v34 > v33 )
          {
            sub_688440(hFile, "%s", (char)v27);
            v27[0] = 0;
            v34 = v27;
          }
        }
        if ( v35 % 8 )
        {
          v10 = wsprintfA(v34, "\r\n");
          v34 += v10;
        }
        if ( lp != StackBase )
        {
          if ( VirtualQuery(*(LPCVOID *)lp, &Buffer, 0x1Cu)
            && GetModuleFileNameA((HMODULE)Buffer.AllocationBase, Str, 0x104u) )
          {
            Destination = (char *)sub_688B20(Str);
          }
          else
          {
            strcpy(Destination, "Error - Unknown");
          }
          v19 = Symbol;
          v17 = *(LPCVOID *)lp;
          v11 = GetCurrentProcess();
          if ( SymGetSymFromAddr(v11, (DWORD)v17, &pdwDisplacement, v19) )
          {
            v12 = wsprintfA(v34, "%s!%s+%d (0x%08x)\r\n", Destination, Symbol->Name, pdwDisplacement, *(_DWORD *)lp);
            v34 += v12;
          }
          else
          {
            v13 = wsprintfA(v34, "%s (0x%08x)\r\n", Destination, *(_DWORD *)lp);
            v34 += v13;
          }
        }
      }
      sub_688440(hFile, "%s", (char)v27);
      v14 = GetCurrentProcess();
      SymCleanup(v14);
    }
    ms_exc.registration.TryLevel = -2;
    sub_6884B0(hFile);
    CloseHandle(hFile);
    return 0;
  }
}


//======================================================================
// sub_688440
// entry 00688440  size 104  status ok
//======================================================================

BOOL sub_688440(HANDLE hFile, LPCSTR a2, ...)
{
  DWORD v2; // eax
  CHAR String[2004]; // [esp+0h] [ebp-7E0h] BYREF
  DWORD NumberOfBytesWritten; // [esp+7D8h] [ebp-8h] BYREF
  va_list arglist; // [esp+7DCh] [ebp-4h]
  va_list va; // [esp+7F0h] [ebp+10h] BYREF

  va_start(va, a2);
  va_copy(arglist, va);
  wvsprintfA(String, a2, va);
  arglist = 0;
  v2 = lstrlenA(String);
  return WriteFile(hFile, String, v2, &NumberOfBytesWritten, 0);
}


//======================================================================
// sub_6884B0
// entry 006884b0  size 205  status ok
//======================================================================

unsigned int __cdecl sub_6884B0(HANDLE hFile)
{
  unsigned int result; // eax
  struct _MEMORY_BASIC_INFORMATION Buffer; // [esp+0h] [ebp-50h] BYREF
  HMODULE hModule; // [esp+1Ch] [ebp-34h]
  DWORD dwPageSize; // [esp+20h] [ebp-30h]
  unsigned int v5; // [esp+24h] [ebp-2Ch]
  struct _SYSTEM_INFO SystemInfo; // [esp+28h] [ebp-28h] BYREF
  DWORD v7; // [esp+4Ch] [ebp-4h]

  sub_688440(hFile, "\r\n\tModule list: names, addresses, sizes, time stamps and file times:\r\n");
  GetSystemInfo(&SystemInfo);
  dwPageSize = SystemInfo.dwPageSize;
  v7 = 4 * (0x40000000 / SystemInfo.dwPageSize);
  v5 = 0;
  hModule = 0;
  while ( 1 )
  {
    result = v5;
    if ( v5 >= v7 )
      break;
    if ( VirtualQuery((LPCVOID)(dwPageSize * v5), &Buffer, 0x1Cu) )
    {
      if ( Buffer.RegionSize )
      {
        v5 += Buffer.RegionSize / dwPageSize;
        if ( Buffer.State == 4096 && Buffer.AllocationBase > hModule )
        {
          hModule = (HMODULE)Buffer.AllocationBase;
          sub_688580(hFile, (HMODULE)Buffer.AllocationBase);
        }
      }
      else
      {
        v5 += 0x10000 / dwPageSize;
      }
    }
    else
    {
      v5 += 0x10000 / dwPageSize;
    }
  }
  return result;
}


//======================================================================
// sub_688580
// entry 00688580  size 496  status ok
//======================================================================

HMODULE __cdecl sub_688580(HANDLE a1, HMODULE hModule)
{
  HMODULE result; // eax
  int v3; // eax
  struct _FILETIME v4; // [esp-8h] [ebp-1C4h]
  struct _FILETIME LastWriteTime; // [esp+10h] [ebp-1ACh] BYREF
  HMODULE v6; // [esp+18h] [ebp-1A4h]
  DWORD FileSize; // [esp+1Ch] [ebp-1A0h]
  HANDLE hFile; // [esp+20h] [ebp-19Ch]
  CHAR String[108]; // [esp+24h] [ebp-198h] BYREF
  HMODULE v10; // [esp+90h] [ebp-12Ch]
  CHAR Filename[268]; // [esp+94h] [ebp-128h] BYREF
  CPPEH_RECORD ms_exc; // [esp+1A4h] [ebp-18h]

  ms_exc.registration.TryLevel = 0;
  result = (HMODULE)GetModuleFileNameA(hModule, Filename, 0x104u);
  if ( result )
  {
    v6 = hModule;
    result = hModule;
    if ( *(_WORD *)hModule == 23117 )
    {
      result = (HMODULE)((char *)v6 + *((_DWORD *)v6 + 15));
      v10 = result;
      if ( *(_DWORD *)result == 17744 )
      {
        hFile = CreateFileA(Filename, 0x80000000, 1u, 0, 3u, 0x80u, 0);
        memset(String, 0, 100);
        FileSize = 0;
        if ( hFile != (HANDLE)-1 )
        {
          FileSize = GetFileSize(hFile, 0);
          if ( GetFileTime(hFile, 0, 0, &LastWriteTime) )
          {
            wsprintfA(String, " - file date is ");
            v4 = LastWriteTime;
            v3 = lstrlenA(String);
            sub_688770(&String[v3], v4);
          }
          CloseHandle(hFile);
        }
        return (HMODULE)sub_688440(
                          a1,
                          "%s, loaded at 0x%08x - %d bytes - %08x%s\r\n",
                          Filename,
                          hModule,
                          FileSize,
                          *((_DWORD *)v10 + 2),
                          String);
      }
      else
      {
        ms_exc.registration.TryLevel = -2;
      }
    }
    else
    {
      ms_exc.registration.TryLevel = -2;
    }
  }
  return result;
}


//======================================================================
// sub_688770
// entry 00688770  size 171  status ok
//======================================================================

int __cdecl sub_688770(LPSTR a1, FILETIME FileTime)
{
  int result; // eax
  WORD FatDate; // [esp+0h] [ebp-8h] BYREF
  WORD FatTime; // [esp+4h] [ebp-4h] BYREF

  result = FileTimeToLocalFileTime(&FileTime, &FileTime);
  if ( result )
  {
    result = FileTimeToDosDateTime(&FileTime, &FatDate, &FatTime);
    if ( result )
      return wsprintfA(
               a1,
               "%d/%d/%d %02d:%02d:%02d",
               (FatDate / 32) & 0xF,
               FatDate & 0x1F,
               FatDate / 512 + 1980,
               FatTime / 2048,
               (FatTime / 32) & 0x3F,
               2 * (FatTime & 0x1F));
  }
  *a1 = 0;
  return result;
}


//======================================================================
// sub_688820
// entry 00688820  size 288  status ok
//======================================================================

BOOL __cdecl sub_688820(HANDLE hFile)
{
  CHAR String1[200]; // [esp+0h] [ebp-290h] BYREF
  struct _FILETIME SystemTimeAsFileTime; // [esp+C8h] [ebp-1C8h] BYREF
  struct _MEMORYSTATUS Buffer; // [esp+D0h] [ebp-1C0h] BYREF
  CHAR Filename[264]; // [esp+F0h] [ebp-1A0h] BYREF
  CHAR v6[108]; // [esp+1F8h] [ebp-98h] BYREF
  int v7; // [esp+268h] [ebp-28h]
  struct _SYSTEM_INFO SystemInfo; // [esp+26Ch] [ebp-24h] BYREF

  GetSystemTimeAsFileTime(&SystemTimeAsFileTime);
  sub_688770(v6, SystemTimeAsFileTime);
  sub_688440(hFile, "Error occurred at %s.\r\n", v6);
  if ( !GetModuleFileNameA(0, Filename, 0x104u) )
    lstrcpyA(Filename, dword_6E5214);
  v7 = 200;
  lstrcpyA(String1, dword_6E5214);
  sub_688440(hFile, "%s, run by %s.\r\n", Filename, String1);
  GetSystemInfo(&SystemInfo);
  sub_688440(hFile, "%d processor(s), type %d.\r\n", SystemInfo.dwNumberOfProcessors, SystemInfo.dwProcessorType);
  Buffer.dwLength = 32;
  GlobalMemoryStatus(&Buffer);
  return sub_688440(hFile, "%d MBytes physical memory.\r\n", (Buffer.dwTotalPhys + 0xFFFFF) >> 20);
}


//======================================================================
// sub_688940
// entry 00688940  size 473  status ok
//======================================================================

const char *__cdecl sub_688940(int a1)
{
  unsigned int i; // [esp+0h] [ebp-C4h]
  int v3; // [esp+4h] [ebp-C0h]
  _DWORD v4[47]; // [esp+8h] [ebp-BCh]

  v3 = 1073807365;
  v4[0] = "a Control-C";
  v4[1] = 1073807368;
  v4[2] = "a Control-Break";
  v4[3] = -2147483646;
  v4[4] = "a Datatype Misalignment";
  v4[5] = -2147483645;
  v4[6] = "a Breakpoint";
  v4[7] = -1073741819;
  v4[8] = "an Access Violation";
  v4[9] = -1073741818;
  v4[10] = "an In Page Error";
  v4[11] = -1073741801;
  v4[12] = "a No Memory";
  v4[13] = -1073741795;
  v4[14] = "an Illegal Instruction";
  v4[15] = -1073741787;
  v4[16] = "a Noncontinuable Exception";
  v4[17] = -1073741786;
  v4[18] = "an Invalid Disposition";
  v4[19] = -1073741684;
  v4[20] = "a Array Bounds Exceeded";
  v4[21] = -1073741683;
  v4[22] = "a Float Denormal Operand";
  v4[23] = -1073741682;
  v4[24] = "a Float Divide by Zero";
  v4[25] = -1073741681;
  v4[26] = "a Float Inexact Result";
  v4[27] = -1073741680;
  v4[28] = "a Float Invalid Operation";
  v4[29] = -1073741679;
  v4[30] = "a Float Overflow";
  v4[31] = -1073741678;
  v4[32] = "a Float Stack Check";
  v4[33] = -1073741677;
  v4[34] = "a Float Underflow";
  v4[35] = -1073741676;
  v4[36] = "an Integer Divide by Zero";
  v4[37] = -1073741675;
  v4[38] = "an Integer Overflow";
  v4[39] = -1073741674;
  v4[40] = "a Privileged Instruction";
  v4[41] = -1073741571;
  v4[42] = "a Stack Overflow";
  v4[43] = -1073741502;
  v4[44] = "a DLL Initialization Failed";
  v4[45] = -529697949;
  v4[46] = "a Microsoft C++ Exception";
  for ( i = 0; i < 0x18; ++i )
  {
    if ( a1 == v4[2 * i - 1] )
      return (const char *)v4[2 * i];
  }
  return "Unknown exception type";
}


//======================================================================
// sub_688B20
// entry 00688b20  size 52  status ok
//======================================================================

char *__cdecl sub_688B20(char *Str)
{
  char *v2; // [esp+0h] [ebp-4h]

  v2 = strrchr(Str, 92);
  if ( v2 )
    return v2 + 1;
  else
    return Str;
}


//======================================================================
// sub_688B60
// entry 00688b60  size 313  status ok
//======================================================================

int __thiscall sub_688B60(int this, int a2, int a3, char a4)
{
  _DWORD *v5; // [esp+4h] [ebp-1Ch]
  _DWORD *v7; // [esp+Ch] [ebp-14h]

  sub_6077F0((_BYTE *)this);
  *(_DWORD *)this = &ResourceIniFile::`vftable';
  *(_DWORD *)(this + 520) = 0;
  *(_DWORD *)(this + 524) = 0;
  *(_DWORD *)(this + 528) = 0;
  v7 = operator new(0x160u);
  if ( v7 )
    v5 = sub_61DC00(v7, 541675081, a2, a3, 1u);
  else
    v5 = 0;
  *(_DWORD *)(this + 520) = v5;
  if ( *(_DWORD *)(this + 520) || !a4 )
  {
    if ( *(_DWORD *)(this + 520) )
      *(_DWORD *)(this + 524) = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 520) + 4))(*(_DWORD *)(this + 520));
  }
  else if ( !*(_DWORD *)(this + 520) )
  {
    sub_5E9F20("m_poResource", "..\\scilib\\platform\\resourceinifile.cpp", 14);
  }
  return this;
}


//======================================================================
// sub_688CA0
// entry 00688ca0  size 148  status ok
//======================================================================

int __thiscall sub_688CA0(void (__thiscall ****this)(_DWORD, int))
{
  *this = (void (__thiscall ***)(_DWORD, int))&ResourceIniFile::`vftable';
  if ( *(this + 130) )
    (***(this + 130))(*(this + 130), 1);
  return CExpandoObject::~CExpandoObject(this);
}


//======================================================================
// sub_688D40
// entry 00688d40  size 69  status ok
//======================================================================

char __thiscall sub_688D40(int this, char *String1)
{
  if ( stricmp(String1, (const char *)(this + 263)) )
    *(_DWORD *)(this + 528) = 0;
  return sub_607890((char *)this, (char *)&Source, String1);
}


//======================================================================
// sub_688D90
// entry 00688d90  size 73  status ok
//======================================================================

bool __thiscall sub_688D90(_DWORD *this)
{
  return *(this + 130) && (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 130) + 4))(*(this + 130));
}


//======================================================================
// sub_688DE0
// entry 00688de0  size 244  status ok
//======================================================================

int __fastcall sub_688DE0(int a1, int a2, _BYTE *a3, char *Str, char *a5, int a6)
{
  int result; // eax
  size_t Size; // [esp+0h] [ebp-8h]

  result = a1;
  if ( *(_BYTE *)(a1 + 263) )
  {
    if ( a3 )
    {
      result = (char)*a3;
      if ( *a3 )
      {
        if ( a5 )
        {
          if ( a6 )
          {
            if ( !(*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 520) + 4))(*(_DWORD *)(a1 + 520))
              || !(unsigned __int8)sub_688F10((char *)(a1 + 263), 0)
              || (result = (unsigned __int8)sub_6892B0((int)a3, a5, a6), !(_BYTE)result) )
            {
              if ( Str )
              {
                if ( strlen(Str) + 1 >= a6 - 1 )
                {
                  result = (int)memmove(a5, Str, a6 - 1);
                }
                else
                {
                  Size = strlen(Str) + 1;
                  result = (int)memmove(a5, Str, Size);
                }
                a5[a6 - 1] = 0;
              }
              else
              {
                *a5 = 0;
                return (int)a5;
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
// sub_688EE0
// entry 00688ee0  size 37  status ok
//======================================================================

char __stdcall sub_688EE0(int a1, int a2)
{
  return sub_5E9F20("false", "..\\scilib\\platform\\resourceinifile.cpp", 58);
}


//======================================================================
// sub_688F10
// entry 00688f10  size 922  status ok
//======================================================================

char __thiscall sub_688F10(int this, char *String2, FILE *Stream)
{
  int v4; // esi
  size_t v5; // eax
  size_t v6; // eax
  int v7; // esi
  char *v9; // [esp+8h] [ebp-250h]
  unsigned int v10; // [esp+Ch] [ebp-24Ch]
  int v11; // [esp+10h] [ebp-248h]
  char *v12; // [esp+14h] [ebp-244h]
  char Str[264]; // [esp+18h] [ebp-240h] BYREF
  char v14[20]; // [esp+120h] [ebp-138h] BYREF
  char Buffer[20]; // [esp+134h] [ebp-124h] BYREF
  char v16[268]; // [esp+148h] [ebp-110h] BYREF

  if ( *(_DWORD *)(this + 528) )
  {
    *(_DWORD *)(this + 524) = *(_DWORD *)(this + 528);
    return 1;
  }
  else
  {
    memset(Str, 0, 0x105u);
    memset(v16, 0, 0x105u);
    sprintf(Buffer, "%%[^\n\r]", 260);
    sprintf(v14, "%%[\n\r]", 260);
    if ( String2 && *String2 )
    {
      *(_DWORD *)(this + 524) = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 520) + 4))(*(_DWORD *)(this + 520));
      do
      {
        Str[0] = 0;
        v12 = Str;
        v4 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 520) + 4))(*(_DWORD *)(this + 520));
        v10 = CFrameWndEx::GetPaneMenuEntryID(*(CFrameWndEx **)(this + 520)) + v4;
        while ( **(_BYTE **)(this + 524) != 10 && **(_BYTE **)(this + 524) != 13 && *(_DWORD *)(this + 524) < v10 )
          *v12++ = *(_BYTE *)(*(_DWORD *)(this + 524))++;
        *v12 = 0;
        v11 = v12 - Str;
        if ( v12 == Str || v11 == -1 )
          return 0;
        if ( Stream )
        {
          v5 = strlen(Str);
          fwrite(Str, 1u, v5, Stream);
        }
        v16[0] = 0;
        while ( **(_BYTE **)(this + 524) == 10 || **(_BYTE **)(this + 524) == 13 && *(_DWORD *)(this + 524) < v10 )
          ++*(_DWORD *)(this + 524);
        if ( Stream && v11 )
        {
          v6 = strlen(v16);
          fwrite(v16, 1u, v6, Stream);
        }
        sub_6896C0(Str);
        if ( Str[0] == 91 )
        {
          v9 = strchr(&Str[1], 93);
          if ( v9 )
          {
            *v9 = 0;
            if ( !stricmp(&Str[1], String2) )
            {
              *(_DWORD *)(this + 528) = *(_DWORD *)(this + 524);
              return 1;
            }
          }
        }
        v7 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 520) + 4))(*(_DWORD *)(this + 520));
      }
      while ( *(_DWORD *)(this + 524) < CFrameWndEx::GetPaneMenuEntryID(*(CFrameWndEx **)(this + 520)) + v7 );
      return 0;
    }
    else
    {
      return 0;
    }
  }
}


//======================================================================
// sub_6892B0
// entry 006892b0  size 991  status ok
//======================================================================

char __thiscall sub_6892B0(int this, _BYTE *a2, char *a3, int a4)
{
  int v5; // esi
  int v6; // esi
  int v7; // esi
  size_t Size; // [esp+4h] [ebp-264h]
  unsigned int v10; // [esp+Ch] [ebp-25Ch]
  char *i; // [esp+14h] [ebp-254h]
  char *v12; // [esp+14h] [ebp-254h]
  _BYTE *j; // [esp+18h] [ebp-250h]
  char *v14; // [esp+1Ch] [ebp-24Ch]
  char Str[264]; // [esp+20h] [ebp-248h] BYREF
  char v16[20]; // [esp+128h] [ebp-140h] BYREF
  char Buffer[288]; // [esp+13Ch] [ebp-12Ch] BYREF
  char *v18; // [esp+260h] [ebp-8h]
  char *v19; // [esp+264h] [ebp-4h]

  sprintf(Buffer, "%%[^\n\r]", 260);
  sprintf(v16, "%%[\n\r]", 260);
  memset(Str, 0, 0x105u);
  if ( !a2 || !*a2 || !a3 || !a4 )
    return 0;
  while ( 1 )
  {
    Str[0] = 0;
    v14 = Str;
    v5 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 520) + 4))(*(_DWORD *)(this + 520));
    v10 = CFrameWndEx::GetPaneMenuEntryID(*(CFrameWndEx **)(this + 520)) + v5;
    while ( **(_BYTE **)(this + 524) != 10 && **(_BYTE **)(this + 524) != 13 && *(_DWORD *)(this + 524) < v10 )
      *v14++ = *(_BYTE *)(*(_DWORD *)(this + 524))++;
    *v14 = 0;
    if ( v14 == Str || v14 - Str == -1 )
      return 0;
    Buffer[20] = 0;
    while ( **(_BYTE **)(this + 524) == 10 || **(_BYTE **)(this + 524) == 13 && *(_DWORD *)(this + 524) < v10 )
      ++*(_DWORD *)(this + 524);
    sub_6896C0(Str);
    if ( Str[0] != 59 )
    {
      if ( Str[0] == 91 )
        return 0;
      v18 = strchr(Str, 61);
      if ( v18 )
      {
        *v18 = 0;
        v19 = v18 + 1;
        for ( i = v18 - 1; *i == 32; --i )
          *i = 0;
        v12 = Str;
        for ( j = a2; *j; ++j )
        {
          if ( !*v12 )
            break;
          v6 = toupper((char)*j);
          if ( v6 != toupper(*v12) )
            break;
          ++v12;
        }
        if ( !*j && !*v12 )
          break;
      }
    }
    v7 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 520) + 4))(*(_DWORD *)(this + 520));
    if ( *(_DWORD *)(this + 524) >= CFrameWndEx::GetPaneMenuEntryID(*(CFrameWndEx **)(this + 520)) + v7 )
      return 0;
  }
  sub_6896C0(v19);
  if ( strlen(v19) + 1 >= a4 - 1 )
  {
    memmove(a3, v19, a4 - 1);
  }
  else
  {
    Size = strlen(v19) + 1;
    memmove(a3, v19, Size);
  }
  a3[a4 - 1] = 0;
  return 1;
}


//======================================================================
// sub_6896C0
// entry 006896c0  size 96  status ok
//======================================================================

char __stdcall sub_6896C0(char *a1)
{
  size_t v2; // eax
  char *Str; // [esp+4h] [ebp-4h]

  if ( !a1 )
    return 0;
  for ( Str = a1; *Str == 32; ++Str )
    ;
  if ( Str != a1 )
  {
    v2 = strlen(Str);
    memmove(a1, Str, v2 + 1);
  }
  return 1;
}


//======================================================================
// sub_689750
// entry 00689750  size 334  status ok
//======================================================================

_DWORD *__thiscall sub_689750(_DWORD *this)
{
  signed int uJoyID; // [esp+18h] [ebp-14h]

  sub_624E80(this);
  *this = &Application::`vftable';
  CoInitialize(0);
  dword_1631BB4 = joyGetNumDevs();
  dword_1631BB8 = (int)operator new(16 * dword_1631BB4);
  dword_1631BBC = (int)operator new(16 * dword_1631BB4);
  dword_1631BC0 = (int)operator new(dword_1631BB4);
  for ( uJoyID = 0; uJoyID < (int)dword_1631BB4; ++uJoyID )
  {
    joyGetPos(uJoyID, (LPJOYINFO)(dword_1631BB8 + 16 * uJoyID));
    if ( joyGetPos(uJoyID, (LPJOYINFO)(dword_1631BBC + 16 * uJoyID)) )
      *(_BYTE *)(uJoyID + dword_1631BC0) = 0;
    else
      *(_BYTE *)(uJoyID + dword_1631BC0) = 1;
  }
  return this;
}


//======================================================================
// sub_6898A0
// entry 006898a0  size 98  status ok
//======================================================================

int __thiscall sub_6898A0(_DWORD *this)
{
  *this = &Application::`vftable';
  CoUninitialize();
  operator delete[]((void *)dword_1631BB8);
  operator delete[]((void *)dword_1631BBC);
  operator delete[]((void *)dword_1631BC0);
  return CExpandoObject::~CExpandoObject(this);
}


//======================================================================
// sub_689910
// entry 00689910  size 19  status ok
//======================================================================

int __thiscall sub_689910(_DWORD *this)
{
  return sub_624F10(this);
}


//======================================================================
// sub_689930
// entry 00689930  size 330  status ok
//======================================================================

int __thiscall sub_689930(_DWORD *this)
{
  int v2; // [esp+4h] [ebp-138h]
  int v3; // [esp+8h] [ebp-134h]
  void *v5; // [esp+10h] [ebp-12Ch]
  void *v6; // [esp+18h] [ebp-124h]
  char Destination[268]; // [esp+20h] [ebp-11Ch] BYREF
  int v8; // [esp+138h] [ebp-4h]

  strcpy(Destination, &Source);
  strcat(Destination, byte_79542C);
  v6 = operator new(0x21Cu);
  v8 = 0;
  if ( v6 )
    v3 = sub_689F80(Destination, "Settings");
  else
    v3 = 0;
  v8 = -1;
  *(this + 5) = v3;
  sub_625080();
  v5 = operator new(8u);
  v8 = 1;
  if ( v5 )
    v2 = sub_689DB0(v5);
  else
    v2 = 0;
  *(this + 3) = v2;
  return v2;
}


//======================================================================
// sub_689A80
// entry 00689a80  size 162  status ok
//======================================================================

int __thiscall sub_689A80(void (__thiscall ****this)(_DWORD, _DWORD))
{
  if ( *(this + 2) )
    (***(this + 2))(*(this + 2), 1);
  if ( *(this + 3) )
    (***(this + 3))(*(this + 3), 1);
  if ( *(this + 5) )
    (***(this + 5))(*(this + 5), 1);
  return sub_625100((int)this);
}


//======================================================================
// sub_689B30
// entry 00689b30  size 99  status ok
//======================================================================

void sub_689B30()
{
  struct tagMSG Msg; // [esp+4h] [ebp-1Ch] BYREF

  if ( !byte_7960CC )
  {
    sub_6251A0();
    while ( PeekMessageA(&Msg, 0, 0, 0, 1u) )
    {
      TranslateMessage(&Msg);
      DispatchMessageA(&Msg);
    }
    if ( !byte_15E55D3 )
      sub_5E9F00(0xFu);
  }
}


//======================================================================
// sub_689BA0
// entry 00689ba0  size 80  status ok
//======================================================================

int sub_689BA0()
{
  signed int i; // [esp+4h] [ebp-8h]
  int v2; // [esp+8h] [ebp-4h]

  v2 = 0;
  for ( i = 0; i < (int)dword_1631BB4; ++i )
  {
    if ( *(_BYTE *)(i + dword_1631BC0) == 1 )
      ++v2;
  }
  return v2;
}


//======================================================================
// sub_689BF0
// entry 00689bf0  size 120  status ok
//======================================================================

int sub_689BF0()
{
  if ( operator new(0xC4u) )
    return Concurrency::overwrite_buffer<enum Concurrency::agent_status>::overwrite_buffer<enum Concurrency::agent_status>();
  else
    return 0;
}


//======================================================================
// sub_689C70
// entry 00689c70  size 117  status ok
//======================================================================

int sub_689C70()
{
  void *v2; // [esp+Ch] [ebp-14h]

  v2 = operator new(0x4Cu);
  if ( v2 )
    return sub_68FB30(v2);
  else
    return 0;
}


//======================================================================
// sub_689CF0
// entry 00689cf0  size 130  status ok
//======================================================================

int __stdcall sub_689CF0(char *Source, char *a2)
{
  if ( operator new(0x21Cu) )
    return sub_689F80(Source, a2);
  else
    return 0;
}


//======================================================================
// sub_689DB0
// entry 00689db0  size 53  status ok
//======================================================================

_DWORD *__thiscall sub_689DB0(_DWORD *this)
{
  sub_62AEA0(this);
  *this = &VTimer::`vftable';
  *this = &Timer::`vftable';
  timeGetDevCaps((LPTIMECAPS)&uPeriod, 8u);
  return this;
}


//======================================================================
// sub_689E10
// entry 00689e10  size 36  status ok
//======================================================================

unsigned int __thiscall sub_689E10(void *this)
{
  return 3 * (*(int (__thiscall **)(void *, void *))(*(_DWORD *)this + 8))(this, this) / 0x32u;
}


//======================================================================
// sub_689E40
// entry 00689e40  size 50  status ok
//======================================================================

DWORD sub_689E40()
{
  DWORD Time; // [esp+4h] [ebp-4h]

  timeBeginPeriod(uPeriod);
  Time = timeGetTime();
  timeEndPeriod(uPeriod);
  return Time;
}


//======================================================================
// sub_689EE0
// entry 00689ee0  size 150  status ok
//======================================================================

int __thiscall sub_689EE0(int this)
{
  char v3; // [esp+11h] [ebp-2Bh] BYREF
  char v4; // [esp+12h] [ebp-2Ah] BYREF
  char v5; // [esp+13h] [ebp-29h] BYREF
  char *v6; // [esp+14h] [ebp-28h]
  char *v7; // [esp+1Ch] [ebp-20h]
  char *v8; // [esp+24h] [ebp-18h]
  int v9; // [esp+38h] [ebp-4h]

  sub_6077F0((_BYTE *)this);
  v9 = 0;
  *(_DWORD *)this = &IniFile::`vftable';
  v8 = &v3;
  v7 = &v4;
  v6 = &v5;
  sub_68D000(this + 528);
  *(_DWORD *)(this + 520) = 0;
  *(_BYTE *)(this + 524) = 0;
  return this;
}


//======================================================================
// sub_689F80
// entry 00689f80  size 331  status ok
//======================================================================

int __thiscall sub_689F80(int this, char *Source, char *a3)
{
  char v5; // [esp+11h] [ebp-53Bh] BYREF
  char v6; // [esp+12h] [ebp-53Ah] BYREF
  char v7; // [esp+13h] [ebp-539h] BYREF
  char *v8; // [esp+14h] [ebp-538h]
  char *v9; // [esp+1Ch] [ebp-530h]
  char *v10; // [esp+24h] [ebp-528h]
  char Destination[264]; // [esp+30h] [ebp-51Ch] BYREF
  char Str[1028]; // [esp+138h] [ebp-414h] BYREF
  int v13; // [esp+548h] [ebp-4h]

  sub_607820((char *)this, Source, a3);
  v13 = 0;
  *(_DWORD *)this = &IniFile::`vftable';
  v10 = &v5;
  v9 = &v6;
  v8 = &v7;
  sub_68D000(this + 528);
  LOBYTE(v13) = 1;
  strcpy(Destination, (const char *)(this + 8));
  sub_5EA5B0(Destination);
  memset(Str, 0, 1024);
  strcat(Str, Destination);
  *(_DWORD *)(this + 520) = sub_5EA9C0(Str, "rb");
  *(_BYTE *)(this + 524) = 0;
  return this;
}


//======================================================================
// sub_68A0D0
// entry 0068a0d0  size 137  status ok
//======================================================================

int __thiscall sub_68A0D0(FILE **this)
{
  *this = (FILE *)&IniFile::`vftable';
  if ( *(this + 130) )
    fclose(*(this + 130));
  sub_68C410(this + 132);
  return CExpandoObject::~CExpandoObject(this);
}


//======================================================================
// sub_68A160
// entry 0068a160  size 269  status ok
//======================================================================

bool __thiscall sub_68A160(int this, char *Source, char *a3)
{
  char Destination[264]; // [esp+4h] [ebp-510h] BYREF
  char Str[1028]; // [esp+10Ch] [ebp-408h] BYREF

  sub_607890((char *)this, Source, a3);
  if ( *(_DWORD *)(this + 520) )
  {
    fclose(*(FILE **)(this + 520));
    *(_DWORD *)(this + 520) = 0;
  }
  strcpy(Destination, (const char *)(this + 8));
  sub_5EA5B0(Destination);
  memset(Str, 0, 1024);
  strcat(Str, Destination);
  *(_DWORD *)(this + 520) = sub_5EA9C0(Str, "rb");
  *(_BYTE *)(this + 524) = 0;
  return *(_DWORD *)(this + 520) != 0;
}


//======================================================================
// sub_68A270
// entry 0068a270  size 227  status ok
//======================================================================

int __fastcall sub_68A270(int a1, int a2, _BYTE *a3, char *Str, char *a5, int a6)
{
  int result; // eax
  size_t Size; // [esp+0h] [ebp-8h]

  result = a1;
  if ( *(_BYTE *)(a1 + 263) )
  {
    if ( a3 )
    {
      result = (char)*a3;
      if ( *a3 )
      {
        if ( a5 )
        {
          if ( a6 )
          {
            if ( !*(_DWORD *)(a1 + 520)
              || (result = (unsigned __int8)sub_68A710((char *)(a1 + 263), 0), !(_BYTE)result)
              || (result = sub_68A940((int)a3, a5, a6), !(_BYTE)result) )
            {
              if ( Str )
              {
                if ( strlen(Str) + 1 >= a6 - 1 )
                {
                  result = (int)memmove(a5, Str, a6 - 1);
                }
                else
                {
                  Size = strlen(Str) + 1;
                  result = (int)memmove(a5, Str, Size);
                }
                a5[a6 - 1] = 0;
              }
              else
              {
                *a5 = 0;
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
// sub_68A360
// entry 0068a360  size 935  status ok
//======================================================================

int __fastcall sub_68A360(int a1, int a2, char *a3, char *a4)
{
  int result; // eax
  size_t v5; // eax
  size_t v6; // eax
  size_t v7; // eax
  char OldFilename[266]; // [esp+10Ch] [ebp-620h] BYREF
  bool v10; // [esp+216h] [ebp-516h]
  char Buffer; // [esp+217h] [ebp-515h] BYREF
  FILE *Stream; // [esp+218h] [ebp-514h]
  char Destination[264]; // [esp+21Ch] [ebp-510h] BYREF
  char Source[1028]; // [esp+324h] [ebp-408h] BYREF

  Stream = 0;
  result = a1;
  if ( *(_BYTE *)(a1 + 263) )
  {
    if ( a3 )
    {
      result = *a3;
      if ( *a3 )
      {
        if ( a4 )
        {
          if ( *(_BYTE *)(a1 + 524) )
          {
            return sub_68B050(a3, a4);
          }
          else
          {
            strcpy(Destination, (const char *)(a1 + 8));
            sub_5EA5B0(Destination);
            memset(Source, 0, 1024);
            strcat(Source, Destination);
            if ( *(_DWORD *)(a1 + 520)
              || (result = (int)sub_5EA9C0(Source, "wb"), (*(_DWORD *)(a1 + 520) = result) != 0)
              && (fclose(*(FILE **)(a1 + 520)),
                  result = (int)sub_5EA9C0(Source, "rb"),
                  (*(_DWORD *)(a1 + 520) = result) != 0) )
            {
              strcpy(OldFilename, Source);
              strcat(OldFilename, ".tmp");
              result = (int)sub_5EA9C0(OldFilename, "wb");
              Stream = (FILE *)result;
              if ( !result )
                goto LABEL_21;
              if ( !(unsigned __int8)sub_68A710((char *)(a1 + 263), Stream) )
              {
                fwrite(&unk_6E5634, 1u, 1u, Stream);
                v5 = strlen((const char *)(a1 + 263));
                fwrite((const void *)(a1 + 263), 1u, v5, Stream);
                fwrite(&unk_6E5630, 1u, 1u, Stream);
                v6 = strlen("\r\n");
                fwrite("\r\n", 1u, v6, Stream);
              }
              result = sub_68AC10(a3, a4, Stream);
              if ( (_BYTE)result )
              {
                v10 = 0;
                while ( !v10 )
                {
                  v7 = fread(&Buffer, 1u, 1u, *(FILE **)(a1 + 520));
                  v10 = v7 == 0;
                  if ( v7 )
                    fwrite(&Buffer, 1u, 1u, Stream);
                }
                fclose(Stream);
                fclose(*(FILE **)(a1 + 520));
                remove(Source);
                rename(OldFilename, Source);
                result = (int)sub_5EA9C0(Source, "rb");
                *(_DWORD *)(a1 + 520) = result;
              }
              else
              {
LABEL_21:
                if ( Stream )
                {
                  fclose(Stream);
                  return remove(OldFilename);
                }
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
// sub_68A710
// entry 0068a710  size 549  status ok
//======================================================================

char __thiscall sub_68A710(FILE **this, char *String2, FILE *Stream)
{
  size_t v4; // eax
  size_t v5; // eax
  char *v7; // [esp+4h] [ebp-248h]
  int v8; // [esp+8h] [ebp-244h]
  int v9; // [esp+8h] [ebp-244h]
  char Str[264]; // [esp+Ch] [ebp-240h] BYREF
  char Format[20]; // [esp+114h] [ebp-138h] BYREF
  char Buffer[20]; // [esp+128h] [ebp-124h] BYREF
  char v13[268]; // [esp+13Ch] [ebp-110h] BYREF

  memset(Str, 0, 0x105u);
  memset(v13, 0, 0x105u);
  sprintf(Buffer, "%%%i[^\n\r]", 260);
  sprintf(Format, "%%%i[\n\r]", 260);
  if ( !String2 || !*String2 )
    return 0;
  fseek(*(this + 130), 0, 0);
  do
  {
    v8 = fscanf(*(this + 130), Buffer, Str);
    if ( !v8 || v8 == -1 )
      return 0;
    if ( Stream )
    {
      v4 = strlen(Str);
      fwrite(Str, 1u, v4, Stream);
    }
    v9 = fscanf(*(this + 130), Format, v13);
    if ( Stream && v9 && v9 != -1 )
    {
      v5 = strlen(v13);
      fwrite(v13, 1u, v5, Stream);
    }
    sub_68AFC0(Str);
    if ( Str[0] == 91 )
    {
      v7 = strchr(&Str[1], 93);
      if ( v7 )
      {
        *v7 = 0;
        if ( !stricmp(&Str[1], String2) )
          return 1;
      }
    }
  }
  while ( !feof(*(this + 130)) );
  return 0;
}


//======================================================================
// sub_68A940
// entry 0068a940  size 712  status ok
//======================================================================

char __thiscall sub_68A940(FILE *const *this, _BYTE *a2, char *a3, int a4)
{
  int v5; // esi
  size_t Size; // [esp+4h] [ebp-25Ch]
  int v8; // [esp+Ch] [ebp-254h]
  char *i; // [esp+10h] [ebp-250h]
  char *v10; // [esp+10h] [ebp-250h]
  _BYTE *j; // [esp+14h] [ebp-24Ch]
  char Str[264]; // [esp+18h] [ebp-248h] BYREF
  char Format[20]; // [esp+120h] [ebp-140h] BYREF
  char Buffer[288]; // [esp+134h] [ebp-12Ch] BYREF
  char *v15; // [esp+258h] [ebp-8h]
  char *v16; // [esp+25Ch] [ebp-4h]

  sprintf(Buffer, "%%%i[^\n\r]", 260);
  sprintf(Format, "%%%i[\n\r]", 260);
  memset(Str, 0, 0x105u);
  if ( !a2 || !*a2 || !a3 || !a4 )
    return 0;
  while ( 1 )
  {
    v8 = fscanf(*(this + 130), Buffer, Str);
    if ( !v8 || v8 == -1 )
      return 0;
    fscanf(*(this + 130), Format, &Buffer[20]);
    sub_68AFC0(Str);
    if ( Str[0] != 59 )
    {
      if ( Str[0] == 91 )
        return 0;
      v15 = strchr(Str, 61);
      if ( v15 )
      {
        *v15 = 0;
        v16 = v15 + 1;
        for ( i = v15 - 1; *i == 32; --i )
          *i = 0;
        v10 = Str;
        for ( j = a2; *j; ++j )
        {
          if ( !*v10 )
            break;
          v5 = toupper((char)*j);
          if ( v5 != toupper(*v10) )
            break;
          ++v10;
        }
        if ( !*j && !*v10 )
          break;
      }
    }
    if ( feof(*(this + 130)) )
      return 0;
  }
  sub_68AFC0(v16);
  if ( strlen(v16) + 1 >= a4 - 1 )
  {
    memmove(a3, v16, a4 - 1);
  }
  else
  {
    Size = strlen(v16) + 1;
    memmove(a3, v16, Size);
  }
  a3[a4 - 1] = 0;
  return 1;
}


//======================================================================
// sub_68AC10
// entry 0068ac10  size 942  status ok
//======================================================================

char __thiscall sub_68AC10(FILE **this, char *a2, char *a3, FILE *Stream)
{
  size_t v5; // eax
  size_t v6; // eax
  int v7; // esi
  size_t v8; // eax
  size_t v9; // eax
  size_t v10; // eax
  int v12; // [esp+8h] [ebp-25Ch]
  int v13; // [esp+8h] [ebp-25Ch]
  char *i; // [esp+Ch] [ebp-258h]
  char *v15; // [esp+Ch] [ebp-258h]
  char *j; // [esp+10h] [ebp-254h]
  char Str[264]; // [esp+14h] [ebp-250h] BYREF
  char Format[20]; // [esp+11Ch] [ebp-148h] BYREF
  char Buffer[20]; // [esp+130h] [ebp-134h] BYREF
  fpos_t Position; // [esp+144h] [ebp-120h] BYREF
  fpos_t v21; // [esp+14Ch] [ebp-118h] BYREF
  char v22[264]; // [esp+154h] [ebp-110h] BYREF
  char *v23; // [esp+260h] [ebp-4h]

  sprintf(Buffer, "%%%i[^\n\r]", 260);
  sprintf(Format, "%%%i[\n\r]", 260);
  memset(Str, 0, 0x105u);
  if ( !a2 || !*a2 || !a3 || !Stream )
    return 0;
  do
  {
    fgetpos(*(this + 130), &Position);
    fgetpos(Stream, &v21);
    v12 = fscanf(*(this + 130), Buffer, Str);
    if ( !v12 || v12 == -1 )
      break;
    v5 = strlen(Str);
    fwrite(Str, 1u, v5, Stream);
    v13 = fscanf(*(this + 130), Format, v22);
    if ( v13 && v13 != -1 )
    {
      v6 = strlen(v22);
      fwrite(v22, 1u, v6, Stream);
    }
    sub_68AFC0(Str);
    if ( Str[0] != 59 )
    {
      if ( Str[0] == 91 )
      {
        fsetpos(*(this + 130), &Position);
        fsetpos(Stream, &v21);
        break;
      }
      v23 = strchr(Str, 61);
      if ( v23 )
      {
        *v23 = 0;
        for ( i = v23 - 1; *i == 32; --i )
          *i = 0;
        v15 = Str;
        for ( j = a2; *j; ++j )
        {
          if ( !*v15 )
            break;
          v7 = toupper(*j);
          if ( v7 != toupper(*v15) )
            break;
          ++v15;
        }
        if ( !*j && !*v15 )
        {
          fsetpos(Stream, &v21);
          break;
        }
      }
    }
  }
  while ( !feof(*(this + 130)) );
  v8 = strlen(a2);
  fwrite(a2, 1u, v8, Stream);
  fwrite("=", 1u, 1u, Stream);
  if ( *a3 )
  {
    v9 = strlen(a3);
    fwrite(a3, 1u, v9, Stream);
  }
  v10 = strlen("\r\n");
  fwrite("\r\n", 1u, v10, Stream);
  return 1;
}


//======================================================================
// sub_68AFC0
// entry 0068afc0  size 96  status ok
//======================================================================

char __stdcall sub_68AFC0(char *a1)
{
  size_t v2; // eax
  char *Str; // [esp+4h] [ebp-4h]

  if ( !a1 )
    return 0;
  for ( Str = a1; *Str == 32; ++Str )
    ;
  if ( Str != a1 )
  {
    v2 = strlen(Str);
    memmove(a1, Str, v2 + 1);
  }
  return 1;
}


//======================================================================
// sub_68B020
// entry 0068b020  size 38  status ok
//======================================================================

int __thiscall sub_68B020(_BYTE *this, char a2)
{
  int result; // eax

  result = (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)this + 12))(this);
  *(this + 524) = a2;
  return result;
}


//======================================================================
// sub_68B050
// entry 0068b050  size 384  status ok
//======================================================================

int __thiscall sub_68B050(int this, int a2, int a3)
{
  int v3; // eax
  int v6; // [esp+E0h] [ebp-70h]
  int v7; // [esp+F0h] [ebp-60h]
  _BYTE v8[28]; // [esp+F4h] [ebp-5Ch] BYREF
  int v9; // [esp+110h] [ebp-40h]
  int v10; // [esp+114h] [ebp-3Ch]
  int v11; // [esp+118h] [ebp-38h]
  int v12; // [esp+11Ch] [ebp-34h]
  int v13; // [esp+120h] [ebp-30h]
  _BYTE v14[28]; // [esp+124h] [ebp-2Ch] BYREF
  int v15; // [esp+14Ch] [ebp-4h]

  std::string::string(v14, this + 263);
  v15 = 0;
  v7 = *(_DWORD *)(this + 532);
  v9 = 0;
  v10 = v7;
  if ( this == -528 )
    invalid_parameter_noinfo();
  v9 = this + 528;
  v6 = sub_68C3A0(v14);
  sub_68D4B0(v6, this + 528);
  if ( !v11 || v11 != v9 )
    invalid_parameter_noinfo();
  if ( v12 == v10 && *(_DWORD *)(this + 520) )
    sub_68A710((FILE **)this, (char *)(this + 263), *(FILE **)(this + 520));
  v13 = sub_68B720(v14);
  std::string::string(v8, a2);
  LOBYTE(v15) = 1;
  v3 = sub_68B950(v8);
  std::string::operator=(v3, a3);
  LOBYTE(v15) = 0;
  std::string::~string(v8);
  v15 = -1;
  return std::string::~string(v14);
}


//======================================================================
// sub_68B1D0
// entry 0068b1d0  size 1280  status ok
//======================================================================

FILE *__thiscall sub_68B1D0(int this)
{
  FILE *result; // eax
  size_t v2; // eax
  size_t v3; // eax
  size_t v4; // eax
  size_t v5; // eax
  size_t v6; // eax
  size_t v7; // eax
  int v9; // [esp+20h] [ebp-28Ch]
  int v10; // [esp+28h] [ebp-284h]
  int v11; // [esp+3Ch] [ebp-270h]
  char *v12; // [esp+5Ch] [ebp-250h]
  char *v13; // [esp+60h] [ebp-24Ch]
  int v14; // [esp+64h] [ebp-248h]
  int v15; // [esp+6Ch] [ebp-240h]
  int v16; // [esp+70h] [ebp-23Ch] BYREF
  int v17; // [esp+74h] [ebp-238h]
  char *Str; // [esp+78h] [ebp-234h]
  char v19[268]; // [esp+7Ch] [ebp-230h] BYREF
  FILE *Stream; // [esp+188h] [ebp-124h]
  int v21; // [esp+18Ch] [ebp-120h] BYREF
  int v22; // [esp+190h] [ebp-11Ch]
  char Destination[268]; // [esp+194h] [ebp-118h] BYREF
  int v24; // [esp+2A4h] [ebp-8h]
  int v25; // [esp+2A8h] [ebp-4h]

  sub_68D4B0(**(_DWORD **)(this + 532), this + 528);
  v11 = *(_DWORD *)(this + 532);
  v24 = 0;
  v25 = v11;
  if ( this == -528 )
    invalid_parameter_noinfo();
  v24 = this + 528;
  result = (FILE *)this;
  if ( *(_DWORD *)(this + 536) )
  {
    strcpy(Destination, (const char *)(this + 8));
    sub_5EA5B0(Destination);
    strcpy(v19, Destination);
    result = sub_5EA9C0(v19, "ab");
    Stream = result;
    if ( result )
    {
      while ( 1 )
      {
        if ( !v21 || v21 != v24 )
          invalid_parameter_noinfo();
        if ( v22 == v25 )
          break;
        v10 = sub_68D4F0(&v21);
        Str = (char *)std::string::c_str(v10);
        fwrite(&unk_6E5634, 1u, 1u, Stream);
        v2 = strlen(Str);
        fwrite(Str, 1u, v2, Stream);
        fwrite(&unk_6E5630, 1u, 1u, Stream);
        v3 = strlen("\r\n");
        fwrite("\r\n", 1u, v3, Stream);
        if ( !v21 )
          invalid_parameter_noinfo();
        if ( v22 == *(_DWORD *)(v21 + 4) )
          invalid_parameter_noinfo();
        v14 = v22 + 40;
        v9 = **(_DWORD **)(v22 + 44);
        v16 = 0;
        v17 = v9;
        if ( v22 == -40 )
          invalid_parameter_noinfo();
        v16 = v14;
        v15 = *(_DWORD *)(v14 + 4);
        if ( !v14 )
          invalid_parameter_noinfo();
        while ( 1 )
        {
          if ( !v16 || v16 != v14 )
            invalid_parameter_noinfo();
          if ( v17 == v15 )
            break;
          if ( !v16 )
            invalid_parameter_noinfo();
          if ( v17 == *(_DWORD *)(v16 + 4) )
            invalid_parameter_noinfo();
          v13 = (char *)std::string::c_str(v17 + 12);
          if ( !v16 )
            invalid_parameter_noinfo();
          if ( v17 == *(_DWORD *)(v16 + 4) )
            invalid_parameter_noinfo();
          v12 = (char *)std::string::c_str(v17 + 40);
          v4 = strlen(v13);
          fwrite(v13, 1u, v4, Stream);
          fwrite("=", 1u, 1u, Stream);
          v5 = strlen(v12);
          fwrite(v12, 1u, v5, Stream);
          v6 = strlen("\r\n");
          fwrite("\r\n", 1u, v6, Stream);
          sub_68EDC0(&v16);
        }
        v7 = strlen("\r\n");
        fwrite("\r\n", 1u, v7, Stream);
        sub_68E790(&v21);
      }
      fclose(Stream);
      return (FILE *)sub_68B8F0(this + 528);
    }
  }
  return result;
}


//======================================================================
// sub_68B700
// entry 0068b700  size 21  status ok
//======================================================================

int __thiscall sub_68B700(void *this)
{
  return sub_68C410(this);
}


//======================================================================
// sub_68B720
// entry 0068b720  size 458  status ok
//======================================================================

int __thiscall sub_68B720(_DWORD *this, int a2)
{
  _DWORD *v2; // eax
  int v3; // edx
  int v6; // [esp+74h] [ebp-84h]
  int v7; // [esp+98h] [ebp-60h]
  _BYTE v8[8]; // [esp+A0h] [ebp-58h] BYREF
  _BYTE v9[12]; // [esp+A8h] [ebp-50h] BYREF
  _BYTE v10[28]; // [esp+B4h] [ebp-44h] BYREF
  _BYTE v11[12]; // [esp+D0h] [ebp-28h] BYREF
  _DWORD *v12; // [esp+DCh] [ebp-1Ch]
  int v13; // [esp+E0h] [ebp-18h]
  _DWORD *v14; // [esp+E4h] [ebp-14h]
  int v15; // [esp+E8h] [ebp-10h]
  int v16; // [esp+F4h] [ebp-4h]

  v14 = 0;
  v15 = sub_68C3A0(a2);
  if ( !this )
    invalid_parameter_noinfo();
  v14 = this;
  v7 = *(this + 1);
  v12 = 0;
  v13 = v7;
  if ( !this )
    invalid_parameter_noinfo();
  v12 = this;
  if ( !v14 || v14 != v12 )
    invalid_parameter_noinfo();
  if ( v15 == v13 || (unsigned __int8)std::operator<<char>(a2, v15 + 12) )
  {
    v6 = sub_68C4D0(v9);
    v16 = 0;
    std::string::string(v10, a2);
    LOBYTE(v16) = 1;
    sub_68D530(v6);
    LOBYTE(v16) = 2;
    v2 = (_DWORD *)sub_68BC00(v8, v14, v15, v10);
    v3 = v2[1];
    v14 = (_DWORD *)*v2;
    v15 = v3;
    LOBYTE(v16) = 3;
    sub_68DC60(v11);
    LOBYTE(v16) = 0;
    std::string::~string(v10);
    v16 = -1;
    sub_68DC60(v9);
  }
  if ( !v14 )
    invalid_parameter_noinfo();
  if ( v15 == v14[1] )
    invalid_parameter_noinfo();
  return v15 + 40;
}


//======================================================================
// sub_68B8F0
// entry 0068b8f0  size 91  status ok
//======================================================================

_DWORD *__thiscall sub_68B8F0(_DWORD *this)
{
  sub_68C340(*(void **)(*(this + 1) + 4));
  *(_DWORD *)(*(this + 1) + 4) = *(this + 1);
  *(this + 2) = 0;
  *(_DWORD *)*(this + 1) = *(this + 1);
  *(_DWORD *)(*(this + 1) + 8) = *(this + 1);
  return this;
}


//======================================================================
// sub_68B950
// entry 0068b950  size 450  status ok
//======================================================================

int __thiscall sub_68B950(_DWORD *this, int a2)
{
  _DWORD *v2; // eax
  _DWORD *v3; // edx
  int v4; // eax
  int v7; // [esp+10h] [ebp-88h]
  int v8; // [esp+18h] [ebp-80h]
  char v9[8]; // [esp+20h] [ebp-78h] BYREF
  _BYTE v10[28]; // [esp+28h] [ebp-70h] BYREF
  _BYTE v11[28]; // [esp+44h] [ebp-54h] BYREF
  _BYTE v12[28]; // [esp+60h] [ebp-38h] BYREF
  _DWORD *v13; // [esp+7Ch] [ebp-1Ch]
  int v14; // [esp+80h] [ebp-18h]
  _DWORD *v15; // [esp+84h] [ebp-14h]
  int v16; // [esp+88h] [ebp-10h]
  int v17; // [esp+94h] [ebp-4h]

  v15 = 0;
  v16 = sub_68DBF0(a2);
  if ( !this )
    invalid_parameter_noinfo();
  v15 = this;
  v8 = *(this + 1);
  v13 = 0;
  v14 = v8;
  if ( !this )
    invalid_parameter_noinfo();
  v13 = this;
  if ( !v15 || v15 != v13 )
    invalid_parameter_noinfo();
  if ( v16 == v14 || (unsigned __int8)std::operator<<char>(a2, v16 + 12) )
  {
    v7 = std::string::string(v10);
    v17 = 0;
    std::string::string(v11, a2);
    LOBYTE(v17) = 1;
    std::string::string(v12, v7);
    LOBYTE(v17) = 2;
    v2 = (_DWORD *)sub_68C500(v9, v15, v16, v11);
    v3 = (_DWORD *)*v2;
    v4 = v2[1];
    v15 = v3;
    v16 = v4;
    LOBYTE(v17) = 3;
    std::string::~string(v12);
    LOBYTE(v17) = 0;
    std::string::~string(v11);
    v17 = -1;
    std::string::~string(v10);
  }
  if ( !v15 )
    invalid_parameter_noinfo();
  if ( v16 == v15[1] )
    invalid_parameter_noinfo();
  return v16 + 40;
}


//======================================================================
// sub_68BB20
// entry 0068bb20  size 21  status ok
//======================================================================

int __thiscall sub_68BB20(void *this)
{
  return sub_68DC60(this);
}


//======================================================================
// sub_68BB40
// entry 0068bb40  size 95  status ok
//======================================================================

int __thiscall sub_68BB40(char *this)
{
  sub_68DC60(this + 28);
  return std::string::~string(this);
}


//======================================================================
// sub_68BBA0
// entry 0068bba0  size 88  status ok
//======================================================================

int __thiscall sub_68BBA0(char *this)
{
  std::string::~string(this + 28);
  return std::string::~string(this);
}


//======================================================================
// sub_68BC00
// entry 0068bc00  size 1846  status ok
//======================================================================

_DWORD *__thiscall sub_68BC00(_DWORD *this, _DWORD *a2, int a3, int a4, int a5)
{
  _DWORD *v6; // eax
  int v7; // edx
  _BYTE v9[12]; // [esp+17Ch] [ebp-44h] BYREF
  int v10; // [esp+188h] [ebp-38h] BYREF
  int v11; // [esp+190h] [ebp-30h] BYREF
  int v12; // [esp+198h] [ebp-28h] BYREF
  int v13; // [esp+1B8h] [ebp-8h] BYREF
  int v14; // [esp+1BCh] [ebp-4h]

  v13 = 0;
  v14 = 0;
  if ( !*(this + 2) )
  {
    sub_68D070(a2, 1, *(this + 1), a5);
    return a2;
  }
  sub_68D4B0(*(_DWORD *)*(this + 1), this);
  if ( sub_6118F0(&a3, &v12) )
  {
    if ( (unsigned __int8)std::operator<<char>(a5, a4 + 12) )
    {
      sub_68D070(a2, 1, a4, a5);
      return a2;
    }
    goto LABEL_24;
  }
  sub_68D4B0(*(this + 1), this);
  if ( sub_6118F0(&a3, &v11) )
  {
    if ( (unsigned __int8)std::operator<<char>(*(_DWORD *)(*(this + 1) + 8) + 12, a5) )
    {
      sub_68D070(a2, 0, *(_DWORD *)(*(this + 1) + 8), a5);
      return a2;
    }
    goto LABEL_24;
  }
  if ( (unsigned __int8)std::operator<<char>(a5, a4 + 12)
    && (v13 = a3, v14 = a4, sub_68EEA0(&v13), (unsigned __int8)std::operator<<char>(v14 + 12, a5)) )
  {
    if ( *(_BYTE *)(*(_DWORD *)(v14 + 8) + 53) )
      sub_68D070(a2, 0, v14, a5);
    else
      sub_68D070(a2, 1, a4, a5);
    return a2;
  }
  else
  {
    if ( !(unsigned __int8)std::operator<<char>(a4 + 12, a5)
      || (v13 = a3, v14 = a4, sub_68D4B0(*(this + 1), this), sub_68E790(&v13), !sub_6118F0(&v13, &v10))
      && !(unsigned __int8)std::operator<<char>(a5, v14 + 12) )
    {
LABEL_24:
      v6 = (_DWORD *)sub_68CC40(v9, a5);
      v7 = v6[1];
      *a2 = *v6;
      a2[1] = v7;
      return a2;
    }
    if ( *(_BYTE *)(*(_DWORD *)(a4 + 8) + 53) )
      sub_68D070(a2, 0, a4, a5);
    else
      sub_68D070(a2, 1, v14, a5);
    return a2;
  }
}


//======================================================================
// sub_68C340
// entry 0068c340  size 89  status ok
//======================================================================

int __thiscall sub_68C340(void *this, _DWORD *a2)
{
  int result; // eax
  int v3; // [esp+0h] [ebp-3Ch]
  _DWORD *i; // [esp+38h] [ebp-4h]

  v3 = (int)this;
  for ( i = a2; ; a2 = i )
  {
    result = *((char *)i + 53);
    if ( *((_BYTE *)i + 53) )
      break;
    sub_68C340((void *)i[2]);
    i = (_DWORD *)*i;
    sub_68F950(a2, v3);
    operator delete(a2);
  }
  return result;
}


//======================================================================
// sub_68C3A0
// entry 0068c3a0  size 104  status ok
//======================================================================

int *__thiscall sub_68C3A0(_DWORD *this, int a2)
{
  int *v3; // [esp+4h] [ebp-8h]
  int *v4; // [esp+8h] [ebp-4h]

  v3 = *(int **)(*(this + 1) + 4);
  v4 = (int *)*(this + 1);
  while ( !*((_BYTE *)v3 + 53) )
  {
    if ( (unsigned __int8)std::operator<<char>(v3 + 3, a2) )
    {
      v3 = (int *)v3[2];
    }
    else
    {
      v4 = v3;
      v3 = (int *)*v3;
    }
  }
  return v4;
}


//======================================================================
// sub_68C410
// entry 0068c410  size 179  status ok
//======================================================================

int __thiscall sub_68C410(int this)
{
  int v3; // [esp+40h] [ebp-24h]
  int v4; // [esp+48h] [ebp-1Ch]
  _BYTE v5[8]; // [esp+4Ch] [ebp-18h] BYREF
  int v6; // [esp+54h] [ebp-10h]
  int v7; // [esp+58h] [ebp-Ch]
  int v8; // [esp+5Ch] [ebp-8h]
  int v9; // [esp+60h] [ebp-4h]

  v4 = *(_DWORD *)(this + 4);
  v8 = 0;
  v9 = v4;
  if ( !this )
    invalid_parameter_noinfo();
  v8 = this;
  v3 = **(_DWORD **)(this + 4);
  v6 = 0;
  v7 = v3;
  if ( !this )
    invalid_parameter_noinfo();
  v6 = this;
  sub_68CE80(v5, this, v7, v8, v9);
  operator delete(*(void **)(this + 4));
  *(_DWORD *)(this + 4) = 0;
  *(_DWORD *)(this + 8) = 0;
  return this;
}


//======================================================================
// sub_68C4D0
// entry 0068c4d0  size 42  status ok
//======================================================================

void *__thiscall sub_68C4D0(void *this)
{
  char v3; // [esp+9h] [ebp-1Fh] BYREF
  char v4; // [esp+Ah] [ebp-1Eh] BYREF
  char v5; // [esp+Bh] [ebp-1Dh] BYREF
  char *v6; // [esp+Ch] [ebp-1Ch]
  char *v7; // [esp+14h] [ebp-14h]
  char *v8; // [esp+1Ch] [ebp-Ch]

  v8 = &v3;
  v7 = &v4;
  v6 = &v5;
  sub_68EAE0(this);
  return this;
}


//======================================================================
// sub_68C500
// entry 0068c500  size 1846  status ok
//======================================================================

_DWORD *__thiscall sub_68C500(_DWORD *this, _DWORD *a2, int a3, int a4, int a5)
{
  _DWORD *v6; // eax
  int v7; // edx
  _BYTE v9[12]; // [esp+17Ch] [ebp-44h] BYREF
  int v10; // [esp+188h] [ebp-38h] BYREF
  int v11; // [esp+190h] [ebp-30h] BYREF
  int v12; // [esp+198h] [ebp-28h] BYREF
  int v13; // [esp+1B8h] [ebp-8h] BYREF
  int v14; // [esp+1BCh] [ebp-4h]

  v13 = 0;
  v14 = 0;
  if ( !*(this + 2) )
  {
    sub_68D820(a2, 1, *(this + 1), a5);
    return a2;
  }
  sub_68D4B0(*(_DWORD *)*(this + 1), this);
  if ( sub_6118F0(&a3, &v12) )
  {
    if ( (unsigned __int8)std::operator<<char>(a5, a4 + 12) )
    {
      sub_68D820(a2, 1, a4, a5);
      return a2;
    }
    goto LABEL_24;
  }
  sub_68D4B0(*(this + 1), this);
  if ( sub_6118F0(&a3, &v11) )
  {
    if ( (unsigned __int8)std::operator<<char>(*(_DWORD *)(*(this + 1) + 8) + 12, a5) )
    {
      sub_68D820(a2, 0, *(_DWORD *)(*(this + 1) + 8), a5);
      return a2;
    }
    goto LABEL_24;
  }
  if ( (unsigned __int8)std::operator<<char>(a5, a4 + 12)
    && (v13 = a3, v14 = a4, sub_68F800(&v13), (unsigned __int8)std::operator<<char>(v14 + 12, a5)) )
  {
    if ( *(_BYTE *)(*(_DWORD *)(v14 + 8) + 69) )
      sub_68D820(a2, 0, v14, a5);
    else
      sub_68D820(a2, 1, a4, a5);
    return a2;
  }
  else
  {
    if ( !(unsigned __int8)std::operator<<char>(a4 + 12, a5)
      || (v13 = a3, v14 = a4, sub_68D4B0(*(this + 1), this), sub_68EDC0(&v13), !sub_6118F0(&v13, &v10))
      && !(unsigned __int8)std::operator<<char>(a5, v14 + 12) )
    {
LABEL_24:
      v6 = (_DWORD *)sub_68D5E0(v9, a5);
      v7 = v6[1];
      *a2 = *v6;
      a2[1] = v7;
      return a2;
    }
    if ( *(_BYTE *)(*(_DWORD *)(a4 + 8) + 69) )
      sub_68D820(a2, 0, a4, a5);
    else
      sub_68D820(a2, 1, v14, a5);
    return a2;
  }
}


//======================================================================
// sub_68CC40
// entry 0068cc40  size 561  status ok
//======================================================================

int __thiscall sub_68CC40(_DWORD *this, int a2, int a3)
{
  int v3; // eax
  int v5; // edx
  int v6; // ecx
  int *v7; // [esp+0h] [ebp-B0h]
  _DWORD *v9; // [esp+8h] [ebp-A8h]
  _DWORD *v10; // [esp+10h] [ebp-A0h]
  _BYTE v11[11]; // [esp+70h] [ebp-40h] BYREF
  char v12; // [esp+7Bh] [ebp-35h]
  _BYTE v13[11]; // [esp+7Ch] [ebp-34h] BYREF
  char v14; // [esp+87h] [ebp-29h]
  int v15; // [esp+88h] [ebp-28h]
  int v16; // [esp+8Ch] [ebp-24h]
  int v17; // [esp+9Ch] [ebp-14h] BYREF
  int v18; // [esp+A0h] [ebp-10h]
  int *v19; // [esp+A4h] [ebp-Ch]
  int *v20; // [esp+A8h] [ebp-8h]
  char v21; // [esp+AFh] [ebp-1h]

  v19 = *(int **)(*(this + 1) + 4);
  v20 = (int *)*(this + 1);
  v21 = 1;
  while ( !*((_BYTE *)v19 + 53) )
  {
    v20 = v19;
    v21 = std::operator<<char>(a3, v19 + 3);
    if ( v21 )
      v7 = (int *)*v19;
    else
      v7 = (int *)v19[2];
    v19 = v7;
  }
  sub_68D4B0(v20, this);
  if ( v21 )
  {
    sub_68D4B0(*(_DWORD *)*(this + 1), this);
    if ( !v17 || v17 != v15 )
      invalid_parameter_noinfo();
    if ( v18 == v16 )
    {
      v14 = 1;
      v10 = (_DWORD *)sub_68D070(v13, 1, v20, a3);
      v3 = v10[1];
      *(_DWORD *)a2 = *v10;
      *(_DWORD *)(a2 + 4) = v3;
      *(_BYTE *)(a2 + 8) = v14;
      return a2;
    }
    sub_68EEA0(&v17);
  }
  if ( (unsigned __int8)std::operator<<char>(v18 + 12, a3) )
  {
    v12 = 1;
    v9 = (_DWORD *)sub_68D070(v11, v21, v20, a3);
    v5 = v9[1];
    *(_DWORD *)a2 = *v9;
    *(_DWORD *)(a2 + 4) = v5;
    *(_BYTE *)(a2 + 8) = v12;
  }
  else
  {
    v6 = v18;
    *(_DWORD *)a2 = v17;
    *(_DWORD *)(a2 + 4) = v6;
    *(_BYTE *)(a2 + 8) = 0;
  }
  return a2;
}


//======================================================================
// sub_68CE80
// entry 0068ce80  size 372  status ok
//======================================================================

_DWORD *__thiscall sub_68CE80(int this, _DWORD *a2, int a3, int a4, int a5, int a6)
{
  int v8; // [esp+14h] [ebp-44h]
  int v9; // [esp+18h] [ebp-40h]
  int v10; // [esp+1Ch] [ebp-3Ch]
  int v11; // [esp+2Ch] [ebp-2Ch]
  int v12; // [esp+30h] [ebp-28h]
  _BYTE v13[8]; // [esp+38h] [ebp-20h] BYREF
  int v14; // [esp+40h] [ebp-18h]
  int v15; // [esp+44h] [ebp-14h]
  int v16; // [esp+48h] [ebp-10h]
  int v17; // [esp+4Ch] [ebp-Ch]
  int v18; // [esp+50h] [ebp-8h]
  int v19; // [esp+54h] [ebp-4h]

  v12 = **(_DWORD **)(this + 4);
  v18 = 0;
  v19 = v12;
  if ( !this )
    invalid_parameter_noinfo();
  v18 = this;
  if ( !a3 || a3 != v18 )
    invalid_parameter_noinfo();
  if ( a4 != v19 )
    goto LABEL_19;
  v11 = *(_DWORD *)(this + 4);
  v16 = 0;
  v17 = v11;
  if ( !this )
    invalid_parameter_noinfo();
  v16 = this;
  if ( !a5 || a5 != v16 )
    invalid_parameter_noinfo();
  if ( a6 == v17 )
  {
    sub_68B8F0((_DWORD *)this);
    v10 = **(_DWORD **)(this + 4);
    *a2 = 0;
    a2[1] = v10;
    if ( !this )
      invalid_parameter_noinfo();
    *a2 = this;
    return a2;
  }
  else
  {
LABEL_19:
    while ( 1 )
    {
      if ( !a3 || a3 != a5 )
        invalid_parameter_noinfo();
      if ( a4 == a6 )
        break;
      v8 = a3;
      v9 = a4;
      sub_68E790(&a3);
      v14 = v8;
      v15 = v9;
      sub_68DD20(v13, v8, v9);
    }
    *a2 = a3;
    a2[1] = a4;
    return a2;
  }
}


//======================================================================
// sub_68D000
// entry 0068d000  size 97  status ok
//======================================================================

int __thiscall sub_68D000(void *this)
{
  int v1; // eax
  int v3; // [esp+0h] [ebp-8h]

  v1 = sub_68E520(this);
  *(_DWORD *)(v3 + 4) = v1;
  *(_BYTE *)(*(_DWORD *)(v3 + 4) + 53) = 1;
  *(_DWORD *)(*(_DWORD *)(v3 + 4) + 4) = *(_DWORD *)(v3 + 4);
  **(_DWORD **)(v3 + 4) = *(_DWORD *)(v3 + 4);
  *(_DWORD *)(*(_DWORD *)(v3 + 4) + 8) = *(_DWORD *)(v3 + 4);
  *(_DWORD *)(v3 + 8) = 0;
  return v3;
}


//======================================================================
// sub_68D070
// entry 0068d070  size 965  status ok
//======================================================================

_DWORD *__thiscall sub_68D070(_DWORD *this, _DWORD *a2, char a3, _DWORD *a4, int a5)
{
  _BYTE v7[28]; // [esp+70h] [ebp-58h] BYREF
  void **pExceptionObject; // [esp+8Ch] [ebp-3Ch] BYREF
  int v9; // [esp+B4h] [ebp-14h]
  int v10; // [esp+B8h] [ebp-10h]
  int v11; // [esp+C4h] [ebp-4h]
  int v12; // [esp+D8h] [ebp+10h]
  int v13; // [esp+D8h] [ebp+10h]

  if ( *(this + 2) >= 0x6666665u )
  {
    std::string::string(v7, "map/set<T> too long");
    v11 = 0;
    sub_68D440(v7);
    pExceptionObject = &std::length_error::`vftable';
    CxxThrowException(&pExceptionObject, (_ThrowInfo *)&_TI3_AVlength_error_std__);
  }
  v10 = sub_68E670(*(this + 1), a4, *(this + 1), a5, 0);
  ++*(this + 2);
  if ( a4 == (_DWORD *)*(this + 1) )
  {
    *(_DWORD *)(*(this + 1) + 4) = v10;
    *(_DWORD *)*(this + 1) = v10;
    *(_DWORD *)(*(this + 1) + 8) = v10;
  }
  else if ( a3 )
  {
    *a4 = v10;
    if ( a4 == *(_DWORD **)*(this + 1) )
      *(_DWORD *)*(this + 1) = v10;
  }
  else
  {
    a4[2] = v10;
    if ( a4 == *(_DWORD **)(*(this + 1) + 8) )
      *(_DWORD *)(*(this + 1) + 8) = v10;
  }
  v9 = v10;
  while ( !*(_BYTE *)(*(_DWORD *)(v9 + 4) + 52) )
  {
    if ( *(_DWORD *)(v9 + 4) == **(_DWORD **)(*(_DWORD *)(v9 + 4) + 4) )
    {
      v12 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v9 + 4) + 4) + 8);
      if ( *(_BYTE *)(v12 + 52) )
      {
        if ( v9 == *(_DWORD *)(*(_DWORD *)(v9 + 4) + 8) )
        {
          v9 = *(_DWORD *)(v9 + 4);
          sub_68E3C0(v9);
        }
        *(_BYTE *)(*(_DWORD *)(v9 + 4) + 52) = 1;
        *(_BYTE *)(*(_DWORD *)(*(_DWORD *)(v9 + 4) + 4) + 52) = 0;
        sub_68E470(*(_DWORD *)(*(_DWORD *)(v9 + 4) + 4));
      }
      else
      {
        *(_BYTE *)(*(_DWORD *)(v9 + 4) + 52) = 1;
        *(_BYTE *)(v12 + 52) = 1;
        *(_BYTE *)(*(_DWORD *)(*(_DWORD *)(v9 + 4) + 4) + 52) = 0;
        v9 = *(_DWORD *)(*(_DWORD *)(v9 + 4) + 4);
      }
    }
    else
    {
      v13 = **(_DWORD **)(*(_DWORD *)(v9 + 4) + 4);
      if ( *(_BYTE *)(v13 + 52) )
      {
        if ( v9 == **(_DWORD **)(v9 + 4) )
        {
          v9 = *(_DWORD *)(v9 + 4);
          sub_68E470(v9);
        }
        *(_BYTE *)(*(_DWORD *)(v9 + 4) + 52) = 1;
        *(_BYTE *)(*(_DWORD *)(*(_DWORD *)(v9 + 4) + 4) + 52) = 0;
        sub_68E3C0(*(_DWORD *)(*(_DWORD *)(v9 + 4) + 4));
      }
      else
      {
        *(_BYTE *)(*(_DWORD *)(v9 + 4) + 52) = 1;
        *(_BYTE *)(v13 + 52) = 1;
        *(_BYTE *)(*(_DWORD *)(*(_DWORD *)(v9 + 4) + 4) + 52) = 0;
        v9 = *(_DWORD *)(*(_DWORD *)(v9 + 4) + 4);
      }
    }
  }
  *(_BYTE *)(*(_DWORD *)(*(this + 1) + 4) + 52) = 1;
  *a2 = 0;
  a2[1] = v10;
  if ( !this )
    invalid_parameter_noinfo();
  *a2 = this;
  return a2;
}


//======================================================================
// sub_68D440
// entry 0068d440  size 106  status ok
//======================================================================

std::exception *__thiscall sub_68D440(std::exception *this, int a2)
{
  std::exception::exception(this);
  *(_DWORD *)this = &std::logic_error::`vftable';
  std::string::string((char *)this + 12, a2);
  return this;
}


//======================================================================
// sub_68D4B0
// entry 0068d4b0  size 54  status ok
//======================================================================

_DWORD *__thiscall sub_68D4B0(_DWORD *this, int a2, int a3)
{
  *this = 0;
  *(this + 1) = a2;
  if ( !a3 )
    invalid_parameter_noinfo();
  *this = a3;
  return this;
}


//======================================================================
// sub_68D4F0
// entry 0068d4f0  size 56  status ok
//======================================================================

int __thiscall sub_68D4F0(_DWORD *this)
{
  if ( !*this )
    invalid_parameter_noinfo();
  if ( *(this + 1) == *(_DWORD *)(*this + 4) )
    invalid_parameter_noinfo();
  return *(this + 1) + 12;
}


//======================================================================
// sub_68D530
// entry 0068d530  size 172  status ok
//======================================================================

void *__thiscall sub_68D530(void *this, int a2)
{
  int v3; // [esp+0h] [ebp-D8h] BYREF
  void *v4; // [esp+10h] [ebp-C8h]
  char v5; // [esp+A9h] [ebp-2Fh] BYREF
  char v6; // [esp+AAh] [ebp-2Eh] BYREF
  char v7; // [esp+ABh] [ebp-2Dh] BYREF
  char *v8; // [esp+ACh] [ebp-2Ch]
  char *v9; // [esp+B4h] [ebp-24h]
  char *v10; // [esp+BCh] [ebp-1Ch]
  int *v11; // [esp+C8h] [ebp-10h]
  int v12; // [esp+D4h] [ebp-4h]

  v11 = &v3;
  v4 = this;
  v10 = &v5;
  v9 = &v6;
  v8 = &v7;
  sub_68EAE0(this);
  v12 = 0;
  sub_68E9D0(a2);
  return v4;
}


//======================================================================
// sub_68D5E0
// entry 0068d5e0  size 561  status ok
//======================================================================

int __thiscall sub_68D5E0(int **this, int a2, int a3)
{
  int v3; // eax
  int v5; // edx
  int v6; // ecx
  int v7; // [esp+0h] [ebp-B0h]
  _DWORD *v9; // [esp+8h] [ebp-A8h]
  _DWORD *v10; // [esp+10h] [ebp-A0h]
  _BYTE v11[11]; // [esp+70h] [ebp-40h] BYREF
  char v12; // [esp+7Bh] [ebp-35h]
  _BYTE v13[11]; // [esp+7Ch] [ebp-34h] BYREF
  char v14; // [esp+87h] [ebp-29h]
  _DWORD v15[2]; // [esp+88h] [ebp-28h] BYREF
  int v16; // [esp+9Ch] [ebp-14h] BYREF
  int v17; // [esp+A0h] [ebp-10h]
  int v18; // [esp+A4h] [ebp-Ch]
  int v19; // [esp+A8h] [ebp-8h]
  char v20; // [esp+AFh] [ebp-1h]

  v18 = (*(this + 1))[1];
  v19 = (int)*(this + 1);
  v20 = 1;
  while ( !*(_BYTE *)(v18 + 69) )
  {
    v19 = v18;
    v20 = std::operator<<char>(a3, v18 + 12);
    if ( v20 )
      v7 = *(_DWORD *)v18;
    else
      v7 = *(_DWORD *)(v18 + 8);
    v18 = v7;
  }
  sub_68D4B0(&v16, v19, (int)this);
  if ( v20 )
  {
    sub_68D4B0(v15, **(this + 1), (int)this);
    if ( !v16 || v16 != v15[0] )
      invalid_parameter_noinfo();
    if ( v17 == v15[1] )
    {
      v14 = 1;
      v10 = (_DWORD *)sub_68D820(v13, 1, v19, a3);
      v3 = v10[1];
      *(_DWORD *)a2 = *v10;
      *(_DWORD *)(a2 + 4) = v3;
      *(_BYTE *)(a2 + 8) = v14;
      return a2;
    }
    sub_68F800(&v16);
  }
  if ( (unsigned __int8)std::operator<<char>(v17 + 12, a3) )
  {
    v12 = 1;
    v9 = (_DWORD *)sub_68D820(v11, v20, v19, a3);
    v5 = v9[1];
    *(_DWORD *)a2 = *v9;
    *(_DWORD *)(a2 + 4) = v5;
    *(_BYTE *)(a2 + 8) = v12;
  }
  else
  {
    v6 = v17;
    *(_DWORD *)a2 = v16;
    *(_DWORD *)(a2 + 4) = v6;
    *(_BYTE *)(a2 + 8) = 0;
  }
  return a2;
}


//======================================================================
// sub_68D820
// entry 0068d820  size 965  status ok
//======================================================================

_DWORD *__thiscall sub_68D820(_DWORD *this, _DWORD *a2, char a3, _DWORD *a4, int a5)
{
  _BYTE v7[28]; // [esp+70h] [ebp-58h] BYREF
  _DWORD pExceptionObject[10]; // [esp+8Ch] [ebp-3Ch] BYREF
  int v9; // [esp+B4h] [ebp-14h]
  int v10; // [esp+B8h] [ebp-10h]
  int v11; // [esp+C4h] [ebp-4h]
  int v12; // [esp+D8h] [ebp+10h]
  int v13; // [esp+D8h] [ebp+10h]

  if ( *(this + 2) >= 0x4924923u )
  {
    std::string::string(v7, "map/set<T> too long");
    v11 = 0;
    sub_68D440((std::exception *)pExceptionObject, (int)v7);
    pExceptionObject[0] = &std::length_error::`vftable';
    CxxThrowException(pExceptionObject, (_ThrowInfo *)&_TI3_AVlength_error_std__);
  }
  v10 = sub_68ECB0(*(this + 1), a4, *(this + 1), a5, 0);
  ++*(this + 2);
  if ( a4 == (_DWORD *)*(this + 1) )
  {
    *(_DWORD *)(*(this + 1) + 4) = v10;
    *(_DWORD *)*(this + 1) = v10;
    *(_DWORD *)(*(this + 1) + 8) = v10;
  }
  else if ( a3 )
  {
    *a4 = v10;
    if ( a4 == *(_DWORD **)*(this + 1) )
      *(_DWORD *)*(this + 1) = v10;
  }
  else
  {
    a4[2] = v10;
    if ( a4 == *(_DWORD **)(*(this + 1) + 8) )
      *(_DWORD *)(*(this + 1) + 8) = v10;
  }
  v9 = v10;
  while ( !*(_BYTE *)(*(_DWORD *)(v9 + 4) + 68) )
  {
    if ( *(_DWORD *)(v9 + 4) == **(_DWORD **)(*(_DWORD *)(v9 + 4) + 4) )
    {
      v12 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v9 + 4) + 4) + 8);
      if ( *(_BYTE *)(v12 + 68) )
      {
        if ( v9 == *(_DWORD *)(*(_DWORD *)(v9 + 4) + 8) )
        {
          v9 = *(_DWORD *)(v9 + 4);
          sub_68EB50(v9);
        }
        *(_BYTE *)(*(_DWORD *)(v9 + 4) + 68) = 1;
        *(_BYTE *)(*(_DWORD *)(*(_DWORD *)(v9 + 4) + 4) + 68) = 0;
        sub_68EC00(*(_DWORD *)(*(_DWORD *)(v9 + 4) + 4));
      }
      else
      {
        *(_BYTE *)(*(_DWORD *)(v9 + 4) + 68) = 1;
        *(_BYTE *)(v12 + 68) = 1;
        *(_BYTE *)(*(_DWORD *)(*(_DWORD *)(v9 + 4) + 4) + 68) = 0;
        v9 = *(_DWORD *)(*(_DWORD *)(v9 + 4) + 4);
      }
    }
    else
    {
      v13 = **(_DWORD **)(*(_DWORD *)(v9 + 4) + 4);
      if ( *(_BYTE *)(v13 + 68) )
      {
        if ( v9 == **(_DWORD **)(v9 + 4) )
        {
          v9 = *(_DWORD *)(v9 + 4);
          sub_68EC00(v9);
        }
        *(_BYTE *)(*(_DWORD *)(v9 + 4) + 68) = 1;
        *(_BYTE *)(*(_DWORD *)(*(_DWORD *)(v9 + 4) + 4) + 68) = 0;
        sub_68EB50(*(_DWORD *)(*(_DWORD *)(v9 + 4) + 4));
      }
      else
      {
        *(_BYTE *)(*(_DWORD *)(v9 + 4) + 68) = 1;
        *(_BYTE *)(v13 + 68) = 1;
        *(_BYTE *)(*(_DWORD *)(*(_DWORD *)(v9 + 4) + 4) + 68) = 0;
        v9 = *(_DWORD *)(*(_DWORD *)(v9 + 4) + 4);
      }
    }
  }
  *(_BYTE *)(*(_DWORD *)(*(this + 1) + 4) + 68) = 1;
  *a2 = 0;
  a2[1] = v10;
  if ( !this )
    invalid_parameter_noinfo();
  *a2 = this;
  return a2;
}


//======================================================================
// sub_68DBF0
// entry 0068dbf0  size 104  status ok
//======================================================================

int *__thiscall sub_68DBF0(_DWORD *this, int a2)
{
  int *v3; // [esp+4h] [ebp-8h]
  int *v4; // [esp+8h] [ebp-4h]

  v3 = *(int **)(*(this + 1) + 4);
  v4 = (int *)*(this + 1);
  while ( !*((_BYTE *)v3 + 69) )
  {
    if ( (unsigned __int8)std::operator<<char>(v3 + 3, a2) )
    {
      v3 = (int *)v3[2];
    }
    else
    {
      v4 = v3;
      v3 = (int *)*v3;
    }
  }
  return v4;
}


//======================================================================
// sub_68DC60
// entry 0068dc60  size 179  status ok
//======================================================================

int __thiscall sub_68DC60(int this)
{
  int v3; // [esp+40h] [ebp-24h]
  int v4; // [esp+48h] [ebp-1Ch]
  _BYTE v5[8]; // [esp+4Ch] [ebp-18h] BYREF
  int v6; // [esp+54h] [ebp-10h]
  int v7; // [esp+58h] [ebp-Ch]
  int v8; // [esp+5Ch] [ebp-8h]
  int v9; // [esp+60h] [ebp-4h]

  v4 = *(_DWORD *)(this + 4);
  v8 = 0;
  v9 = v4;
  if ( !this )
    invalid_parameter_noinfo();
  v8 = this;
  v3 = **(_DWORD **)(this + 4);
  v6 = 0;
  v7 = v3;
  if ( !this )
    invalid_parameter_noinfo();
  v6 = this;
  sub_68E850(v5, this, v7, v8, v9);
  operator delete(*(void **)(this + 4));
  *(_DWORD *)(this + 4) = 0;
  *(_DWORD *)(this + 8) = 0;
  return this;
}


//======================================================================
// sub_68DD20
// entry 0068dd20  size 1421  status ok
//======================================================================

_DWORD *__thiscall sub_68DD20(_DWORD *this, _DWORD *a2, int a3, int a4)
{
  int v5; // [esp+0h] [ebp-13Ch]
  _DWORD *v6; // [esp+4h] [ebp-138h]
  _DWORD *v7; // [esp+8h] [ebp-134h]
  _BYTE *v9; // [esp+B4h] [ebp-88h]
  char v10; // [esp+BFh] [ebp-7Dh]
  _DWORD *j; // [esp+C8h] [ebp-74h]
  _DWORD *i; // [esp+D0h] [ebp-6Ch]
  _BYTE v13[28]; // [esp+DCh] [ebp-60h] BYREF
  _DWORD pExceptionObject[10]; // [esp+F8h] [ebp-44h] BYREF
  _DWORD *v15; // [esp+120h] [ebp-1Ch]
  _DWORD *v16; // [esp+124h] [ebp-18h]
  _DWORD *v17; // [esp+128h] [ebp-14h]
  void *v18; // [esp+12Ch] [ebp-10h]
  int v19; // [esp+138h] [ebp-4h]

  if ( *(_BYTE *)(a4 + 53) )
  {
    std::string::string(v13, "invalid map/set<T> iterator");
    v19 = 0;
    sub_68D440((std::exception *)pExceptionObject, (int)v13);
    pExceptionObject[0] = &std::out_of_range::`vftable';
    CxxThrowException(pExceptionObject, (_ThrowInfo *)&_TI3_AVout_of_range_std__);
  }
  v18 = (void *)a4;
  sub_68E790(&a3);
  v16 = v18;
  if ( *(_BYTE *)(*(_DWORD *)v18 + 53) )
  {
    v17 = (_DWORD *)v16[2];
  }
  else if ( *(_BYTE *)(v16[2] + 53) )
  {
    v17 = (_DWORD *)*v16;
  }
  else
  {
    v16 = (_DWORD *)a4;
    v17 = *(_DWORD **)(a4 + 8);
  }
  if ( v16 == v18 )
  {
    v15 = (_DWORD *)*((_DWORD *)v18 + 1);
    if ( !*((_BYTE *)v17 + 53) )
      v17[1] = v15;
    if ( *(void **)(*(this + 1) + 4) == v18 )
    {
      *(_DWORD *)(*(this + 1) + 4) = v17;
    }
    else if ( (void *)*v15 == v18 )
    {
      *v15 = v17;
    }
    else
    {
      v15[2] = v17;
    }
    if ( *(void **)*(this + 1) == v18 )
    {
      if ( *((_BYTE *)v17 + 53) )
      {
        v7 = v15;
      }
      else
      {
        for ( i = v17; !*(_BYTE *)(*i + 53); i = (_DWORD *)*i )
          ;
        v7 = i;
      }
      *(_DWORD *)*(this + 1) = v7;
    }
    if ( *(void **)(*(this + 1) + 8) == v18 )
    {
      if ( *((_BYTE *)v17 + 53) )
      {
        v6 = v15;
      }
      else
      {
        for ( j = v17; !*(_BYTE *)(j[2] + 53); j = (_DWORD *)j[2] )
          ;
        v6 = j;
      }
      *(_DWORD *)(*(this + 1) + 8) = v6;
    }
  }
  else
  {
    *(_DWORD *)(*(_DWORD *)v18 + 4) = v16;
    *v16 = *(_DWORD *)v18;
    if ( v16 == *((_DWORD **)v18 + 2) )
    {
      v15 = v16;
    }
    else
    {
      v15 = (_DWORD *)v16[1];
      if ( !*((_BYTE *)v17 + 53) )
        v17[1] = v15;
      *v15 = v17;
      v16[2] = *((_DWORD *)v18 + 2);
      *(_DWORD *)(*((_DWORD *)v18 + 2) + 4) = v16;
    }
    if ( *(void **)(*(this + 1) + 4) == v18 )
    {
      *(_DWORD *)(*(this + 1) + 4) = v16;
    }
    else if ( **((void ***)v18 + 1) == v18 )
    {
      **((_DWORD **)v18 + 1) = v16;
    }
    else
    {
      *(_DWORD *)(*((_DWORD *)v18 + 1) + 8) = v16;
    }
    v16[1] = *((_DWORD *)v18 + 1);
    v9 = (char *)v18 + 52;
    v10 = *((_BYTE *)v16 + 52);
    *((_BYTE *)v16 + 52) = *((_BYTE *)v18 + 52);
    *v9 = v10;
  }
  if ( *((_BYTE *)v18 + 52) == 1 )
  {
    while ( v17 != *(_DWORD **)(*(this + 1) + 4) && *((_BYTE *)v17 + 52) == 1 )
    {
      if ( v17 == (_DWORD *)*v15 )
      {
        v16 = (_DWORD *)v15[2];
        if ( !*((_BYTE *)v16 + 52) )
        {
          *((_BYTE *)v16 + 52) = 1;
          *((_BYTE *)v15 + 52) = 0;
          sub_68E3C0(v15);
          v16 = (_DWORD *)v15[2];
        }
        if ( *((_BYTE *)v16 + 53) )
        {
          v17 = v15;
        }
        else
        {
          if ( *(_BYTE *)(*v16 + 52) != 1 || *(_BYTE *)(v16[2] + 52) != 1 )
          {
            if ( *(_BYTE *)(v16[2] + 52) == 1 )
            {
              *(_BYTE *)(*v16 + 52) = 1;
              *((_BYTE *)v16 + 52) = 0;
              sub_68E470(v16);
              v16 = (_DWORD *)v15[2];
            }
            *((_BYTE *)v16 + 52) = *((_BYTE *)v15 + 52);
            *((_BYTE *)v15 + 52) = 1;
            *(_BYTE *)(v16[2] + 52) = 1;
            sub_68E3C0(v15);
            break;
          }
          *((_BYTE *)v16 + 52) = 0;
          v17 = v15;
        }
      }
      else
      {
        v16 = (_DWORD *)*v15;
        if ( !*((_BYTE *)v16 + 52) )
        {
          *((_BYTE *)v16 + 52) = 1;
          *((_BYTE *)v15 + 52) = 0;
          sub_68E470(v15);
          v16 = (_DWORD *)*v15;
        }
        if ( *((_BYTE *)v16 + 53) )
        {
          v17 = v15;
        }
        else
        {
          if ( *(_BYTE *)(v16[2] + 52) != 1 || *(_BYTE *)(*v16 + 52) != 1 )
          {
            if ( *(_BYTE *)(*v16 + 52) == 1 )
            {
              *(_BYTE *)(v16[2] + 52) = 1;
              *((_BYTE *)v16 + 52) = 0;
              sub_68E3C0(v16);
              v16 = (_DWORD *)*v15;
            }
            *((_BYTE *)v16 + 52) = *((_BYTE *)v15 + 52);
            *((_BYTE *)v15 + 52) = 1;
            *(_BYTE *)(*v16 + 52) = 1;
            sub_68E470(v15);
            break;
          }
          *((_BYTE *)v16 + 52) = 0;
          v17 = v15;
        }
      }
      v15 = (_DWORD *)v17[1];
    }
    *((_BYTE *)v17 + 52) = 1;
  }
  sub_68F950(v18, v5);
  operator delete(v18);
  if ( *(this + 2) )
    --*(this + 2);
  *a2 = a3;
  a2[1] = a4;
  return a2;
}


//======================================================================
// sub_68E2B0
// entry 0068e2b0  size 50  status ok
//======================================================================

void __thiscall sub_68E2B0(std::exception *this)
{
  *(_DWORD *)this = &std::out_of_range::`vftable';
  *(_DWORD *)this = &std::logic_error::`vftable';
  std::string::~string((char *)this + 12);
  std::exception::~exception(this);
}


//======================================================================
// sub_68E2F0
// entry 0068e2f0  size 75  status ok
//======================================================================

std::exception *__thiscall sub_68E2F0(std::exception *this, char a2)
{
  *(_DWORD *)this = &std::out_of_range::`vftable';
  *(_DWORD *)this = &std::logic_error::`vftable';
  std::string::~string((char *)this + 12);
  std::exception::~exception(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}


//======================================================================
// sub_68E340
// entry 0068e340  size 122  status ok
//======================================================================

std::exception *__thiscall sub_68E340(std::exception *this, const struct exception *a2)
{
  std::exception::exception(this, a2);
  *(_DWORD *)this = &std::logic_error::`vftable';
  std::string::string((char *)this + 12, (char *)a2 + 12);
  *(_DWORD *)this = &std::out_of_range::`vftable';
  return this;
}


//======================================================================
// sub_68E3C0
// entry 0068e3c0  size 166  status ok
//======================================================================

int __thiscall sub_68E3C0(_DWORD *this, int a2)
{
  _DWORD *v3; // [esp+Ch] [ebp-4h]

  v3 = *(_DWORD **)(a2 + 8);
  *(_DWORD *)(a2 + 8) = *v3;
  if ( !*(_BYTE *)(*v3 + 53) )
    *(_DWORD *)(*v3 + 4) = a2;
  v3[1] = *(_DWORD *)(a2 + 4);
  if ( a2 == *(_DWORD *)(*(this + 1) + 4) )
  {
    *(_DWORD *)(*(this + 1) + 4) = v3;
  }
  else if ( a2 == **(_DWORD **)(a2 + 4) )
  {
    **(_DWORD **)(a2 + 4) = v3;
  }
  else
  {
    *(_DWORD *)(*(_DWORD *)(a2 + 4) + 8) = v3;
  }
  *v3 = a2;
  *(_DWORD *)(a2 + 4) = v3;
  return a2;
}


//======================================================================
// sub_68E470
// entry 0068e470  size 163  status ok
//======================================================================

int __thiscall sub_68E470(_DWORD *this, _DWORD *a2)
{
  int v3; // [esp+8h] [ebp-4h]

  v3 = *a2;
  *a2 = *(_DWORD *)(*a2 + 8);
  if ( !*(_BYTE *)(*(_DWORD *)(v3 + 8) + 53) )
    *(_DWORD *)(*(_DWORD *)(v3 + 8) + 4) = a2;
  *(_DWORD *)(v3 + 4) = a2[1];
  if ( a2 == *(_DWORD **)(*(this + 1) + 4) )
  {
    *(_DWORD *)(*(this + 1) + 4) = v3;
  }
  else if ( a2 == *(_DWORD **)(a2[1] + 8) )
  {
    *(_DWORD *)(a2[1] + 8) = v3;
  }
  else
  {
    *(_DWORD *)a2[1] = v3;
  }
  *(_DWORD *)(v3 + 8) = a2;
  a2[1] = v3;
  return v3;
}


//======================================================================
// sub_68E520
// entry 0068e520  size 323  status ok
//======================================================================

void *__thiscall sub_68E520(void *this)
{
  int v2; // [esp+0h] [ebp-70h] BYREF
  _DWORD *v3; // [esp+10h] [ebp-60h]
  _DWORD *v4; // [esp+14h] [ebp-5Ch]
  _DWORD *v5; // [esp+18h] [ebp-58h]
  void *v6; // [esp+1Ch] [ebp-54h]
  _DWORD *v7; // [esp+20h] [ebp-50h]
  char *v8; // [esp+24h] [ebp-4Ch]
  _DWORD *v9; // [esp+28h] [ebp-48h]
  char *v10; // [esp+2Ch] [ebp-44h]
  _DWORD *v11; // [esp+30h] [ebp-40h]
  void *v12; // [esp+34h] [ebp-3Ch]
  int v13; // [esp+4Ch] [ebp-24h]
  int v14; // [esp+50h] [ebp-20h]
  int v15; // [esp+54h] [ebp-1Ch]
  void *v16; // [esp+58h] [ebp-18h]
  int v17; // [esp+5Ch] [ebp-14h]
  int *v18; // [esp+60h] [ebp-10h]
  int v19; // [esp+6Ch] [ebp-4h]

  v18 = &v2;
  v6 = this;
  v16 = (void *)sub_68EE80(1);
  v17 = 0;
  v19 = 0;
  v15 = 0;
  v12 = v16;
  v11 = v16;
  if ( v16 )
  {
    *v11 = v15;
    v5 = v11;
  }
  else
  {
    v5 = 0;
  }
  ++v17;
  v14 = 0;
  v10 = (char *)v16 + 4;
  v9 = (char *)v16 + 4;
  if ( v16 == (void *)-4 )
  {
    v4 = 0;
  }
  else
  {
    *v9 = v14;
    v4 = v9;
  }
  ++v17;
  v13 = 0;
  v8 = (char *)v16 + 8;
  v7 = (char *)v16 + 8;
  if ( v16 == (void *)-8 )
  {
    v3 = 0;
  }
  else
  {
    *v7 = v13;
    v3 = v7;
  }
  *((_BYTE *)v16 + 52) = 1;
  *((_BYTE *)v16 + 53) = 0;
  return v16;
}


//======================================================================
// sub_68E670
// entry 0068e670  size 275  status ok
//======================================================================

void *__thiscall sub_68E670(void *this, int a2, int a3, int a4, int a5, char a6)
{
  int v7; // [esp+0h] [ebp-50h] BYREF
  _DWORD *v8; // [esp+10h] [ebp-40h]
  int v9; // [esp+14h] [ebp-3Ch]
  void *v10; // [esp+18h] [ebp-38h]
  char *v11; // [esp+1Ch] [ebp-34h]
  char *v12; // [esp+20h] [ebp-30h]
  _DWORD *v13; // [esp+34h] [ebp-1Ch]
  void *v14; // [esp+3Ch] [ebp-14h]
  int *v15; // [esp+40h] [ebp-10h]
  int v16; // [esp+4Ch] [ebp-4h]

  v15 = &v7;
  v10 = this;
  v14 = (void *)sub_68F9D0(1);
  v16 = 1;
  v13 = v14;
  if ( v14 )
  {
    *v13 = a2;
    v13[1] = a3;
    v13[2] = a4;
    v11 = (char *)(v13 + 3);
    v9 = std::string::string(v13 + 3, a5);
    LOBYTE(v16) = 2;
    v12 = v11 + 28;
    sub_68D530(v11 + 28, a5 + 28);
    LOBYTE(v16) = 1;
    *((_BYTE *)v13 + 52) = a6;
    *((_BYTE *)v13 + 53) = 0;
    v8 = v13;
  }
  else
  {
    v8 = 0;
  }
  return v14;
}


//======================================================================
// sub_68E790
// entry 0068e790  size 188  status ok
//======================================================================

void __thiscall sub_68E790(_DWORD *this)
{
  int *i; // [esp+4h] [ebp-10h]
  int v3; // [esp+10h] [ebp-4h]

  if ( !*this )
    invalid_parameter_noinfo();
  if ( *(_BYTE *)(*(this + 1) + 53) )
  {
    invalid_parameter_noinfo();
  }
  else if ( *(_BYTE *)(*(_DWORD *)(*(this + 1) + 8) + 53) )
  {
    while ( 1 )
    {
      v3 = *(_DWORD *)(*(this + 1) + 4);
      if ( *(_BYTE *)(v3 + 53) || *(this + 1) != *(_DWORD *)(v3 + 8) )
        break;
      *(this + 1) = v3;
    }
    *(this + 1) = v3;
  }
  else
  {
    for ( i = *(int **)(*(this + 1) + 8); !*(_BYTE *)(*i + 53); i = (int *)*i )
      ;
    *(this + 1) = i;
  }
}


//======================================================================
// sub_68E850
// entry 0068e850  size 372  status ok
//======================================================================

_DWORD *__thiscall sub_68E850(_DWORD **this, _DWORD *a2, _DWORD **a3, int a4, _DWORD **a5, int a6)
{
  _DWORD **v8; // [esp+14h] [ebp-44h]
  int v9; // [esp+18h] [ebp-40h]
  int v10; // [esp+1Ch] [ebp-3Ch]
  int v11; // [esp+2Ch] [ebp-2Ch]
  int v12; // [esp+30h] [ebp-28h]
  char v13[8]; // [esp+38h] [ebp-20h] BYREF
  _DWORD **v14; // [esp+40h] [ebp-18h]
  int v15; // [esp+44h] [ebp-14h]
  _DWORD **v16; // [esp+48h] [ebp-10h]
  int v17; // [esp+4Ch] [ebp-Ch]
  _DWORD **v18; // [esp+50h] [ebp-8h]
  int v19; // [esp+54h] [ebp-4h]

  v12 = **(this + 1);
  v18 = 0;
  v19 = v12;
  if ( !this )
    invalid_parameter_noinfo();
  v18 = this;
  if ( !a3 || a3 != v18 )
    invalid_parameter_noinfo();
  if ( a4 != v19 )
    goto LABEL_19;
  v11 = (int)*(this + 1);
  v16 = 0;
  v17 = v11;
  if ( !this )
    invalid_parameter_noinfo();
  v16 = this;
  if ( !a5 || a5 != v16 )
    invalid_parameter_noinfo();
  if ( a6 == v17 )
  {
    sub_68F520(this);
    v10 = **(this + 1);
    *a2 = 0;
    a2[1] = v10;
    if ( !this )
      invalid_parameter_noinfo();
    *a2 = this;
    return a2;
  }
  else
  {
LABEL_19:
    while ( 1 )
    {
      if ( !a3 || a3 != a5 )
        invalid_parameter_noinfo();
      if ( a4 == a6 )
        break;
      v8 = a3;
      v9 = a4;
      sub_68EDC0(&a3);
      v14 = v8;
      v15 = v9;
      sub_68EF90(v13, v8, v9);
    }
    *a2 = a3;
    a2[1] = a4;
    return a2;
  }
}


//======================================================================
// sub_68E9D0
// entry 0068e9d0  size 262  status ok
//======================================================================

int __thiscall sub_68E9D0(_DWORD *this, int a2)
{
  int result; // eax
  int j; // [esp+8h] [ebp-24h]
  int *i; // [esp+14h] [ebp-18h]
  _DWORD *v6; // [esp+24h] [ebp-8h]

  v6 = (_DWORD *)(*(this + 1) + 4);
  *v6 = sub_68F580(*(_DWORD *)(*(_DWORD *)(a2 + 4) + 4), *(this + 1));
  *(this + 2) = *(_DWORD *)(a2 + 8);
  if ( *(_BYTE *)(*(_DWORD *)(*(this + 1) + 4) + 69) )
  {
    *(_DWORD *)*(this + 1) = *(this + 1);
    result = *(this + 1);
    *(_DWORD *)(result + 8) = result;
  }
  else
  {
    for ( i = *(int **)(*(this + 1) + 4); !*(_BYTE *)(*i + 69); i = (int *)*i )
      ;
    *(_DWORD *)*(this + 1) = i;
    for ( j = *(_DWORD *)(*(this + 1) + 4); !*(_BYTE *)(*(_DWORD *)(j + 8) + 69); j = *(_DWORD *)(j + 8) )
      ;
    *(_DWORD *)(*(this + 1) + 8) = j;
    return j;
  }
  return result;
}


//======================================================================
// sub_68EAE0
// entry 0068eae0  size 97  status ok
//======================================================================

int __thiscall sub_68EAE0(void *this)
{
  int v1; // eax
  int v3; // [esp+0h] [ebp-8h]

  v1 = sub_68F690(this);
  *(_DWORD *)(v3 + 4) = v1;
  *(_BYTE *)(*(_DWORD *)(v3 + 4) + 69) = 1;
  *(_DWORD *)(*(_DWORD *)(v3 + 4) + 4) = *(_DWORD *)(v3 + 4);
  **(_DWORD **)(v3 + 4) = *(_DWORD *)(v3 + 4);
  *(_DWORD *)(*(_DWORD *)(v3 + 4) + 8) = *(_DWORD *)(v3 + 4);
  *(_DWORD *)(v3 + 8) = 0;
  return v3;
}


//======================================================================
// sub_68EB50
// entry 0068eb50  size 166  status ok
//======================================================================

int __thiscall sub_68EB50(_DWORD *this, int a2)
{
  _DWORD *v3; // [esp+Ch] [ebp-4h]

  v3 = *(_DWORD **)(a2 + 8);
  *(_DWORD *)(a2 + 8) = *v3;
  if ( !*(_BYTE *)(*v3 + 69) )
    *(_DWORD *)(*v3 + 4) = a2;
  v3[1] = *(_DWORD *)(a2 + 4);
  if ( a2 == *(_DWORD *)(*(this + 1) + 4) )
  {
    *(_DWORD *)(*(this + 1) + 4) = v3;
  }
  else if ( a2 == **(_DWORD **)(a2 + 4) )
  {
    **(_DWORD **)(a2 + 4) = v3;
  }
  else
  {
    *(_DWORD *)(*(_DWORD *)(a2 + 4) + 8) = v3;
  }
  *v3 = a2;
  *(_DWORD *)(a2 + 4) = v3;
  return a2;
}


//======================================================================
// sub_68EC00
// entry 0068ec00  size 163  status ok
//======================================================================

int __thiscall sub_68EC00(_DWORD *this, _DWORD *a2)
{
  int v3; // [esp+8h] [ebp-4h]

  v3 = *a2;
  *a2 = *(_DWORD *)(*a2 + 8);
  if ( !*(_BYTE *)(*(_DWORD *)(v3 + 8) + 69) )
    *(_DWORD *)(*(_DWORD *)(v3 + 8) + 4) = a2;
  *(_DWORD *)(v3 + 4) = a2[1];
  if ( a2 == *(_DWORD **)(*(this + 1) + 4) )
  {
    *(_DWORD *)(*(this + 1) + 4) = v3;
  }
  else if ( a2 == *(_DWORD **)(a2[1] + 8) )
  {
    *(_DWORD *)(a2[1] + 8) = v3;
  }
  else
  {
    *(_DWORD *)a2[1] = v3;
  }
  *(_DWORD *)(v3 + 8) = a2;
  a2[1] = v3;
  return v3;
}


//======================================================================
// sub_68ECB0
// entry 0068ecb0  size 270  status ok
//======================================================================

void *__thiscall sub_68ECB0(void *this, int a2, int a3, int a4, int a5, char a6)
{
  int v7; // [esp+0h] [ebp-4Ch] BYREF
  _DWORD *v8; // [esp+10h] [ebp-3Ch]
  int v9; // [esp+14h] [ebp-38h]
  void *v10; // [esp+18h] [ebp-34h]
  char *v11; // [esp+1Ch] [ebp-30h]
  _DWORD *v12; // [esp+30h] [ebp-1Ch]
  void *v13; // [esp+38h] [ebp-14h]
  int *v14; // [esp+3Ch] [ebp-10h]
  int v15; // [esp+48h] [ebp-4h]

  v14 = &v7;
  v10 = this;
  v13 = (void *)sub_68FA30(1);
  v15 = 1;
  v12 = v13;
  if ( v13 )
  {
    *v12 = a2;
    v12[1] = a3;
    v12[2] = a4;
    v11 = (char *)(v12 + 3);
    v9 = std::string::string(v12 + 3, a5);
    LOBYTE(v15) = 2;
    std::string::string(v11 + 28, a5 + 28);
    LOBYTE(v15) = 1;
    *((_BYTE *)v12 + 68) = a6;
    *((_BYTE *)v12 + 69) = 0;
    v8 = v12;
  }
  else
  {
    v8 = 0;
  }
  return v13;
}


//======================================================================
// sub_68EDC0
// entry 0068edc0  size 188  status ok
//======================================================================

void __thiscall sub_68EDC0(_DWORD *this)
{
  int *i; // [esp+4h] [ebp-10h]
  int v3; // [esp+10h] [ebp-4h]

  if ( !*this )
    invalid_parameter_noinfo();
  if ( *(_BYTE *)(*(this + 1) + 69) )
  {
    invalid_parameter_noinfo();
  }
  else if ( *(_BYTE *)(*(_DWORD *)(*(this + 1) + 8) + 69) )
  {
    while ( 1 )
    {
      v3 = *(_DWORD *)(*(this + 1) + 4);
      if ( *(_BYTE *)(v3 + 69) || *(this + 1) != *(_DWORD *)(v3 + 8) )
        break;
      *(this + 1) = v3;
    }
    *(this + 1) = v3;
  }
  else
  {
    for ( i = *(int **)(*(this + 1) + 8); !*(_BYTE *)(*i + 69); i = (int *)*i )
      ;
    *(this + 1) = i;
  }
}


//======================================================================
// sub_68EE80
// entry 0068ee80  size 29  status ok
//======================================================================

int __stdcall sub_68EE80(int a1)
{
  return sub_68F9D0(a1);
}


//======================================================================
// sub_68EEA0
// entry 0068eea0  size 234  status ok
//======================================================================

void __thiscall sub_68EEA0(_DWORD *this)
{
  int i; // [esp+4h] [ebp-10h]
  int v3; // [esp+10h] [ebp-4h]

  if ( !*this )
    invalid_parameter_noinfo();
  if ( *(_BYTE *)(*(this + 1) + 53) )
  {
    *(this + 1) = *(_DWORD *)(*(this + 1) + 8);
    if ( *(_BYTE *)(*(this + 1) + 53) )
      invalid_parameter_noinfo();
  }
  else if ( *(_BYTE *)(*(_DWORD *)*(this + 1) + 53) )
  {
    while ( 1 )
    {
      v3 = *(_DWORD *)(*(this + 1) + 4);
      if ( *(_BYTE *)(v3 + 53) || *(this + 1) != *(_DWORD *)v3 )
        break;
      *(this + 1) = v3;
    }
    if ( *(_BYTE *)(*(this + 1) + 53) )
      invalid_parameter_noinfo();
    else
      *(this + 1) = v3;
  }
  else
  {
    for ( i = *(_DWORD *)*(this + 1); !*(_BYTE *)(*(_DWORD *)(i + 8) + 53); i = *(_DWORD *)(i + 8) )
      ;
    *(this + 1) = i;
  }
}


//======================================================================
// sub_68EF90
// entry 0068ef90  size 1421  status ok
//======================================================================

_DWORD *__thiscall sub_68EF90(_DWORD *this, _DWORD *a2, int a3, int a4)
{
  int v5; // [esp+0h] [ebp-D8h]
  _DWORD *v6; // [esp+4h] [ebp-D4h]
  _DWORD *v7; // [esp+8h] [ebp-D0h]
  _BYTE *v9; // [esp+50h] [ebp-88h]
  char v10; // [esp+5Bh] [ebp-7Dh]
  _DWORD *j; // [esp+64h] [ebp-74h]
  _DWORD *i; // [esp+6Ch] [ebp-6Ch]
  _BYTE v13[28]; // [esp+78h] [ebp-60h] BYREF
  _DWORD pExceptionObject[10]; // [esp+94h] [ebp-44h] BYREF
  _DWORD *v15; // [esp+BCh] [ebp-1Ch]
  _DWORD *v16; // [esp+C0h] [ebp-18h]
  _DWORD *v17; // [esp+C4h] [ebp-14h]
  void *v18; // [esp+C8h] [ebp-10h]
  int v19; // [esp+D4h] [ebp-4h]

  if ( *(_BYTE *)(a4 + 69) )
  {
    std::string::string(v13, "invalid map/set<T> iterator");
    v19 = 0;
    sub_68D440((std::exception *)pExceptionObject, (int)v13);
    pExceptionObject[0] = &std::out_of_range::`vftable';
    CxxThrowException(pExceptionObject, (_ThrowInfo *)&_TI3_AVout_of_range_std__);
  }
  v18 = (void *)a4;
  sub_68EDC0(&a3);
  v16 = v18;
  if ( *(_BYTE *)(*(_DWORD *)v18 + 69) )
  {
    v17 = (_DWORD *)v16[2];
  }
  else if ( *(_BYTE *)(v16[2] + 69) )
  {
    v17 = (_DWORD *)*v16;
  }
  else
  {
    v16 = (_DWORD *)a4;
    v17 = *(_DWORD **)(a4 + 8);
  }
  if ( v16 == v18 )
  {
    v15 = (_DWORD *)*((_DWORD *)v18 + 1);
    if ( !*((_BYTE *)v17 + 69) )
      v17[1] = v15;
    if ( *(void **)(*(this + 1) + 4) == v18 )
    {
      *(_DWORD *)(*(this + 1) + 4) = v17;
    }
    else if ( (void *)*v15 == v18 )
    {
      *v15 = v17;
    }
    else
    {
      v15[2] = v17;
    }
    if ( *(void **)*(this + 1) == v18 )
    {
      if ( *((_BYTE *)v17 + 69) )
      {
        v7 = v15;
      }
      else
      {
        for ( i = v17; !*(_BYTE *)(*i + 69); i = (_DWORD *)*i )
          ;
        v7 = i;
      }
      *(_DWORD *)*(this + 1) = v7;
    }
    if ( *(void **)(*(this + 1) + 8) == v18 )
    {
      if ( *((_BYTE *)v17 + 69) )
      {
        v6 = v15;
      }
      else
      {
        for ( j = v17; !*(_BYTE *)(j[2] + 69); j = (_DWORD *)j[2] )
          ;
        v6 = j;
      }
      *(_DWORD *)(*(this + 1) + 8) = v6;
    }
  }
  else
  {
    *(_DWORD *)(*(_DWORD *)v18 + 4) = v16;
    *v16 = *(_DWORD *)v18;
    if ( v16 == *((_DWORD **)v18 + 2) )
    {
      v15 = v16;
    }
    else
    {
      v15 = (_DWORD *)v16[1];
      if ( !*((_BYTE *)v17 + 69) )
        v17[1] = v15;
      *v15 = v17;
      v16[2] = *((_DWORD *)v18 + 2);
      *(_DWORD *)(*((_DWORD *)v18 + 2) + 4) = v16;
    }
    if ( *(void **)(*(this + 1) + 4) == v18 )
    {
      *(_DWORD *)(*(this + 1) + 4) = v16;
    }
    else if ( **((void ***)v18 + 1) == v18 )
    {
      **((_DWORD **)v18 + 1) = v16;
    }
    else
    {
      *(_DWORD *)(*((_DWORD *)v18 + 1) + 8) = v16;
    }
    v16[1] = *((_DWORD *)v18 + 1);
    v9 = (char *)v18 + 68;
    v10 = *((_BYTE *)v16 + 68);
    *((_BYTE *)v16 + 68) = *((_BYTE *)v18 + 68);
    *v9 = v10;
  }
  if ( *((_BYTE *)v18 + 68) == 1 )
  {
    while ( v17 != *(_DWORD **)(*(this + 1) + 4) && *((_BYTE *)v17 + 68) == 1 )
    {
      if ( v17 == (_DWORD *)*v15 )
      {
        v16 = (_DWORD *)v15[2];
        if ( !*((_BYTE *)v16 + 68) )
        {
          *((_BYTE *)v16 + 68) = 1;
          *((_BYTE *)v15 + 68) = 0;
          sub_68EB50(this, (int)v15);
          v16 = (_DWORD *)v15[2];
        }
        if ( *((_BYTE *)v16 + 69) )
        {
          v17 = v15;
        }
        else
        {
          if ( *(_BYTE *)(*v16 + 68) != 1 || *(_BYTE *)(v16[2] + 68) != 1 )
          {
            if ( *(_BYTE *)(v16[2] + 68) == 1 )
            {
              *(_BYTE *)(*v16 + 68) = 1;
              *((_BYTE *)v16 + 68) = 0;
              sub_68EC00(this, v16);
              v16 = (_DWORD *)v15[2];
            }
            *((_BYTE *)v16 + 68) = *((_BYTE *)v15 + 68);
            *((_BYTE *)v15 + 68) = 1;
            *(_BYTE *)(v16[2] + 68) = 1;
            sub_68EB50(this, (int)v15);
            break;
          }
          *((_BYTE *)v16 + 68) = 0;
          v17 = v15;
        }
      }
      else
      {
        v16 = (_DWORD *)*v15;
        if ( !*((_BYTE *)v16 + 68) )
        {
          *((_BYTE *)v16 + 68) = 1;
          *((_BYTE *)v15 + 68) = 0;
          sub_68EC00(this, v15);
          v16 = (_DWORD *)*v15;
        }
        if ( *((_BYTE *)v16 + 69) )
        {
          v17 = v15;
        }
        else
        {
          if ( *(_BYTE *)(v16[2] + 68) != 1 || *(_BYTE *)(*v16 + 68) != 1 )
          {
            if ( *(_BYTE *)(*v16 + 68) == 1 )
            {
              *(_BYTE *)(v16[2] + 68) = 1;
              *((_BYTE *)v16 + 68) = 0;
              sub_68EB50(this, (int)v16);
              v16 = (_DWORD *)*v15;
            }
            *((_BYTE *)v16 + 68) = *((_BYTE *)v15 + 68);
            *((_BYTE *)v15 + 68) = 1;
            *(_BYTE *)(*v16 + 68) = 1;
            sub_68EC00(this, v15);
            break;
          }
          *((_BYTE *)v16 + 68) = 0;
          v17 = v15;
        }
      }
      v15 = (_DWORD *)v17[1];
    }
    *((_BYTE *)v17 + 68) = 1;
  }
  sub_68FA90(v18, v5);
  operator delete(v18);
  if ( *(this + 2) )
    --*(this + 2);
  *a2 = a3;
  a2[1] = a4;
  return a2;
}


//======================================================================
// sub_68F520
// entry 0068f520  size 91  status ok
//======================================================================

_DWORD *__thiscall sub_68F520(_DWORD *this)
{
  sub_68F8F0(*(void **)(*(this + 1) + 4));
  *(_DWORD *)(*(this + 1) + 4) = *(this + 1);
  *(this + 2) = 0;
  *(_DWORD *)*(this + 1) = *(this + 1);
  *(_DWORD *)(*(this + 1) + 8) = *(this + 1);
  return this;
}


//======================================================================
// sub_68F580
// entry 0068f580  size 264  status ok
//======================================================================

void *__thiscall sub_68F580(void **this, int a2, int a3)
{
  int v4; // [esp+0h] [ebp-3Ch] BYREF
  int v5; // [esp+10h] [ebp-2Ch]
  int v6; // [esp+14h] [ebp-28h]
  int *v7; // [esp+18h] [ebp-24h]
  _DWORD *v8; // [esp+24h] [ebp-18h]
  void *v9; // [esp+28h] [ebp-14h]
  int *v10; // [esp+2Ch] [ebp-10h]
  int v11; // [esp+38h] [ebp-4h]

  v10 = &v4;
  v7 = (int *)this;
  v9 = *(this + 1);
  if ( !*(_BYTE *)(a2 + 69) )
  {
    v8 = sub_68ECB0(v7, v7[1], a3, v7[1], a2 + 12, *(_BYTE *)(a2 + 68));
    if ( *((_BYTE *)v9 + 69) )
      v9 = v8;
    v11 = 0;
    v6 = sub_68F580(*(_DWORD *)a2, v8);
    *v8 = v6;
    v5 = sub_68F580(*(_DWORD *)(a2 + 8), v8);
    v8[2] = v5;
    v11 = -1;
  }
  return v9;
}


//======================================================================
// sub_68F690
// entry 0068f690  size 323  status ok
//======================================================================

void *__thiscall sub_68F690(void *this)
{
  int v2; // [esp+0h] [ebp-70h] BYREF
  _DWORD *v3; // [esp+10h] [ebp-60h]
  _DWORD *v4; // [esp+14h] [ebp-5Ch]
  _DWORD *v5; // [esp+18h] [ebp-58h]
  void *v6; // [esp+1Ch] [ebp-54h]
  _DWORD *v7; // [esp+20h] [ebp-50h]
  char *v8; // [esp+24h] [ebp-4Ch]
  _DWORD *v9; // [esp+28h] [ebp-48h]
  char *v10; // [esp+2Ch] [ebp-44h]
  _DWORD *v11; // [esp+30h] [ebp-40h]
  void *v12; // [esp+34h] [ebp-3Ch]
  int v13; // [esp+4Ch] [ebp-24h]
  int v14; // [esp+50h] [ebp-20h]
  int v15; // [esp+54h] [ebp-1Ch]
  void *v16; // [esp+58h] [ebp-18h]
  int v17; // [esp+5Ch] [ebp-14h]
  int *v18; // [esp+60h] [ebp-10h]
  int v19; // [esp+6Ch] [ebp-4h]

  v18 = &v2;
  v6 = this;
  v16 = (void *)sub_68F7E0(1);
  v17 = 0;
  v19 = 0;
  v15 = 0;
  v12 = v16;
  v11 = v16;
  if ( v16 )
  {
    *v11 = v15;
    v5 = v11;
  }
  else
  {
    v5 = 0;
  }
  ++v17;
  v14 = 0;
  v10 = (char *)v16 + 4;
  v9 = (char *)v16 + 4;
  if ( v16 == (void *)-4 )
  {
    v4 = 0;
  }
  else
  {
    *v9 = v14;
    v4 = v9;
  }
  ++v17;
  v13 = 0;
  v8 = (char *)v16 + 8;
  v7 = (char *)v16 + 8;
  if ( v16 == (void *)-8 )
  {
    v3 = 0;
  }
  else
  {
    *v7 = v13;
    v3 = v7;
  }
  *((_BYTE *)v16 + 68) = 1;
  *((_BYTE *)v16 + 69) = 0;
  return v16;
}


//======================================================================
// sub_68F7E0
// entry 0068f7e0  size 29  status ok
//======================================================================

int __stdcall sub_68F7E0(int a1)
{
  return sub_68FA30(a1);
}


//======================================================================
// sub_68F800
// entry 0068f800  size 234  status ok
//======================================================================

void __thiscall sub_68F800(_DWORD *this)
{
  int i; // [esp+4h] [ebp-10h]
  int v3; // [esp+10h] [ebp-4h]

  if ( !*this )
    invalid_parameter_noinfo();
  if ( *(_BYTE *)(*(this + 1) + 69) )
  {
    *(this + 1) = *(_DWORD *)(*(this + 1) + 8);
    if ( *(_BYTE *)(*(this + 1) + 69) )
      invalid_parameter_noinfo();
  }
  else if ( *(_BYTE *)(*(_DWORD *)*(this + 1) + 69) )
  {
    while ( 1 )
    {
      v3 = *(_DWORD *)(*(this + 1) + 4);
      if ( *(_BYTE *)(v3 + 69) || *(this + 1) != *(_DWORD *)v3 )
        break;
      *(this + 1) = v3;
    }
    if ( *(_BYTE *)(*(this + 1) + 69) )
      invalid_parameter_noinfo();
    else
      *(this + 1) = v3;
  }
  else
  {
    for ( i = *(_DWORD *)*(this + 1); !*(_BYTE *)(*(_DWORD *)(i + 8) + 69); i = *(_DWORD *)(i + 8) )
      ;
    *(this + 1) = i;
  }
}


//======================================================================
// sub_68F8F0
// entry 0068f8f0  size 89  status ok
//======================================================================

int __thiscall sub_68F8F0(void *this, _DWORD *a2)
{
  int result; // eax
  int v3; // [esp+0h] [ebp-Ch]
  _DWORD *i; // [esp+8h] [ebp-4h]

  v3 = (int)this;
  for ( i = a2; ; a2 = i )
  {
    result = *((char *)i + 69);
    if ( *((_BYTE *)i + 69) )
      break;
    sub_68F8F0((void *)i[2]);
    i = (_DWORD *)*i;
    sub_68FA90(a2, v3);
    operator delete(a2);
  }
  return result;
}


//======================================================================
// sub_68F950
// entry 0068f950  size 120  status ok
//======================================================================

int __cdecl sub_68F950(char *a1)
{
  sub_68DC60((int)(a1 + 40));
  return std::string::~string(a1 + 12);
}


//======================================================================
// sub_68F9D0
// entry 0068f9d0  size 94  status ok
//======================================================================

void *__cdecl sub_68F9D0(unsigned int a1)
{
  const char *v2; // [esp+0h] [ebp-10h] BYREF
  _DWORD pExceptionObject[3]; // [esp+4h] [ebp-Ch] BYREF

  if ( a1 )
  {
    if ( 0xFFFFFFFF / a1 < 0x38 )
    {
      v2 = 0;
      std::exception::exception((std::exception *)pExceptionObject, &v2);
      pExceptionObject[0] = &std::bad_alloc::`vftable';
      CxxThrowException(pExceptionObject, (_ThrowInfo *)&_TI2_AVbad_alloc_std__);
    }
  }
  else
  {
    a1 = 0;
  }
  return operator new(56 * a1);
}


//======================================================================
// sub_68FA30
// entry 0068fa30  size 94  status ok
//======================================================================

void *__cdecl sub_68FA30(unsigned int a1)
{
  const char *v2; // [esp+0h] [ebp-10h] BYREF
  _DWORD pExceptionObject[3]; // [esp+4h] [ebp-Ch] BYREF

  if ( a1 )
  {
    if ( 0xFFFFFFFF / a1 < 0x48 )
    {
      v2 = 0;
      std::exception::exception((std::exception *)pExceptionObject, &v2);
      pExceptionObject[0] = &std::bad_alloc::`vftable';
      CxxThrowException(pExceptionObject, (_ThrowInfo *)&_TI2_AVbad_alloc_std__);
    }
  }
  else
  {
    a1 = 0;
  }
  return operator new(72 * a1);
}


//======================================================================
// sub_68FA90
// entry 0068fa90  size 113  status ok
//======================================================================

int __cdecl sub_68FA90(char *a1)
{
  std::string::~string(a1 + 40);
  return std::string::~string(a1 + 12);
}


//======================================================================
// sub_68FB10
// entry 0068fb10  size 17  status ok
//======================================================================

int __cdecl sub_68FB10(char *Format)
{
  return sub_62FDE0(Format);
}


//======================================================================
// sub_68FB30
// entry 0068fb30  size 50  status ok
//======================================================================

int __thiscall sub_68FB30(int this)
{
  _AFX_OLE_STATE::_AFX_OLE_STATE((_AFX_OLE_STATE *)this);
  *(_DWORD *)this = &PrintJob::`vftable';
  memset((void *)(this + 8), 0, 0x42u);
  return this;
}


//======================================================================
// sub_68FB70
// entry 0068fb70  size 63  status ok
//======================================================================

void __thiscall sub_68FB70(HDC *this)
{
  *this = (HDC)&PrintJob::`vftable';
  if ( *(this + 6) )
  {
    AbortDoc(*(this + 6));
    DeleteDC(*(this + 6));
  }
  _AFX_OLE_STATE::~_AFX_OLE_STATE((_AFX_OLE_STATE *)this);
}


//======================================================================
// sub_68FE30
// entry 0068fe30  size 67  status ok
//======================================================================

char __thiscall sub_68FE30(HDC *this)
{
  if ( !*(this + 6) )
    return 0;
  if ( StartPage(*(this + 6)) > 0 )
    return 1;
  sub_68FB10("StartPage");
  return 0;
}


//======================================================================
// sub_68FE80
// entry 0068fe80  size 54  status ok
//======================================================================

char __thiscall sub_68FE80(HDC *this)
{
  if ( EndPage(*(this + 6)) > 0 )
    return 1;
  sub_68FB10("EndPage");
  return 0;
}


//======================================================================
// sub_68FEC0
// entry 0068fec0  size 112  status ok
//======================================================================

char __thiscall sub_68FEC0(int this)
{
  int v3; // [esp+4h] [ebp-4h]

  v3 = EndDoc(*(HDC *)(this + 24));
  DeleteDC(*(HDC *)(this + 24));
  GlobalFree(*(HGLOBAL *)(this + 16));
  GlobalFree(*(HGLOBAL *)(this + 20));
  memset((void *)(this + 8), 0, 0x42u);
  if ( v3 > 0 )
    return 1;
  sub_68FB10("EndDoc");
  return 0;
}


//======================================================================
// sub_68FF30
// entry 0068ff30  size 270  status ok
//======================================================================

char __thiscall sub_68FF30(_DWORD *this, int a2, int a3, int *a4, int a5, int a6)
{
  float v8; // [esp+4h] [ebp-1Ch] BYREF
  float v9; // [esp+8h] [ebp-18h] BYREF
  _BYTE v10[19]; // [esp+Ch] [ebp-14h] BYREF
  char v11; // [esp+1Fh] [ebp-1h]

  if ( !*(this + 6) )
    return 0;
  if ( !a4 )
  {
    memset(v10, 0, 0x10u);
    a4 = (int *)v10;
  }
  if ( !(*(unsigned __int8 (__thiscall **)(_DWORD *, int, int *, int))(*this + 32))(this, a3, a4, a5) )
    return 0;
  if ( !(*(unsigned __int8 (__thiscall **)(_DWORD *, int *, int))(*this + 36))(this, a4, a6) )
    return 0;
  v11 = sub_6901B0(a2, a3, a4, a6);
  if ( v11 )
  {
    (*(void (__thiscall **)(_DWORD *, float *, float *))(*this + 40))(this, &v9, &v8);
    *a4 = (int)((double)*a4 / v9);
    a4[2] = (int)((double)a4[2] / v9);
    a4[1] = (int)((double)a4[1] / v8);
    a4[3] = (int)((double)a4[3] / v8);
  }
  return v11;
}


//======================================================================
// sub_690040
// entry 00690040  size 164  status ok
//======================================================================

char __thiscall sub_690040(HDC *this, float *a2, float *a3)
{
  float v5; // [esp+14h] [ebp-14h]
  float DeviceCaps; // [esp+18h] [ebp-10h]
  float v7; // [esp+1Ch] [ebp-Ch]
  HDC hdc; // [esp+20h] [ebp-8h]
  float v9; // [esp+24h] [ebp-4h]

  hdc = GetDC(0);
  DeviceCaps = (float)GetDeviceCaps(hdc, 88);
  v5 = (float)GetDeviceCaps(hdc, 90);
  ReleaseDC(0, hdc);
  v9 = (float)GetDeviceCaps(*(this + 6), 88);
  v7 = (float)GetDeviceCaps(*(this + 6), 90);
  if ( a2 )
    *a2 = v9 / DeviceCaps;
  if ( a3 )
    *a3 = v7 / v5;
  return 1;
}


//======================================================================
// sub_6900F0
// entry 006900f0  size 187  status ok
//======================================================================

char __thiscall sub_6900F0(HDC *this, int *a2, int *a3, int *a4, int *a5, int *a6, int *a7)
{
  if ( !*(this + 6) )
    return 0;
  if ( a2 )
    *a2 = GetDeviceCaps(*(this + 6), 8);
  if ( a3 )
    *a3 = GetDeviceCaps(*(this + 6), 10);
  if ( a4 )
    *a4 = GetDeviceCaps(*(this + 6), 110);
  if ( a5 )
    *a5 = GetDeviceCaps(*(this + 6), 111);
  if ( a6 )
    *a6 = GetDeviceCaps(*(this + 6), 112);
  if ( a7 )
    *a7 = GetDeviceCaps(*(this + 6), 113);
  return 1;
}


//======================================================================
// sub_6901B0
// entry 006901b0  size 496  status ok
//======================================================================

char __thiscall sub_6901B0(HDC *this, int a2, int *a3, int *a4, int a5)
{
  int v6; // eax
  int v7; // eax
  int SrcHeight; // [esp+4h] [ebp-38h]
  BITMAPINFO bmi; // [esp+8h] [ebp-34h] BYREF
  int v11; // [esp+34h] [ebp-8h]
  void *lpBits; // [esp+38h] [ebp-4h]

  v11 = -1;
  bmi.bmiColors[0] = (RGBQUAD)(a3[2] - *a3);
  SrcHeight = a3[3] - a3[1];
  if ( *(_DWORD *)bmi.bmiColors > (unsigned __int16)sub_6135C0((_DWORD *)a2)
    || SrcHeight > (unsigned __int16)sub_6135E0((_DWORD *)a2) )
  {
    return 0;
  }
  memset(&bmi, 0, 0x28u);
  bmi.bmiHeader.biSize = 40;
  bmi.bmiHeader.biPlanes = 1;
  bmi.bmiHeader.biWidth = ATL::COleDateTime::GetStatus(*(_DWORD *)(a2 + 80));
  bmi.bmiHeader.biBitCount = 8 * unknown_libname_726(*(_DWORD *)(a2 + 80));
  if ( unknown_libname_847(*(_DWORD *)(a2 + 80)) >= 0 )
  {
    lpBits = (void *)sub_6238D0(*(_DWORD **)(a2 + 80), 0);
    v7 = pairNode::raw_length(*(pairNode **)(a2 + 80));
    bmi.bmiHeader.biHeight = -v7;
    v11 = StretchDIBits(
            *(this + 6),
            *a4,
            a4[1],
            a4[2] - *a4,
            a4[3] - a4[1],
            *a3,
            v7 - a3[3],
            *(_DWORD *)bmi.bmiColors,
            SrcHeight,
            lpBits,
            &bmi,
            0,
            (DWORD)&unk_CC0020);
  }
  else
  {
    v6 = pairNode::raw_length(*(pairNode **)(a2 + 80));
    lpBits = (void *)sub_6238D0(*(_DWORD **)(a2 + 80), v6 - 1);
    bmi.bmiHeader.biHeight = pairNode::raw_length(*(pairNode **)(a2 + 80));
    v11 = StretchDIBits(
            *(this + 6),
            *a4,
            a4[1],
            a4[2] - *a4,
            a4[3] - a4[1],
            *a3,
            bmi.bmiHeader.biHeight - a3[3],
            *(_DWORD *)bmi.bmiColors,
            SrcHeight,
            lpBits,
            &bmi,
            0,
            (DWORD)&unk_CC0020);
  }
  if ( v11 == -1 )
  {
    sub_68FB10("StretchDIBits Failed.");
    return 0;
  }
  else if ( v11 )
  {
    return 1;
  }
  else
  {
    return sub_6903A0(a2, a3, a4, a5);
  }
}


//======================================================================
// sub_6903A0
// entry 006903a0  size 628  status ok
//======================================================================

bool __thiscall sub_6903A0(HDC *this, int a2, int *a3, int *a4, int a5)
{
  int v7; // [esp+4h] [ebp-30h] BYREF
  int v8; // [esp+8h] [ebp-2Ch]
  int v9; // [esp+Ch] [ebp-28h]
  int v10; // [esp+10h] [ebp-24h]
  int v11; // [esp+14h] [ebp-20h]
  int v12; // [esp+18h] [ebp-1Ch] BYREF
  int v13; // [esp+1Ch] [ebp-18h]
  int v14; // [esp+20h] [ebp-14h]
  int v15; // [esp+24h] [ebp-10h]
  int v16; // [esp+28h] [ebp-Ch]
  int v17; // [esp+2Ch] [ebp-8h]
  int v18; // [esp+30h] [ebp-4h]

  if ( a3[2] == *a3 || a3[3] == a3[1] || a4[2] == *a4 || a4[3] == a4[1] )
    return 0;
  v16 = *a3 + (a3[2] - *a3) / 2;
  v17 = a3[1] + (a3[3] - a3[1]) / 2;
  v18 = *a4 + (a4[2] - *a4) / 2;
  v11 = a4[1] + (a4[3] - a4[1]) / 2;
  v7 = *a3;
  v8 = a3[1];
  v9 = a3[2];
  v10 = a3[3];
  v12 = *a4;
  v13 = a4[1];
  v9 = v16;
  v10 = v17;
  v14 = v18;
  v15 = v11;
  if ( !sub_6901B0(this, a2, &v7, &v12, a5) )
    return 0;
  v7 = *a3;
  v8 = a3[1];
  v9 = a3[2];
  v10 = a3[3];
  v12 = *a4;
  v13 = a4[1];
  v14 = a4[2];
  v7 = v16;
  v10 = v17;
  v12 = v18;
  v15 = v11;
  if ( !sub_6901B0(this, a2, &v7, &v12, a5) )
    return 0;
  v7 = *a3;
  v8 = a3[1];
  v9 = a3[2];
  v10 = a3[3];
  v12 = *a4;
  v13 = a4[1];
  v14 = a4[2];
  v15 = a4[3];
  v9 = v16;
  v8 = v17;
  v14 = v18;
  v13 = v11;
  if ( !sub_6901B0(this, a2, &v7, &v12, a5) )
    return 0;
  v7 = *a3;
  v8 = a3[1];
  v9 = a3[2];
  v10 = a3[3];
  v12 = *a4;
  v13 = a4[1];
  v14 = a4[2];
  v15 = a4[3];
  v7 = v16;
  v8 = v17;
  v12 = v18;
  v13 = v11;
  return sub_6901B0(this, a2, &v7, &v12, a5) != 0;
}


//======================================================================
// sub_690650
// entry 00690650  size 18  status ok
//======================================================================

int __cdecl sub_690650(_DWORD *a1)
{
  *a1 = 0;
  a1[1] = 0;
  a1[2] = 0;
  a1[3] = 0;
  return 0;
}


//======================================================================
// sub_690670
// entry 00690670  size 108  status ok
//======================================================================

void __cdecl sub_690670(int a1)
{
  int i; // edi

  if ( a1 )
  {
    for ( i = 0; i < *(_DWORD *)(a1 + 8); ++i )
    {
      if ( *(_DWORD *)(*(_DWORD *)a1 + 4 * i) )
        free(*(void **)(*(_DWORD *)a1 + 4 * i));
    }
    if ( *(_DWORD *)a1 )
      free(*(void **)a1);
    if ( *(_DWORD *)(a1 + 4) )
      free(*(void **)(a1 + 4));
    if ( *(_DWORD *)(a1 + 12) )
      free(*(void **)(a1 + 12));
  }
  *(_DWORD *)a1 = 0;
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 12) = 0;
}


//======================================================================
// sub_6906E0
// entry 006906e0  size 38  status ok
//======================================================================

void *__cdecl sub_6906E0(_DWORD *a1)
{
  void *result; // eax

  memset(a1, 0, 0x20u);
  result = calloc(1u, 0xE80u);
  a1[7] = result;
  return result;
}


//======================================================================
// sub_690710
// entry 00690710  size 355  status ok
//======================================================================

int __cdecl sub_690710(_DWORD *a1)
{
  int v1; // esi
  int v2; // ebx
  void **v3; // ebp
  int v4; // ebp
  _DWORD *v5; // ebx
  int v6; // ebp
  _DWORD *v7; // ebx
  int v8; // ebp
  _DWORD *v9; // ebx
  int v10; // ebx
  int v11; // edi
  void **v12; // ebp
  int v13; // eax
  int v14; // ebx
  void **v15; // ebp

  v1 = a1[7];
  if ( v1 )
  {
    v2 = 0;
    if ( *(int *)(v1 + 8) > 0 )
    {
      v3 = (void **)(v1 + 32);
      do
      {
        if ( *v3 )
          free(*v3);
        ++v2;
        ++v3;
      }
      while ( v2 < *(_DWORD *)(v1 + 8) );
    }
    v4 = 0;
    if ( *(int *)(v1 + 12) > 0 )
    {
      v5 = (_DWORD *)(v1 + 544);
      do
      {
        ((void (__cdecl *)(_DWORD))(&off_7878E4)[*(v5 - 64)][2])(*v5);
        ++v4;
        ++v5;
      }
      while ( v4 < *(_DWORD *)(v1 + 12) );
    }
    v6 = 0;
    if ( *(int *)(v1 + 16) > 0 )
    {
      v7 = (_DWORD *)(v1 + 1056);
      do
      {
        (*((void (__cdecl **)(_DWORD))*(&off_7878D0 + *(v7 - 64)) + 3))(*v7);
        ++v6;
        ++v7;
      }
      while ( v6 < *(_DWORD *)(v1 + 16) );
    }
    v8 = 0;
    if ( *(int *)(v1 + 20) > 0 )
    {
      v9 = (_DWORD *)(v1 + 1568);
      do
      {
        (*((void (__cdecl **)(_DWORD))*(&off_7878D8 + *(v9 - 64)) + 3))(*v9);
        ++v8;
        ++v9;
      }
      while ( v8 < *(_DWORD *)(v1 + 20) );
    }
    v10 = 0;
    if ( *(int *)(v1 + 24) > 0 )
    {
      v11 = 0;
      v12 = (void **)(v1 + 1824);
      do
      {
        if ( *v12 )
          sub_694A90(*v12);
        v13 = *(_DWORD *)(v1 + 2848);
        if ( v13 )
          sub_694AB0(v11 + v13);
        ++v10;
        ++v12;
        v11 += 44;
      }
      while ( v10 < *(_DWORD *)(v1 + 24) );
    }
    if ( *(_DWORD *)(v1 + 2848) )
      free(*(void **)(v1 + 2848));
    v14 = 0;
    if ( *(int *)(v1 + 28) > 0 )
    {
      v15 = (void **)(v1 + 2852);
      do
      {
        sub_691EC0(*v15);
        ++v14;
        ++v15;
      }
      while ( v14 < *(_DWORD *)(v1 + 28) );
    }
    free((void *)v1);
  }
  memset(a1, 0, 0x20u);
  return 0;
}


//======================================================================
// sub_690880
// entry 00690880  size 256  status ok
//======================================================================

int __cdecl sub_690880(int a1, int a2, _DWORD *a3)
{
  int v3; // ebp
  int v4; // ecx
  char *v5; // edi
  int *v6; // esi
  bool v7; // zf
  int v9; // [esp+8h] [ebp-1Ch] BYREF
  __int16 v10; // [esp+Ch] [ebp-18h]
  _BYTE v11[20]; // [esp+10h] [ebp-14h] BYREF

  if ( a3 )
  {
    sub_69D360(v11, *a3, a3[1]);
    v3 = sub_69D470(v11, 8);
    v9 = 0;
    v10 = 0;
    sub_690980(v11, &v9, 6);
    v4 = 3;
    v5 = aVorbis;
    v6 = &v9;
    v7 = 1;
    do
    {
      if ( !v4 )
        break;
      v7 = *(_WORD *)v6 == *(_WORD *)v5;
      v6 = (int *)((char *)v6 + 2);
      v5 += 2;
      --v4;
    }
    while ( v7 );
    if ( !v7 )
      return -132;
    if ( v3 == 1 )
    {
      if ( a3[2] && !*(_DWORD *)(a1 + 8) )
        return sub_6909B0(a1, v11);
    }
    else if ( v3 == 3 )
    {
      if ( *(_DWORD *)(a1 + 8) )
        return sub_690A90(a2, v11);
    }
    else if ( v3 == 5 && *(_DWORD *)(a1 + 8) && *(_DWORD *)(a2 + 12) )
    {
      return sub_690B70(a1, v11);
    }
  }
  return -133;
}


//======================================================================
// sub_690980
// entry 00690980  size 40  status ok
//======================================================================

void __cdecl sub_690980(int a1, _BYTE *a2, int a3)
{
  int i; // edi

  for ( i = a3; i; --i )
    *a2++ = sub_69D470(a1, 8);
}


//======================================================================
// sub_6909B0
// entry 006909b0  size 215  status ok
//======================================================================

int __cdecl sub_6909B0(_DWORD *a1, int a2)
{
  int *v2; // ebx
  int v4; // eax
  int v5; // edx
  int v6; // ebx

  v2 = (int *)a1[7];
  if ( !v2 )
    return -129;
  v4 = sub_69D470(a2, 32);
  *a1 = v4;
  if ( v4 )
    return -134;
  a1[1] = sub_69D470(a2, 8);
  a1[2] = sub_69D470(a2, 32);
  a1[3] = sub_69D470(a2, 32);
  a1[4] = sub_69D470(a2, 32);
  a1[5] = sub_69D470(a2, 32);
  *v2 = 1 << sub_69D470(a2, 4);
  v5 = 1 << sub_69D470(a2, 4);
  v2[1] = v5;
  if ( (int)a1[2] >= 1 && (int)a1[1] >= 1 )
  {
    v6 = *v2;
    if ( v6 >= 8 && v5 >= v6 && sub_69D470(a2, 1) == 1 )
      return 0;
  }
  sub_690710(a1);
  return -133;
}


//======================================================================
// sub_690A90
// entry 00690a90  size 216  status ok
//======================================================================

int __cdecl sub_690A90(_DWORD *a1, int a2)
{
  int v2; // edi
  _BYTE *v3; // eax
  int v4; // eax
  void *v5; // eax
  size_t v6; // ecx
  int i; // edi
  int v8; // ebx

  v2 = sub_69D470(a2, 32);
  if ( v2 < 0 )
    goto LABEL_7;
  v3 = calloc(v2 + 1, 1u);
  a1[3] = v3;
  sub_690980(a2, v3, v2);
  v4 = sub_69D470(a2, 32);
  a1[2] = v4;
  if ( v4 < 0 )
    goto LABEL_7;
  v5 = calloc(v4 + 1, 4u);
  v6 = a1[2] + 1;
  *a1 = v5;
  a1[1] = calloc(v6, 4u);
  for ( i = 0; i < a1[2]; sub_690980(a2, *(_BYTE **)(*a1 + 4 * i++), v8) )
  {
    v8 = sub_69D470(a2, 32);
    if ( v8 < 0 )
      goto LABEL_7;
    *(_DWORD *)(a1[1] + 4 * i) = v8;
    *(_DWORD *)(*a1 + 4 * i) = calloc(v8 + 1, 1u);
  }
  if ( sub_69D470(a2, 1) != 1 )
  {
LABEL_7:
    sub_690670((int)a1);
    return -133;
  }
  return 0;
}


//======================================================================
// sub_690B70
// entry 00690b70  size 631  status ok
//======================================================================

int __cdecl sub_690B70(_DWORD *a1, int a2)
{
  _DWORD *v2; // ebx
  int v4; // eax
  int v5; // ebp
  _DWORD *v6; // edi
  void *v7; // eax
  int v8; // edi
  int v9; // ebp
  int v10; // eax
  int v11; // ebp
  int *v12; // edi
  unsigned int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // ebp
  int *v17; // edi
  unsigned int v18; // eax
  int v19; // eax
  int v20; // eax
  int v21; // ebp
  int *v22; // edi
  int v23; // eax
  int v24; // eax
  int v25; // eax
  int v26; // ebp
  void **v27; // edi
  int *v28; // eax

  v2 = (_DWORD *)a1[7];
  if ( !v2 )
    return -129;
  v4 = sub_69D470(a2, 8) + 1;
  v5 = 0;
  v2[6] = v4;
  if ( v4 > 0 )
  {
    v6 = v2 + 456;
    do
    {
      v7 = calloc(1u, 0x34u);
      *v6 = v7;
      if ( sub_694FA0(a2, v7) )
        goto LABEL_32;
      ++v5;
      ++v6;
    }
    while ( v5 < v2[6] );
  }
  v8 = sub_69D470(a2, 6) + 1;
  v9 = 0;
  if ( v8 > 0 )
  {
    while ( !sub_69D470(a2, 16) )
    {
      if ( ++v9 >= v8 )
        goto LABEL_10;
    }
    goto LABEL_32;
  }
LABEL_10:
  v10 = sub_69D470(a2, 6) + 1;
  v11 = 0;
  v2[4] = v10;
  if ( v10 > 0 )
  {
    v12 = v2 + 264;
    do
    {
      v13 = sub_69D470(a2, 16);
      *(v12 - 64) = v13;
      if ( v13 > 1 )
        goto LABEL_32;
      v14 = (*((int (__cdecl **)(_DWORD *, int))*(&off_7878D0 + v13) + 1))(a1, a2);
      *v12 = v14;
      if ( !v14 )
        goto LABEL_32;
      ++v11;
      ++v12;
    }
    while ( v11 < v2[4] );
  }
  v15 = sub_69D470(a2, 6) + 1;
  v16 = 0;
  v2[5] = v15;
  if ( v15 > 0 )
  {
    v17 = v2 + 392;
    do
    {
      v18 = sub_69D470(a2, 16);
      *(v17 - 64) = v18;
      if ( v18 > 2 )
        goto LABEL_32;
      v19 = (*((int (__cdecl **)(_DWORD *, int))*(&off_7878D8 + v18) + 1))(a1, a2);
      *v17 = v19;
      if ( !v19 )
        goto LABEL_32;
      ++v16;
      ++v17;
    }
    while ( v16 < v2[5] );
  }
  v20 = sub_69D470(a2, 6) + 1;
  v21 = 0;
  v2[3] = v20;
  if ( v20 > 0 )
  {
    v22 = v2 + 136;
    do
    {
      v23 = sub_69D470(a2, 16);
      *(v22 - 64) = v23;
      if ( v23 )
        goto LABEL_32;
      v24 = ((int (__cdecl *)(_DWORD *, int))off_7878E4[1])(a1, a2);
      *v22 = v24;
      if ( !v24 )
        goto LABEL_32;
      ++v21;
      ++v22;
    }
    while ( v21 < v2[3] );
  }
  v25 = sub_69D470(a2, 6) + 1;
  v26 = 0;
  v2[2] = v25;
  if ( v25 > 0 )
  {
    v27 = (void **)(v2 + 8);
    do
    {
      *v27 = calloc(1u, 0x10u);
      *(_DWORD *)*v27 = sub_69D470(a2, 1);
      *((_DWORD *)*v27 + 1) = sub_69D470(a2, 16);
      *((_DWORD *)*v27 + 2) = sub_69D470(a2, 16);
      *((_DWORD *)*v27 + 3) = sub_69D470(a2, 8);
      v28 = (int *)*v27;
      if ( *((int *)*v27 + 1) >= 1 || v28[2] >= 1 || v28[3] >= v2[3] )
        goto LABEL_32;
      ++v26;
      ++v27;
    }
    while ( v26 < v2[2] );
  }
  if ( sub_69D470(a2, 1) != 1 )
  {
LABEL_32:
    sub_690710(a1);
    return -133;
  }
  return 0;
}


//======================================================================
// sub_690DF0
// entry 00690df0  size 76  status ok
//======================================================================

int __cdecl sub_690DF0(_DWORD *a1, _DWORD *a2)
{
  _DWORD *v2; // edi

  memset(a2, 0, 0x70u);
  a2[16] = a1;
  a2[19] = 0;
  a2[17] = 0;
  if ( *a1 )
  {
    v2 = calloc(1u, 0x48u);
    a2[26] = v2;
    sub_69D1D0(a2 + 1);
    v2[1] = -971228160;
  }
  return 0;
}


//======================================================================
// sub_690E40
// entry 00690e40  size 108  status ok
//======================================================================

int __cdecl sub_690E40(_DWORD *a1, int a2)
{
  size_t v2; // edi
  _DWORD *v3; // eax
  int v4; // ecx
  int result; // eax

  v2 = (a2 + 7) & 0xFFFFFFF8;
  if ( (signed int)(v2 + a1[18]) > a1[19] )
  {
    if ( a1[17] )
    {
      v3 = malloc(8u);
      a1[20] += a1[18];
      v3[1] = a1[21];
      *v3 = a1[17];
      a1[21] = v3;
    }
    a1[19] = v2;
    a1[17] = malloc(v2);
    a1[18] = 0;
  }
  v4 = a1[18];
  result = v4 + a1[17];
  a1[18] = v2 + v4;
  return result;
}


//======================================================================
// sub_690EB0
// entry 00690eb0  size 105  status ok
//======================================================================

int __cdecl sub_690EB0(int a1)
{
  int v1; // esi
  int v2; // ebx
  int result; // eax
  void *v4; // eax
  int v5; // ecx

  v1 = *(_DWORD *)(a1 + 84);
  if ( v1 )
  {
    do
    {
      v2 = *(_DWORD *)(v1 + 4);
      free(*(void **)v1);
      *(_DWORD *)v1 = 0;
      *(_DWORD *)(v1 + 4) = 0;
      free((void *)v1);
      v1 = v2;
    }
    while ( v2 );
  }
  result = *(_DWORD *)(a1 + 80);
  if ( result )
  {
    v4 = realloc(*(void **)(a1 + 68), result + *(_DWORD *)(a1 + 76));
    v5 = *(_DWORD *)(a1 + 76);
    *(_DWORD *)(a1 + 68) = v4;
    result = *(_DWORD *)(a1 + 80);
    *(_DWORD *)(a1 + 80) = 0;
    *(_DWORD *)(a1 + 76) = result + v5;
  }
  *(_DWORD *)(a1 + 72) = 0;
  *(_DWORD *)(a1 + 84) = 0;
  return result;
}


//======================================================================
// sub_690F20
// entry 00690f20  size 81  status ok
//======================================================================

int __cdecl sub_690F20(int a1)
{
  _DWORD *v1; // eax

  v1 = *(_DWORD **)(a1 + 64);
  if ( v1 && *v1 )
    sub_69D330(a1 + 4);
  sub_690EB0(a1);
  if ( *(_DWORD *)(a1 + 68) )
    free(*(void **)(a1 + 68));
  if ( *(_DWORD *)(a1 + 104) )
    free(*(void **)(a1 + 104));
  memset((void *)a1, 0, 0x70u);
  return 0;
}


//======================================================================
// sub_690F80
// entry 00690f80  size 919  status ok
//======================================================================

int __cdecl sub_690F80(_DWORD *a1, _DWORD *a2, int a3)
{
  _DWORD *v3; // esi
  int v6; // ebp
  _DWORD *v7; // edi
  _DWORD *v8; // ebp
  bool v9; // cc
  _DWORD *v10; // ebp
  int *v11; // ebp
  int i; // ebp
  int v13; // eax
  _DWORD *v14; // ebp
  int v15; // eax
  char *v16; // edx
  _DWORD *v17; // ebp
  int v18; // eax
  char *v19; // edx
  int v20; // [esp+8h] [ebp+4h]
  int v21; // [esp+8h] [ebp+4h]
  int v22; // [esp+8h] [ebp+4h]
  int v23; // [esp+8h] [ebp+4h]
  int v24; // [esp+8h] [ebp+4h]
  int v25; // [esp+10h] [ebp+Ch]
  int v26; // [esp+10h] [ebp+Ch]
  int v27; // [esp+10h] [ebp+Ch]

  v3 = (_DWORD *)a2[7];
  if ( !v3 )
    return 1;
  v6 = v3[926];
  memset(a1, 0, 0x70u);
  v7 = calloc(1u, 0xC0u);
  a1[26] = v7;
  a1[1] = a2;
  v7[11] = sub_698A00(v3[2]);
  v7[3] = calloc(1u, 4u);
  v7[4] = calloc(1u, 4u);
  *(_DWORD *)v7[3] = calloc(1u, 0x14u);
  *(_DWORD *)v7[4] = calloc(1u, 0x14u);
  sub_6975B0(*(_DWORD *)v7[3], (int)*v3 >> v6);
  sub_6975B0(*(_DWORD *)v7[4], (int)v3[1] >> v6);
  v7[1] = sub_698A00(*v3) - 6;
  v7[2] = sub_698A00(v3[1]) - 6;
  if ( a3 )
  {
    sub_697380(v7 + 5, *v3);
    sub_697380(v7 + 8, v3[1]);
    if ( !v3[712] )
    {
      v3[712] = calloc(v3[6], 0x2Cu);
      v20 = 0;
      if ( (int)v3[6] > 0 )
      {
        v25 = 0;
        v8 = v3 + 456;
        do
        {
          sub_694B10(v25 + v3[712], *v8++);
          v9 = ++v20 < v3[6];
          v25 += 44;
        }
        while ( v9 );
      }
    }
    v7[14] = calloc(v3[7], 0x30u);
    v21 = 0;
    if ( (int)v3[7] > 0 )
    {
      v26 = 0;
      v10 = v3 + 713;
      do
      {
        sub_691EE0(v26 + v7[14], *v10, v3 + 717, v3[*(_DWORD *)*v10] / 2, a2[2]);
        ++v10;
        v9 = ++v21 < v3[7];
        v26 += 48;
      }
      while ( v9 );
    }
    *a1 = 1;
  }
  else if ( !v3[712] )
  {
    v3[712] = calloc(v3[6], 0x2Cu);
    v22 = 0;
    if ( (int)v3[6] > 0 )
    {
      v27 = 0;
      v11 = v3 + 456;
      do
      {
        sub_694B70((void *)(v27 + v3[712]), *v11);
        sub_694A90((void *)*v11);
        *v11++ = 0;
        ++v22;
        v27 += 44;
      }
      while ( v22 < v3[6] );
    }
  }
  a1[4] = v3[1];
  a1[2] = malloc(4 * a2[1]);
  a1[3] = malloc(4 * a2[1]);
  for ( i = 0; i < a2[1]; ++i )
    *(_DWORD *)(a1[2] + 4 * i) = calloc(a1[4], 4u);
  a1[9] = 0;
  a1[10] = 0;
  v13 = v3[1] / 2;
  a1[12] = v13;
  a1[5] = v13;
  v7[12] = calloc(v3[4], 4u);
  v7[13] = calloc(v3[5], 4u);
  v23 = 0;
  if ( (int)v3[4] > 0 )
  {
    v14 = v3 + 264;
    do
    {
      v15 = (*((int (__cdecl **)(_DWORD *, _DWORD))*(&off_7878D0 + *(v14 - 64)) + 2))(a1, *v14);
      v16 = (char *)v14++ - 1056 - (_DWORD)v3;
      *(_DWORD *)&v16[v7[12]] = v15;
      ++v23;
    }
    while ( v23 < v3[4] );
  }
  v24 = 0;
  if ( (int)v3[5] > 0 )
  {
    v17 = v3 + 392;
    do
    {
      v18 = (*((int (__cdecl **)(_DWORD *, _DWORD))*(&off_7878D8 + *(v17 - 64)) + 2))(a1, *v17);
      v19 = (char *)v17++ - 1568 - (_DWORD)v3;
      *(_DWORD *)&v19[v7[13]] = v18;
      ++v24;
    }
    while ( v24 < v3[5] );
  }
  return 0;
}


//======================================================================
// sub_691320
// entry 00691320  size 547  status ok
//======================================================================

void __cdecl sub_691320(int a1)
{
  void **v1; // edi
  int v2; // ecx
  _DWORD *v3; // ebp
  _DWORD *v4; // esi
  _DWORD *v5; // eax
  _DWORD *v6; // eax
  int v7; // ebx
  _DWORD *v8; // edi
  int v9; // ebx
  _DWORD *v10; // edi
  int v11; // ebx
  int v12; // edi
  int i; // ebx
  int v14; // [esp+4h] [ebp-4h]

  v1 = (void **)a1;
  if ( a1 )
  {
    v2 = *(_DWORD *)(a1 + 4);
    v14 = v2;
    if ( v2 )
      v3 = *(_DWORD **)(v2 + 28);
    else
      v3 = 0;
    v4 = *(_DWORD **)(a1 + 104);
    if ( v4 )
    {
      if ( *v4 )
      {
        sub_695E30(*v4);
        free((void *)*v4);
      }
      v5 = (_DWORD *)v4[3];
      if ( v5 )
      {
        sub_697780(*v5);
        free(*(void **)v4[3]);
        free((void *)v4[3]);
      }
      v6 = (_DWORD *)v4[4];
      if ( v6 )
      {
        sub_697780(*v6);
        free(*(void **)v4[4]);
        free((void *)v4[4]);
      }
      if ( v4[12] )
      {
        v7 = 0;
        if ( (int)v3[4] > 0 )
        {
          v8 = v3 + 200;
          do
            (*((void (__cdecl **)(_DWORD))*(&off_7878D0 + *v8++) + 4))(*(_DWORD *)(v4[12] + 4 * v7++));
          while ( v7 < v3[4] );
        }
        free((void *)v4[12]);
        v1 = (void **)a1;
      }
      if ( v4[13] )
      {
        v9 = 0;
        if ( (int)v3[5] > 0 )
        {
          v10 = v3 + 328;
          do
            (*((void (__cdecl **)(_DWORD))*(&off_7878D8 + *v10++) + 4))(*(_DWORD *)(v4[13] + 4 * v9++));
          while ( v9 < v3[5] );
        }
        free((void *)v4[13]);
        v1 = (void **)a1;
      }
      if ( v4[14] )
      {
        v11 = 0;
        if ( (int)v3[7] > 0 )
        {
          v12 = 0;
          do
          {
            sub_692C20(v12 + v4[14]);
            ++v11;
            v12 += 48;
          }
          while ( v11 < v3[7] );
        }
        free((void *)v4[14]);
        v1 = (void **)a1;
      }
      if ( v4[15] )
        sub_691EA0((void *)v4[15]);
      sub_695D30(v4 + 20);
      sub_697570(v4 + 5);
      sub_697570(v4 + 8);
      v2 = v14;
    }
    if ( v1[2] )
    {
      for ( i = 0; i < *(_DWORD *)(v2 + 4); ++i )
      {
        if ( *((_DWORD *)v1[2] + i) )
        {
          free(*((void **)v1[2] + i));
          v2 = v14;
        }
      }
      free(v1[2]);
      if ( v1[3] )
        free(v1[3]);
    }
    if ( v4 )
    {
      if ( v4[16] )
        free((void *)v4[16]);
      if ( v4[17] )
        free((void *)v4[17]);
      if ( v4[18] )
        free((void *)v4[18]);
      free(v4);
    }
    memset(v1, 0, 0x70u);
  }
}


//======================================================================
// sub_691550
// entry 00691550  size 108  status ok
//======================================================================

int __cdecl sub_691550(_DWORD *a1)
{
  int v1; // edi
  int v2; // ecx
  int v4; // edx
  int v5; // esi
  int v6; // edx
  int v7; // edx

  v1 = a1[26];
  v2 = a1[1];
  if ( !v1 )
    return -1;
  if ( !v2 )
    return -1;
  v4 = *(_DWORD *)(v2 + 28);
  if ( !v4 )
    return -1;
  v5 = *(_DWORD *)(v4 + 3704);
  v6 = *(_DWORD *)(v4 + 4);
  a1[8] = 0;
  v7 = v6 >> (v5 + 1);
  a1[12] = v7;
  a1[6] = -1;
  a1[14] = -1;
  a1[15] = -1;
  a1[16] = -1;
  a1[5] = v7 >> v5;
  a1[17] = -1;
  *(_DWORD *)(v1 + 184) = -1;
  *(_DWORD *)(v1 + 188) = -1;
  return 0;
}


//======================================================================
// sub_6915C0
// entry 006915c0  size 45  status ok
//======================================================================

int __cdecl sub_6915C0(_DWORD *a1, _DWORD *a2)
{
  if ( sub_690F80(a1, a2, 0) )
    return 1;
  sub_691550(a1);
  return 0;
}


//======================================================================
// sub_6915F0
// entry 006915f0  size 1613  status ok
//======================================================================

int __cdecl sub_6915F0(int a1, int a2)
{
  _DWORD *v3; // ebx
  int v4; // edi
  int *v5; // ebp
  int v7; // eax
  unsigned int v8; // eax
  unsigned int v9; // ecx
  int v10; // eax
  int v11; // edi
  int v12; // ebp
  __int64 v13; // kr30_8
  unsigned int v14; // ecx
  unsigned __int64 v15; // kr38_8
  unsigned int v16; // ecx
  unsigned __int64 v17; // kr40_8
  unsigned int v18; // ecx
  unsigned __int64 v19; // kr48_8
  int v20; // ecx
  int v21; // ebp
  int v22; // eax
  int v23; // eax
  int v24; // ecx
  int v25; // eax
  float *v26; // eax
  double v27; // st6
  bool v28; // zf
  int v29; // ecx
  int v30; // eax
  int v31; // edx
  int v32; // ecx
  float *v33; // ecx
  int v34; // ecx
  int v35; // ebx
  int v36; // ebp
  int v37; // edx
  int v38; // ecx
  int v39; // eax
  int v40; // edx
  float *v41; // edx
  _DWORD *v42; // eax
  int v43; // ecx
  _DWORD *v44; // eax
  int v45; // ecx
  int v46; // eax
  int v47; // eax
  int v48; // ecx
  int v49; // edx
  int v50; // eax
  float *v51; // eax
  int v52; // eax
  __int64 v53; // rax
  __int64 v54; // rax
  unsigned int v55; // ecx
  unsigned int v56; // edx
  unsigned int v57; // eax
  unsigned int v58; // edi
  int v59; // edi
  int v60; // eax
  __int64 v61; // rax
  unsigned int v62; // eax
  int v63; // ecx
  unsigned int v64; // edx
  int v65; // edi
  int v66; // eax
  int v67; // [esp+10h] [ebp-3Ch]
  int v68; // [esp+14h] [ebp-38h]
  int v69; // [esp+18h] [ebp-34h]
  int v70; // [esp+1Ch] [ebp-30h]
  float *v71; // [esp+1Ch] [ebp-30h]
  int v72; // [esp+20h] [ebp-2Ch]
  int v73; // [esp+24h] [ebp-28h]
  int *v74; // [esp+28h] [ebp-24h]
  int v75; // [esp+2Ch] [ebp-20h]
  int v76; // [esp+2Ch] [ebp-20h]
  int v77; // [esp+2Ch] [ebp-20h]
  int v78; // [esp+30h] [ebp-1Ch]
  int j; // [esp+30h] [ebp-1Ch]
  int v80; // [esp+30h] [ebp-1Ch]
  int v81; // [esp+30h] [ebp-1Ch]
  int v82; // [esp+30h] [ebp-1Ch]
  int v83; // [esp+34h] [ebp-18h]
  int i; // [esp+38h] [ebp-14h]
  int v85; // [esp+38h] [ebp-14h]
  int v86; // [esp+44h] [ebp-8h]
  int k; // [esp+44h] [ebp-8h]
  int v88; // [esp+48h] [ebp-4h]
  int v89; // [esp+48h] [ebp-4h]
  int v90; // [esp+50h] [ebp+4h]

  v3 = (_DWORD *)a2;
  v4 = *(_DWORD *)(a1 + 104);
  v83 = *(_DWORD *)(a1 + 4);
  v68 = v4;
  v5 = *(int **)(v83 + 28);
  v74 = v5;
  v90 = v5[926];
  if ( !a2 )
    return -131;
  v7 = *(_DWORD *)(a1 + 24);
  if ( *(_DWORD *)(a1 + 20) > v7 && v7 != -1 )
    return -131;
  v8 = *(_DWORD *)(a1 + 64);
  *(_DWORD *)(a1 + 36) = *(_DWORD *)(a1 + 40);
  v9 = *(_DWORD *)(a1 + 68);
  *(_DWORD *)(a1 + 40) = *(_DWORD *)(a2 + 28);
  *(_DWORD *)(a1 + 44) = -1;
  if ( (v9 & v8) == 0xFFFFFFFF || __PAIR64__(v9, v8) + 1 != *(_QWORD *)(a2 + 56) )
  {
    *(_DWORD *)(a1 + 56) = -1;
    *(_DWORD *)(a1 + 60) = -1;
    *(_DWORD *)(v4 + 184) = -1;
    *(_DWORD *)(v4 + 188) = -1;
  }
  *(_DWORD *)(a1 + 64) = *(_DWORD *)(a2 + 56);
  *(_DWORD *)(a1 + 68) = *(_DWORD *)(a2 + 60);
  if ( *(_DWORD *)a2 )
  {
    v10 = v5[*(_DWORD *)(a1 + 40)];
    v11 = *v5 >> (v90 + 1);
    v12 = v5[1] >> (v90 + 1);
    v72 = v10 >> (v90 + 1);
    v13 = *(int *)(a2 + 88) + *(_QWORD *)(a1 + 72);
    *(_DWORD *)(a1 + 72) = v13;
    v14 = *(_DWORD *)(a1 + 80);
    *(_DWORD *)(a1 + 76) = HIDWORD(v13);
    v69 = v12;
    v15 = *(int *)(a2 + 92) + __PAIR64__(*(_DWORD *)(a1 + 84), v14);
    *(_DWORD *)(a1 + 80) = v15;
    v16 = *(_DWORD *)(a1 + 88);
    *(_DWORD *)(a1 + 84) = HIDWORD(v15);
    v17 = *(int *)(a2 + 96) + __PAIR64__(*(_DWORD *)(a1 + 92), v16);
    *(_DWORD *)(a1 + 88) = v17;
    v18 = *(_DWORD *)(a1 + 96);
    *(_DWORD *)(a1 + 92) = HIDWORD(v17);
    v19 = *(int *)(a2 + 100) + __PAIR64__(*(_DWORD *)(a1 + 100), v18);
    *(_DWORD *)(a1 + 96) = v19;
    v20 = *(_DWORD *)(a1 + 48);
    *(_DWORD *)(a1 + 100) = HIDWORD(v19);
    if ( v20 )
    {
      v73 = v12;
      v67 = 0;
    }
    else
    {
      v73 = 0;
      v67 = v12;
    }
    v21 = 0;
    v70 = 0;
    if ( *(int *)(v83 + 4) > 0 )
    {
      while ( 1 )
      {
        v22 = *(_DWORD *)(a1 + 40);
        if ( !*(_DWORD *)(a1 + 36) )
          break;
        if ( v22 )
        {
          v23 = sub_698770(*(_DWORD *)(v68 + 8) - v90);
          v24 = *(_DWORD *)(*(_DWORD *)(a1 + 8) + 4 * v21) + 4 * v67;
          if ( v69 > 0 )
          {
            v71 = (float *)(v23 + 4 * v69 - 4);
            v78 = *(_DWORD *)(*v3 + 4 * v21) - v23;
            v25 = v23 - v24;
            v75 = v69;
            for ( i = v25; ; v25 = i )
            {
              v26 = (float *)(v24 + v25);
              v24 += 4;
              v27 = *v71-- * *(float *)(v24 - 4);
              v28 = v75-- == 1;
              *(float *)(v24 - 4) = *(float *)((char *)v26 + v78) * *v26 + v27;
              if ( v28 )
                break;
            }
          }
          goto LABEL_37;
        }
        v29 = sub_698770(*(_DWORD *)(v68 + 4) - v90);
        v30 = *(_DWORD *)(*(_DWORD *)(a1 + 8) + 4 * v21) + 4 * (v67 + v69 / 2 - v11 / 2);
        v3 = (_DWORD *)a2;
        if ( v11 > 0 )
        {
          v31 = v29 + 4 * v11 - 4;
          v76 = v11;
          v85 = *(_DWORD *)(*(_DWORD *)a2 + 4 * v21) - v29;
          v32 = v29 - v30;
          for ( j = v32; ; v32 = j )
          {
            v33 = (float *)(v30 + v32);
            v31 -= 4;
            v30 += 4;
            v28 = v76-- == 1;
            *(float *)(v30 - 4) = *(float *)((char *)v33 + v85) * *v33 + *(float *)(v31 + 4) * *(float *)(v30 - 4);
            if ( v28 )
              break;
          }
LABEL_36:
          v3 = (_DWORD *)a2;
        }
LABEL_37:
        v44 = (_DWORD *)(4 * v73 + *(_DWORD *)(*(_DWORD *)(a1 + 8) + 4 * v21));
        if ( v72 > 0 )
        {
          v45 = 4 * v72 + *(_DWORD *)(*v3 + 4 * v21) - (_DWORD)v44;
          v81 = v72;
          do
          {
            *v44 = *(_DWORD *)((char *)v44 + v45);
            ++v44;
            --v81;
          }
          while ( v81 );
        }
        v70 = ++v21;
        if ( v21 >= *(_DWORD *)(v83 + 4) )
          goto LABEL_41;
      }
      v34 = *(_DWORD *)(v68 + 4);
      if ( v22 )
      {
        v35 = sub_698770(v34 - v90);
        v36 = *(_DWORD *)(*(_DWORD *)(a1 + 8) + 4 * v21) + 4 * v67;
        v88 = v69 / 2;
        v86 = v11 / 2;
        v37 = 0;
        v80 = *(_DWORD *)(*(_DWORD *)a2 + 4 * v70) + 4 * (v69 / 2 - v11 / 2);
        if ( v11 > 0 )
        {
          v38 = v36;
          v39 = v35 + 4 * v11 - 4;
          v40 = v35 - v36;
          v77 = v11;
          while ( 1 )
          {
            v41 = (float *)(v38 + v40);
            v39 -= 4;
            v38 += 4;
            v28 = v77-- == 1;
            *(float *)(v38 - 4) = *(float *)((char *)v41 + v80 - v35) * *v41 + *(float *)(v39 + 4) * *(float *)(v38 - 4);
            if ( v28 )
              break;
            v40 = v35 - v36;
          }
          v37 = v11;
        }
        if ( v37 < v86 + v88 )
        {
          v42 = (_DWORD *)(v36 + 4 * v37);
          v43 = v86 + v88 - v37;
          do
          {
            *v42 = *(_DWORD *)((char *)v42 + v80 - v36);
            ++v42;
            --v43;
          }
          while ( v43 );
        }
        v21 = v70;
      }
      else
      {
        v47 = sub_698770(v34 - v90);
        v48 = *(_DWORD *)(*(_DWORD *)(a1 + 8) + 4 * v21) + 4 * v67;
        if ( v11 <= 0 )
          goto LABEL_37;
        v49 = v47 + 4 * v11 - 4;
        v82 = v11;
        v89 = *(_DWORD *)(*v3 + 4 * v21) - v47;
        v50 = v47 - v48;
        for ( k = v50; ; v50 = k )
        {
          v51 = (float *)(v48 + v50);
          v49 -= 4;
          v48 += 4;
          v28 = v82-- == 1;
          *(float *)(v48 - 4) = *(float *)((char *)v51 + v89) * *v51 + *(float *)(v49 + 4) * *(float *)(v48 - 4);
          if ( v28 )
            break;
        }
      }
      goto LABEL_36;
    }
LABEL_41:
    v46 = *(_DWORD *)(a1 + 24);
    v5 = v74;
    *(_DWORD *)(a1 + 48) = *(_DWORD *)(a1 + 48) == 0 ? v69 : 0;
    if ( v46 == -1 )
    {
      *(_DWORD *)(a1 + 24) = v73;
      *(_DWORD *)(a1 + 20) = v73;
    }
    else
    {
      v52 = *(_DWORD *)(a1 + 36);
      *(_DWORD *)(a1 + 24) = v67;
      *(_DWORD *)(a1 + 20) = v67 + ((v74[*(_DWORD *)(a1 + 40)] / 4 + v74[v52] / 4) >> v90);
    }
    v4 = v68;
  }
  if ( (*(_DWORD *)(v4 + 188) & *(_DWORD *)(v4 + 184)) == -1 )
  {
    LODWORD(v53) = 0;
    *(_DWORD *)(v4 + 188) = 0;
  }
  else
  {
    v54 = v5[*(_DWORD *)(a1 + 36)];
    v53 = *(_QWORD *)(v4 + 184) + (((BYTE4(v54) & 3) + (int)v54) >> 2) + v5[*(_DWORD *)(a1 + 40)] / 4;
    *(_DWORD *)(v4 + 188) = HIDWORD(v53);
  }
  *(_DWORD *)(v4 + 184) = v53;
  if ( (*(_DWORD *)(a1 + 60) & *(_DWORD *)(a1 + 56)) == -1 )
  {
    v55 = v3[13];
    if ( (v55 & v3[12]) != 0xFFFFFFFF )
    {
      *(_DWORD *)(a1 + 56) = v3[12];
      v56 = *(_DWORD *)(a1 + 56);
      *(_DWORD *)(a1 + 60) = v55;
      v57 = *(_DWORD *)(v4 + 184);
      v58 = *(_DWORD *)(v4 + 188);
      if ( __SPAIR64__(v58, v57) > __SPAIR64__(v55, v56) )
      {
        if ( v3[11] )
        {
          *(_DWORD *)(a1 + 20) -= (__int64)(__PAIR64__(v58, v57) - __PAIR64__(v55, v56)) >> v90;
        }
        else
        {
          v59 = ((__int64)(__PAIR64__(v58, v57) - __PAIR64__(v55, v56)) >> v90) + *(_DWORD *)(a1 + 24);
          v60 = *(_DWORD *)(a1 + 20);
          *(_DWORD *)(a1 + 24) = v59;
          if ( v59 > v60 )
            *(_DWORD *)(a1 + 24) = v60;
        }
      }
    }
  }
  else
  {
    v61 = v5[*(_DWORD *)(a1 + 36)];
    *(_QWORD *)(a1 + 56) += (((BYTE4(v61) & 3) + (int)v61) >> 2) + v5[*(_DWORD *)(a1 + 40)] / 4;
    v62 = v3[12];
    v63 = v3[13];
    if ( (v63 & v62) != 0xFFFFFFFF )
    {
      v64 = *(_DWORD *)(a1 + 56);
      v65 = *(_DWORD *)(a1 + 60);
      if ( v64 != v62 || v65 != v63 )
      {
        if ( v65 >= v63 && (v65 > v63 || v64 > v62) )
        {
          v66 = *(_DWORD *)(a1 + 56) - v3[12];
          if ( v66 )
          {
            if ( v3[11] )
              *(_DWORD *)(a1 + 20) -= v66 >> v90;
          }
        }
        *(_DWORD *)(a1 + 56) = v3[12];
        *(_DWORD *)(a1 + 60) = v3[13];
      }
    }
  }
  if ( v3[11] )
    *(_DWORD *)(a1 + 32) = 1;
  return 0;
}


//======================================================================
// sub_691C40
// entry 00691c40  size 88  status ok
//======================================================================

int __cdecl sub_691C40(_DWORD *a1, _DWORD *a2)
{
  int v2; // eax
  int v3; // edx
  int i; // eax
  int v5; // edi

  v2 = a1[6];
  v3 = a1[1];
  if ( v2 <= -1 || v2 >= a1[5] )
    return 0;
  if ( a2 )
  {
    for ( i = 0; i < *(_DWORD *)(v3 + 4); *(_DWORD *)(a1[3] + 4 * i - 4) = v5 + 4 * a1[6] )
      v5 = *(_DWORD *)(a1[2] + 4 * i++);
    *a2 = a1[3];
  }
  return a1[5] - a1[6];
}


//======================================================================
// sub_691CA0
// entry 00691ca0  size 43  status ok
//======================================================================

int __cdecl sub_691CA0(int a1, int a2)
{
  if ( a2 && a2 + *(_DWORD *)(a1 + 24) > *(_DWORD *)(a1 + 20) )
    return -131;
  *(_DWORD *)(a1 + 24) += a2;
  return 0;
}


//======================================================================
// sub_691CD0
// entry 00691cd0  size 336  status ok
//======================================================================

int __cdecl sub_691CD0(int *a1, _DWORD *a2)
{
  int v3; // eax
  _DWORD *v4; // ebx
  int v5; // ebp
  int v8; // eax
  int *v9; // edx
  bool v10; // zf
  int v11; // eax
  int v12; // edx
  int i; // edi
  int v14; // eax
  int v16; // [esp+10h] [ebp-4h]
  int v17; // [esp+18h] [ebp+4h]
  int v18; // [esp+1Ch] [ebp+8h]

  v3 = a1[16];
  v4 = a1 + 1;
  v5 = *(_DWORD *)(v3 + 4);
  v16 = *(_DWORD *)(v3 + 104);
  v17 = *(_DWORD *)(v5 + 28);
  sub_690EB0((int)a1);
  sub_69D360(v4, *a2, a2[1]);
  if ( sub_69D470(v4, 1) )
    return -135;
  v8 = sub_69D470(v4, *(_DWORD *)(v16 + 44));
  v18 = v8;
  if ( v8 == -1 )
    return -136;
  a1[10] = v8;
  v9 = *(int **)(v17 + 4 * v8 + 32);
  v10 = *v9 == 0;
  a1[7] = *v9;
  if ( v10 )
  {
    a1[6] = 0;
    a1[8] = 0;
  }
  else
  {
    a1[6] = sub_69D470(v4, 1);
    v11 = sub_69D470(v4, 1);
    a1[8] = v11;
    if ( v11 == -1 )
      return -136;
  }
  a1[12] = a2[4];
  a1[13] = a2[5];
  a1[14] = a2[6];
  v12 = a1[7];
  a1[15] = a2[7];
  a1[11] = a2[3];
  a1[9] = *(_DWORD *)(v17 + 4 * v12);
  *a1 = sub_690E40(a1, 4 * *(_DWORD *)(v5 + 4));
  for ( i = 0; i < *(_DWORD *)(v5 + 4); ++i )
    *(_DWORD *)(*a1 + 4 * i) = sub_690E40(a1, 4 * a1[9]);
  v14 = *(_DWORD *)(*(_DWORD *)(v17 + 4 * v18 + 32) + 12);
  return ((int (__cdecl *)(int *, _DWORD))(&off_7878E4)[*(_DWORD *)(v17 + 4 * v14 + 288)][4])(
           a1,
           *(_DWORD *)(v17 + 4 * v14 + 544));
}


