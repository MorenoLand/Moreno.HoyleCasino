// FUN_00441a90  00441a90

void __fastcall FUN_00441a90(int param_1)

{
  uint uVar1;
  int iVar2;
  void *pvVar3;
  undefined4 local_3c;
  int local_2c [7];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0069ea11;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_2c[4] = 0x1d4c1;
  local_2c[5] = 0x1d4c2;
  local_2c[6] = 0x1d4c3;
  local_2c[0] = 0x1d4e9;
  local_2c[1] = 0x1d4dc;
  local_2c[2] = 0x1d4dd;
  *(int *)(param_1 + 0xb0) = *(int *)(param_1 + 0xb0) + 1;
  FUN_005f1ad0(local_2c[*(int *)(param_1 + 0xb0) + 4]);
  if (*(int *)(param_1 + 0xa8) != 0) {
    FUN_005eaf00(local_2c[*(int *)(param_1 + 0xb0)]);
    (**(code **)(**(int **)(param_1 + 0xa8) + 0x74))(uVar1);
  }
  for (local_2c[3] = 0; local_2c[3] < 5; local_2c[3] = local_2c[3] + 1) {
    if (*(int *)(param_1 + 4 + local_2c[3] * 4) != 0) {
      FUN_005f5d50(0);
    }
  }
  for (local_2c[3] = 0; local_2c[3] < 5; local_2c[3] = local_2c[3] + 1) {
    FUN_0043fab0(local_2c[3],*(undefined4 *)(param_1 + 0xb0));
    FUN_0043fb70(local_2c[3],*(undefined4 *)(param_1 + 0xb0));
    (**(code **)(**(int **)(param_1 + 4 + local_2c[3] * 4) + 0x74))();
    iVar2 = FUN_005fc360();
    if (iVar2 == 3) {
      pvVar3 = operator_new(0x20);
      local_8 = 0;
      if (pvVar3 == (void *)0x0) {
        local_3c = 0;
      }
      else {
        local_3c = FID_conflict_evaluation_error(0);
      }
      local_8 = 0xffffffff;
      FUN_005f5d50(local_3c);
    }
  }
  ExceptionList = local_10;
  return;
}

