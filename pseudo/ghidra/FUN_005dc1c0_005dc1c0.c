// FUN_005dc1c0  005dc1c0

void FUN_005dc1c0(void)

{
  uint uVar1;
  undefined4 uVar2;
  void *pvVar3;
  int *local_20;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a93f3;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (DAT_00795f95 == '\0') {
    if (DAT_007947cc == (int *)0x0) {
      pvVar3 = operator_new(0x1c4);
      local_8 = 0;
      if (pvVar3 == (void *)0x0) {
        local_20 = (int *)0x0;
      }
      else {
        local_20 = (int *)FUN_005cf470();
      }
      local_8 = 0xffffffff;
      DAT_007947cc = local_20;
      (**(code **)(*local_20 + 0x3c))();
      FUN_005f7340(0,0);
    }
    FUN_005f85d0(uVar1);
  }
  else {
    uVar2 = FUN_00630f40("SID_CASINO_DEMO_SHORTAPPNAME",0);
    uVar2 = FUN_00630f40("SID_CASINO_DEMO_NOLOANS",uVar2);
    FUN_0062ff10(uVar2);
  }
  ExceptionList = local_10;
  return;
}

