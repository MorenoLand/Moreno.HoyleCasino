// FUN_005b67d0  005b67d0

void FUN_005b67d0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 extraout_var;
  undefined4 uVar4;
  int local_c;
  
  FUN_005b8ab0(param_1,param_2,param_3,param_4,param_5);
  bVar1 = false;
  local_c = 0;
  uVar4 = extraout_var;
  do {
    iVar3 = FUN_005b58f0(param_1);
    if (iVar3 <= local_c) {
LAB_005b6845:
      if (bVar1) {
        iVar3 = FUN_005dcb00(param_1,uVar4);
        *(undefined1 *)(iVar3 + 0x4a2) = 1;
      }
      FUN_005b71a0(param_1,param_2,param_3);
      return;
    }
    cVar2 = FUN_005b3300(param_1,local_c);
    if (cVar2 != '\0') {
      bVar1 = true;
      goto LAB_005b6845;
    }
    local_c = local_c + 1;
  } while( true );
}

