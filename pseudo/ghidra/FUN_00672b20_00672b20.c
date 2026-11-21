// FUN_00672b20  00672b20

void __thiscall FUN_00672b20(int *param_1,int param_2)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int local_10;
  
  if ((char)param_1[0x70] == '\0') {
    uVar8 = 0xd;
    uVar7 = 0xffffffff;
    uVar6 = 0x4a;
    uVar5 = 0x4b;
    uVar4 = 0x48;
    uVar1 = FUN_00630f40("SID_SHELL_DONE",0x48,0x4b,0x4a,0xffffffff,0xd);
    FUN_005f9de0(0,1,0x30d4e5,0x134,0x237,1,uVar1,uVar4,uVar5,uVar6,uVar7,uVar8);
    FUN_005f9de0(0,2,0x30d503,0x2f,0x237,1,&PTR_006b27f8,0xffffffff,0xffffffff,0xffffffff,0xffffffff
                 ,0);
    FUN_005f9de0(0,3,0x30d504,0xc,0x237,1,&PTR_006b27f8,0xffffffff,0xffffffff,0xffffffff,0xffffffff,
                 0);
    FUN_005f9ce0(0,4,0,0,0,1,0,0xff,0);
  }
  param_1[0x6f] = param_2;
  piVar2 = (int *)(**(code **)(*DAT_007947e0 + 0xe0))(param_2);
  iVar3 = (**(code **)(*piVar2 + 0x68))();
  memset(param_1 + 0x71,0,0x2c);
  param_1[0x7c] = 0;
  if (iVar3 != 0) {
    for (local_10 = 0;
        (local_10 < 10 &&
        (param_1[local_10 + 0x71] = *(int *)(iVar3 + local_10 * 4), param_1[local_10 + 0x71] != 0));
        local_10 = local_10 + 1) {
      param_1[0x7c] = param_1[0x7c] + 1;
    }
  }
  param_1[0x7d] = 0;
  if (param_1[0x7c] == 0) {
    (**(code **)(*param_1 + 0x18))(1);
  }
  else {
    if (param_1[0x7c] < 2) {
      piVar2 = (int *)FUN_005fb300(2);
      (**(code **)(*piVar2 + 0x70))();
      piVar2 = (int *)FUN_005fb300(3);
      (**(code **)(*piVar2 + 0x70))();
    }
    else {
      piVar2 = (int *)FUN_005fb300(2);
      (**(code **)(*piVar2 + 0xd0))();
      piVar2 = (int *)FUN_005fb300(2);
      (**(code **)(*piVar2 + 0x74))();
      piVar2 = (int *)FUN_005fb300(3);
      (**(code **)(*piVar2 + 0xcc))();
      piVar2 = (int *)FUN_005fb300(3);
      (**(code **)(*piVar2 + 0x74))();
    }
    iVar3 = param_1[0x71];
    FUN_005fb2b0(4);
    FUN_005eaf00(iVar3);
  }
  return;
}

