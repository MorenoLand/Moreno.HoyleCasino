// FUN_0061ce40  0061ce40

void FUN_0061ce40(int *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined2 uVar1;
  ushort uVar2;
  ushort uVar3;
  undefined4 local_c;
  
  uVar1 = *(undefined2 *)*param_1;
  *param_1 = *param_1 + 2;
  uVar2 = *(ushort *)*param_1;
  *param_1 = *param_1 + 2;
  *param_1 = *param_1 + 2;
  *param_1 = *param_1 + 2;
  *param_1 = *param_1 + 2;
  *param_1 = *param_1 + 2;
  for (local_c = 0; local_c < (int)(uint)uVar2; local_c = local_c + 1) {
    uVar3 = *(ushort *)*param_1;
    *param_1 = *param_1 + 2;
    FUN_0061cf10(*param_1,uVar1,param_2,param_3);
    *param_1 = (uint)uVar3 + *param_1;
  }
  return;
}

