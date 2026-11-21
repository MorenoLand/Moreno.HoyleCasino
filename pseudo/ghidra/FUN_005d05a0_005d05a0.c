// FUN_005d05a0  005d05a0

void __thiscall FUN_005d05a0(int param_1,char *param_2)

{
  undefined4 uVar1;
  char *_Format;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  char local_74 [108];
  uint local_8;
  
  local_8 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  uVar9 = 0xffffffff;
  uVar8 = 0x12;
  uVar7 = 1;
  uVar6 = 1;
  uVar5 = 0;
  uVar4 = 0x19;
  uVar3 = 0x1c0;
  uVar2 = 0x49;
  uVar1 = FUN_00630f40("SID_CASINO_LOANS",0x49,0x1c0,0x19,0,1,1,0x12,0xffffffff);
  FUN_005fa5b0(0,0xffffffff,uVar1,uVar2,uVar3,uVar4,uVar5,uVar6,uVar7,uVar8,uVar9);
  strcpy((char *)(param_1 + 0x1bc),param_2);
  _Format = (char *)FUN_00630f40("SID_CASINO_REPAYTIME_FORMAT",param_2);
  sprintf(local_74,_Format);
  FUN_005fa5b0(0,0,local_74,0x48,0xf0,0x2d,199,0x32,3,5,0xffffffff);
  uVar9 = 0xc;
  uVar8 = 5;
  uVar7 = 3;
  uVar6 = 0x5f;
  uVar5 = 199;
  uVar4 = 400;
  uVar3 = 0xe6;
  uVar2 = 0x1f;
  uVar1 = FUN_00630f40("SID_CASINO_REPAYLOANMESSAGE",0x1f,0xe6,400,199,0x5f,3,5,0xc);
  FUN_005fa5b0(0,1,uVar1,uVar2,uVar3,uVar4,uVar5,uVar6,uVar7,uVar8,uVar9);
  uVar6 = 0xd;
  uVar5 = 0xffffffff;
  uVar4 = 0x4a;
  uVar3 = 0x4b;
  uVar2 = 0x48;
  uVar1 = FUN_00630f40("SID_CASINO_AGREED",0x48,0x4b,0x4a,0xffffffff,0xd);
  FUN_005f9de0(0,0,0x30d4e5,0x168,0x11c,1,uVar1,uVar2,uVar3,uVar4,uVar5,uVar6);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

