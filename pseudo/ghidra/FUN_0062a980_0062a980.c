// FUN_0062a980  0062a980

void __fastcall FUN_0062a980(int param_1)

{
  uint _Size;
  int iVar1;
  void *_Dst;
  
  iVar1 = *(int *)(param_1 + 0x10);
  _Size = *(int *)(param_1 + 0x10) * 4 + 0x28;
  _Dst = operator_new(_Size);
  memset(_Dst,0,_Size);
  memcpy(_Dst,*(void **)(param_1 + 0xc),iVar1 << 2);
  operator_delete(*(void **)(param_1 + 0xc));
  *(void **)(param_1 + 0xc) = _Dst;
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 10;
  return;
}

