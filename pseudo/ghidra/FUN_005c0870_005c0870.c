// FUN_005c0870  005c0870

/* WARNING: Removing unreachable block (ram,0x005c08b8) */

undefined4 __thiscall FUN_005c0870(int param_1,uint param_2)

{
  undefined4 uVar1;
  
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    if (param_2 < 0x40000000) {
      uVar1 = FUN_005c6310(param_2,0);
      *(undefined4 *)(param_1 + 4) = uVar1;
      *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_1 + 4);
      *(uint *)(param_1 + 0xc) = *(int *)(param_1 + 4) + param_2 * 4;
    }
    else {
      FUN_005c06f0();
    }
    uVar1 = 1;
  }
  return uVar1;
}

