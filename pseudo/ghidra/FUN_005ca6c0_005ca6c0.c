// FUN_005ca6c0  005ca6c0

void FUN_005ca6c0(void)

{
  int *piVar1;
  int *piVar2;
  undefined8 uVar3;
  char cVar4;
  undefined4 extraout_var;
  undefined4 uVar5;
  
  piVar1 = (int *)(**(code **)(*DAT_007947e4 + 0x25c))();
  if (piVar1 != (int *)0x0) {
    uVar5 = extraout_var;
    piVar2 = (int *)FUN_0063aac0();
    if ((*piVar2 == 2) || (piVar2 = (int *)FUN_0063aac0(), *piVar2 == 3)) {
      cVar4 = '\x01';
    }
    else {
      cVar4 = '\0';
    }
    if (cVar4 != '\0') {
      uVar3 = FUN_0064c8a0(0,0,cVar4,uVar5);
      FUN_005d5e10(uVar3);
      FUN_005ca8b0();
      uVar3 = FUN_0064c8a0(0,0);
      (**(code **)(*piVar1 + 0xc))(uVar3,0);
    }
    return;
  }
  return;
}

