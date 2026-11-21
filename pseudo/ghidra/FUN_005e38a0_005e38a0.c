// FUN_005e38a0  005e38a0

void FUN_005e38a0(void)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  char *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined1 local_94 [8];
  undefined1 local_8c [8];
  undefined4 *local_84;
  undefined4 *local_80;
  char local_7c [52];
  int local_48;
  char local_44 [52];
  uint local_10;
  int local_c;
  int local_8;
  
  local_10 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  local_48 = 0;
  local_80 = (undefined4 *)0x0;
  iVar1 = FUN_005fb2b0(2);
  if (iVar1 == 0) {
    FUN_005f9ce0(0,2,0x441,0x14,0xd6,1,0,0xff,0);
  }
  iVar1 = FUN_005fb550(3);
  if (iVar1 == 0) {
    FUN_005fa5b0(0,3,&PTR_006b27f8,0x1f,0xf0,0x14,0,0xea,1,0x30,0xffffffff);
  }
  iVar1 = FUN_005fb550(4);
  if (iVar1 == 0) {
    FUN_005fa5b0(0,4,&PTR_006b27f8,0x28,200,0xf,0x2b,0x132,2,5,0xffffffff);
  }
  iVar1 = FUN_005fb550(5);
  if (iVar1 == 0) {
    FUN_005fa5b0(0,5,&PTR_006b27f8,0x28,0x6e,0xf,0x2b,0x149,3,5,0xffffffff);
  }
  iVar1 = FUN_005fb720(0);
  if (iVar1 != 0) {
    piVar2 = (int *)FUN_005fb720(0);
    iVar1 = (**(code **)(*piVar2 + 0xb8))();
    if (iVar1 != 0) {
      FUN_005fb720(0);
      local_48 = FUN_005e4390();
      if (local_48 != 0) {
        local_84 = (undefined4 *)(**(code **)(*DAT_007947e0 + 0x31c))();
        FUN_0063ab10(local_48 + 0x14);
        local_80 = local_84;
        piVar2 = (int *)FUN_005d5970(local_8c);
        local_c = *piVar2;
        local_8 = piVar2[1];
        if (local_c != 0) {
          piVar2 = (int *)FUN_005d52e0();
          *piVar2 = local_c;
          piVar2[1] = local_8;
          local_c = 0;
          local_8 = 0;
          FUN_005d59e0(0,0);
          FUN_0063b0a0();
        }
        piVar2 = (int *)FUN_005fb2b0(2);
        iVar1 = FUN_005d52e0();
        (**(code **)(*piVar2 + 0xb0))((int)*(char *)(iVar1 + 0x2a));
        uVar7 = 1;
        uVar6 = 1;
        uVar5 = 1;
        pcVar4 = local_7c;
        puVar3 = (undefined4 *)FUN_005d5a90(local_94);
        FUN_0064c8d0(*puVar3,puVar3[1],pcVar4,uVar5,uVar6,uVar7);
        pcVar4 = (char *)FUN_00630f40("SID_SHELL_BANK_COLON");
        strcpy(local_44,pcVar4);
        strcat(local_44,local_7c);
        FUN_005fb5a0(3,local_44);
        iVar1 = FUN_005d52e0();
        FUN_005fb5a0(4,iVar1 + 0x10);
        iVar1 = FUN_0063aac0();
        FUN_005fb5a0(5,iVar1 + 4);
        if (local_84 != (undefined4 *)0x0) {
          (**(code **)*local_84)(1);
        }
      }
      goto LAB_005e3c18;
    }
  }
  piVar2 = (int *)FUN_005fb2b0(2);
  (**(code **)(*piVar2 + 0xb0))(0);
  FUN_005fb5a0(3,&PTR_006b27f8);
  FUN_005fb5a0(4,&PTR_006b27f8);
  FUN_005fb5a0(5,&PTR_006b27f8);
LAB_005e3c18:
  __security_check_cookie(local_10 ^ (uint)&stack0xfffffffc);
  return;
}

