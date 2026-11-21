// FUN_005d70e0  005d70e0

void __thiscall FUN_005d70e0(int *param_1,char param_2,int param_3)

{
  char cVar1;
  char *_Source;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  undefined8 uVar5;
  char local_1a4 [256];
  char local_a4 [152];
  uint local_c;
  int local_8;
  
  local_c = DAT_00781870 ^ (uint)&stack0xfffffffc;
  if (param_2 == '\0') {
    _Source = (char *)FUN_00630f40("SID_CASINO_RESETPLAYER_MESSAGE");
    strcpy(local_a4,_Source);
    uVar2 = FUN_00630f40("SID_CASINO_RESETPLAYER_TITLE",4);
    iVar3 = FUN_0062ff10(local_a4,uVar2);
    if (iVar3 != 6) goto LAB_005d7372;
  }
  piVar4 = (int *)FUN_005d52e0();
  *piVar4 = param_3;
  iVar3 = FUN_005d52e0();
  *(undefined4 *)(iVar3 + 4) = 0;
  iVar3 = FUN_005d52e0();
  *(undefined1 *)(iVar3 + 0x29) = 0;
  iVar3 = FUN_005d52e0();
  *(byte *)(iVar3 + 0x2a) = (param_3 != 1000000) - 1U & 4;
  iVar3 = FUN_005d52e0();
  *(undefined4 *)(iVar3 + 0x2c) = 0;
  for (local_8 = 0; local_8 < 0x16; local_8 = local_8 + 1) {
    (**(code **)(*param_1 + 4))(local_8);
  }
  uVar5 = FUN_0064c8a0(0,0);
  FUN_005d5f80(uVar5);
  uVar5 = FUN_0064c8a0(0,0);
  FUN_005d6050(uVar5);
  param_1[0x12a] = 0;
  *(undefined1 *)(param_1 + 300) = 0;
  FUN_0063b0a0();
  while (iVar3 = FUN_005d52e0(), *(char *)(iVar3 + 0x60) != -1) {
    iVar3 = FUN_0063aac0();
    FUN_005e2e40(iVar3 + 4,0);
  }
  cVar1 = (**(code **)(*DAT_0162ee84 + 0x33c))(0xffffffff);
  if (cVar1 != '\0') {
    FUN_005de200(param_1[1]);
  }
  if (param_3 == 1000000) {
    uVar2 = FUN_0062fc30(0,5);
    sprintf(local_1a4,"SID_CASINO_RESETBANKAFTERBILLION_MESSAGE_%d",uVar2);
    uVar2 = FUN_00630f40("SID_CASINO_RESETBANKAFTERBILLION_TITLE",0);
    uVar2 = FUN_00630f40(local_1a4,uVar2);
    FUN_0062ff10(uVar2);
    uVar5 = FUN_0064c8a0(1000000000,0);
    FUN_005e7e40(param_1[1],0,uVar5);
  }
LAB_005d7372:
  __security_check_cookie(local_c ^ (uint)&stack0xfffffffc);
  return;
}

