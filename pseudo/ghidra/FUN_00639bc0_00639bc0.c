// FUN_00639bc0  00639bc0

void __thiscall
FUN_00639bc0(CPropertySection *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  FUN_00639950(param_2);
  FUN_005f7340(0,0);
  FUN_005f9ff0(0,0,1,0,0x30d4ca,0x2a,0x28,3,param_3,0x1f,0x45,0x42,0xffffffff,0x14,0);
  FUN_005f9ff0(0,0,2,0,0x30d4ca,0x2a,0x41,3,param_4,0x1f,0x45,0x42,0xffffffff,0x14,0);
  FUN_005f9ff0(0,0,3,0,0x30d4ca,0x2a,0x5a,3,param_5,0x1f,0x45,0x42,0xffffffff,0x14,0);
  piVar1 = CPropertySection::Get(param_1,1,(ulong *)0x0);
  (**(code **)(*piVar1 + 0xf4))();
  FUN_005fa880(0,0,0xfc,1,3,0x78,1,0x78,0x7c,0xa1,0,0,0);
  FUN_005fa880(0,0,0xfc,1,4,0x79,1,0xff,0xff,0xff,0,0,0);
  uVar7 = 0x1b;
  uVar6 = 0xffffffff;
  uVar5 = 0x4a;
  uVar4 = 0x4b;
  uVar3 = 0x48;
  uVar2 = FUN_00630f40("SID_GENERIC_CANCEL",0x48,0x4b,0x4a,0xffffffff,0x1b);
  FUN_005f9de0(0,5,0x30d4de,0x8a,0x7f,2,uVar2,uVar3,uVar4,uVar5,uVar6,uVar7);
  uVar7 = 0xd;
  uVar6 = 0xffffffff;
  uVar5 = 0x4a;
  uVar4 = 0x4b;
  uVar3 = 0x48;
  uVar2 = FUN_00630f40("SID_GENERIC_OK",0x48,0x4b,0x4a,0xffffffff,0xd);
  FUN_005f9de0(0,4,0x30d4e5,0x26,0x7f,2,uVar2,uVar3,uVar4,uVar5,uVar6,uVar7);
  return;
}

