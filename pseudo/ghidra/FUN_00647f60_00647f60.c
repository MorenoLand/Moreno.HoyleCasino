// FUN_00647f60  00647f60

undefined4 __thiscall FUN_00647f60(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  undefined4 local_2c;
  undefined4 local_28;
  int local_24;
  undefined8 local_1c;
  undefined8 local_14;
  int local_c;
  int local_8;
  
  if (param_2 != -1) {
    for (local_c = 0; local_c < 0x14; local_c = local_c + 1) {
      uVar1 = (**(code **)(*DAT_0162ee84 + 0x10c))();
      local_8 = FUN_0062fbf0(uVar1);
      piVar2 = (int *)FUN_0063aac0();
      if ((((*piVar2 == 1) && (*(int *)(DAT_0162ee84[0x16] + local_8 * 4) != *(int *)(param_1 + 4)))
          && (*(int *)(*(int *)(DAT_0162ee84[0x16] + local_8 * 4) + 0xc) == -1)) &&
         (iVar3 = (**(code **)(*DAT_0162ee80 + 500))(*(undefined4 *)(*(int *)(param_1 + 4) + 4)),
         local_8 != iVar3)) {
        FUN_0062fde0("DoLipSyncCharacterToCharacter() transferring line to ctc character.\n");
        local_2c = *(undefined4 *)(*(int *)(DAT_0162ee84[0x16] + local_8 * 4) + 8);
        local_28 = 0xffffffff;
        local_24 = param_2;
        local_1c = 0x3ff0000000000000;
        local_14 = 0x3ff0000000000000;
        FUN_006476f0(&local_2c,param_3,param_4,*(undefined4 *)(*(int *)(param_1 + 4) + 8),1);
        return 1;
      }
    }
  }
  return 0;
}

