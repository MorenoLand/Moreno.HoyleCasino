// FUN_0064f060  0064f060

undefined4 FUN_0064f060(char param_1,undefined1 param_2)

{
  char cVar1;
  undefined4 uVar2;
  void *pvVar3;
  int *local_28;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006ac0f3;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (param_1 == '\0') {
    uVar2 = FUN_005f3bf0(DAT_00781870 ^ (uint)&stack0xfffffffc);
    FUN_006375b0(uVar2);
    cVar1 = FUN_00639ef0(uVar2);
    if (cVar1 == '\0') {
      ExceptionList = local_10;
      return 0;
    }
  }
  if (DAT_016306c8 == (int *)0x0) {
    pvVar3 = operator_new(0x1c0);
    local_8 = 0;
    if (pvVar3 == (void *)0x0) {
      local_28 = (int *)0x0;
    }
    else {
      local_28 = (int *)FUN_00671f90(param_2);
    }
    local_8 = 0xffffffff;
    DAT_016306c8 = local_28;
    (**(code **)(*local_28 + 0x3c))();
    FUN_005f7340(0,0);
  }
  FUN_005f85d0();
  if (*(char *)(DAT_0162ee84 + 0x25) != '\0') {
    (**(code **)(*DAT_016306c8 + 0x18))(0);
  }
  ExceptionList = local_10;
  return 1;
}

