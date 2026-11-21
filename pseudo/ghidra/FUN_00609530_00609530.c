// FUN_00609530  00609530

longlong __fastcall
FUN_00609530(undefined4 param_1,uint param_2,uint param_3,uint param_4,int param_5,int param_6)

{
  uint uVar1;
  int iVar2;
  uint local_14;
  int local_10;
  
  if (param_6 == 0) {
    iVar2 = (int)*(uint *)(param_3 + 4) >> 0x1f;
    if ((iVar2 < param_5) || ((iVar2 <= param_5 && (*(uint *)(param_3 + 4) < param_4)))) {
      local_14 = *(uint *)(param_3 + 4);
    }
    else {
      local_14 = param_4;
    }
    *(uint *)(param_3 + 8) = local_14;
    param_2 = local_14;
  }
  else if (param_6 == 1) {
    local_14 = *(int *)(param_3 + 4) - *(int *)(param_3 + 8);
    if ((param_5 < 1) && ((param_5 < 0 || (param_4 < local_14)))) {
      local_14 = param_4;
      local_10 = param_5;
    }
    else {
      local_10 = 0;
    }
    uVar1 = *(uint *)(param_3 + 8);
    param_2 = ((int)uVar1 >> 0x1f) + local_10 + (uint)CARRY4(uVar1,local_14);
    *(uint *)(param_3 + 8) = uVar1 + local_14;
  }
  else if (param_6 == 2) {
    *(int *)(param_3 + 8) = *(int *)(param_3 + 4) + 1;
    param_2 = param_3;
  }
  return (ulonglong)param_2 << 0x20;
}

