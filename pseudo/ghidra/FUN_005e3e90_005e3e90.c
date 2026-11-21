// FUN_005e3e90  005e3e90

void FUN_005e3e90(void)

{
  bool bVar1;
  undefined1 uVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  int *piVar6;
  undefined4 uVar7;
  undefined4 extraout_var;
  int local_c;
  
  FUN_005fb350(0xc);
  uVar2 = FUN_00600230(extraout_var);
  FUN_006375b0();
  iVar5 = FUN_0063aac0();
  *(undefined1 *)(iVar5 + 0x25d) = uVar2;
  cVar3 = (**(code **)(*DAT_0162ee84 + 0x33c))(0xffffffff);
  if (cVar3 != '\0') {
    FUN_005de600();
    iVar5 = FUN_005d52e0();
    cVar3 = *(char *)(iVar5 + 0x5d);
    FUN_005fb350(0x30d401);
    cVar4 = FUN_00600230();
    if ((char)('\x01' - (cVar3 != '\0')) != cVar4) {
      bVar1 = false;
      local_c = 0;
      while( true ) {
        iVar5 = (**(code **)(*DAT_0162ee84 + 0x10c))();
        if (iVar5 <= local_c) break;
        iVar5 = FUN_005dcb00(local_c);
        if (iVar5 != 0) {
          piVar6 = (int *)FUN_0063aac0();
          if ((*piVar6 == 1) && (*(int *)(iVar5 + 0x20) != 0)) {
            cVar3 = FUN_00646cb0();
            if (cVar3 == '\0') {
              bVar1 = true;
              break;
            }
          }
        }
        local_c = local_c + 1;
      }
      if (((bVar1) && (cVar4 != '\0')) || ((!bVar1 && (cVar4 == '\0')))) {
        uVar7 = FUN_00630f40("SID_GENERIC_WARNING",0);
        uVar7 = FUN_00630f40("SID_CASINO_RESTART_GAME_FOR_CHANGES",uVar7);
        FUN_0062ff10(uVar7);
      }
    }
  }
  FUN_005fb350(3200000);
  uVar7 = FUN_00600230();
  FUN_005de600(uVar7);
  FUN_005d5480(uVar7);
  FUN_005fb350(0x30d401);
  cVar3 = FUN_00600230();
  FUN_005de600();
  iVar5 = FUN_005d52e0();
  *(bool *)(iVar5 + 0x5d) = cVar3 == '\0';
  return;
}

