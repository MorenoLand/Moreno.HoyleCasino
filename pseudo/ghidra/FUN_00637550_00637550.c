// FUN_00637550  00637550

void FUN_00637550(undefined4 param_1,undefined4 param_2,undefined1 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  DWORD DVar1;
  
  if (DAT_0162ee80 != 0) {
    DVar1 = GetTickCount();
    *(DWORD *)(DAT_0162ee80 + 0x44) = DVar1;
  }
  FUN_005f43e0(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return;
}

