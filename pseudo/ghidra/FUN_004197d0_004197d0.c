// FUN_004197d0  004197d0

int __thiscall FUN_004197d0(int param_1,int param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined4 local_1c;
  undefined4 local_14;
  undefined4 local_8;
  
  if (param_3 == -1) {
    if (param_2 == -1) {
      param_3 = -1;
    }
    else {
      if (param_2 == 4) {
        local_1c = 0;
      }
      else {
        local_1c = (int)*(char *)(param_1 + 0x119 + param_2 * 0x118);
      }
      param_3 = local_1c;
    }
  }
  local_14 = 0;
  bVar1 = false;
  iVar2 = FUN_00419530(param_2,param_3);
  local_8 = 0;
  do {
    if (iVar2 <= local_8) {
      return local_14;
    }
    if (bVar1) {
      iVar3 = FUN_00419780(param_2,param_3,local_8);
      if (iVar3 != 1) goto LAB_0041987e;
      local_14 = local_14 + 1;
    }
    else {
LAB_0041987e:
      iVar3 = FUN_00419780(param_2,param_3,local_8);
      local_14 = iVar3 + local_14;
      iVar3 = FUN_00419780(param_2,param_3,local_8);
      if (iVar3 == 1) {
        local_14 = local_14 + 10;
        bVar1 = true;
      }
    }
    local_8 = local_8 + 1;
  } while( true );
}

