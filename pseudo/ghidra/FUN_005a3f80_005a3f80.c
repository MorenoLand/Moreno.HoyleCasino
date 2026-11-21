// FUN_005a3f80  005a3f80

uint __thiscall FUN_005a3f80(undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  
  FUN_005dcb00(param_2,param_1);
  piVar1 = (int *)FUN_0063aac0();
  uVar2 = (uint)(*piVar1 == 0);
  if (uVar2 == 0) {
    iVar3 = FUN_005dcb00(param_2,param_1);
    uVar2 = CONCAT31((int3)((uint)iVar3 >> 8),*(char *)(iVar3 + 0x4a1));
    if (*(char *)(iVar3 + 0x4a1) == '\0') {
      uVar2 = FUN_005a3e80(param_2);
      return uVar2;
    }
  }
  return uVar2 & 0xffffff00;
}

