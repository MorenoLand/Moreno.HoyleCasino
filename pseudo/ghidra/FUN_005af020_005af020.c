// FUN_005af020  005af020

void FUN_005af020(undefined4 param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  int extraout_var;
  int iVar6;
  
  uVar2 = FUN_005b4e50(param_1);
  iVar6 = extraout_var;
  iVar3 = FUN_005b5830(param_1,uVar2);
  if (iVar3 != 1) {
    uVar2 = FUN_005dcb00(param_1);
    piVar4 = (int *)FUN_0063aac0();
    if ((*piVar4 == 2) || (piVar4 = (int *)FUN_0063aac0(), *piVar4 == 3)) {
      uVar5 = 1;
    }
    else {
      uVar5 = 0;
    }
    if ((char)uVar5 == '\0') {
      FUN_0057ae30(uVar5,iVar6,uVar2);
      if (*(int *)(DAT_00793604 + 0x5bc) == -1) {
        uVar2 = FUN_005a4b20(param_1);
        *(undefined4 *)(DAT_00793604 + 0x5bc) = uVar2;
      }
      if (*(char *)(iVar6 + 0xc) == '\0') {
        *(undefined1 *)(iVar6 + 0xc) = 1;
        FUN_005b7310(1,param_1);
        (**(code **)(**(int **)(DAT_00793600 + 4) + 8))(1,0);
      }
      else {
        *(undefined1 *)(iVar6 + 0xc) = 0;
        FUN_005ad1f0(param_1,0xffffffff,1);
      }
    }
    else {
      *(undefined1 *)(iVar6 + 5) = 0;
      cVar1 = FUN_005df700(0xffffffff);
      if (cVar1 == '\0') {
        FUN_0057ae30(uVar5,iVar6,uVar2);
      }
      else {
        FUN_0057ab80(0xb,&DAT_00756258);
        FUN_005b74a0();
        FUN_005b7600();
      }
      FUN_005a80d0();
    }
    return;
  }
  FUN_005ad1f0(param_1,1,0);
  return;
}

