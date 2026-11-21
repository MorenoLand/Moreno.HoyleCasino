// FUN_00544d20  00544d20

void __fastcall FUN_00544d20(undefined4 param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = FUN_005f54c0(param_1);
  if (cVar1 != '\0') {
    cVar1 = FUN_0054a830();
    if (cVar1 == '\0') {
      FUN_00544b30(0);
      FUN_00544b30(1);
    }
    else {
      FUN_00544ac0(0);
      FUN_00544ac0(1);
    }
    cVar1 = FUN_0054a890();
    if (cVar1 == '\0') {
      FUN_00544b30(2);
    }
    else {
      FUN_00544ac0(2);
    }
    FUN_00544860(2);
    FUN_005452a0();
    FUN_00545340();
    cVar1 = FUN_0054a8b0();
    if (cVar1 != '\0') {
      uVar2 = FUN_005dcb00(0);
      FUN_005dbb70(uVar2);
    }
  }
  return;
}

