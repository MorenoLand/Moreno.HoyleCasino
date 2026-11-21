// FUN_006520f0  006520f0

void __fastcall FUN_006520f0(undefined4 *param_1)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  void *pvVar4;
  undefined4 local_ac;
  int local_90 [31];
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006ac3a6;
  local_10 = ExceptionList;
  uVar2 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  for (local_14 = 0; local_14 < 10; local_14 = local_14 + 1) {
    FUN_005f87d0();
  }
  for (local_14 = 0; local_14 < 10; local_14 = local_14 + 1) {
    local_90[local_14 * 3] = 0;
    local_90[local_14 * 3 + 1] = 0;
    local_90[local_14 * 3 + 2] = 0;
  }
  (**(code **)(*(int *)*param_1 + 0x22c))
            (*(undefined4 *)(param_1[0x20] + param_1[2] * 0x14),
             *(undefined4 *)(param_1[0x20] + 4 + param_1[2] * 0x14),
             *(undefined4 *)(param_1[0x20] + 4 + (param_1[2] + 1) * 0x14),local_90,uVar2);
  for (local_14 = 0; local_14 < 10; local_14 = local_14 + 1) {
    if ((0 < local_90[local_14 * 3 + 2]) && (local_90[local_14 * 3 + 2] < 4)) {
      piVar3 = (int *)FUN_005fb2b0(0);
      iVar1 = local_90[local_14 * 3 + 2];
      if (iVar1 == 1) {
        FUN_005eaf00(0x33e154);
      }
      else if (iVar1 == 2) {
        FUN_005eaf00(0x33e155);
      }
      else if (iVar1 == 3) {
        FUN_005eaf00(0x33e156);
      }
      (**(code **)(*piVar3 + 0x44))
                (local_90[local_14 * 3] + -0x32,local_90[local_14 * 3 + 1] + -0x2a);
      (**(code **)(*piVar3 + 0xb0))(0);
      pvVar4 = operator_new(0x1c);
      local_8 = 0;
      if (pvVar4 == (void *)0x0) {
        local_ac = 0;
      }
      else {
        local_ac = FUN_00600a70(0);
      }
      local_8 = 0xffffffff;
      FUN_005f5d50(local_ac);
      FUN_005f85d0();
    }
  }
  ExceptionList = local_10;
  return;
}

