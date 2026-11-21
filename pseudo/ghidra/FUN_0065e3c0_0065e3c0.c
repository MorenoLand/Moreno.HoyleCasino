// FUN_0065e3c0  0065e3c0

void __fastcall FUN_0065e3c0(int param_1)

{
  char cVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  char local_3c [52];
  uint local_8;
  
  local_8 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  if (*(char *)(param_1 + 0x1d4) != '\0') {
    piVar2 = (int *)FUN_005fb300(1);
    uVar3 = FUN_00630f40("SID_GENERIC_QUIT");
    (**(code **)(*piVar2 + 0xe0))(uVar3);
  }
  uVar3 = 0xd;
  FUN_005fb300(0);
  FUN_006026f0(uVar3);
  uVar3 = 0x1b;
  FUN_005fb300(1);
  FUN_006026f0(uVar3);
  FUN_0065e930();
  (**(code **)(**(int **)(DAT_007960d8 + 0x14) + 0x10))("LastLogin",&PTR_006b27f8,local_3c,0x33);
  piVar2 = (int *)FUN_005fb720(0);
  iVar4 = (**(code **)(*piVar2 + 0xb8))();
  if (iVar4 == 0) {
    FUN_0065c820(2,0,&PTR_006b27f8,1);
  }
  else if ((*(char *)(param_1 + 0x1d4) == '\0') ||
          (iVar4 = strcmp(local_3c,(char *)&PTR_006b27f8), iVar4 == 0)) {
    piVar2 = (int *)FUN_005fb720(0);
    (**(code **)(*piVar2 + 0xc0))(0,1);
  }
  else {
    piVar2 = (int *)FUN_005fb720(0);
    cVar1 = (**(code **)(*piVar2 + 0xf0))(local_3c,1);
    if (cVar1 == '\0') {
      piVar2 = (int *)FUN_005fb720(0);
      (**(code **)(*piVar2 + 0xc0))(0,1);
    }
    else {
      uVar3 = 1;
      pcVar5 = local_3c;
      FUN_005fb720(0);
      FUN_00628f40(pcVar5,uVar3);
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

