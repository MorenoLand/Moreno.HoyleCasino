// FUN_0045e6a0  0045e6a0

void __fastcall FUN_0045e6a0(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  
  FUN_005fb350(0x33);
  uVar2 = FUN_00600230();
  FUN_0045f920(uVar2);
  FUN_005fb350(0x34);
  uVar2 = FUN_00600230();
  FUN_0045f8d0(uVar2);
  if (*(int *)(DAT_00790740 + 0x98) != 0) {
    FUN_005fb350(0x34);
    cVar1 = FUN_00600230();
    FUN_0045b0a0(cVar1 == '\0');
  }
  FUN_005fb350(0x36);
  uVar2 = FUN_00600230();
  FUN_0045f890(uVar2);
  cVar1 = FUN_005da830();
  if (cVar1 == '\0') {
    FUN_005fb350(0x32);
    uVar2 = FUN_00600230();
    FUN_0045f970(uVar2);
    cVar1 = FUN_005da830();
    if (cVar1 == '\0') {
      iVar3 = (**(code **)(*DAT_00790734 + 0x2b0))();
      if ((iVar3 != 100) && (*(int *)(param_1 + 0x80) != 1)) {
        FUN_005fb350(0x35);
        uVar2 = FUN_00600230();
        FUN_0045f9f0(uVar2);
      }
    }
    FUN_00637610();
    FUN_004587e0();
    if (*(char *)(param_1 + 0x7c) != '\0') {
      *(undefined1 *)(param_1 + 0x7c) = 0;
      FUN_0045ffe0();
      FUN_0045b300();
    }
  }
  else {
    FUN_004587e0();
  }
  return;
}

