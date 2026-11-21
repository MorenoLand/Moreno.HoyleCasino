// FUN_00640ee0  00640ee0

void __fastcall FUN_00640ee0(int param_1)

{
  undefined4 uVar1;
  char *_Format;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char local_10c [260];
  uint local_8;
  
  local_8 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  FUN_0065bb00();
  uVar1 = FUN_00639070(*(undefined4 *)(param_1 + 0x1c8));
  _Format = (char *)FUN_00630f40("SID_SHELL_YOUR_FACE_FORMAT",uVar1);
  sprintf(local_10c,_Format);
  FUN_005fa5b0(0,0,local_10c,0x49,0x142,0x19,3,3,1,0x12,0xffffffff);
  FUN_005fa880(0,0,0x149,1,3,0xda,1,0x78,0x7c,0xa1,0,0,0);
  FUN_005fa880(0,0,0x149,1,4,0xdb,1,0xff,0xff,0xff,0,0,0);
  uVar6 = 0xd;
  uVar5 = 0xffffffff;
  uVar4 = 0x4a;
  uVar3 = 0x4b;
  uVar2 = 0x48;
  uVar1 = FUN_00630f40("SID_GENERIC_OK",0x48,0x4b,0x4a,0xffffffff,0xd);
  FUN_005f9de0(0,0,0x30d4e5,0x50,0xe1,1,uVar1,uVar2,uVar3,uVar4,uVar5,uVar6);
  uVar6 = 0x1b;
  uVar5 = 0xffffffff;
  uVar4 = 0x4a;
  uVar3 = 0x4b;
  uVar2 = 0x48;
  uVar1 = FUN_00630f40("SID_GENERIC_CANCEL",0x48,0x4b,0x4a,0xffffffff,0x1b);
  FUN_005f9de0(0,1,0x30d4de,0xaa,0xe1,1,uVar1,uVar2,uVar3,uVar4,uVar5,uVar6);
  FUN_0065c820(*(undefined1 *)(param_1 + 0x1cc),*(undefined1 *)(param_1 + 0x1cd),param_1 + 0x1ce,1);
  uVar1 = FUN_00665800(param_1 + 0x1ce);
  FUN_0065c9c0(uVar1);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

