// FUN_006106f0  006106f0

void __thiscall FUN_006106f0(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint local_88;
  uint local_c;
  int local_8;
  
  puVar2 = param_2;
  puVar3 = param_1;
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  param_1[1] = 0;
  for (local_8 = 0; (param_2[1] != 0 && (*(int *)(param_2[1] + local_8 * 4) != 0));
      local_8 = local_8 + 1) {
  }
  FUN_00611930(local_8,0);
  for (local_c = 0; (int)local_c < local_8; local_c = local_c + 1) {
    if (param_1[9] == 0) {
      local_88 = 0;
    }
    else {
      local_88 = (int)(param_1[10] - param_1[9]) >> 2;
    }
    if (local_88 <= local_c) {
      _invalid_parameter_noinfo();
    }
    *(undefined4 *)(param_1[9] + local_c * 4) = *(undefined4 *)(param_2[1] + local_c * 4);
  }
  param_1[0xc] = 0xffffffff;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  return;
}

