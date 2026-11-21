// FUN_0065c300  0065c300

void __fastcall FUN_0065c300(int *param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  char local_18;
  char local_d;
  
  piVar2 = (int *)FUN_005fb300(99);
  if (((piVar2 != (int *)0x0) && (param_1[0x6f] != 0)) && (iVar3 = FUN_005fb3a0(0), iVar3 != 0)) {
    FUN_005fb3a0(0);
    iVar3 = FUN_00606570();
    if ((iVar3 == 0x60) && (iVar3 = FUN_00663c50(), iVar3 != 0)) {
      local_18 = '\x01';
    }
    else {
      local_18 = '\0';
    }
    local_d = local_18;
    if (DAT_00795f95 != '\0') {
      local_d = '\0';
    }
    (**(code **)(*piVar2 + 0xd4))(local_d);
    cVar1 = (**(code **)(*DAT_0162ee84 + 200))();
    if ((cVar1 != '\0') && (iVar3 = (**(code **)(*param_1 + 0x7c))(), iVar3 != 0)) {
      FUN_005fb3a0(0);
      iVar3 = FUN_00606570();
      if (iVar3 == 0x60) {
        piVar2 = (int *)FUN_005fb300(0x5b);
        (**(code **)(*piVar2 + 0xcc))();
        piVar2 = (int *)FUN_005fb5e0(0x5c);
        (**(code **)(*piVar2 + 0xcc))();
      }
      else {
        piVar2 = (int *)FUN_005fb300(0x5b);
        (**(code **)(*piVar2 + 0xd0))();
        piVar2 = (int *)FUN_005fb5e0(0x5c);
        (**(code **)(*piVar2 + 0xd0))();
      }
      if (local_d == '\0') {
        piVar2 = (int *)FUN_005fb5e0(0x5c);
        (**(code **)(*piVar2 + 0xf0))(0x186e0,1);
      }
      else {
        iVar3 = FUN_0065d150();
        piVar2 = (int *)FUN_005fb5e0(0x5c);
        (**(code **)(*piVar2 + 0xf0))(iVar3 + 0x186bf,1);
      }
    }
  }
  return;
}

