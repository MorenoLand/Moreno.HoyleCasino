// FUN_00595570  00595570

void FUN_00595570(undefined4 param_1)

{
  char cVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 uVar4;
  int extraout_var;
  int iVar5;
  
  uVar2 = FUN_005dcb00(param_1);
  iVar5 = extraout_var;
  piVar3 = (int *)FUN_0063aac0();
  if (*piVar3 != 2) {
    piVar3 = (int *)FUN_0063aac0();
    if (*piVar3 != 3) {
      uVar4 = 0;
      goto LAB_005955c2;
    }
  }
  uVar4 = 1;
LAB_005955c2:
  if ((char)uVar4 == '\0') {
    FUN_0057ae30(uVar4,iVar5,uVar2);
    if (*(char *)(iVar5 + 8) == '\0') {
      *(undefined1 *)(iVar5 + 8) = 1;
      uVar2 = FUN_00637810(2);
      FUN_005da360(uVar2);
    }
    else {
      *(undefined1 *)(iVar5 + 8) = 0;
      uVar2 = FUN_00590850(param_1);
      FUN_005997f0(param_1,uVar2);
      FUN_005994c0((char)uVar2 != '\0',param_1);
      FUN_005994a0(param_1,1);
      (**(code **)(**(int **)(DAT_007935a4 + 4) + 8))(2,0);
    }
  }
  else {
    cVar1 = FUN_005df700(0xffffffff);
    if (cVar1 == '\0') {
      FUN_0057ae30(uVar4,iVar5,uVar2);
    }
    else {
      FUN_0057ab80(0xb,&DAT_0074d980);
      FUN_00599590(param_1);
    }
    FUN_00599570(param_1,1);
    FUN_00591fa0();
  }
  return;
}

