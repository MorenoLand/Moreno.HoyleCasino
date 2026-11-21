// FUN_005496a0  005496a0

void __fastcall FUN_005496a0(int param_1)

{
  char cVar1;
  undefined2 uVar2;
  undefined2 extraout_var;
  
  uVar2 = FUN_006436c0();
  FUN_00548fe0(*(undefined4 *)(param_1 + 0x20),CONCAT22(extraout_var,uVar2),1,0);
  FUN_005450a0();
  cVar1 = FUN_0054a740(*(undefined4 *)(param_1 + 0x20));
  if (cVar1 == '\0') {
    cVar1 = FUN_0054a770(*(undefined4 *)(param_1 + 0x20));
    if (cVar1 != '\0') {
      FUN_00549750();
    }
  }
  else {
    FUN_005493d0();
  }
  return;
}

