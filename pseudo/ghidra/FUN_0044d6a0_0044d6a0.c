// FUN_0044d6a0  0044d6a0

uint __thiscall FUN_0044d6a0(int param_1,int param_2,undefined1 param_3)

{
  uint uVar1;
  
  uVar1 = FUN_0044d5e0(param_2,param_3);
  if ((uVar1 & 0xff) == 0) {
    *(undefined1 *)(param_1 + 200) = 0;
    FUN_0044d510(param_2,param_3);
    *(undefined1 *)(param_1 + param_2 + 0xc9) = 0;
    *(undefined1 *)(param_1 + param_2 + 0xcd) = 1;
    uVar1 = CONCAT31((int3)((uint)(param_1 + param_2) >> 8),1);
  }
  else {
    uVar1 = uVar1 & 0xffffff00;
  }
  return uVar1;
}

