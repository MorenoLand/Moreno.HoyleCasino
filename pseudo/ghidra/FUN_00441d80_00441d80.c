// FUN_00441d80  00441d80

void __fastcall FUN_00441d80(int param_1)

{
  uint uVar1;
  void *pvVar2;
  int iVar3;
  undefined4 local_5c;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0069ea37;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_1c = 0;
  local_18 = 0;
  for (local_14 = 0; local_14 < 5; local_14 = local_14 + 1) {
    if (*(int *)(*(int *)(param_1 + 4 + local_14 * 4) + 0x180) == 0) {
      pvVar2 = operator_new(0x20);
      local_8 = 0;
      if (pvVar2 == (void *)0x0) {
        local_5c = 0;
      }
      else {
        local_5c = FID_conflict_evaluation_error(0);
      }
      local_8 = 0xffffffff;
      FUN_005f5d50(local_5c);
    }
  }
  DAT_007906e8 = DAT_007906e8 + 1;
  if (DAT_007906e8 == 10) {
    FUN_00442180(uVar1);
    DAT_007906e8 = 0;
  }
  iVar3 = *(int *)(param_1 + 0xb0);
  if (iVar3 == 0) {
    local_1c = 0x50;
  }
  else if (iVar3 == 1) {
    local_1c = 0x4b;
  }
  else if (iVar3 == 2) {
    local_1c = 0x2d;
  }
  if (*(int *)(param_1 + 0xb0) == 2) {
    for (local_14 = 0; local_14 < 5; local_14 = local_14 + 1) {
      if (((*(int *)(param_1 + 4 + local_14 * 4) != 0) && (iVar3 = FUN_005eb220(), iVar3 == 0x27))
         && (*(int *)(DAT_007906f0 + 0x6c + local_14 * 0x78) == -1)) {
        if ((*(char *)(DAT_007906f0 + 0x264) == '\0') && (*(int *)(DAT_007906f0 + 0x260) == -1)) {
          for (local_20 = 0; local_20 < 5; local_20 = local_20 + 1) {
            if ((local_14 != local_20) && (iVar3 = FUN_005eb220(), iVar3 == 0x27)) {
              *(undefined1 *)(DAT_007906f0 + 0x264) = 1;
              break;
            }
          }
          if (*(char *)(DAT_007906f0 + 0x264) != '\0') {
            for (local_20 = 0; local_20 < 5; local_20 = local_20 + 1) {
              *(undefined4 *)(DAT_007906f0 + 0x268 + local_20 * 4) =
                   *(undefined4 *)(DAT_007906f0 + 0x48 + local_20 * 0x78);
            }
          }
        }
        if (*(int *)(DAT_007906f0 + 0x260) == -1) {
          for (local_20 = 0; local_20 < 5; local_20 = local_20 + 1) {
            if (local_14 == local_20) {
              *(undefined4 *)(DAT_007906f0 + 0x70 + local_20 * 0x78) = 0;
            }
            else {
              *(int *)(DAT_007906f0 + 0x70 + local_20 * 0x78) =
                   *(int *)(DAT_007906f0 + 0x48 + local_14 * 0x78) -
                   *(int *)(DAT_007906f0 + 0x48 + local_20 * 0x78);
              if (*(int *)(DAT_007906f0 + 0x70 + local_20 * 0x78) < 0) {
                *(undefined4 *)(DAT_007906f0 + 0x70 + local_20 * 0x78) = 0;
              }
            }
          }
        }
        *(int *)(DAT_007906f0 + 0x260) = *(int *)(DAT_007906f0 + 0x260) + 1;
        *(undefined4 *)(DAT_007906f0 + 0x6c + local_14 * 0x78) =
             *(undefined4 *)(DAT_007906f0 + 0x260);
      }
      if ((*(int *)(param_1 + 4 + local_14 * 4) != 0) && (iVar3 = FUN_005eb220(), iVar3 == 0x2d)) {
        local_18 = local_18 + 1;
      }
    }
    if (local_18 == 5) {
      (**(code **)(**(int **)(DAT_007906ec + 4) + 4))(4);
    }
  }
  else {
    for (local_14 = 0; local_14 < 5; local_14 = local_14 + 1) {
      if ((*(int *)(param_1 + 4 + local_14 * 4) != 0) && (iVar3 = FUN_005eb220(), iVar3 == local_1c)
         ) {
        FUN_00441a90();
        ExceptionList = local_10;
        return;
      }
    }
  }
  ExceptionList = local_10;
  return;
}

