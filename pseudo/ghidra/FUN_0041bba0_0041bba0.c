// FUN_0041bba0  0041bba0

void FUN_0041bba0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 extraout_var;
  undefined4 uVar4;
  int local_8;
  
  bVar1 = false;
  FUN_0041d950(param_1,param_2,param_3,param_4,param_5);
  local_8 = 0;
  uVar4 = extraout_var;
  do {
    iVar3 = FUN_004194c0(param_1);
    if (iVar3 <= local_8) {
LAB_0041bc15:
      if (bVar1) {
        iVar3 = FUN_005dcb00(param_1,uVar4);
        *(undefined1 *)(iVar3 + 0x4a2) = 1;
      }
      FUN_004191f0(param_1,param_2,param_3);
      return;
    }
    cVar2 = FUN_0041b990(param_1,local_8);
    if (cVar2 != '\0') {
      bVar1 = true;
      goto LAB_0041bc15;
    }
    local_8 = local_8 + 1;
  } while( true );
}

