// FUN_004587e0  004587e0

void __fastcall FUN_004587e0(int param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int local_24;
  int local_20 [6];
  uint local_8;
  
  iVar2 = FUN_0045e8e0();
  local_20[5] = (-(uint)(iVar2 != 0) & 4) + 5;
  local_20[0] = 3;
  local_20[1] = 2;
  local_20[2] = 4;
  local_20[3] = 1;
  local_20[4] = 5;
  FUN_004586d0();
  for (local_8 = 0; (int)local_8 < 5; local_8 = local_8 + 1) {
    FUN_00459cd0();
    FUN_00459130(local_8);
    if (*(int *)(param_1 + 0x84 + local_8 * 4) != 0) {
      if ((*(char *)(DAT_00790738 + local_8 + 0xf9) == '\0') ||
         (cVar1 = (**(code **)(*DAT_00790734 + 0x2c4))(local_8), cVar1 != '\0')) {
        (**(code **)(**(int **)(param_1 + 0x84 + local_8 * 4) + 0x70))();
      }
      else {
        (**(code **)(**(int **)(param_1 + 0x84 + local_8 * 4) + 0x74))();
      }
    }
  }
  for (local_8 = 0; (int)local_8 < local_20[5]; local_8 = local_8 + 1) {
    if (local_8 != local_20[5] - 1U) {
      uVar3 = local_8 & 0x80000003;
      if ((int)uVar3 < 0) {
        uVar3 = (uVar3 - 1 | 0xfffffffc) + 1;
      }
      iVar2 = FUN_005dcb00(uVar3);
      if ((*(char *)(iVar2 + 0x4a0) != '\0') && (cVar1 = FUN_005da7b0(), cVar1 != '\0')) {
        uVar3 = local_8 & 0x80000003;
        if ((int)uVar3 < 0) {
          uVar3 = (uVar3 - 1 | 0xfffffffc) + 1;
        }
        cVar1 = (**(code **)(*DAT_00790734 + 0x2c4))(uVar3);
        if (cVar1 == '\0') {
          uVar3 = local_8 & 0x80000003;
          if ((int)uVar3 < 0) {
            uVar3 = (uVar3 - 1 | 0xfffffffc) + 1;
          }
          if (*(int *)(*(int *)(param_1 + 0x18 + local_8 * 4) + 0x17c + uVar3 * 0x1e0 +
                      ((int)(local_8 + ((int)local_8 >> 0x1f & 3U)) >> 2) * 0x78) == 0) {
            uVar3 = local_8 & 0x80000003;
            if ((int)uVar3 < 0) {
              uVar3 = (uVar3 - 1 | 0xfffffffc) + 1;
            }
            (**(code **)(**(int **)(param_1 + 0x18 + local_8 * 4) + 0xb8))
                      (uVar3,(int)(local_8 + ((int)local_8 >> 0x1f & 3U)) >> 2);
          }
        }
      }
    }
  }
  cVar1 = FUN_005da7b0();
  if ((cVar1 != '\0') && (DAT_0163068c == 0)) {
    (**(code **)(*DAT_00790734 + 0x2f0))();
  }
  if ((*(int *)(DAT_00790738 + 0x108) < 0) || (4 < *(int *)(DAT_00790738 + 0x108))) {
    (**(code **)(**(int **)(param_1 + 0x4c) + 0xb0))(0);
  }
  else if ((*(int *)(DAT_00790738 + 0x10c) < 0) || (3 < *(int *)(DAT_00790738 + 0x10c))) {
    (**(code **)(**(int **)(param_1 + 0x4c) + 0xb0))(local_20[*(int *)(DAT_00790738 + 0x108)]);
  }
  else {
    local_24 = local_20[*(int *)(DAT_00790738 + 0x108)] - local_20[*(int *)(DAT_00790738 + 0x10c)];
    if (local_24 < 1) {
      local_24 = local_24 + 5;
    }
    (**(code **)(**(int **)(param_1 + 0x4c) + 0xb0))(local_24);
  }
  if (*(int *)(DAT_00790738 + 0x118) == -1) {
    FUN_00459580();
  }
  return;
}

