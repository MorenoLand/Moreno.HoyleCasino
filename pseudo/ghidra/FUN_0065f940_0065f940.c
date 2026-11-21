// FUN_0065f940  0065f940

void __fastcall FUN_0065f940(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_8;
  
  local_8 = 0;
  while( true ) {
    piVar1 = (int *)FUN_005fb720(0);
    iVar2 = (**(code **)(*piVar1 + 0xb8))();
    if (iVar2 <= local_8) break;
    FUN_005fb720(0);
    uVar3 = FUN_0060ca40(local_8);
    FUN_0065ef90(uVar3);
    local_8 = local_8 + 1;
  }
  FUN_005fb720(0);
  iVar2 = FUN_005e4390();
  if (iVar2 != 0) {
    FUN_005fb720(0);
    uVar3 = FUN_005e4390();
    FUN_0065f120(uVar3);
  }
  FUN_0064ed50();
  if (*(int *)(param_1 + 0x1e4) != -1) {
    iVar2 = FUN_006352f0(*(undefined4 *)(param_1 + 0x1e4));
    if (iVar2 != 0) {
      iVar2 = (**(code **)(*DAT_0162ee84 + 0xe0))(*(undefined4 *)(param_1 + 0x1e4));
      if (iVar2 != 0) {
        piVar1 = (int *)(**(code **)(*DAT_0162ee84 + 0xe0))(*(undefined4 *)(param_1 + 0x1e4));
        (**(code **)(*piVar1 + 0x84))
                  (*(undefined4 *)(param_1 + 0x1e4),*(undefined4 *)(param_1 + 0x1e8));
      }
    }
    (**(code **)(*DAT_0162ee84 + 0x34))(*(undefined4 *)(param_1 + 0x1e4));
  }
  if (*(char *)(param_1 + 0x1d6) != '\0') {
    (**(code **)(*DAT_0162ee80 + 0x144))(0,0xffffffff);
  }
  if (*(char *)(param_1 + 0x1d5) != '\0') {
    (**(code **)(*DAT_0162ee84 + 900))();
  }
  return;
}

