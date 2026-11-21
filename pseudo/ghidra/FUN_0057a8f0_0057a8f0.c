// FUN_0057a8f0  0057a8f0

void __fastcall FUN_0057a8f0(int param_1)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  void *pvVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 local_38;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a66fe;
  local_10 = ExceptionList;
  uVar2 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_005f83d0(0x4cb,0);
  uVar10 = 0;
  uVar8 = 0;
  uVar7 = 0x49;
  uVar3 = FUN_00630f40("SID_GENERIC_TUTORIAL",0x49,0,0,uVar2);
  FUN_005f73e0(uVar3,uVar7,uVar8,uVar10);
  FUN_005fa880(0,0,0x78,1,2,0x77,1,0x78,0x7c,0xa1,0,0,0);
  piVar4 = (int *)FUN_005fb630(0);
  (**(code **)(*piVar4 + 0x70))();
  FUN_005fa880(0,1,0x78,1,2,0x78,1,0xff,0xff,0xff,0,0,0);
  piVar4 = (int *)FUN_005fb630(1);
  (**(code **)(*piVar4 + 0x70))();
  uVar11 = 0;
  uVar9 = 0xffffffff;
  uVar10 = 0x4a;
  uVar8 = 0x4b;
  uVar7 = 0x48;
  uVar3 = FUN_00630f40("SID_TUTORIAL_HINT",0x48,0x4b,0x4a,0xffffffff,0);
  FUN_005f9de0(0,0,0x30d4de,0x14,0x2a,0x1f5,uVar3,uVar7,uVar8,uVar10,uVar9,uVar11);
  piVar4 = (int *)FUN_005fb300(0);
  (**(code **)(*piVar4 + 0x70))();
  uVar12 = 0;
  uVar11 = 0x14;
  uVar9 = 0xffffffff;
  uVar10 = 0xffffffff;
  uVar8 = 0x41;
  uVar7 = 0x23;
  uVar3 = FUN_00630f40("SID_TUTORIAL_PRACTICEMODE",0x23,0x41,0xffffffff,0xffffffff,0x14,0);
  FUN_005f9ef0(0,1,0x30d4c9,0xe,100,0x1f5,uVar3,uVar7,uVar8,uVar10,uVar9,uVar11,uVar12);
  piVar4 = (int *)FUN_005fb350(1);
  (**(code **)(*piVar4 + 0x70))();
  uVar3 = 0xffffffff;
  FUN_005de600(0xffffffff);
  cVar1 = FUN_005d5550(uVar3);
  if (cVar1 != '\0') {
    piVar4 = (int *)FUN_005fb350(1);
    (**(code **)(*piVar4 + 0xf4))();
  }
  FUN_005f9de0(0,2,0x444,0x68,3,0x1f5,&PTR_006b27f8,0xffffffff,0xffffffff,0xffffffff,0xffffffff,0);
  uVar11 = 0xffffffff;
  uVar9 = 0x11;
  uVar10 = 0x1f5;
  uVar8 = 0x80;
  uVar7 = 0xf;
  uVar3 = 0xf;
  iVar5 = FUN_005f8550(0xf,0xf,0x80,0x1f5,0x11,0xffffffff);
  FUN_005fa5b0(0,0,&PTR_006b27f8,0x2f,iVar5 + -0x32,uVar3,uVar7,uVar8,uVar10,uVar9,uVar11);
  piVar4 = (int *)FUN_005fb550(0);
  (**(code **)(*piVar4 + 0x70))();
  if (*(int *)(param_1 + 0x19e0) == 0) {
    pvVar6 = operator_new(0x1e0);
    local_8 = 0;
    if (pvVar6 == (void *)0x0) {
      local_38 = 0;
    }
    else {
      local_38 = FUN_0057c590();
    }
    local_8 = 0xffffffff;
    *(undefined4 *)(param_1 + 0x19e0) = local_38;
  }
  FUN_0057c800();
  ExceptionList = local_10;
  return;
}

