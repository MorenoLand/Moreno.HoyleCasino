// FUN_0054d6a0  0054d6a0

undefined1 __thiscall FUN_0054d6a0(int param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 local_8;
  
  for (local_8 = 0; local_8 < 5; local_8 = local_8 + 1) {
    *(undefined2 *)(param_1 + 4 + local_8 * 2) = *(undefined2 *)(param_3 + local_8 * 2);
  }
  *(undefined1 *)(param_1 + 0x19) = 0;
  FUN_00551960();
  uVar1 = FUN_0054c460(*(undefined4 *)(DAT_007947e0 + 0x4f14),param_1 + 4);
  FUN_0054d720(uVar1);
  return *(undefined1 *)(param_1 + 0x19);
}

