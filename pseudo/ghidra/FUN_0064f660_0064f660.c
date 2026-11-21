// FUN_0064f660  0064f660

void FUN_0064f660(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  void *pvVar3;
  undefined4 extraout_var;
  undefined4 uVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006ac1cf;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  iVar2 = (**(code **)(*DAT_0162ee84 + 0x308))(uVar1);
  if (iVar2 != 0) {
    if (DAT_016306d4 == (int *)0x0) {
      uVar4 = extraout_var;
      pvVar3 = operator_new(0x1c4);
      local_8 = 0;
      if (pvVar3 == (void *)0x0) {
        DAT_016306d4 = (int *)0x0;
      }
      else {
        DAT_016306d4 = (int *)FUN_00676650(param_1);
      }
      local_8 = 0xffffffff;
      (**(code **)(*DAT_016306d4 + 0x3c))(uVar1,DAT_016306d4,uVar4);
      FUN_005f7340(0,0);
    }
    FUN_00676840();
  }
  ExceptionList = local_10;
  return;
}

