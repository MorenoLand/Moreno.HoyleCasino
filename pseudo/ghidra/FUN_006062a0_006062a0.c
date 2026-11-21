// FUN_006062a0  006062a0

uint __thiscall FUN_006062a0(uint param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = FUN_0060c9e0(param_2);
  if ((uVar1 & 0xff) == 0) {
    FUN_0060c840(param_2);
    *(uint *)(param_2 + 0x208) = param_1;
    *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_1 + 4);
    uVar1 = param_1;
  }
  return uVar1 & 0xffffff00;
}

