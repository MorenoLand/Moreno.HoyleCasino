// FUN_0051aca0  0051aca0

void __fastcall FUN_0051aca0(int param_1)

{
  uint uVar1;
  void *pvVar2;
  undefined4 local_2c;
  undefined4 local_28;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a3d79;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (*(int *)(param_1 + 0x1bc) == 0) {
    pvVar2 = operator_new(0x184);
    local_8 = 0;
    if (pvVar2 == (void *)0x0) {
      local_28 = 0;
    }
    else {
      local_28 = FUN_005f5bf0(uVar1);
    }
    local_8 = 0xffffffff;
    *(undefined4 *)(param_1 + 0x1bc) = local_28;
    *(int *)(*(int *)(param_1 + 0x1bc) + 4) = param_1;
    (**(code **)(**(int **)(param_1 + 0x1bc) + 0x40))();
    FUN_005eaf00(*(undefined4 *)(&DAT_007218cc + *(int *)(param_1 + 0x1dc) * 4));
    (**(code **)(**(int **)(param_1 + 0x1bc) + 0x44))
              (0xca - *(int *)(&DAT_007218a4 + *(int *)(param_1 + 0x1dc) * 8),
               0x28 - *(int *)(&DAT_007218a8 + *(int *)(param_1 + 0x1dc) * 8));
    *(undefined4 *)(*(int *)(param_1 + 0x1bc) + 0x178) = 5;
    pvVar2 = operator_new(0x1c);
    local_8 = 1;
    if (pvVar2 == (void *)0x0) {
      local_2c = 0;
    }
    else {
      local_2c = FUN_00600a70(0);
    }
    local_8 = 0xffffffff;
    FUN_005f5d50(local_2c);
    (**(code **)(**(int **)(param_1 + 0x1bc) + 0x74))();
  }
  ExceptionList = local_10;
  return;
}

