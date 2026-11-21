// FUN_00622fd0  00622fd0

int FUN_00622fd0(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int local_430;
  int aiStack_42c [257];
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  uint local_14;
  int local_10;
  int local_c;
  int local_8;
  
  local_28 = param_6;
  local_20 = param_1 + 0x1c;
  iVar1 = param_2 + 0x1c;
  local_18 = param_2 + iVar1 >> 1;
  local_1c = param_3 + 0x18;
  local_8 = 0x7fffffff;
  for (local_24 = 0; local_24 < local_28; local_24 = local_24 + 1) {
    uVar3 = (uint)*(byte *)(param_5 + local_24 * 3);
    if ((int)uVar3 < param_1) {
      iVar2 = (uVar3 - param_1) * 0x1e;
      local_c = iVar2 * iVar2;
      local_430 = (uVar3 - local_20) * 0x1e;
      local_430 = local_430 * local_430;
    }
    else if (local_20 < (int)uVar3) {
      iVar2 = (uVar3 - local_20) * 0x1e;
      local_c = iVar2 * iVar2;
      local_430 = (uVar3 - param_1) * 0x1e;
      local_430 = local_430 * local_430;
    }
    else {
      local_c = 0;
      if (param_1 + param_1 + 0x1c >> 1 < (int)uVar3) {
        local_430 = (uVar3 - param_1) * 0x1e;
        local_430 = local_430 * local_430;
      }
      else {
        local_430 = (uVar3 - local_20) * 0x1e;
        local_430 = local_430 * local_430;
      }
    }
    uVar3 = (uint)*(byte *)(param_5 + 1 + local_24 * 3);
    if ((int)uVar3 < param_2) {
      iVar2 = (uVar3 - param_2) * 0x3b;
      local_c = iVar2 * iVar2 + local_c;
      iVar2 = (uVar3 - iVar1) * 0x3b;
      local_430 = iVar2 * iVar2 + local_430;
    }
    else if (iVar1 < (int)uVar3) {
      iVar2 = (uVar3 - iVar1) * 0x3b;
      local_c = iVar2 * iVar2 + local_c;
      iVar2 = (uVar3 - param_2) * 0x3b;
      local_430 = iVar2 * iVar2 + local_430;
    }
    else if (local_18 < (int)uVar3) {
      iVar2 = (uVar3 - param_2) * 0x3b;
      local_430 = iVar2 * iVar2 + local_430;
    }
    else {
      iVar2 = (uVar3 - iVar1) * 0x3b;
      local_430 = iVar2 * iVar2 + local_430;
    }
    local_14 = (uint)*(byte *)(param_5 + 2 + local_24 * 3);
    if ((int)local_14 < param_3) {
      iVar2 = (local_14 - param_3) * 0xb;
      local_c = iVar2 * iVar2 + local_c;
      iVar2 = (local_14 - local_1c) * 0xb;
      local_430 = iVar2 * iVar2 + local_430;
    }
    else if (local_1c < (int)local_14) {
      iVar2 = (local_14 - local_1c) * 0xb;
      local_c = iVar2 * iVar2 + local_c;
      iVar2 = (local_14 - param_3) * 0xb;
      local_430 = iVar2 * iVar2 + local_430;
    }
    else if (param_3 + param_3 + 0x18 >> 1 < (int)local_14) {
      iVar2 = (local_14 - param_3) * 0xb;
      local_430 = iVar2 * iVar2 + local_430;
    }
    else {
      iVar2 = (local_14 - local_1c) * 0xb;
      local_430 = iVar2 * iVar2 + local_430;
    }
    aiStack_42c[local_24] = local_c;
    if (local_430 < local_8) {
      local_8 = local_430;
    }
  }
  local_10 = 0;
  for (local_24 = 0; local_24 < local_28; local_24 = local_24 + 1) {
    if (aiStack_42c[local_24] <= local_8) {
      *(int *)(param_4 + local_10 * 4) = local_24;
      local_10 = local_10 + 1;
    }
  }
  return local_10;
}

