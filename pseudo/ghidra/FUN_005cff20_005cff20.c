// FUN_005cff20  005cff20

void __thiscall FUN_005cff20(int param_1,undefined4 param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  void *pvVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 local_2c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a8d4c;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *(undefined4 *)(param_1 + 0x1c4) = param_2;
  uVar9 = 3;
  uVar6 = 0;
  uVar5 = 0x49;
  uVar2 = FUN_00630f40("SID_CASINO_CREDITEXTENDED",0x49,0,3,uVar1);
  FUN_005f73e0(uVar2,uVar5,uVar6,uVar9);
  FUN_005fa880(0,0,0xcc,1,2,0x98,1,0x78,0x7c,0xa1,0,0,0);
  FUN_005fa880(0,1,0xcc,1,2,0x99,1,0xff,0xff,0xff,0,0,0);
  uVar10 = 0xd;
  uVar7 = 0xffffffff;
  uVar9 = 0x4a;
  uVar6 = 0x4b;
  uVar5 = 0x48;
  uVar2 = FUN_00630f40("SID_GENERIC_OK",0x48,0x4b,0x4a,0xffffffff,0xd);
  FUN_005f9de0(0,0,0x30d4e5,0x3f,0xa3,1,uVar2,uVar5,uVar6,uVar9,uVar7,uVar10);
  uVar11 = 0xffffffff;
  uVar8 = 5;
  uVar10 = 3;
  uVar7 = 0x5d;
  uVar9 = 0x16;
  uVar6 = 0xf;
  uVar5 = 0xd2;
  uVar2 = 0x28;
  iVar3 = FUN_005d52e0(0x28,0xd2,0xf,0x16,0x5d,3,5,0xffffffff);
  FUN_005fa5b0(0,0,iVar3 + 0x10,uVar2,uVar5,uVar6,uVar9,uVar7,uVar10,uVar8,uVar11);
  uVar2 = FUN_005fa5b0(0,1,&PTR_006b27f8,0x28,0x6b,0xf,0x16,0x73,3,5,0xffffffff);
  *(undefined4 *)(param_1 + 0x1c0) = uVar2;
  pvVar4 = operator_new(0x184);
  local_8 = 0;
  if (pvVar4 == (void *)0x0) {
    local_2c = 0;
  }
  else {
    local_2c = FUN_005f5bf0();
  }
  local_8 = 0xffffffff;
  iVar3 = FUN_005d52e0();
  uVar2 = FUN_005f9ce0(local_2c,0,0x441,0,0,1,(int)*(char *)(iVar3 + 0x2a),0xff,0);
  *(undefined4 *)(param_1 + 0x1bc) = uVar2;
  ExceptionList = local_10;
  return;
}

