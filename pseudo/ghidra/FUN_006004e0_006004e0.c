// FUN_006004e0  006004e0

void __thiscall FUN_006004e0(int param_1,undefined4 param_2,undefined1 param_3)

{
  undefined4 uVar1;
  
  *(undefined4 *)(param_1 + 4) = param_2;
  uVar1 = FUN_005eb240();
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  *(undefined1 *)(param_1 + 0x18) = 1;
  *(undefined1 *)(param_1 + 0x19) = param_3;
  return;
}

