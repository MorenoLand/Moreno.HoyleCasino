// FUN_0062abb0  0062abb0

void __thiscall FUN_0062abb0(int param_1,int param_2)

{
  int iVar1;
  undefined4 local_c;
  
  if (((*(int *)(param_1 + 8) != 0) && (-1 < param_2)) && (param_2 < *(int *)(param_1 + 8))) {
    iVar1 = *(int *)(param_1 + 0xc);
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -1;
    for (local_c = param_2; local_c < *(int *)(param_1 + 8); local_c = local_c + 1) {
      *(undefined4 *)(iVar1 + local_c * 4) = *(undefined4 *)(iVar1 + 4 + local_c * 4);
    }
  }
  return;
}

