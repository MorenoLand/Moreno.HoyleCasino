// FUN_00418e20  00418e20

undefined1 __fastcall FUN_00418e20(int param_1)

{
  int iVar1;
  
  if ((*(char *)(param_1 + 0x4cc) == '\0') &&
     (iVar1 = FUN_00418e70(), *(int *)(param_1 + 0x4c8) < iVar1)) {
    return 0;
  }
  return 1;
}

