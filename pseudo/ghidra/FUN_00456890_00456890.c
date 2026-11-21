// FUN_00456890  00456890

uint __thiscall FUN_00456890(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_10 = -1;
  local_c = -1;
  local_8 = 0;
  do {
    if (6 < local_8) {
LAB_004568f4:
      uVar3 = FUN_0044f840(local_10,local_c,param_2,param_3);
      return uVar3 & 0xffff0000;
    }
    uVar1 = FUN_0044f680(*(undefined2 *)(param_1 + 4 + local_8 * 2));
    iVar2 = FUN_0044f700(uVar1);
    if (iVar2 == 3) {
      local_10 = local_8;
      local_c = local_8 + 1;
      goto LAB_004568f4;
    }
    local_8 = local_8 + 1;
  } while( true );
}

