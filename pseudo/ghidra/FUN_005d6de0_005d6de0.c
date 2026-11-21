// FUN_005d6de0  005d6de0

void __fastcall FUN_005d6de0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  iVar1 = FUN_005d52e0();
  if (*(char *)(iVar1 + 0x2a) != '\a') {
    iVar1 = FUN_005d52e0();
    *(undefined1 *)(iVar1 + 0x29) = 1;
  }
  *(undefined1 *)(param_1 + 0x4b1) = 1;
  uVar2 = FUN_005d6bd0(0);
  uVar3 = FUN_0064c8a0(uVar2);
  FUN_005d5cf0(uVar3);
  *(undefined1 *)(param_1 + 0x4b1) = 0;
  FUN_0063b0a0();
  return;
}

