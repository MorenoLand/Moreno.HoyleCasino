// FUN_005664c0  005664c0

void __thiscall FUN_005664c0(undefined4 *param_1,undefined4 param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined1 local_38;
  int local_30;
  int aiStack_2c [8];
  int local_c;
  int local_8;
  
  local_30 = -1;
  param_1[0xb] = param_2;
  uVar2 = FUN_005659c0(param_2);
  param_1[0xb] = uVar2;
  for (local_c = 0; local_c < 8; local_c = local_c + 1) {
    *(undefined1 *)((int)param_1 + local_c + 0x38) = 0;
  }
  if (param_1[0xb] == 0) {
    (**(code **)(*(int *)*param_1 + 0xb0))(0);
    *(undefined1 *)(param_1 + 0xe) = 1;
  }
  else {
    local_8 = param_1[0xb];
    for (local_c = 0; local_c < 8; local_c = local_c + 1) {
      aiStack_2c[local_c] = local_8 / (int)(&PTR_DAT_00744888)[local_c];
      local_8 = local_8 % (int)(&PTR_DAT_00744888)[local_c];
      if ((local_30 == -1) && (aiStack_2c[local_c] != 0)) {
        local_30 = local_c;
      }
    }
    cVar1 = FUN_00565c70();
    if (cVar1 == '\0') {
      local_8 = 8 - local_30;
      for (local_c = 0; local_c < local_8; local_c = local_c + 1) {
        (**(code **)(*(int *)param_1[local_c] + 0xb0))(aiStack_2c[local_30]);
        *(undefined1 *)((int)param_1 + local_c + 0x38) = 1;
        local_30 = local_30 + 1;
      }
    }
    else {
      for (local_c = 0; local_c < 8; local_c = local_c + 1) {
        (**(code **)(*(int *)param_1[local_c] + 0xb0))(aiStack_2c[7 - local_c]);
        if ((local_30 == -1) || (7 - local_c < local_30)) {
          local_38 = 0;
        }
        else {
          local_38 = 1;
        }
        *(undefined1 *)((int)param_1 + local_c + 0x38) = local_38;
      }
    }
  }
  for (local_c = 0; local_c < 8; local_c = local_c + 1) {
    if (*(char *)((int)param_1 + local_c + 0x38) != '\0') {
      uVar2 = FUN_00566170(local_c);
      (**(code **)(*(int *)param_1[local_c] + 0x48))(uVar2);
    }
  }
  return;
}

