// FUN_0064d2d0  0064d2d0

void FUN_0064d2d0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int local_8;
  
  local_8 = 0;
  while( true ) {
    iVar2 = (**(code **)(*DAT_0162ee84 + 0x10c))();
    if (iVar2 <= local_8) break;
    uVar1 = *(undefined4 *)(&DAT_0076d47c + local_8 * 8);
    *(undefined4 *)(param_1 + local_8 * 8) = *(undefined4 *)(&DAT_0076d478 + local_8 * 8);
    *(undefined4 *)(param_1 + 4 + local_8 * 8) = uVar1;
    local_8 = local_8 + 1;
  }
  return;
}

