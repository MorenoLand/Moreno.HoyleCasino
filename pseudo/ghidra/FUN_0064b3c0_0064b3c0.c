// FUN_0064b3c0  0064b3c0

void __fastcall FUN_0064b3c0(int *param_1)

{
  int iVar1;
  int iVar2;
  int local_30;
  int local_2c;
  int local_28 [9];
  
  local_28[0] = 0x33;
  local_28[1] = 0;
  local_28[2] = 0;
  local_28[3] = 0x2a;
  local_28[4] = 0x3c;
  local_28[5] = 0;
  local_28[6] = 0x21;
  local_28[7] = 0x33;
  local_28[8] = 0x45;
  local_2c = 0;
  for (local_30 = 0; iVar1 = local_2c, local_30 < 3; local_30 = local_30 + 1) {
    if (param_1[local_30 + 0x66] != 0) {
      local_2c = local_2c + 1;
    }
  }
  if (local_2c != 0) {
    local_30 = 0;
    while ((local_30 < 3 && (local_2c != 0))) {
      if (param_1[local_30 + 0x66] != 0) {
        iVar2 = (**(code **)(*param_1 + 0x54))();
        iVar2 = (**(code **)(*param_1 + 0x4c))(iVar2 + 0x23);
        (**(code **)(*(int *)param_1[local_30 + 0x66] + 0x44))
                  (iVar2 + local_28[(iVar1 * 4 + -3) - local_2c]);
        (**(code **)(*(int *)param_1[local_30 + 0x66] + 0x74))();
        local_2c = local_2c + -1;
      }
      local_30 = local_30 + 1;
    }
    if (local_2c != 0) {
      FUN_005e9f20("count == 0","..\\casinoShell\\character.cpp",0x7f9);
    }
  }
  return;
}

