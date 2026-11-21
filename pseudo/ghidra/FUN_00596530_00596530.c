// FUN_00596530  00596530

void __fastcall FUN_00596530(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  FUN_005fb350(0x32);
  uVar2 = FUN_00600230();
  FUN_00599550(uVar2);
  FUN_005fb350(0x33);
  uVar2 = FUN_00600230();
  FUN_00599520(uVar2);
  cVar1 = FUN_005da830();
  if (cVar1 == '\0') {
    FUN_00637610();
    FUN_00591a70();
    if (*(char *)(param_1 + 0x7c) != '\0') {
      *(undefined1 *)(param_1 + 0x7c) = 0;
      FUN_00599210();
      FUN_00595790();
    }
  }
  else {
    FUN_00591a70();
  }
  return;
}

