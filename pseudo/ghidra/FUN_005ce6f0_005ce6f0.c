// FUN_005ce6f0  005ce6f0

void __fastcall FUN_005ce6f0(CPropertySection *param_1)

{
  undefined4 uVar1;
  int *piVar2;
  char *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined1 local_84 [8];
  int *local_7c;
  int local_78;
  char local_74 [104];
  uint local_c;
  int local_8;
  
  local_c = DAT_00781870 ^ (uint)&stack0xfffffffc;
  uVar1 = FUN_006375b0();
  piVar2 = (int *)(**(code **)(*DAT_007947e4 + 0x2a8))(local_84,uVar1);
  local_78 = *piVar2;
  (**(code **)(*DAT_0162ee84 + 0x338))(*(undefined4 *)(param_1 + 0x1bc),local_74);
  pcVar3 = (char *)FUN_00630f40("SID_CASINO_SPACE_TOURNAMENT");
  strcat(local_74,pcVar3);
  FUN_005f73e0(local_74,0x49,0,3);
  uVar8 = 0xd;
  uVar7 = 0xffffffff;
  uVar6 = 0x4a;
  uVar5 = 0x4b;
  uVar4 = 0x48;
  uVar1 = FUN_00630f40("SID_GENERIC_OK",0x48,0x4b,0x4a,0xffffffff,0xd);
  FUN_005f9de0(0,0,0x30d4de,0x50,0xe1,1,uVar1,uVar4,uVar5,uVar6,uVar7,uVar8);
  uVar8 = 0x1b;
  uVar7 = 0xffffffff;
  uVar6 = 0x4a;
  uVar5 = 0x4b;
  uVar4 = 0x48;
  uVar1 = FUN_00630f40("SID_GENERIC_CANCEL",0x48,0x4b,0x4a,0xffffffff,0x1b);
  FUN_005f9de0(0,1,0x30d4de,0xaa,0xe1,1,uVar1,uVar4,uVar5,uVar6,uVar7,uVar8);
  FUN_005fa880(0,0,0x149,1,3,0xda,1,0x78,0x7c,0xa1,0,0,0);
  FUN_005fa880(0,0,0x149,1,4,0xdb,1,0xff,0xff,0xff,0,0,0);
  for (local_8 = 0; local_8 < 5; local_8 = local_8 + 1) {
    pcVar3 = (char *)FUN_00630f80("SID_TOURNAMENT_GENERIC",local_8);
    sprintf(local_74,pcVar3);
    FUN_005f9ff0(0,0,local_8 + 2,0,0x30d4ca,0x50,local_8 * 0x19 + 0x24,1,local_74,0x1f,0x45,0x42,
                 0xffffffff,0x14,0);
    uVar1 = 2;
    FUN_005fb3a0(0);
    FUN_006065d0(uVar1);
    if (local_78 < *(int *)(&DAT_0075d33c + local_8 * 4)) {
      piVar2 = CPropertySection::Get(param_1,local_8 + 2,(ulong *)0x0);
      (**(code **)(*piVar2 + 0xd0))();
    }
  }
  local_7c = (int *)(**(code **)(*DAT_0162ee84 + 0xe0))(*(undefined4 *)(param_1 + 0x1bc));
  if (local_7c != (int *)0x0) {
    (**(code **)(*local_7c + 0xa4))(param_1);
  }
  __security_check_cookie(local_c ^ (uint)&stack0xfffffffc);
  return;
}

