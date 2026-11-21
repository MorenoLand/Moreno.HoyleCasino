// FUN_0060c720  0060c720

void __fastcall FUN_0060c720(int param_1)

{
  longlong lVar1;
  void *_Dst;
  
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) << 1;
  lVar1 = (ulonglong)*(uint *)(param_1 + 8) * 4;
  _Dst = operator_new(-(uint)((int)((ulonglong)lVar1 >> 0x20) != 0) | (uint)lVar1);
  memmove(_Dst,*(void **)(param_1 + 0xc),*(int *)(param_1 + 4) << 2);
  memset((void *)((int)_Dst + *(int *)(param_1 + 4) * 4),0,
         (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) * 4);
  operator_delete(*(void **)(param_1 + 0xc));
  *(void **)(param_1 + 0xc) = _Dst;
  return;
}

