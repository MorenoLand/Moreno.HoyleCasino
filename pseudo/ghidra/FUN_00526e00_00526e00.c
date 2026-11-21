// FUN_00526e00  00526e00

void __fastcall FUN_00526e00(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  FUN_005fb350(0x32);
  uVar2 = FUN_00600230();
  FUN_00527cc0(uVar2);
  FUN_005fb350(0x33);
  uVar2 = FUN_00600230();
  FUN_00527d00(uVar2);
  if (DAT_007947b0 != 0) {
    FUN_005fb350(0x33);
    cVar1 = FUN_00600230();
    FUN_005cdd10(cVar1 == '\0');
  }
  FUN_00637610();
  FUN_00522650();
  if (*(char *)(param_1 + 0x7c) != '\0') {
    *(undefined1 *)(param_1 + 0x7c) = 0;
    FUN_00527e50();
    FUN_00524500();
  }
  return;
}

