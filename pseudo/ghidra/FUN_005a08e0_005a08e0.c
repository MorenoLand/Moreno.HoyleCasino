// FUN_005a08e0  005a08e0

void __fastcall FUN_005a08e0(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  FUN_005fb350(0x32);
  uVar2 = FUN_00600230();
  FUN_005a3c00(uVar2);
  FUN_005fb350(0x33);
  uVar2 = FUN_00600230();
  FUN_005a3bd0(uVar2);
  FUN_005fb350(0x34);
  uVar2 = FUN_00600230();
  FUN_005a3ba0(uVar2);
  cVar1 = FUN_005da830();
  if (cVar1 == '\0') {
    FUN_00637610();
    FUN_0059c2d0();
    if (*(char *)(param_1 + 0x7c) != '\0') {
      *(undefined1 *)(param_1 + 0x7c) = 0;
      FUN_005a3880();
      FUN_0059fa00();
    }
  }
  else {
    FUN_0059c2d0();
  }
  return;
}

