// FUN_00648550  00648550

void __thiscall FUN_00648550(undefined4 param_1,undefined4 param_2,char param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  int local_c;
  undefined4 local_8;
  
  local_20 = 0;
  local_1c = 0;
  local_10 = 0;
  local_18 = 0;
  uVar3 = 2;
  local_8 = 0;
  local_c = FUN_0062fbf0(3,param_1,2);
  local_14 = 0xffffffff;
  if (local_c == 0) {
    local_18 = 3;
    uVar3 = 7;
  }
  else if (local_c == 1) {
    local_18 = 8;
    uVar3 = 10;
  }
  cVar1 = FUN_00648470((&PTR_s_BOXING_GLOVE_0076d334)[local_c],&local_20,&local_10);
  if (cVar1 != '\0') {
    local_1c = FUN_0062fbf0(local_10,param_1);
    if (param_3 != '\0') {
      local_14 = 0x49e;
    }
    iVar2 = FUN_0062fc30(local_18,uVar3);
    FUN_00647210(local_20,local_1c,param_2,local_14,*(undefined4 *)(&DAT_0076d308 + iVar2 * 4));
  }
  return;
}

