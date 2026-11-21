// FUN_004193d0  004193d0

undefined2 __thiscall FUN_004193d0(int param_1,int param_2,int param_3,int param_4)

{
  undefined2 uVar1;
  
  if (param_2 == 4) {
    if (param_4 < 0xf) {
      uVar1 = *(undefined2 *)(param_1 + 0x498 + param_4 * 2);
    }
    else {
      uVar1 = 0;
    }
  }
  else {
    uVar1 = *(undefined2 *)(param_1 + 4 + param_2 * 0x118 + param_3 * 0x2c + param_4 * 2);
  }
  return uVar1;
}

