// FUN_00454250  00454250

undefined2 __thiscall FUN_00454250(int param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int local_28;
  int local_24;
  int local_20;
  undefined2 local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  local_10 = -1;
  local_8 = -1;
  local_18 = -1;
  local_28 = -1;
  local_24 = -1;
  local_20 = 0xffffffff;
  local_14 = 1;
  local_c = 0;
  do {
    if (6 < local_c) {
LAB_004542d0:
      FUN_00450c50(1,&local_10,&local_18);
      FUN_00450c50(2,&local_8,&local_28);
      local_1c = 3;
      local_20 = local_18;
      local_14 = local_28;
      iVar3 = FUN_0044f700(0xe);
      if (iVar3 == 3) {
        local_1c = 0;
        local_20 = local_24;
        local_14 = local_18;
      }
      else {
        iVar3 = FUN_0044f700(0xd);
        if (((iVar3 == 3) && (local_10 < 0xb)) && (local_8 < 10)) {
          local_1c = 1;
          local_20 = local_24;
          local_14 = local_18;
        }
        else {
          iVar3 = FUN_0044f700(0xd);
          if (iVar3 == 3) {
            local_1c = 2;
            local_20 = local_18;
            local_14 = local_28;
          }
        }
      }
      FUN_0044f840(local_20,local_14,param_2,param_3);
      return local_1c;
    }
    uVar2 = FUN_0044f680(*(undefined2 *)(param_1 + 4 + local_c * 2));
    cVar1 = FUN_00450c20(uVar2);
    if (cVar1 != '\0') {
      local_24 = local_c;
      goto LAB_004542d0;
    }
    local_c = local_c + 1;
  } while( true );
}

