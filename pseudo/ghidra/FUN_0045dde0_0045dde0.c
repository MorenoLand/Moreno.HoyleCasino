// FUN_0045dde0  0045dde0

void __thiscall FUN_0045dde0(int param_1,int param_2)

{
  undefined4 *puVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  iVar3 = FUN_005dcb00(param_2);
  if (*(char *)(iVar3 + 0x4a0) != '\0') {
    cVar2 = (**(code **)(**(int **)(DAT_00790738 + 4) + 0xb4))();
    if (cVar2 != '\0') {
      puVar1 = (undefined4 *)(*(int *)(DAT_00790738 + 4) + 0x48 + param_2 * 0x20);
      uVar4 = *puVar1;
      uVar5 = puVar1[1];
      FUN_005dcb00(param_2,uVar4,uVar5);
      FUN_005d5cf0(uVar4,uVar5);
      if (*(int *)(param_1 + 0x80) == 1) {
        iVar3 = *(int *)(DAT_00790738 + 4) + 0x48 + param_2 * 0x20;
        uVar4 = *(undefined4 *)(iVar3 + 8);
        uVar5 = *(undefined4 *)(iVar3 + 0xc);
        FUN_005dcb00(param_2,uVar4,uVar5);
        FUN_005d5cf0(uVar4,uVar5);
      }
    }
    (**(code **)(**(int **)(DAT_00790738 + 4) + 0xbc))(param_2,0);
    (**(code **)(**(int **)(DAT_00790738 + 4) + 0xbc))(param_2,1);
  }
  return;
}

