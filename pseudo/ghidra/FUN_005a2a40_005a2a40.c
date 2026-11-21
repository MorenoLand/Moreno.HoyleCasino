// FUN_005a2a40  005a2a40

undefined4 FUN_005a2a40(undefined4 param_1,char param_2,char param_3)

{
  char cVar1;
  undefined4 uVar2;
  int *piVar3;
  int extraout_var;
  int iVar4;
  char local_6;
  char local_5;
  
  FUN_0059b080(param_1,&local_6,&local_5);
  iVar4 = extraout_var;
  cVar1 = FUN_005df7b0(0xffffffff);
  if ((cVar1 != '\0') && (*(char *)(iVar4 + 0xf0) == '\0')) {
    uVar2 = FUN_005dcb00(param_1);
    piVar3 = (int *)FUN_0063aac0();
    if ((*piVar3 == 2) || (piVar3 = (int *)FUN_0063aac0(), *piVar3 == 3)) {
      cVar1 = '\x01';
    }
    else {
      cVar1 = '\0';
    }
    if ((cVar1 != '\0') && ((param_2 != local_6 || (param_3 != local_5)))) {
      *(undefined1 *)(iVar4 + 0xf0) = 1;
      FUN_0057c140(cVar1,iVar4,uVar2);
      return 1;
    }
  }
  return 0;
}

