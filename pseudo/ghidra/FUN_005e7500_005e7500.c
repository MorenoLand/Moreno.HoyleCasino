// FUN_005e7500  005e7500

void __fastcall FUN_005e7500(int *param_1)

{
  uint uVar1;
  void *pvVar2;
  int local_20;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a99e5;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (DAT_00795f95 == '\0') {
    if (*param_1 == 0) {
      pvVar2 = operator_new(0x23c);
      local_8 = 0;
      if (pvVar2 == (void *)0x0) {
        local_20 = 0;
      }
      else {
        local_20 = FUN_005e6890();
      }
      local_8 = 0xffffffff;
      *param_1 = local_20;
      (**(code **)(*(int *)*param_1 + 0x3c))();
      FUN_005f7340(0,0);
    }
    FUN_005e7210(uVar1);
  }
  ExceptionList = local_10;
  return;
}

