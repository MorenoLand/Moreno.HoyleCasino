// FUN_0061c980  0061c980

void FUN_0061c980(int *param_1,int param_2,undefined4 param_3,int param_4)

{
  undefined2 uVar1;
  ushort uVar2;
  ushort uVar3;
  void *pvVar4;
  undefined4 local_c;
  
  uVar1 = *(undefined2 *)*param_1;
  *param_1 = *param_1 + 2;
  *(undefined2 *)(param_4 * 0x10 + *(int *)(param_2 + 4)) = uVar1;
  uVar2 = *(ushort *)*param_1;
  *param_1 = *param_1 + 2;
  *(ushort *)(*(int *)(param_2 + 4) + 2 + param_4 * 0x10) = uVar2;
  uVar1 = *(undefined2 *)*param_1;
  *param_1 = *param_1 + 2;
  *(undefined2 *)(*(int *)(param_2 + 4) + 4 + param_4 * 0x10) = uVar1;
  uVar1 = *(undefined2 *)*param_1;
  *param_1 = *param_1 + 2;
  *(undefined2 *)(*(int *)(param_2 + 4) + 6 + param_4 * 0x10) = uVar1;
  uVar1 = *(undefined2 *)*param_1;
  *param_1 = *param_1 + 2;
  *(undefined2 *)(*(int *)(param_2 + 4) + 8 + param_4 * 0x10) = uVar1;
  uVar1 = *(undefined2 *)*param_1;
  *param_1 = *param_1 + 2;
  *(undefined2 *)(*(int *)(param_2 + 4) + 10 + param_4 * 0x10) = uVar1;
  pvVar4 = operator_new((uint)uVar2 * 4);
  *(void **)(*(int *)(param_2 + 4) + 0xc + param_4 * 0x10) = pvVar4;
  for (local_c = 0; local_c < (int)(uint)uVar2; local_c = local_c + 1) {
    uVar3 = *(ushort *)*param_1;
    *param_1 = *param_1 + 2;
    *(int *)(*(int *)(*(int *)(param_2 + 4) + 0xc + param_4 * 0x10) + local_c * 4) = *param_1;
    *param_1 = *param_1 + (uint)uVar3;
  }
  return;
}

