// FUN_0044ba80  0044ba80

void __fastcall FUN_0044ba80(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  FUN_005fb350(0x32);
  uVar2 = FUN_00600230();
  FUN_0044c810(uVar2);
  FUN_005fb350(0x33);
  uVar2 = FUN_00600230();
  FUN_0044c850(uVar2);
  if (DAT_007947b0 != 0) {
    FUN_005fb350(0x33);
    cVar1 = FUN_00600230();
    FUN_005cdd10(cVar1 == '\0');
  }
  cVar1 = FUN_005da830();
  if (cVar1 == '\0') {
    FUN_00637610();
    FUN_004474b0();
    if (*(char *)(param_1 + 0x7c) != '\0') {
      *(undefined1 *)(param_1 + 0x7c) = 0;
      FUN_0044ca20();
      FUN_004497a0();
    }
  }
  else {
    FUN_004474b0();
  }
  return;
}

