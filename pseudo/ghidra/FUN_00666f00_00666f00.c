// FUN_00666f00  00666f00

void __fastcall FUN_00666f00(undefined4 param_1)

{
  size_t _NumOfElements;
  size_t _SizeOfElements;
  code *_PtFuncCompare;
  undefined4 local_54 [19];
  uint local_8;
  
  local_8 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  local_54[0] = 0xffffffff;
  _PtFuncCompare = FUN_006665a0;
  _SizeOfElements = 0x48;
  _NumOfElements = FUN_00666c60(0x48,FUN_006665a0,param_1);
  bsearch(local_54,&DAT_007712e0,_NumOfElements,_SizeOfElements,_PtFuncCompare);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

