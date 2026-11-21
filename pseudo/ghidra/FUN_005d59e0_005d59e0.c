// FUN_005d59e0  005d59e0

void FUN_005d59e0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  char cVar3;
  undefined4 extraout_var;
  undefined4 uVar4;
  
  iVar1 = FUN_005d52e0();
  *(undefined4 *)(iVar1 + 8) = param_1;
  *(undefined4 *)(iVar1 + 0xc) = param_2;
  uVar4 = extraout_var;
  piVar2 = (int *)FUN_0063aac0();
  if (*piVar2 != 2) {
    piVar2 = (int *)FUN_0063aac0();
    if (*piVar2 != 3) {
      cVar3 = '\0';
      goto LAB_005d5a33;
    }
  }
  cVar3 = '\x01';
LAB_005d5a33:
  if (cVar3 != '\0') {
    FUN_0063b0a0(cVar3,uVar4);
  }
  return;
}

