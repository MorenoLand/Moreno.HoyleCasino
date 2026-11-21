// FUN_004f6210  004f6210

undefined4 __thiscall FUN_004f6210(int param_1,undefined4 param_2)

{
  short sVar1;
  undefined2 uVar2;
  
  sVar1 = *(short *)(param_1 + 8);
  uVar2 = FUN_004f6020(param_2);
  *(undefined1 *)((int)sVar1 + *(int *)(param_1 + 0x34)) = 1;
  return CONCAT22(sVar1 >> 0xf,uVar2);
}

