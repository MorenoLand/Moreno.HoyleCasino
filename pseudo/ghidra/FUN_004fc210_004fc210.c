// FUN_004fc210  004fc210

void __fastcall FUN_004fc210(int param_1)

{
  undefined4 uVar1;
  
  *(undefined4 *)(param_1 + 0x98) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x84) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  uVar1 = FUN_00520d60();
  FUN_005208b0(uVar1);
  FUN_00520510(1);
  return;
}

