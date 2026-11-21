// FUN_005cb140  005cb140

void __thiscall FUN_005cb140(int *param_1,int param_2)

{
  char cVar1;
  void *pvVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int local_28;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a8ab2;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (*(char *)(param_2 + 4) == '\0') {
    if (*(int *)(param_2 + 0x18) == 3) {
      cVar1 = FUN_005eb6d0(param_2);
      if (cVar1 == '\0') {
        if (param_1[0x77] != 0) {
          (**(code **)(*(int *)param_1[0x77] + 0x70))();
          if ((undefined4 *)param_1[0x77] != (undefined4 *)0x0) {
            (*(code *)**(undefined4 **)param_1[0x77])(1);
          }
          param_1[0x77] = 0;
        }
      }
      else if (param_1[0x77] == 0) {
        pvVar2 = operator_new(0x1d4);
        local_8 = 0;
        if (pvVar2 == (void *)0x0) {
          local_28 = 0;
        }
        else {
          local_28 = FUN_005cd360();
        }
        local_8 = 0xffffffff;
        param_1[0x77] = local_28;
        uVar11 = 0xffffffff;
        uVar10 = 0x30;
        uVar9 = 2000;
        iVar3 = (**(code **)(*param_1 + 0x54))(2000,0x30,0xffffffff);
        iVar3 = iVar3 + -0xf;
        uVar4 = (**(code **)(*param_1 + 0x4c))(iVar3);
        uVar8 = 0xf;
        uVar7 = 0x32;
        uVar6 = 0x67;
        uVar5 = FUN_00630f40("SID_BETCONTROL_ERASEBET",0x67,0x32,0xf,uVar4);
        FUN_005ec8f0(uVar5,uVar6,uVar7,uVar8,uVar4,iVar3,uVar9,uVar10,uVar11);
        FUN_005ee8c0(0xff,0xff,0xcc);
        (**(code **)(*(int *)param_1[0x77] + 0x74))();
      }
    }
    FUN_005f4d00(param_2);
  }
  ExceptionList = local_10;
  return;
}

