// FUN_0061cde0  0061cde0

void FUN_0061cde0(int *param_1,undefined4 param_2,undefined4 param_3)

{
  ushort uVar1;
  undefined4 local_8;
  
  uVar1 = *(ushort *)*param_1;
  *param_1 = *param_1 + 2;
  for (local_8 = 0; local_8 < (int)(uint)uVar1; local_8 = local_8 + 1) {
    FUN_0061ce40(param_1,param_2,param_3);
  }
  return;
}

