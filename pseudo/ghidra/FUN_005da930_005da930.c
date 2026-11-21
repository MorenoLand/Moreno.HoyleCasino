// FUN_005da930  005da930

undefined1 __thiscall FUN_005da930(int *param_1,undefined4 param_2)

{
  bool bVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  
  cVar2 = FUN_005da7b0();
  if ((cVar2 != '\0') && (cVar2 = (**(code **)(*param_1 + 0x80))(), cVar2 != '\0')) {
    FUN_005dcb00(param_2);
    piVar3 = (int *)FUN_0063aac0();
    if ((*piVar3 == 2) || (piVar3 = (int *)FUN_0063aac0(), *piVar3 == 3)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if ((!bVar1) || (iVar4 = FUN_00636690(), 1 < iVar4)) {
      return 1;
    }
  }
  return 0;
}

