// FUN_0042c170  0042c170

undefined4 __thiscall FUN_0042c170(int param_1,int param_2)

{
  undefined4 uVar1;
  int local_14 [4];
  
  local_14[0] = 3;
  local_14[1] = 2;
  local_14[2] = 1;
  local_14[3] = 0;
  if ((*(int *)(param_1 + 0xb0c) < 0xf) || (0x15 < *(int *)(param_1 + 0xb0c))) {
    if ((*(int *)(param_1 + 0xb0c) < 0x19) || (0x1f < *(int *)(param_1 + 0xb0c))) {
      uVar1 = *(undefined4 *)
               (&DAT_007105b8 + local_14[param_2] * 8 + *(int *)(param_1 + 0xb0c) * 0x20);
    }
    else {
      uVar1 = *(undefined4 *)(&DAT_00710ea8 + *(int *)(param_1 + 0xb0c) * 8);
    }
  }
  else {
    uVar1 = *(undefined4 *)(&DAT_00710ec0 + *(int *)(param_1 + 0xb0c) * 8);
  }
  return uVar1;
}

