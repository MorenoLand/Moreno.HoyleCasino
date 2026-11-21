// FUN_005687e0  005687e0

undefined4 FUN_005687e0(void)

{
  int iVar1;
  undefined1 local_18;
  
  iVar1 = DAT_007947e0;
  if (*(int *)(DAT_007947e0 + 0x4f14) != 8) {
    iVar1 = *(int *)(DAT_007947e0 + 0x4f14);
    if ((iVar1 != 9) && (*(int *)(DAT_007947e0 + 0x4f14) != 10)) {
      local_18 = 0;
      goto LAB_00568837;
    }
  }
  local_18 = 1;
LAB_00568837:
  return CONCAT31((int3)((uint)iVar1 >> 8),local_18);
}

