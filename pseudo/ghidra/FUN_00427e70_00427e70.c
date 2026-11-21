// FUN_00427e70  00427e70

uint FUN_00427e70(void)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  undefined1 local_2c;
  
  if (*(int *)(DAT_00790358 + 0xa0) == -1) {
    return DAT_00790358 & 0xffffff00;
  }
  uVar4 = *(uint *)(DAT_00790358 + 0xa0);
  iVar2 = FUN_005f5400();
  uVar3 = iVar2 / 2;
  if (uVar3 == uVar4) {
    uVar4 = FUN_005f5400();
    uVar4 = uVar4 & 0x80000001;
    if ((int)uVar4 < 0) {
      uVar4 = (uVar4 - 1 | 0xfffffffe) + 1;
    }
    uVar3 = 0;
    if (uVar4 != 1) {
      FUN_00426230();
      piVar5 = (int *)FUN_0063aac0();
      if ((*piVar5 == 2) || (piVar5 = (int *)FUN_0063aac0(), *piVar5 == 3)) {
        bVar1 = true;
      }
      else {
        bVar1 = false;
      }
      uVar3 = 0;
      if (bVar1) {
        iVar2 = FUN_00426230();
        uVar3 = (uint)*(byte *)(iVar2 + 0x4a0);
        if (uVar3 == 0) {
          local_2c = 1;
          goto LAB_00427f50;
        }
      }
    }
  }
  local_2c = 0;
LAB_00427f50:
  return CONCAT31((int3)(uVar3 >> 8),local_2c);
}

