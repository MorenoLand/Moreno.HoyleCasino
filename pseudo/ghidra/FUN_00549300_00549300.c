// FUN_00549300  00549300

void __fastcall FUN_00549300(int param_1)

{
  char cVar1;
  int iVar2;
  undefined2 extraout_var;
  
  FUN_005450a0();
  iVar2 = FUN_00641280(CONCAT22(extraout_var,*(undefined2 *)(param_1 + 0x2a)));
  cVar1 = FUN_0054a6c0(0);
  if ((cVar1 == '\0') || (iVar2 == 0xe)) {
    cVar1 = FUN_0054a6c0(1);
    if (cVar1 != '\0') {
      FUN_005442b0();
      FUN_00545600(7);
      FUN_005493a0();
    }
  }
  else {
    FUN_005442b0();
    FUN_005493a0();
  }
  return;
}

