// FUN_005db9e0  005db9e0

void __thiscall FUN_005db9e0(int *param_1,undefined4 param_2)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int local_34;
  undefined1 local_2c [8];
  void *local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a930f;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  cVar1 = (**(code **)(*DAT_0162ee84 + 0x33c))(0xffffffff,DAT_00781870 ^ (uint)&stack0xfffffffc);
  if (((cVar1 != '\0') && (DAT_0163068c == 0)) && (DAT_016306b0 == 0)) {
    local_1c = FUN_005d89b0(param_2);
    if (DAT_007947b4 == 0) {
      local_24 = operator_new(0x1bc);
      local_8 = 0;
      if (local_24 == (void *)0x0) {
        local_34 = 0;
      }
      else {
        local_34 = FUN_005cdd90();
      }
      local_20 = local_34;
      local_8 = 0xffffffff;
      DAT_007947b4 = local_34;
    }
    FUN_005cde20(local_1c);
    piVar2 = (int *)(**(code **)(*param_1 + 0x2ec))(local_2c,*(undefined4 *)(local_1c + 4));
    local_18 = *piVar2;
    local_14 = piVar2[1];
    if ((local_18 == 0) && (local_14 == 0)) {
      iVar3 = FUN_00646e70();
      iVar3 = iVar3 + -0x50;
      iVar4 = FUN_00646e40(iVar3);
      FUN_005f7320(iVar4 + -0x14,iVar3);
    }
    else {
      FUN_005f7320(local_18,local_14);
    }
    FUN_005f85d0();
  }
  ExceptionList = local_10;
  return;
}

