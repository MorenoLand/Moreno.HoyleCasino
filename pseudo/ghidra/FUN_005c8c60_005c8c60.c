// FUN_005c8c60  005c8c60

void __thiscall FUN_005c8c60(int param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int local_10;
  int local_8;
  
  *(undefined4 *)(DAT_007947e0 + 0x4f14) = param_2;
  *(undefined **)(param_1 + 0x10) =
       &DAT_00793618 + (*(int *)(DAT_007947e0 + 0x4f14) + -0x3158d1) * 900;
  for (local_8 = 0; local_8 < **(int **)(param_1 + 0x10); local_8 = local_8 + 1) {
    piVar1 = (int *)(*(int *)(param_1 + 0x10) + 0x20 + local_8 * 0x7c);
    if (*piVar1 < 1) {
      for (local_10 = 0; (local_10 < 0x1e && (-1 < piVar1[local_10 + 1])); local_10 = local_10 + 1)
      {
      }
      *piVar1 = local_10;
    }
    uVar3 = FUN_0062fbf0(*(int *)(*(int *)(param_1 + 0x10) + 0x20 + local_8 * 0x7c) + -1);
    *(undefined4 *)(param_1 + 0x18 + local_8 * 4) = uVar3;
  }
  uVar3 = FUN_0062fc30(1,*(undefined4 *)(*(int *)(param_1 + 0x10) + 8));
  *(undefined4 *)(param_1 + 0xc) = uVar3;
  iVar2 = *(int *)(param_1 + 0xc);
  iVar4 = FUN_0062fc30(1,3);
  *(int *)(param_1 + 8) = iVar4 * iVar2;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 8);
  FUN_005c9140();
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}

