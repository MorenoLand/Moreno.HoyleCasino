// FUN_005ec060  005ec060

void __thiscall FUN_005ec060(int param_1,int *param_2,int *param_3,int *param_4,int *param_5)

{
  bool bVar1;
  int local_1c;
  int local_18;
  undefined1 local_14 [3];
  char local_11;
  undefined1 local_d;
  int local_c;
  int local_8;
  
  local_8 = FUN_005f5550();
  local_c = FUN_005f5590();
  *param_3 = 0;
  for (local_18 = 0; local_18 < local_c; local_18 = local_18 + 1) {
    bVar1 = true;
    for (local_1c = 0; local_1c < local_8; local_1c = local_1c + 1) {
      FUN_00616b30(*(undefined4 *)(param_1 + 0x164),*(undefined4 *)(param_1 + 0x15c),local_1c,
                   local_18,local_14,&local_d);
      if (local_11 == -1) {
        bVar1 = false;
        local_1c = local_8;
      }
    }
    if (bVar1) {
      *param_3 = local_18 + 1;
    }
    else {
      local_18 = local_c;
    }
  }
  *param_2 = 0;
  for (local_1c = 0; local_1c < local_8; local_1c = local_1c + 1) {
    bVar1 = true;
    for (local_18 = 0; local_18 < local_c; local_18 = local_18 + 1) {
      FUN_00616b30(*(undefined4 *)(param_1 + 0x164),*(undefined4 *)(param_1 + 0x15c),local_1c,
                   local_18,local_14,&local_d);
      if (local_11 == -1) {
        bVar1 = false;
        local_18 = local_c;
      }
    }
    if (bVar1) {
      *param_2 = local_1c + 1;
    }
    else {
      local_1c = local_8;
    }
  }
  *param_5 = 0;
  local_18 = local_c;
  while (local_18 = local_18 + -1, -1 < local_18) {
    bVar1 = true;
    for (local_1c = 0; local_1c < local_8; local_1c = local_1c + 1) {
      FUN_00616b30(*(undefined4 *)(param_1 + 0x164),*(undefined4 *)(param_1 + 0x15c),local_1c,
                   local_18,local_14,&local_d);
      if (local_11 == -1) {
        bVar1 = false;
        local_1c = local_8;
      }
    }
    if (bVar1) {
      *param_5 = local_c - local_18;
    }
    else {
      local_18 = 0;
    }
  }
  *param_4 = 0;
  local_1c = local_8;
  while (local_1c = local_1c + -1, -1 < local_1c) {
    bVar1 = true;
    for (local_18 = 0; local_18 < local_c; local_18 = local_18 + 1) {
      FUN_00616b30(*(undefined4 *)(param_1 + 0x164),*(undefined4 *)(param_1 + 0x15c),local_1c,
                   local_18,local_14,&local_d);
      if (local_11 == -1) {
        bVar1 = false;
        local_18 = local_c;
      }
    }
    if (bVar1) {
      *param_4 = local_8 - local_1c;
    }
    else {
      local_1c = 0;
    }
  }
  return;
}

