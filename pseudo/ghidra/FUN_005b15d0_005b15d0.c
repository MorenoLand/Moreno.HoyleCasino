// FUN_005b15d0  005b15d0

void __thiscall FUN_005b15d0(undefined4 param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  iVar2 = FUN_005dcb00(param_2,param_1);
  if (*(char *)(iVar2 + 0x4a0) != '\0') {
    puVar1 = (undefined4 *)(*(int *)(DAT_00793604 + 0x580 + param_2 * 4) + 0x48 + param_2 * 0x20);
    uVar3 = *puVar1;
    uVar4 = puVar1[1];
    FUN_005dcb00(param_2,uVar3,uVar4);
    FUN_005d5cf0(uVar3,uVar4);
    puVar1 = (undefined4 *)(*(int *)(DAT_00793604 + 0x634 + param_2 * 4) + 0x48 + param_2 * 0x20);
    uVar3 = *puVar1;
    uVar4 = puVar1[1];
    FUN_005dcb00(param_2,uVar3,uVar4);
    FUN_005d5cf0(uVar3,uVar4);
  }
  FUN_005cb9b0();
  FUN_005cb9b0();
  return;
}

