// FUN_00650210  00650210

void __fastcall FUN_00650210(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  int local_8;
  
  local_8 = 0;
  while( true ) {
    iVar1 = (**(code **)(*DAT_0162ee84 + 0x10c))(param_1);
    if (iVar1 <= local_8) break;
    piVar2 = (int *)FUN_0063aac0();
    if ((((*piVar2 != 0) && (*(int *)(*(int *)(DAT_0162ee84[0x16] + local_8 * 4) + 0x20) != 0)) &&
        (*(int *)(*(int *)(*(int *)(DAT_0162ee84[0x16] + local_8 * 4) + 0x20) + 0xc) != 0)) &&
       (*(int *)(*(int *)(*(int *)(*(int *)(DAT_0162ee84[0x16] + local_8 * 4) + 0x20) + 0xc) + 0x17c
                ) != 0)) {
      FUN_005fc250(param_1,*(undefined4 *)(*(int *)(DAT_0162ee84[0x16] + local_8 * 4) + 0x20));
    }
    local_8 = local_8 + 1;
  }
  return;
}

