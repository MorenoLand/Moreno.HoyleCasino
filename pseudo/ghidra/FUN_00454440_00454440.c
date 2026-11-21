// FUN_00454440  00454440

undefined2 __thiscall FUN_00454440(int param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 local_20;
  undefined2 local_1c;
  undefined4 local_18;
  int local_14;
  undefined4 local_10;
  int local_c;
  int local_8;
  
  local_20 = 0xffffffff;
  local_14 = -1;
  FUN_004517a0(&local_18,&local_10,&local_8);
  cVar1 = FUN_00451870(local_8,local_18,local_10,&local_20,&local_14);
  if (cVar1 == '\0') {
    if (((*(int *)(param_1 + 0x2d4 + *(int *)(param_1 + 0x2f4) * 4) == 0xe) && (9 < local_8)) &&
       (local_8 < 0xd)) {
      local_1c = 2;
      local_20 = 0;
      for (local_c = 1; local_c < 7; local_c = local_c + 1) {
        uVar2 = FUN_0044f680(*(undefined2 *)(param_1 + 4 + local_c * 2));
        cVar1 = FUN_00450c20(uVar2);
        if (cVar1 == '\0') {
          local_14 = local_c;
          break;
        }
      }
    }
    else {
      local_1c = 1;
      FUN_004512c0(&local_20,&local_14);
    }
    FUN_0044f840(local_20,local_14,param_2,param_3);
  }
  else {
    FUN_0044f840(local_20,local_14,param_2,param_3);
    local_1c = 0;
  }
  return local_1c;
}

