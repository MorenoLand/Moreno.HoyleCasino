// FUN_0054a9d0  0054a9d0

uint __thiscall FUN_0054a9d0(int param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = FUN_00548f80(param_2);
  if ((((uVar1 == 3) &&
       (uVar1 = FUN_00641280(*(undefined2 *)(param_1 + 0x28 + param_2 * 0xc)), uVar1 == 7)) &&
      (uVar1 = FUN_00641280(*(undefined2 *)(param_1 + 0x2a + param_2 * 0xc)), uVar1 == 7)) &&
     (uVar1 = FUN_00641280(*(undefined2 *)(param_1 + 0x2c + param_2 * 0xc)), uVar1 == 7)) {
    return 1;
  }
  return uVar1 & 0xffffff00;
}

