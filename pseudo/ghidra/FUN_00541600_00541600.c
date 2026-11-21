// FUN_00541600  00541600

uint __thiscall FUN_00541600(int param_1,int param_2,undefined1 param_3)

{
  uint uVar1;
  
  uVar1 = FUN_00541540(param_2,param_3);
  if ((uVar1 & 0xff) == 0) {
    *(undefined1 *)(param_1 + 0xec) = 0;
    FUN_00541360(param_2,param_3);
    *(undefined1 *)(param_1 + param_2 + 0xed) = 0;
    *(undefined1 *)(param_1 + param_2 + 0xf2) = 1;
    uVar1 = CONCAT31((int3)((uint)(param_1 + param_2) >> 8),1);
  }
  else {
    uVar1 = uVar1 & 0xffffff00;
  }
  return uVar1;
}

