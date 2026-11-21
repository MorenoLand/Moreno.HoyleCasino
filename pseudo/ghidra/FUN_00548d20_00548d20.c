// FUN_00548d20  00548d20

void __thiscall FUN_00548d20(int param_1,char param_2)

{
  undefined1 uVar1;
  char cVar2;
  
  *(undefined1 *)(param_1 + 0x25) = 0;
  if (param_2 != '\0') {
    uVar1 = FUN_00548e50();
    *(undefined1 *)(param_1 + 0x25) = uVar1;
  }
  FUN_00544830();
  FUN_005450a0();
  cVar2 = FUN_0054a6c0(0);
  if (cVar2 != '\0') {
    FUN_005442b0();
    FUN_005493a0();
  }
  return;
}

