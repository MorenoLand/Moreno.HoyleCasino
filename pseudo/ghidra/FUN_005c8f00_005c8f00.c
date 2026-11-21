// FUN_005c8f00  005c8f00

void __thiscall FUN_005c8f00(int param_1,char param_2)

{
  undefined4 local_18;
  undefined4 local_8;
  
  local_8 = *(int *)(param_1 + 8) / *(int *)(param_1 + 0xc) + 1;
  if (*(int *)(*(int *)(param_1 + 0x10) + 0xc) < local_8) {
    if (param_2 == '\0') {
      local_18 = *(int *)(*(int *)(param_1 + 0x10) + 0xc);
    }
    else {
      local_18 = 1;
    }
    local_8 = local_18;
  }
  FUN_005c8ed0(local_8);
  return;
}

