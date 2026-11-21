// FUN_005d74b0  005d74b0

void __fastcall FUN_005d74b0(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined4 *)(param_1 + 0x4b4);
  uVar2 = *(undefined4 *)(param_1 + 0x4b8);
  uVar3 = FUN_0064c8a0(0,0);
  *(undefined8 *)(param_1 + 0x4b4) = uVar3;
  uVar3 = FUN_0064c8a0(0,0);
  FUN_005d59e0(uVar3);
  FUN_005d5cf0(uVar1,uVar2);
  return;
}

