// FUN_005e3310  005e3310

void __thiscall FUN_005e3310(CPropertySection *param_1,int param_2)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  char *pcVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined1 local_7c [8];
  undefined4 local_74;
  char local_70 [52];
  char local_3c [52];
  uint local_8;
  
  local_8 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  local_74 = *(undefined4 *)(*(int *)(param_1 + 0x1bc) + param_2 * 4);
  piVar2 = (int *)FUN_0063aac0();
  if (*piVar2 != 2) {
    piVar2 = (int *)FUN_0063aac0();
    if (*piVar2 != 3) {
      bVar1 = false;
      goto LAB_005e3398;
    }
  }
  bVar1 = true;
LAB_005e3398:
  if (bVar1) {
    iVar3 = FUN_005fb2b0(param_2 + 10);
    if (iVar3 == 0) {
      uVar4 = FUN_005f9ce0(0,param_2 + 10,0x41d,
                           *(int *)(*(int *)(param_1 + 0x1c0) + param_2 * 8) + 0x6b,
                           *(int *)(*(int *)(param_1 + 0x1c0) + 4 + param_2 * 8) + 0x48,1,0,0xff,0);
      CPropertySection::Get(param_1,4,(ulong *)0x0);
      FUN_005ff5a0(uVar4);
      piVar2 = (int *)FUN_005fb2b0(param_2 + 10);
      iVar3 = FUN_005d52e0();
      (**(code **)(*piVar2 + 0xb0))((int)*(char *)(iVar3 + 0x2a));
    }
    iVar3 = FUN_005fb550(param_2 + 10);
    if (iVar3 == 0) {
      uVar4 = FUN_005fa5b0(0,param_2 + 10,&PTR_006b27f8,0x1f,200,0xf,
                           *(undefined4 *)(*(int *)(param_1 + 0x1c0) + param_2 * 8),
                           *(int *)(*(int *)(param_1 + 0x1c0) + 4 + param_2 * 8) + 0x6e,1,5,
                           0xffffffff);
      CPropertySection::Get(param_1,4,(ulong *)0x0);
      FUN_005ff5a0(uVar4);
    }
    uVar8 = 1;
    uVar7 = 1;
    uVar4 = 1;
    pcVar6 = local_70;
    puVar5 = (undefined4 *)FUN_005d5a90(local_7c);
    FUN_0064c8d0(*puVar5,puVar5[1],pcVar6,uVar4,uVar7,uVar8);
    pcVar6 = (char *)FUN_00630f40("SID_SHELL_BANK_COLON");
    strcpy(local_3c,pcVar6);
    strcat(local_3c,local_70);
    FUN_005fb5a0(param_2 + 10,local_3c);
  }
  else {
    FUN_005fbc80(0,param_2 + 10);
    FUN_005fbd40(0,param_2 + 10);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

