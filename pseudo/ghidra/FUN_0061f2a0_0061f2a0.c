// FUN_0061f2a0  0061f2a0

undefined4 __thiscall FUN_0061f2a0(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if ((param_2 < 0) || (4 < param_2)) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 0xc + param_2 * 8);
  }
  return uVar1;
}

