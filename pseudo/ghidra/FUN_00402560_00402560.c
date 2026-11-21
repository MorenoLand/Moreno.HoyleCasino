// FUN_00402560  00402560

void __thiscall FUN_00402560(int *param_1,int param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  
  cVar2 = FUN_005f54c0();
  if ((((cVar2 == '\0') && (*(char *)(param_2 + 4) == '\0')) &&
      (cVar2 = (**(code **)(*param_1 + 0x84))(param_2), cVar2 != '\0')) &&
     ((param_1[0x5e] != -1 && (iVar3 = FUN_005dcb00(param_1[0x5e]), iVar3 != 0)))) {
    piVar4 = (int *)FUN_0063aac0();
    if ((*piVar4 == 2) || (piVar4 = (int *)FUN_0063aac0(), *piVar4 == 3)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if ((bVar1) && (DAT_007947b4 == 0)) {
      if (*(int *)(param_2 + 0x18) == 2) {
        *(undefined1 *)(param_2 + 4) = 1;
        FUN_004055f0(param_1[0x5e]);
      }
      else if (*(int *)(param_2 + 0x18) == 1) {
        *(undefined1 *)(param_2 + 4) = 1;
      }
    }
  }
  return;
}

