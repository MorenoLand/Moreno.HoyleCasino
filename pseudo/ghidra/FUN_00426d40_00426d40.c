// FUN_00426d40  00426d40

uint __thiscall FUN_00426d40(int param_1,int param_2,undefined1 param_3)

{
  uint uVar1;
  
  uVar1 = FUN_00426c80(param_2,param_3);
  if ((uVar1 & 0xff) == 0) {
    *(undefined1 *)(param_1 + 0xa4) = 0;
    FUN_00426ad0(param_2,param_3);
    *(undefined1 *)(param_1 + param_2 + 0xa5) = 1;
    uVar1 = CONCAT31((int3)((uint)(param_1 + param_2) >> 8),1);
  }
  else {
    uVar1 = uVar1 & 0xffffff00;
  }
  return uVar1;
}

