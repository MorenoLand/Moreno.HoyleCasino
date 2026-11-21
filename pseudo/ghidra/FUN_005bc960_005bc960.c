// FUN_005bc960  005bc960

void __thiscall FUN_005bc960(int param_1,undefined4 param_2)

{
  int *piVar1;
  uint uVar2;
  void *pvVar3;
  undefined4 uVar4;
  int *local_d8;
  undefined4 local_d4;
  int *local_d0;
  undefined4 local_cc;
  size_t local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a81a3;
  local_10 = ExceptionList;
  uVar2 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(DAT_0162ee84 + 0x14);
  if ((*(int *)(param_1 + 4) != 0) && (*(undefined4 **)(param_1 + 4) != (undefined4 *)0x0)) {
    (**(code **)**(undefined4 **)(param_1 + 4))(1,uVar2);
  }
  pvVar3 = operator_new(0xe8);
  local_8 = 0;
  if (pvVar3 == (void *)0x0) {
    local_cc = 0;
  }
  else {
    local_cc = FUN_005c8bb0();
  }
  local_8 = 0xffffffff;
  *(undefined4 *)(param_1 + 4) = local_cc;
  FUN_005c8c60(param_2);
  uVar4 = FUN_00630f40("SID_CASINO_VIDEOSLOTS");
  FUN_005f38b0(uVar4);
  FUN_005f1b10(*(undefined1 *)(*(int *)(param_1 + 0x50) + 4),
               *(undefined1 *)(*(int *)(param_1 + 0x50) + 5),
               *(undefined1 *)(*(int *)(param_1 + 0x50) + 6));
  *(undefined **)(param_1 + 0xc) = &DAT_00758ac0;
  for (local_14 = 0; -1 < *(int *)(*(int *)(*(int *)(param_1 + 0x50) + 0x54) + local_14 * 0x14);
      local_14 = local_14 + 1) {
  }
  FUN_005be4d0(local_14,0);
  qsort(*(void **)(*(int *)(param_1 + 0x50) + 0x54),local_14,0x14,FUN_005bc6f0);
  if (*(int *)(*(int *)(param_1 + 0x50) + 8) != 0) {
    pvVar3 = operator_new(0x178);
    local_8 = 1;
    if (pvVar3 == (void *)0x0) {
      local_d0 = (int *)0x0;
    }
    else {
      local_d0 = (int *)FUN_005eaaf0();
    }
    local_8 = 0xffffffff;
    FUN_005eae80(*(undefined4 *)(*(int *)(param_1 + 0x50) + 8),0,0,0x15,0xffffffff);
    FUN_005eb000(*(undefined4 *)(*(int *)(param_1 + 0x50) + 0xc));
    (**(code **)(*local_d0 + 0xb0))(*(undefined4 *)(*(int *)(param_1 + 0x50) + 0x10));
    (**(code **)(*local_d0 + 0x74))();
  }
  if (*(int *)(*(int *)(param_1 + 0x50) + 0x14) != 0) {
    pvVar3 = operator_new(400);
    local_8 = 2;
    if (pvVar3 == (void *)0x0) {
      local_d4 = 0;
    }
    else {
      local_d4 = FUN_005f5f50();
    }
    local_8 = 0xffffffff;
    *(undefined4 *)(param_1 + 0x6c) = local_d4;
    piVar1 = *(int **)(param_1 + 0x6c);
    FUN_005eae80(*(undefined4 *)(*(int *)(param_1 + 0x50) + 0x14),0,0,0x16,0xffffffff);
    FUN_005eb000(*(undefined4 *)(*(int *)(param_1 + 0x50) + 0x18));
    (**(code **)(*piVar1 + 0xb0))(*(undefined4 *)(*(int *)(param_1 + 0x50) + 0x1c));
    (**(code **)(*piVar1 + 0x74))();
    *(undefined4 *)(*(int *)(param_1 + 0x6c) + 0x178) = 0xf;
  }
  if (*(int *)(*(int *)(param_1 + 0x50) + 0x20) != 0) {
    pvVar3 = operator_new(0x178);
    local_8 = 3;
    if (pvVar3 == (void *)0x0) {
      local_d8 = (int *)0x0;
    }
    else {
      local_d8 = (int *)FUN_005eaaf0();
    }
    local_8 = 0xffffffff;
    FUN_005eae80(*(undefined4 *)(*(int *)(param_1 + 0x50) + 0x20),0,0,0x19,0xffffffff);
    FUN_005eb000(*(undefined4 *)(*(int *)(param_1 + 0x50) + 0x24));
    (**(code **)(*local_d8 + 0xb0))(*(undefined4 *)(*(int *)(param_1 + 0x50) + 0x28));
    (**(code **)(*local_d8 + 0x74))();
  }
  FUN_005c10b0();
  FUN_005c0f40(*(undefined4 *)(*(int *)(param_1 + 0x50) + 0x48),
               *(undefined4 *)(*(int *)(*(int *)(param_1 + 4) + 0x10) + 8),
               *(int *)(param_1 + 0x50) + 0x4c,0x1a);
  FUN_005c13e0();
  FUN_005c1b60();
  FUN_005c1d60(1);
  FUN_005c1ed0();
  ExceptionList = local_10;
  return;
}

