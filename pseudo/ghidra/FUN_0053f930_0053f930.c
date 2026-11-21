// FUN_0053f930  0053f930

void __fastcall FUN_0053f930(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  FUN_005fb350(0x32);
  uVar2 = FUN_00600230();
  FUN_00540690(uVar2);
  FUN_005fb350(0x33);
  uVar2 = FUN_00600230();
  FUN_005406d0(uVar2);
  cVar1 = FUN_005da830();
  if (cVar1 == '\0') {
    FUN_00637610();
    FUN_0053b1a0();
    if (*(char *)(param_1 + 0x7c) != '\0') {
      *(undefined1 *)(param_1 + 0x7c) = 0;
      FUN_005408b0();
      FUN_0053d3c0();
    }
  }
  else {
    FUN_0053b1a0();
  }
  return;
}

