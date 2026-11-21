// FUN_004567c0  004567c0

undefined2 __thiscall FUN_004567c0(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 local_14;
  undefined2 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_14 = -1;
  local_c = -1;
  local_10 = 0;
  local_8 = 0;
  do {
    if (6 < local_8) {
LAB_0045682a:
      iVar2 = FUN_0044f700(0xe);
      if (iVar2 == 3) {
        iVar2 = FUN_0044f700(3);
        if (iVar2 == 2) {
          iVar2 = FUN_0044f700(2);
          if (iVar2 == 2) {
            local_10 = 1;
            local_14 = 0;
            local_c = 1;
          }
        }
      }
      FUN_0044f840(local_14,local_c,param_2,param_3);
      return local_10;
    }
    uVar1 = FUN_0044f680(*(undefined2 *)(param_1 + 4 + local_8 * 2));
    iVar2 = FUN_0044f700(uVar1);
    if (iVar2 == 2) {
      local_14 = local_8;
      local_c = local_8 + 1;
      goto LAB_0045682a;
    }
    local_8 = local_8 + 1;
  } while( true );
}

