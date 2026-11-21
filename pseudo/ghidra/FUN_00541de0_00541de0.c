// FUN_00541de0  00541de0

uint __thiscall FUN_00541de0(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  
  iVar2 = FUN_00462ba0(param_1 + 200 + param_2 * 6,3,0);
  FUN_005dcb00(param_2);
  piVar3 = (int *)FUN_0063aac0();
  uVar4 = (uint)(*piVar3 == 0);
  if (uVar4 == 0) {
    iVar5 = FUN_005dcb00(param_2);
    uVar4 = CONCAT31((int3)((uint)iVar5 >> 8),*(char *)(iVar5 + 0x4a1));
    if (*(char *)(iVar5 + 0x4a1) == '\0') {
      cVar1 = FUN_00541510(param_2);
      if ((cVar1 == '\0') && (1 < iVar2)) {
        return 1;
      }
      return 0;
    }
  }
  return uVar4 & 0xffffff00;
}

