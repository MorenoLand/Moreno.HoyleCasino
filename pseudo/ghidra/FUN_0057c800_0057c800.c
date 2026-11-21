// FUN_0057c800  0057c800

void __fastcall FUN_0057c800(int param_1)

{
  uint uVar1;
  void *pvVar2;
  int iVar3;
  undefined1 extraout_var;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined1 local_28;
  undefined1 local_27;
  undefined1 local_26 [18];
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a67fa;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_28 = 0x31;
  local_27 = 0x37;
  local_26[0] = 0x70;
  local_26[1] = 0xff;
  local_26[2] = 0xff;
  local_26[3] = 0xff;
  local_26[4] = 0x31;
  local_26[5] = 0x37;
  local_26[6] = 0x70;
  local_26[7] = 0xff;
  local_26[8] = 0xff;
  local_26[9] = 0xff;
  local_26[10] = 0x31;
  local_26[0xb] = 0x37;
  local_26[0xc] = 0x70;
  local_26[0xd] = 0xe6;
  local_26[0xe] = 0xe6;
  local_26[0xf] = 0xff;
  FUN_005f8510(0x32,0x32);
  for (local_14 = 0; local_14 < 6; local_14 = local_14 + 1) {
    if (*(int *)(param_1 + 0x1b8 + local_14 * 4) == 0) {
      pvVar2 = operator_new(0x5c);
      local_8 = 0;
      if (pvVar2 == (void *)0x0) {
        local_50 = 0;
      }
      else {
        local_50 = FUN_005f6130();
      }
      local_8 = 0xffffffff;
      *(undefined4 *)(param_1 + 0x1b8 + local_14 * 4) = local_50;
    }
    *(int *)(*(int *)(param_1 + 0x1b8 + local_14 * 4) + 4) = param_1;
    (**(code **)(**(int **)(param_1 + 0x1b8 + local_14 * 4) + 0x40))();
    FUN_005f6510(CONCAT13((char)((uint)(&local_28 + local_14 * 3) >> 0x18),
                          CONCAT12(local_26[local_14 * 3],*(undefined2 *)(&local_28 + local_14 * 3))
                         ));
    iVar3 = local_14 * 3;
    FUN_005f6430(CONCAT13((char)((uint)iVar3 >> 0x18),
                          CONCAT12(local_26[iVar3],*(undefined2 *)(&local_28 + iVar3))));
  }
  if (*(int *)(param_1 + 0x1d0) == 0) {
    pvVar2 = operator_new(0x1d0);
    local_8 = 1;
    if (pvVar2 == (void *)0x0) {
      local_54 = 0;
    }
    else {
      local_54 = FUN_005ec5a0(uVar1);
    }
    local_8 = 0xffffffff;
    *(undefined4 *)(param_1 + 0x1d0) = local_54;
  }
  *(int *)(*(int *)(param_1 + 0x1d0) + 4) = param_1;
  (**(code **)(**(int **)(param_1 + 0x1d0) + 0xb4))(&PTR_006b27f8);
  (**(code **)(**(int **)(param_1 + 0x1d0) + 0x40))();
  FUN_005ef3b0(0xc);
  FUN_005ecd00(0x23,0xffffffff,CONCAT13(extraout_var,CONCAT12(DAT_0075ee1e,DAT_0075ee1c)));
  if (*(int *)(param_1 + 0x1d4) == 0) {
    pvVar2 = operator_new(0x178);
    local_8 = 2;
    if (pvVar2 == (void *)0x0) {
      local_58 = 0;
    }
    else {
      local_58 = FUN_005eaaf0();
    }
    local_8 = 0xffffffff;
    *(undefined4 *)(param_1 + 0x1d4) = local_58;
  }
  *(int *)(*(int *)(param_1 + 0x1d4) + 4) = param_1;
  (**(code **)(**(int **)(param_1 + 0x1d4) + 0x40))();
  if (*(int *)(param_1 + 0x1d8) == 0) {
    pvVar2 = operator_new(0x178);
    local_8 = 3;
    if (pvVar2 == (void *)0x0) {
      local_5c = 0;
    }
    else {
      local_5c = FUN_005eaaf0();
    }
    local_8 = 0xffffffff;
    *(undefined4 *)(param_1 + 0x1d8) = local_5c;
  }
  *(int *)(*(int *)(param_1 + 0x1d8) + 4) = param_1;
  (**(code **)(**(int **)(param_1 + 0x1d8) + 0x40))();
  ExceptionList = local_10;
  return;
}

