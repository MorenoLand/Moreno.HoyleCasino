// FUN_00535e70  00535e70

int __fastcall FUN_00535e70(int param_1)

{
  int iVar1;
  int local_30;
  int aiStack_24 [5];
  int local_10;
  int local_c;
  int local_8;
  
  iVar1 = (**(code **)(*DAT_00793394 + 0x40))();
  local_8 = -1;
  for (local_10 = 0; local_10 < 5; local_10 = local_10 + 1) {
    local_c = *(int *)(param_1 + 100 + local_10 * 4);
    if ((local_c != -1) && (iVar1 != 1)) {
      if (*(int *)(param_1 + 100 + local_10 * 4) == 1000) {
        local_c = FUN_00535e50();
        local_c = local_c + -1;
      }
      else {
        local_c = FUN_00535e50();
        local_c = local_c - *(int *)(param_1 + 100 + local_10 * 4);
        if (local_c < 0) {
          local_c = 0;
        }
      }
    }
    aiStack_24[local_10] = local_c;
  }
  for (local_10 = 0; local_10 < 5; local_10 = local_10 + 1) {
    if (aiStack_24[local_10] < local_8) {
      local_30 = local_8;
    }
    else {
      local_30 = aiStack_24[local_10];
    }
    local_8 = local_30;
  }
  return local_8;
}

