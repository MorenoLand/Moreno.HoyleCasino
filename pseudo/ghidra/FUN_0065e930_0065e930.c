// FUN_0065e930  0065e930

void FUN_0065e930(void)

{
  char cVar1;
  undefined4 *puVar2;
  uint *puVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  char local_20 [16];
  uint local_10;
  int local_c;
  undefined4 *local_8;
  
  local_10 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  local_8 = (undefined4 *)(**(code **)(*DAT_0162ee84 + 0x31c))();
  FUN_0063a3e0(0xffffffff,0);
  puVar2 = (undefined4 *)FUN_0063aac0();
  *puVar2 = 2;
  for (local_c = 0; local_c < 100; local_c = local_c + 1) {
    sprintf(local_20,"user%d.log",local_c);
    cVar1 = FUN_0063ab10(local_20);
    if ((cVar1 != '\0') && (cVar1 = FUN_0065e7b0(local_8), cVar1 == '\0')) {
      puVar3 = (uint *)FUN_0063aac0();
      uVar6 = *puVar3;
      iVar4 = FUN_0063aac0();
      uVar5 = FUN_004842b0();
      uVar6 = uVar6 & 0xff;
      uVar7 = FUN_0057a470(uVar6,uVar5);
      uVar8 = FUN_00520e60(uVar7);
      FUN_0065e7f0(iVar4 + 4,uVar8,uVar7,uVar6,uVar5);
    }
  }
  FUN_005fb720(0);
  FUN_00628d80();
  if (local_8 == (undefined4 *)0x0) {
    uVar9 = 0;
  }
  else {
    uVar9 = (**(code **)*local_8)(1);
  }
  __security_check_cookie
            (local_10 ^ (uint)&stack0xfffffffc,(int)((ulonglong)uVar9 >> 0x20),(int)uVar9);
  return;
}

