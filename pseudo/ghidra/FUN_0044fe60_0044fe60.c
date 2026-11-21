// FUN_0044fe60  0044fe60

undefined4 __fastcall FUN_0044fe60(int param_1)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int local_2c8;
  int local_2c4;
  int local_2c0;
  int local_2bc;
  int local_2b8;
  int local_2b0;
  int local_2ac;
  int local_2a8;
  int local_2a4;
  int local_2a0;
  int aiStack_29c [11];
  int local_270 [155];
  
  if ((*(char *)(param_1 + 0x2be) == '\0') || (*(char *)(param_1 + 0x2c3) != '\0')) {
    uVar3 = 0;
  }
  else {
    local_2b0 = 0;
    local_2c8 = 0;
    local_2c4 = 0;
    local_2ac = 0;
    local_2a0 = 0;
    bVar1 = false;
    local_2c0 = 0;
    local_2bc = 0;
    local_2b8 = 0;
    local_2a4 = 0;
    for (local_2a8 = 0; local_2a8 < 0xf; local_2a8 = local_2a8 + 1) {
      piVar5 = (int *)(param_1 + 0x18 + local_2a8 * 0x2c);
      piVar6 = aiStack_29c + local_2a8 * 0xb;
      for (iVar4 = 0xb; iVar4 != 0; iVar4 = iVar4 + -1) {
        *piVar6 = *piVar5;
        piVar5 = piVar5 + 1;
        piVar6 = piVar6 + 1;
      }
    }
    if (*(char *)(param_1 + 0x2be) != '\0') {
      local_270[0] = local_270[0] + -1;
      local_270[0x8f] = local_270[0x8f] + -1;
    }
    for (local_2a8 = 1; local_2a8 < 0xf; local_2a8 = local_2a8 + 1) {
      if (aiStack_29c[local_2a8 * 0xb] == 0) {
        if (bVar1) {
          if ((4 < local_2c8) && (local_2c4 == 0)) {
            local_2c4 = local_2b0;
            local_2bc = local_2ac;
            local_2a4 = local_2a0;
          }
          if (local_2ac < 10) {
            local_2a8 = local_2a0;
          }
          local_2c8 = 0;
          local_2ac = 0;
          local_2a0 = 0;
          bVar1 = false;
        }
        else {
          bVar1 = true;
          local_2a0 = local_2a8;
          if (local_2c8 == 0) {
            local_2ac = local_2a8;
          }
          local_2c8 = local_2c8 + 1;
          if (4 < local_2c8) {
            local_2c0 = local_2ac;
            local_2b8 = local_2a8;
            local_2b0 = local_2c8;
          }
        }
      }
      else {
        if (local_2c8 == 0) {
          local_2ac = local_2a8;
        }
        local_2c8 = local_2c8 + 1;
        if (4 < local_2c8) {
          local_2c0 = local_2ac;
          local_2b8 = local_2a0;
          local_2b0 = local_2c8;
        }
      }
    }
    if (local_2b0 < 5) {
      uVar3 = 0;
    }
    else {
      *(int *)(param_1 + 0x2f4) = local_2b0;
      *(int *)(param_1 + 0x2f8) = local_2c0;
      *(int *)(param_1 + 0x2fc) = local_2b8;
      cVar2 = FUN_0045f940();
      if (((cVar2 != '\0') && (*(int *)(param_1 + 0x2f8) == 1)) && (*(int *)(param_1 + 0x2fc) == 1))
      {
        *(undefined4 *)(param_1 + 0x2f8) = 2;
        *(undefined4 *)(param_1 + 0x2fc) = 0xe;
      }
      for (local_2a8 = 0; local_2a8 < *(int *)(param_1 + 0x2f4); local_2a8 = local_2a8 + 1) {
        *(int *)(param_1 + 0x2d8 + local_2a8 * 4) = *(int *)(param_1 + 0x2f8) + local_2a8;
      }
      if ((4 < local_2c4) && (local_2c0 != local_2bc)) {
        *(int *)(param_1 + 0x31c) = local_2c4;
        *(int *)(param_1 + 800) = local_2bc;
        *(int *)(param_1 + 0x324) = local_2a4;
        cVar2 = FUN_0045f940();
        if ((cVar2 != '\0') && ((*(int *)(param_1 + 800) == 1 && (*(int *)(param_1 + 0x324) == 1))))
        {
          *(undefined4 *)(param_1 + 800) = 2;
          *(undefined4 *)(param_1 + 0x324) = 0xe;
        }
        for (local_2a8 = 0; local_2a8 < *(int *)(param_1 + 0x31c); local_2a8 = local_2a8 + 1) {
          *(int *)(param_1 + 0x300 + local_2a8 * 4) = *(int *)(param_1 + 800) + local_2a8;
        }
      }
      uVar3 = 1;
    }
  }
  return uVar3;
}

