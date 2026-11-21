// FUN_0062b530  0062b530

int __thiscall FUN_0062b530(int param_1,int param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int local_18;
  int local_c;
  
  local_18 = 0;
  local_c = **(int **)(param_1 + 0x14) + -1;
  while( true ) {
    if (local_c < local_18) {
      return -1;
    }
    iVar3 = (local_c + local_18) / 2;
    uVar1 = *(uint *)(*(int *)(param_1 + 0x14) + 0xc + iVar3 * 0x10);
    iVar2 = *(int *)(*(int *)(param_1 + 0x14) + 8 + iVar3 * 0x10);
    if ((uVar1 == param_3) && (iVar2 == param_2)) break;
    if (uVar1 < param_3) {
      local_18 = iVar3 + 1;
    }
    else if (param_3 < uVar1) {
      local_c = iVar3 + -1;
    }
    else if (iVar2 < param_2) {
      local_18 = iVar3 + 1;
    }
    else {
      local_c = iVar3 + -1;
    }
  }
  return iVar3;
}

