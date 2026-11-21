// FUN_0061c8f0  0061c8f0

void FUN_0061c8f0(int *param_1,ushort *param_2,undefined4 param_3)

{
  ushort uVar1;
  void *pvVar2;
  int local_c;
  
  uVar1 = *(ushort *)*param_1;
  *param_1 = *param_1 + 2;
  *param_2 = uVar1;
  pvVar2 = operator_new((uint)uVar1 * 0x10);
  *(void **)(param_2 + 2) = pvVar2;
  for (local_c = 0; local_c < (int)(uint)uVar1; local_c = local_c + 1) {
    FUN_0061c980(param_1,param_2,param_3,local_c);
  }
  return;
}

