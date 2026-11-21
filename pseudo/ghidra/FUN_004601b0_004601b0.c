// FUN_004601b0  004601b0

uint __fastcall FUN_004601b0(uint param_1)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  uint local_8;
  
  uVar1 = param_1;
  if (((*(int *)(param_1 + 0x10c) != 4) && (uVar1 = *(uint *)(param_1 + 0x10c), uVar1 != 0xffffffff)
      ) && (*(char *)(param_1 + 0x114) == '\0')) {
    return CONCAT31((int3)(uVar1 >> 8),1);
  }
  local_8 = 0;
  do {
    if (3 < (int)local_8) {
      return uVar1 & 0xffffff00;
    }
    if (local_8 != *(uint *)(param_1 + 0x10c)) {
      FUN_005dcb00(local_8);
      piVar2 = (int *)FUN_0063aac0();
      if (((*piVar2 != 0) && (iVar3 = FUN_005dcb00(local_8), *(char *)(iVar3 + 0x4a1) == '\0')) &&
         (iVar3 = FUN_005dcb00(local_8), *(char *)(iVar3 + 0x4a0) == '\0')) {
        return 1;
      }
    }
    uVar1 = local_8 + 1;
    local_8 = uVar1;
  } while( true );
}

