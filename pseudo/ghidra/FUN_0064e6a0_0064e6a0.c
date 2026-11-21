// FUN_0064e6a0  0064e6a0

undefined4 FUN_0064e6a0(int param_1,undefined4 *param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int local_14;
  int local_c;
  int local_8;
  
  if (param_2 == (undefined4 *)0x0) {
    return 0;
  }
  for (local_8 = 0; iVar1 = (**(code **)(*DAT_0162ee84 + 0xec))(), local_8 < iVar1;
      local_8 = local_8 + 1) {
    iVar1 = (**(code **)(*DAT_0162ee84 + 0xe0))(local_8);
    if (iVar1 != 0) {
      piVar2 = (int *)(**(code **)(*DAT_0162ee84 + 0xe0))(local_8);
      iVar1 = (**(code **)(*piVar2 + 0x74))();
      if (iVar1 != 0) {
        for (local_14 = 0; (iVar1 != 0 && (*(int *)(iVar1 + local_14 * 0x194) != -1));
            local_14 = local_14 + 1) {
          if (*(int *)(iVar1 + local_14 * 0x194) == param_1) {
            puVar4 = (undefined4 *)(local_14 * 0x194 + iVar1);
            for (iVar3 = 0x65; iVar3 != 0; iVar3 = iVar3 + -1) {
              *param_2 = *puVar4;
              puVar4 = puVar4 + 1;
              param_2 = param_2 + 1;
            }
            return 1;
          }
        }
      }
    }
  }
  local_8 = 0;
  while( true ) {
    if (*(int *)(&DAT_0076d9c0 + local_8 * 0x194) == -1) {
      FUN_005e9f20("false","..\\casinoShell\\room.cpp",899);
      return 0;
    }
    if (*(int *)(&DAT_0076d9c0 + local_8 * 0x194) == param_1) break;
    local_8 = local_8 + 1;
  }
  puVar4 = (undefined4 *)(&DAT_0076d9c0 + local_8 * 0x194);
  puVar5 = param_2;
  for (iVar1 = 0x65; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  local_14 = 0;
  while( true ) {
    if (99 < local_14) {
      return 1;
    }
    if (param_2[local_14 + 1] == -1) break;
    local_14 = local_14 + 1;
  }
  while (local_c = local_14 + 1, local_c < 100) {
    param_2[local_14 + 2] = 0xffffffff;
    local_14 = local_c;
  }
  return 1;
}

