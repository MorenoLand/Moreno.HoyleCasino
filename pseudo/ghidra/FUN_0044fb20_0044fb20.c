// FUN_0044fb20  0044fb20

uint __fastcall FUN_0044fb20(int param_1)

{
  uint in_EAX;
  uint uVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  uint local_2b0;
  int local_2ac;
  int local_2a8;
  uint local_2a4;
  uint local_2a0;
  int aiStack_29c [11];
  uint local_270 [155];
  
  local_2a8 = 0;
  local_2ac = 0;
  local_2b0 = 0;
  local_2a4 = 0;
  local_2a0 = 0;
  while ((int)local_2a0 < 0xf) {
    piVar3 = (int *)(param_1 + 0x18 + local_2a0 * 0x2c);
    piVar4 = aiStack_29c + local_2a0 * 0xb;
    for (iVar2 = 0xb; iVar2 != 0; iVar2 = iVar2 + -1) {
      *piVar4 = *piVar3;
      piVar3 = piVar3 + 1;
      piVar4 = piVar4 + 1;
    }
    in_EAX = local_2a0 + 1;
    local_2a0 = in_EAX;
  }
  if (*(char *)(param_1 + 0x2be) != '\0') {
    in_EAX = local_270[0] - 1;
    local_270[0] = in_EAX;
    local_270[0x8f] = local_270[0x8f] + -1;
  }
  for (local_2a0 = 1; (int)local_2a0 < 0xf; local_2a0 = local_2a0 + 1) {
    in_EAX = local_2a0 * 0x2c;
    if (aiStack_29c[local_2a0 * 0xb] == 0) {
      local_2b0 = 0;
      local_2a8 = 0;
    }
    else {
      if (local_2b0 == 0) {
        local_2a8 = local_2a0;
      }
      local_2b0 = local_2b0 + 1;
      if (4 < (int)local_2b0) {
        local_2ac = local_2a8;
        in_EAX = local_2b0;
        local_2a4 = local_2b0;
      }
    }
  }
  if ((int)local_2a4 < 5) {
    uVar1 = in_EAX & 0xffffff00;
  }
  else {
    *(uint *)(param_1 + 0x2f4) = local_2a4;
    *(int *)(param_1 + 0x2f8) = local_2ac;
    if (*(char *)(param_1 + 0x2be) != '\0') {
      if ((local_2ac < 3) || (aiStack_29c[(local_2ac + -2) * 0xb] < 1)) {
        if (local_2ac + -1 + *(int *)(param_1 + 0x2f4) == 0xe) {
          *(int *)(param_1 + 0x2f8) = *(int *)(param_1 + 0x2f8) + -1;
          *(undefined4 *)(param_1 + 0x2fc) = *(undefined4 *)(param_1 + 0x2f8);
        }
        else {
          *(int *)(param_1 + 0x2fc) = local_2ac + *(int *)(param_1 + 0x2f4);
          if ((*(int *)(param_1 + 0x2fc) < 0xe) &&
             (0 < aiStack_29c[(*(int *)(param_1 + 0x2fc) + 1) * 0xb])) {
            *(int *)(param_1 + 0x2f4) = *(int *)(param_1 + 0x2f4) + 1;
          }
        }
      }
      else {
        *(int *)(param_1 + 0x2f8) = *(int *)(param_1 + 0x2f8) + -2;
        *(int *)(param_1 + 0x2fc) = *(int *)(param_1 + 0x2f8) + 1;
        *(int *)(param_1 + 0x2f4) = *(int *)(param_1 + 0x2f4) + 1;
      }
      *(int *)(param_1 + 0x2f4) = *(int *)(param_1 + 0x2f4) + 1;
    }
    for (local_2a0 = 0; (int)local_2a0 < *(int *)(param_1 + 0x2f4); local_2a0 = local_2a0 + 1) {
      *(uint *)(param_1 + 0x2d8 + local_2a0 * 4) = *(int *)(param_1 + 0x2f8) + local_2a0;
    }
    uVar1 = CONCAT31((int3)(local_2a0 >> 8),1);
  }
  return uVar1;
}

