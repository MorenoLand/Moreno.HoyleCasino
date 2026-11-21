// FUN_00637670  00637670

undefined1 __fastcall FUN_00637670(int *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x17c))();
  if (iVar1 != 0) {
    FUN_006375b0();
    iVar1 = FUN_0063aac0();
    if (*(char *)(iVar1 + 0x25d) != '\0') {
      return 1;
    }
  }
  return 0;
}

