// FUN_004502f0  004502f0

undefined4 __fastcall FUN_004502f0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int local_2b0;
  int local_2ac;
  int local_2a8;
  int local_2a4;
  int local_2a0;
  int aiStack_29c [11];
  int local_270;
  int local_34;
  
  if ((*(char *)(param_1 + 0x2c3) == '\0') || (*(char *)(param_1 + 0x2c0) == '\0')) {
    uVar1 = 0;
  }
  else {
    local_2ac = 0;
    local_2a8 = 0;
    local_2a4 = 0;
    local_2b0 = 0;
    for (local_2a0 = 0; local_2a0 < 0xf; local_2a0 = local_2a0 + 1) {
      piVar3 = (int *)(param_1 + 0x18 + local_2a0 * 0x2c);
      piVar4 = aiStack_29c + local_2a0 * 0xb;
      for (iVar2 = 0xb; iVar2 != 0; iVar2 = iVar2 + -1) {
        *piVar4 = *piVar3;
        piVar3 = piVar3 + 1;
        piVar4 = piVar4 + 1;
      }
    }
    if (*(char *)(param_1 + 0x2be) != '\0') {
      local_270 = local_270 + -1;
      local_34 = local_34 + -1;
    }
    for (local_2a0 = 0; local_2a0 < *(int *)(param_1 + 0x2f4); local_2a0 = local_2a0 + 1) {
      if (aiStack_29c
          [*(int *)(param_1 + 0x2d8 + local_2a0 * 4) * 0xb + *(int *)(param_1 + 0x2d0) + 1] == 0) {
        local_2b0 = 0;
        local_2a8 = 0;
      }
      else {
        if (local_2b0 == 0) {
          local_2a8 = *(int *)(param_1 + 0x2d8 + local_2a0 * 4);
        }
        local_2b0 = local_2b0 + 1;
        if (4 < local_2b0) {
          local_2ac = local_2a8;
          local_2a4 = local_2b0;
        }
      }
    }
    if (local_2a4 == 0) {
      uVar1 = 0;
    }
    else {
      *(int *)(param_1 + 0x344) = local_2a4;
      *(int *)(param_1 + 0x348) = local_2ac;
      if (*(char *)(param_1 + 0x2be) != '\0') {
        if (local_2ac + -1 + local_2a4 == 0xe) {
          *(int *)(param_1 + 0x34c) = local_2ac + -1;
          *(int *)(param_1 + 0x348) = *(int *)(param_1 + 0x348) + -1;
          if (aiStack_29c[(*(int *)(param_1 + 0x34c) + -1) * 0xb + *(int *)(param_1 + 0x2d0) + 1] !=
              0) {
            *(int *)(param_1 + 0x348) = *(int *)(param_1 + 0x348) + -1;
            *(int *)(param_1 + 0x344) = *(int *)(param_1 + 0x344) + 1;
          }
        }
        else {
          *(int *)(param_1 + 0x34c) = local_2ac + local_2a4;
          if ((*(int *)(param_1 + 0x34c) != 0xe) &&
             (aiStack_29c[(*(int *)(param_1 + 0x34c) + 1) * 0xb + *(int *)(param_1 + 0x2d0) + 1] !=
              0)) {
            *(int *)(param_1 + 0x344) = *(int *)(param_1 + 0x344) + 1;
          }
        }
        *(int *)(param_1 + 0x344) = *(int *)(param_1 + 0x344) + 1;
      }
      for (local_2a0 = 0; local_2a0 < *(int *)(param_1 + 0x344); local_2a0 = local_2a0 + 1) {
        *(int *)(param_1 + 0x328 + local_2a0 * 4) = *(int *)(param_1 + 0x348) + local_2a0;
      }
      uVar1 = 1;
    }
  }
  return uVar1;
}

