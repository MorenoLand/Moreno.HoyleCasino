// FUN_005c61d0  005c61d0

void * FUN_005c61d0(void *param_1,int param_2,int param_3)

{
  void *_Dst;
  int iVar1;
  
  iVar1 = param_2 - (int)param_1 >> 2;
  _Dst = (void *)(param_3 + iVar1 * -4);
  if (0 < iVar1) {
    memmove_s(_Dst,iVar1 << 2,param_1,iVar1 << 2);
  }
  return _Dst;
}

