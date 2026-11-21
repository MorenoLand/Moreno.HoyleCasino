// FUN_00450680  00450680

undefined4 __fastcall FUN_00450680(int param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int local_2ac;
  int local_2a8;
  int local_2a4;
  int local_2a0;
  int aiStack_29c [11];
  int local_270 [155];
  
  if ((((*(char *)(param_1 + 0x2be) != '\0') && (*(char *)(param_1 + 0x2c6) == '\0')) &&
      (*(char *)(param_1 + 0x2c2) != '\0')) && (*(char *)(param_1 + 0x2c5) != '\0')) {
    local_2a8 = 0;
    for (local_2a4 = 0; local_2a4 < 0xf; local_2a4 = local_2a4 + 1) {
      piVar2 = (int *)(param_1 + 0x18 + local_2a4 * 0x2c);
      piVar3 = aiStack_29c + local_2a4 * 0xb;
      for (iVar1 = 0xb; iVar1 != 0; iVar1 = iVar1 + -1) {
        *piVar3 = *piVar2;
        piVar2 = piVar2 + 1;
        piVar3 = piVar3 + 1;
      }
    }
    local_270[0] = local_270[0] + -1;
    local_270[0x8f] = local_270[0x8f] + -1;
    for (local_2a4 = 8; 0 < local_2a4; local_2a4 = local_2a4 + -1) {
      local_2a0 = 0;
      for (local_2ac = 0; local_2ac < 7; local_2ac = local_2ac + 1) {
        if ((aiStack_29c[(local_2a4 + local_2ac) * 0xb] == 0) ||
           (aiStack_29c[(local_2a4 + local_2ac) * 0xb + *(int *)(param_1 + 0x2d0) + 1] == 0)) {
          local_2a8 = local_2a4 + local_2ac;
        }
        else {
          local_2a0 = local_2a0 + 1;
        }
      }
      if (local_2a0 == 6) {
        *(undefined4 *)(param_1 + 0x344) = 7;
        *(int *)(param_1 + 0x348) = local_2a4;
        *(int *)(param_1 + 0x34c) = local_2a8;
        for (local_2ac = 0; local_2ac < 7; local_2ac = local_2ac + 1) {
          *(int *)(param_1 + 0x328 + local_2ac * 4) = *(int *)(param_1 + 0x348) + local_2ac;
        }
        return 1;
      }
    }
    for (local_2a4 = 9; 0 < local_2a4; local_2a4 = local_2a4 + -1) {
      local_2a0 = 0;
      for (local_2ac = 0; local_2ac < 6; local_2ac = local_2ac + 1) {
        if ((aiStack_29c[(local_2a4 + local_2ac) * 0xb] == 0) ||
           (aiStack_29c[(local_2a4 + local_2ac) * 0xb + *(int *)(param_1 + 0x2d0) + 1] == 0)) {
          local_2a8 = local_2a4 + local_2ac;
        }
        else {
          local_2a0 = local_2a0 + 1;
        }
      }
      if (local_2a0 == 5) {
        *(undefined4 *)(param_1 + 0x344) = 6;
        *(int *)(param_1 + 0x348) = local_2a4;
        *(int *)(param_1 + 0x34c) = local_2a8;
        for (local_2ac = 0; local_2ac < 6; local_2ac = local_2ac + 1) {
          *(int *)(param_1 + 0x328 + local_2ac * 4) = *(int *)(param_1 + 0x348) + local_2ac;
        }
        return 1;
      }
    }
    for (local_2a4 = 10; 0 < local_2a4; local_2a4 = local_2a4 + -1) {
      local_2a0 = 0;
      for (local_2ac = 0; local_2ac < 5; local_2ac = local_2ac + 1) {
        if ((aiStack_29c[(local_2a4 + local_2ac) * 0xb] == 0) ||
           (aiStack_29c[(local_2a4 + local_2ac) * 0xb + *(int *)(param_1 + 0x2d0) + 1] == 0)) {
          local_2a8 = local_2a4 + local_2ac;
        }
        else {
          local_2a0 = local_2a0 + 1;
        }
      }
      if (local_2a0 == 4) {
        *(undefined4 *)(param_1 + 0x344) = 5;
        *(int *)(param_1 + 0x348) = local_2a4;
        *(int *)(param_1 + 0x34c) = local_2a8;
        for (local_2ac = 0; local_2ac < 5; local_2ac = local_2ac + 1) {
          *(int *)(param_1 + 0x328 + local_2ac * 4) = *(int *)(param_1 + 0x348) + local_2ac;
        }
        return 1;
      }
    }
  }
  return 0;
}

