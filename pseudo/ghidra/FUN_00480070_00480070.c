// FUN_00480070  00480070

void FUN_00480070(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 local_14;
  undefined4 local_8;
  
  for (local_8 = 0; local_8 < param_2; local_8 = local_8 + 1) {
    for (local_14 = 0; local_14 < param_2 + -1; local_14 = local_14 + 1) {
      if (*(int *)(param_1 + local_14 * 8) < *(int *)(param_1 + 8 + local_14 * 8)) {
        uVar1 = *(undefined4 *)(param_1 + local_14 * 8);
        uVar2 = *(undefined4 *)(param_1 + 4 + local_14 * 8);
        *(undefined4 *)(param_1 + local_14 * 8) = *(undefined4 *)(param_1 + 8 + local_14 * 8);
        *(undefined4 *)(param_1 + 4 + local_14 * 8) = *(undefined4 *)(param_1 + 0xc + local_14 * 8);
        *(undefined4 *)(param_1 + 8 + local_14 * 8) = uVar1;
        *(undefined4 *)(param_1 + 0xc + local_14 * 8) = uVar2;
      }
    }
  }
  return;
}

