// FUN_0045f990  0045f990

undefined1 __fastcall FUN_0045f990(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  
  cVar1 = FUN_005da830(param_1);
  if ((cVar1 == '\0') && (iVar2 = (**(code **)(*DAT_00790734 + 0x2b0))(), iVar2 != 100)) {
    iVar2 = FUN_0045e8e0();
    if (iVar2 == 1) {
      return 0;
    }
    iVar2 = FUN_0045f830(0xffffffff);
    return *(undefined1 *)(iVar2 + 4);
  }
  return 0;
}

