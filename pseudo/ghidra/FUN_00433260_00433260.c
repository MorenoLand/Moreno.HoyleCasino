// FUN_00433260  00433260

void __fastcall FUN_00433260(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  FUN_005fb350(0x33);
  uVar2 = FUN_00600230();
  FUN_004342f0(uVar2);
  FUN_005fb350(0x34);
  uVar2 = FUN_00600230();
  FUN_004343b0(uVar2);
  FUN_005fb350(0x35);
  uVar2 = FUN_00600230();
  FUN_00434260(uVar2);
  FUN_005fb350(0x36);
  uVar2 = FUN_00600230();
  FUN_004343f0(uVar2);
  FUN_005fb350(0x37);
  uVar2 = FUN_00600230();
  FUN_004342a0(uVar2);
  if (DAT_007947b0 != 0) {
    FUN_005fb350(0x37);
    cVar1 = FUN_00600230();
    FUN_005cdd10(cVar1 == '\0');
  }
  cVar1 = FUN_005da7b0();
  if (cVar1 == '\0') {
    FUN_005fb5e0(0x32);
    uVar2 = FUN_00605f40();
    FUN_00434370(uVar2);
    FUN_005fb350(0x38);
    uVar2 = FUN_00600230();
    FUN_00434440(uVar2);
    FUN_00637610();
    FUN_004299b0();
    if (*(char *)(param_1 + 0x7c) != '\0') {
      *(undefined1 *)(param_1 + 0x7c) = 0;
      FUN_004299b0();
      FUN_00434620();
      FUN_0042f230();
    }
  }
  else {
    FUN_004299b0();
  }
  return;
}

