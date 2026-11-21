// FUN_005c2420  005c2420

void __fastcall FUN_005c2420(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  void *pvVar3;
  int *local_ec;
  int *local_e8;
  uint local_e4;
  int *local_e0;
  uint local_dc;
  int local_d8;
  uint local_d4;
  uint local_d0;
  uint local_cc;
  undefined4 local_c4;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a8628;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(DAT_0162ee84 + 0x14);
  if ((*(int *)(param_1 + 4) != 0) && (*(undefined4 **)(param_1 + 4) != (undefined4 *)0x0)) {
    (**(code **)**(undefined4 **)(param_1 + 4))();
  }
  pvVar3 = operator_new(0xe8);
  local_8 = 0;
  if (pvVar3 == (void *)0x0) {
    local_c4 = 0;
  }
  else {
    local_c4 = FUN_005c8bb0();
  }
  local_8 = 0xffffffff;
  *(undefined4 *)(param_1 + 4) = local_c4;
  FUN_005c8c60();
  FUN_00630f40();
  FUN_005f38b0();
  FUN_005f1b10();
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(*(int *)(param_1 + 0x50) + 0x108);
  uVar1 = **(undefined4 **)(*(int *)(param_1 + 4) + 0x10);
  FUN_005c3870();
  FUN_005c4ba0(uVar1);
  for (local_14 = 0; (int)local_14 < **(int **)(*(int *)(param_1 + 4) + 0x10);
      local_14 = local_14 + 1) {
    if (*(int *)(param_1 + 0x5c) == 0) {
      local_cc = 0;
    }
    else {
      local_cc = (*(int *)(param_1 + 0x60) - *(int *)(param_1 + 0x5c)) / 0x34;
    }
    if (local_cc <= local_14) {
      _invalid_parameter_noinfo();
    }
    *(int *)(local_14 * 0x34 + *(int *)(param_1 + 0x5c)) = param_1;
    if (*(int *)(param_1 + 0x5c) == 0) {
      local_d0 = 0;
    }
    else {
      local_d0 = (*(int *)(param_1 + 0x60) - *(int *)(param_1 + 0x5c)) / 0x34;
    }
    if (local_d0 <= local_14) {
      _invalid_parameter_noinfo();
    }
    *(uint *)(*(int *)(param_1 + 0x5c) + 4 + local_14 * 0x34) = local_14;
    if (*(int *)(param_1 + 0x5c) == 0) {
      local_d4 = 0;
    }
    else {
      local_d4 = (*(int *)(param_1 + 0x60) - *(int *)(param_1 + 0x5c)) / 0x34;
    }
    if (local_d4 <= local_14) {
      _invalid_parameter_noinfo();
    }
    FUN_005be4d0();
    iVar2 = *(int *)(param_1 + 4);
    if (*(int *)(iVar2 + 0x18 + local_14 * 4) < 0) {
      local_d8 = -*(int *)(iVar2 + 0x18 + local_14 * 4);
    }
    else {
      local_d8 = *(int *)(iVar2 + 0x18 + local_14 * 4);
    }
    if (*(int *)(param_1 + 0x5c) == 0) {
      local_dc = 0;
    }
    else {
      local_dc = (*(int *)(param_1 + 0x60) - *(int *)(param_1 + 0x5c)) / 0x34;
    }
    if (local_dc <= local_14) {
      _invalid_parameter_noinfo();
    }
    *(float *)(*(int *)(param_1 + 0x5c) + 8 + local_14 * 0x34) = (float)local_d8;
    pvVar3 = operator_new(0x1dc);
    local_8 = 1;
    if (pvVar3 == (void *)0x0) {
      local_e0 = (int *)0x0;
    }
    else {
      local_e0 = (int *)FUN_00601a80();
    }
    local_8 = 0xffffffff;
    FUN_005eaec0();
    FUN_005f5530();
    FUN_005f5570();
    (**(code **)(*local_e0 + 0x74))();
    if (*(int *)(param_1 + 0x5c) == 0) {
      local_e4 = 0;
    }
    else {
      local_e4 = (*(int *)(param_1 + 0x60) - *(int *)(param_1 + 0x5c)) / 0x34;
    }
    if (local_e4 <= local_14) {
      _invalid_parameter_noinfo();
    }
    *(int **)(*(int *)(param_1 + 0x5c) + 0x30 + local_14 * 0x34) = local_e0;
  }
  if (*(int *)(*(int *)(param_1 + 0x50) + 8) != 0) {
    pvVar3 = operator_new(0x178);
    local_8 = 2;
    if (pvVar3 == (void *)0x0) {
      local_e8 = (int *)0x0;
    }
    else {
      local_e8 = (int *)FUN_005eaaf0();
    }
    local_8 = 0xffffffff;
    FUN_005eae80();
    FUN_005eb000();
    (**(code **)(*local_e8 + 0xb0))();
    (**(code **)(*local_e8 + 0x74))();
  }
  if (*(int *)(*(int *)(param_1 + 0x50) + 0x14) != 0) {
    pvVar3 = operator_new(0x178);
    local_8 = 3;
    if (pvVar3 == (void *)0x0) {
      local_ec = (int *)0x0;
    }
    else {
      local_ec = (int *)FUN_005eaaf0();
    }
    local_8 = 0xffffffff;
    FUN_005eae80();
    FUN_005eb000();
    (**(code **)(*local_ec + 0xb0))();
    (**(code **)(*local_ec + 0x74))();
  }
  FUN_005c10b0();
  FUN_005c0f40();
  FUN_005c13e0();
  FUN_005c1b60();
  FUN_005c1d60();
  FUN_005c1ed0();
  ExceptionList = local_10;
  return;
}

