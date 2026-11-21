// FUN_005dbb70  005dbb70

void FUN_005dbb70(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  void *pvVar5;
  int local_20;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a9335;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  cVar1 = FUN_005da7b0(DAT_00781870 ^ (uint)&stack0xfffffffc);
  if (cVar1 == '\0') {
    if (DAT_00795f95 == '\0') {
      if (DAT_007947b8 == 0) {
        pvVar5 = operator_new(0x1c0);
        local_8 = 0;
        if (pvVar5 == (void *)0x0) {
          local_20 = 0;
        }
        else {
          local_20 = FUN_005ce250();
        }
        local_8 = 0xffffffff;
        DAT_007947b8 = local_20;
        FUN_005ce2e0(param_1);
        FUN_005f7340(0,0);
      }
      FUN_005f85d0();
    }
    else {
      iVar2 = FUN_005f3bb0();
      iVar3 = (**(code **)(*DAT_0162ee84 + 600))();
      if (iVar2 != iVar3) {
        uVar4 = FUN_00630f40("SID_CASINO_DEMO_SHORTAPPNAME",0,0x30d507);
        uVar4 = FUN_00630f40("SID_CASINO_DEMO_NOLOANS",uVar4);
        FUN_0062ff30(uVar4);
        uVar4 = (**(code **)(*DAT_0162ee84 + 600))();
        (**(code **)(*DAT_0162ee84 + 0x34))(uVar4);
      }
    }
  }
  ExceptionList = local_10;
  return;
}

