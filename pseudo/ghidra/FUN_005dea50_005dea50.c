// FUN_005dea50  005dea50

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005dea50(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,
                 undefined4 param_5)

{
  DWORD DVar1;
  
  if (DAT_007947e4 != 0) {
    DVar1 = GetTickCount();
    *(DWORD *)(DAT_007947e4 + 0x60) = DVar1;
  }
  FUN_00637550(param_1,param_2,param_3 != 0,param_4,param_5,0x3f800000,_DAT_006b3654,0);
  return;
}

