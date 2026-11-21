// FUN_00636a50  00636a50

int __thiscall FUN_00636a50(int *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int local_10;
  int local_c;
  int local_8;
  
  local_10 = 0;
  if (param_2 < 1) {
    local_8 = -1;
  }
  else {
    local_8 = (**(code **)(*param_1 + 0x374))();
    if (local_8 == -1) {
      for (local_c = 0; iVar2 = (**(code **)(*DAT_0162ee84 + 0x168))(), local_c < iVar2;
          local_c = local_c + 1) {
        uVar3 = (**(code **)(*DAT_0162ee84 + 0x164))(local_c);
        uVar4 = uVar3;
        FUN_006375b0(uVar3);
        cVar1 = FUN_0063b560(uVar4);
        if ((cVar1 != '\0') && (cVar1 = FUN_006367d0(uVar3), cVar1 == '\0')) {
          local_10 = local_10 + 1;
        }
      }
      iVar2 = FUN_0062fbf0(param_2);
      if (iVar2 < local_10) {
        do {
          if (local_10 == 0) {
            return -1;
          }
          uVar4 = (**(code **)(*DAT_0162ee84 + 0x168))();
          uVar4 = FUN_0062fbf0(uVar4);
          local_8 = (**(code **)(*DAT_0162ee84 + 0x164))(uVar4);
          iVar2 = local_8;
          FUN_006375b0(local_8);
          cVar1 = FUN_0063b560(iVar2);
        } while ((cVar1 == '\0') || (cVar1 = FUN_006367d0(local_8), cVar1 != '\0'));
      }
      else {
        uVar4 = (**(code **)(*DAT_0162ee84 + 0x168))();
        uVar4 = FUN_0062fbf0(uVar4);
        local_8 = (**(code **)(*DAT_0162ee84 + 0x164))(uVar4);
        while( true ) {
          iVar2 = local_8;
          FUN_006375b0(local_8);
          cVar1 = FUN_0063b560(iVar2);
          if ((cVar1 == '\0') && (cVar1 = FUN_006367d0(local_8), cVar1 == '\0')) break;
          uVar4 = (**(code **)(*DAT_0162ee84 + 0x168))();
          uVar4 = FUN_0062fbf0(uVar4);
          local_8 = (**(code **)(*DAT_0162ee84 + 0x164))(uVar4);
        }
      }
    }
  }
  return local_8;
}

