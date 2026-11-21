// FUN_006483e0  006483e0

int FUN_006483e0(undefined4 param_1)

{
  int iVar1;
  int local_10;
  int local_8;
  
  local_10 = 0;
  iVar1 = FUN_00639520(param_1);
  local_8 = 0;
  while ((local_8 < 0x14 && (*(int *)(&DAT_00763580 + local_10 * 0x2c + iVar1 * 0x380) != 0))) {
    if (*(int *)(&DAT_007635a8 + local_10 * 0x2c + iVar1 * 0x380) == 0) {
      local_10 = local_10 + 1;
    }
    local_8 = local_8 + 1;
  }
  return local_10;
}

