// FUN_00412e10  00412e10

void __thiscall FUN_00412e10(int param_1,undefined4 param_2)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  
  if (*(char *)(param_1 + 8) != '\0') {
    FUN_005dcb00(param_2);
    piVar3 = (int *)FUN_0063aac0();
    if ((*piVar3 == 2) || (piVar3 = (int *)FUN_0063aac0(), *piVar3 == 3)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (bVar1) {
      FUN_0040d840();
    }
    else {
      uVar4 = FUN_0040b1c0(param_2);
      FUN_0041a570(param_2,uVar4);
      iVar2 = DAT_00790324;
      if ((char)uVar4 != '\0') {
        *(undefined4 *)(DAT_00790324 + 0x4ec) = 0;
        *(undefined4 *)(iVar2 + 0x4f0) = param_2;
      }
      (**(code **)(**(int **)(DAT_00790320 + 4) + 8))(1,0);
    }
    return;
  }
  *(undefined1 *)(param_1 + 8) = 1;
  iVar2 = DAT_00790324;
  *(undefined4 *)(DAT_00790324 + 0x4ec) = 8;
  *(undefined4 *)(iVar2 + 0x4f0) = 4;
  (**(code **)(**(int **)(DAT_00790320 + 4) + 8))(1,0);
  return;
}

