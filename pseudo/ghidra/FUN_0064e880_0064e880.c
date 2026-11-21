// FUN_0064e880  0064e880

undefined4 FUN_0064e880(int param_1,undefined4 *param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  int local_14;
  int local_10;
  int local_8;
  
  for (local_8 = 0; iVar1 = (**(code **)(*DAT_0162ee84 + 0xec))(), local_8 < iVar1;
      local_8 = local_8 + 1) {
    iVar1 = (**(code **)(*DAT_0162ee84 + 0xe0))(local_8);
    if (iVar1 != 0) {
      piVar2 = (int *)(**(code **)(*DAT_0162ee84 + 0xe0))(local_8);
      iVar1 = (**(code **)(*piVar2 + 0x78))();
      if (iVar1 != 0) {
        for (local_10 = 0; (iVar1 != 0 && (*(int *)(iVar1 + local_10 * 0x10) != -1));
            local_10 = local_10 + 1) {
          if (*(int *)(iVar1 + local_10 * 0x10) == param_1) {
            puVar3 = (undefined4 *)(local_10 * 0x10 + iVar1);
            *param_2 = *puVar3;
            param_2[1] = puVar3[1];
            param_2[2] = puVar3[2];
            param_2[3] = puVar3[3];
            return 1;
          }
        }
      }
    }
  }
  iVar1 = (**(code **)(*DAT_0162ee84 + 0x250))();
  if (iVar1 != 0) {
    for (local_8 = 0; (iVar1 != 0 && (*(int *)(iVar1 + local_8 * 0x10) != -1));
        local_8 = local_8 + 1) {
      if (*(int *)(iVar1 + local_8 * 0x10) == param_1) {
        puVar3 = (undefined4 *)(local_8 * 0x10 + iVar1);
        *param_2 = *puVar3;
        param_2[1] = puVar3[1];
        param_2[2] = puVar3[2];
        param_2[3] = puVar3[3];
        return 1;
      }
    }
  }
  local_8 = 0;
  while( true ) {
    if (*(int *)(&DAT_0076f7c0 + local_8 * 0x10) == -1) {
      local_8 = 0;
      do {
        iVar1 = (**(code **)(*DAT_0162ee84 + 0xec))();
        if (iVar1 <= local_8) {
          FUN_0062fde0("Menu item not defined.\n");
          FUN_005e9f20("false","..\\casinoShell\\room.cpp",0x3ce);
          return 0;
        }
        iVar1 = (**(code **)(*DAT_0162ee84 + 0xe0))(local_8);
        if (iVar1 != 0) {
          piVar2 = (int *)(**(code **)(*DAT_0162ee84 + 0xe0))(local_8);
          iVar1 = (**(code **)(*piVar2 + 0x6c))();
          if (iVar1 != 0) {
            for (local_14 = 0; (iVar1 != 0 && (*(int *)(iVar1 + local_14 * 0x10) != -1));
                local_14 = local_14 + 1) {
              if (*(int *)(iVar1 + local_14 * 0x10) == param_1) {
                puVar3 = (undefined4 *)(local_14 * 0x10 + iVar1);
                *param_2 = *puVar3;
                param_2[1] = puVar3[1];
                param_2[2] = puVar3[2];
                param_2[3] = puVar3[3];
                return 1;
              }
            }
          }
        }
        local_8 = local_8 + 1;
      } while( true );
    }
    if (*(int *)(&DAT_0076f7c0 + local_8 * 0x10) == param_1) break;
    local_8 = local_8 + 1;
  }
  iVar1 = local_8 * 0x10;
  *param_2 = *(undefined4 *)(&DAT_0076f7c0 + iVar1);
  param_2[1] = (&PTR_s_SID_GENERIC_EMPTY_0076f7c4)[local_8 * 4];
  param_2[2] = *(undefined4 *)(&DAT_0076f7c8 + iVar1);
  param_2[3] = *(undefined4 *)(&DAT_0076f7cc + iVar1);
  return 1;
}

