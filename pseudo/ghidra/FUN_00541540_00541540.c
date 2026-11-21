// FUN_00541540  00541540

undefined4 __thiscall FUN_00541540(int param_1,undefined4 param_2,char param_3)

{
  bool bVar1;
  char cVar2;
  int *piVar3;
  
  cVar2 = FUN_005df7b0(0xffffffff);
  if ((cVar2 != '\0') && (*(char *)(param_1 + 0xec) == '\0')) {
    FUN_005dcb00(param_2);
    piVar3 = (int *)FUN_0063aac0();
    if ((*piVar3 == 2) || (piVar3 = (int *)FUN_0063aac0(), *piVar3 == 3)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if ((bVar1) && (cVar2 = FUN_00539f40(param_2), param_3 != cVar2)) {
      *(undefined1 *)(param_1 + 0xec) = 1;
      FUN_0057c140();
      return 1;
    }
  }
  return 0;
}

