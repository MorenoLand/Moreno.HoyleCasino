// FUN_006388b0  006388b0

int __fastcall FUN_006388b0(int *param_1)

{
  char cVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  
  uVar2 = FUN_005f3bf0();
  cVar1 = (**(code **)(*param_1 + 0x33c))(uVar2);
  if (((cVar1 == '\0') ||
      (piVar3 = (int *)(**(code **)(*param_1 + 0xe0))(uVar2), piVar3 == (int *)0x0)) ||
     (iVar4 = (**(code **)(*piVar3 + 0x80))(), iVar4 == 0)) {
    FUN_006375b0();
    iVar4 = FUN_00639ff0();
  }
  return iVar4;
}

