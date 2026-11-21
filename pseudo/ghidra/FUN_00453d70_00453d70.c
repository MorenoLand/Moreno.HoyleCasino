// FUN_00453d70  00453d70

uint __thiscall FUN_00453d70(int param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  int local_10;
  int local_c;
  int local_8;
  
  local_10 = -1;
  local_c = -1;
  local_8 = 0;
  do {
    if (6 < local_8) {
LAB_00453ddd:
      uVar3 = FUN_0044f840(local_10,local_c,param_2,param_3);
      return uVar3 & 0xffff0000;
    }
    uVar2 = FUN_0044f680(*(undefined2 *)(param_1 + 4 + local_8 * 2));
    cVar1 = FUN_00450c20(uVar2);
    if (cVar1 == '\0') {
      if (local_10 != -1) {
        local_c = local_8;
        goto LAB_00453ddd;
      }
      local_10 = local_8;
    }
    local_8 = local_8 + 1;
  } while( true );
}

