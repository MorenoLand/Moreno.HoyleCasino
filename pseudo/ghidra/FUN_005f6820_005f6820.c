// FUN_005f6820  005f6820

void __thiscall FUN_005f6820(int param_1,undefined4 *param_2)

{
  char cVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  undefined4 local_1c;
  undefined4 local_18;
  int local_14;
  int local_10;
  undefined4 local_c;
  int local_8;
  
  cVar1 = FUN_005f54c0();
  if (cVar1 == '\0') {
    if (*(char *)(param_1 + 0x58) == '\0') {
      local_20 = *(int *)(param_1 + 0x1c);
      local_24 = *(int *)(param_1 + 0x18);
      local_28 = *(int *)(param_1 + 0x14);
      local_2c = *(int *)(param_1 + 0x10);
    }
    else {
      local_20 = *(int *)(param_1 + 0x1c) + 1;
      local_24 = *(int *)(param_1 + 0x18) + 1;
      local_28 = *(int *)(param_1 + 0x14) + -1;
      local_2c = *(int *)(param_1 + 0x10) + -1;
    }
    local_1c = *param_2;
    local_18 = param_2[1];
    local_14 = param_2[2] + 1;
    local_10 = param_2[3] + 1;
    FUN_005ec3a0(&local_2c,&local_2c,&local_1c);
    if (*(char *)(param_1 + 0x58) == '\0') {
      local_c = CONCAT13(local_c._3_1_,*(undefined3 *)(param_1 + 0x4a));
      uVar2 = FUN_005f63f0();
      local_c = CONCAT13(uVar2,(undefined3)local_c);
      if (*(char *)(param_1 + 0x48) != '\0') {
        for (local_8 = local_28; local_8 < local_20; local_8 = local_8 + 1) {
          uVar3 = FUN_005f6620();
          FUN_005f9380(local_2c,local_24 + -1,local_8,local_c,uVar3);
        }
      }
      local_c = CONCAT13(local_c._3_1_,*(undefined3 *)(param_1 + 0x4d));
      uVar2 = FUN_005f63f0();
      local_c = CONCAT13(uVar2,(undefined3)local_c);
      if (*(char *)(param_1 + 0x49) != '\0') {
        if (local_28 == *(int *)(param_1 + 0x14)) {
          uVar3 = FUN_005f6620();
          FUN_005f9380(local_2c,local_24 + -1,*(undefined4 *)(param_1 + 0x14),local_c,uVar3);
        }
        if (local_20 + -1 == *(int *)(param_1 + 0x1c) + -1) {
          uVar3 = FUN_005f6620();
          FUN_005f9380(local_2c,local_24 + -1,*(int *)(param_1 + 0x1c) + -1,local_c,uVar3);
        }
        if (local_2c == *(int *)(param_1 + 0x10)) {
          uVar3 = FUN_005f6620();
          FUN_005f93e0(*(undefined4 *)(param_1 + 0x10),local_28,local_20 + -1,local_c,uVar3);
        }
        if (local_24 + -1 == *(int *)(param_1 + 0x18) + -1) {
          uVar3 = FUN_005f6620();
          FUN_005f93e0(*(int *)(param_1 + 0x18) + -1,local_28,local_20 + -1,local_c,uVar3);
        }
      }
    }
    else if (*(char *)(param_1 + 0x49) != '\0') {
      FUN_005f6640();
    }
  }
  return;
}

