// FUN_005f5ad0  005f5ad0

void __thiscall
FUN_005f5ad0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,int *param_6)

{
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  if (param_6 == (int *)0x0) {
    local_14 = *(int *)(param_1 + 0x10);
    local_10 = *(int *)(param_1 + 0x14);
    local_c = *(int *)(param_1 + 0x18);
    local_8 = *(int *)(param_1 + 0x1c);
  }
  else {
    if (*param_6 < 0) {
      local_1c = *(int *)(param_1 + 0x10);
    }
    else {
      local_1c = *param_6;
    }
    local_14 = local_1c;
    if (param_6[1] < 0) {
      local_20 = *(int *)(param_1 + 0x14);
    }
    else {
      local_20 = param_6[1];
    }
    local_10 = local_20;
    if (param_6[2] < 0) {
      local_24 = *(int *)(param_1 + 0x18);
    }
    else {
      local_24 = param_6[2];
    }
    local_c = local_24;
    if (param_6[3] < 0) {
      local_28 = *(int *)(param_1 + 0x1c);
    }
    else {
      local_28 = param_6[3];
    }
    local_8 = local_28;
  }
  FUN_00625350(&local_14,param_3,param_4,param_5);
  return;
}

