// FUN_00463aa0  00463aa0

int FUN_00463aa0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined2 uVar3;
  int local_18;
  int local_14;
  int local_c;
  int local_8;
  
  local_c = 1;
  for (local_8 = 0; local_14 = 1, local_8 < param_2; local_8 = local_8 + 1) {
    uVar3 = (undefined2)((uint)local_8 >> 0x10);
    iVar1 = FUN_00641280(CONCAT22(uVar3,*(undefined2 *)(param_1 + local_8 * 2)));
    for (local_18 = 0; local_18 < param_2; local_18 = local_18 + 1) {
      if ((local_8 != local_18) &&
         (iVar2 = FUN_00641280(CONCAT22(uVar3,*(undefined2 *)(param_1 + local_18 * 2))),
         iVar1 == iVar2)) {
        local_14 = local_14 + 1;
      }
    }
    if (local_c < local_14) {
      local_c = local_14;
    }
  }
  return local_c;
}

