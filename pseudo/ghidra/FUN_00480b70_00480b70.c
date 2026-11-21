// FUN_00480b70  00480b70

void __fastcall FUN_00480b70(int param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  *(undefined4 *)(param_1 + 0xf4) = *(undefined4 *)(DAT_007947e0 + 0x4efc);
  *(undefined4 *)(param_1 + 0xf8) = *(undefined4 *)(DAT_007947e0 + 0x4f00);
  FUN_004fbca0();
  FUN_00480710(0);
  *(undefined1 *)(DAT_007947e0 + 0x4f04) = 1;
  uVar2 = FUN_0064c8a0(0,0);
  iVar1 = FUN_005dcb00(0);
  *(undefined8 *)(iVar1 + 0x4dc) = uVar2;
  return;
}

