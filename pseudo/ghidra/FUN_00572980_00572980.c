// FUN_00572980  00572980

void __fastcall FUN_00572980(int param_1)

{
  char cVar1;
  int iVar2;
  
  iVar2 = FUN_005f3e50();
  if (*(int *)(param_1 + 0x80) < iVar2) {
    iVar2 = FUN_005f3e50();
    *(int *)(param_1 + 0x80) = iVar2 + 0xa8c;
    cVar1 = FUN_005f4740();
    if (cVar1 == '\0') {
      FUN_005f4620(0x1925c,0x3f800000);
    }
  }
  return;
}

