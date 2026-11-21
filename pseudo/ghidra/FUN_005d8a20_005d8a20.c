// FUN_005d8a20  005d8a20

void __thiscall FUN_005d8a20(int param_1,char param_2,int param_3,char param_4)

{
  char cVar1;
  void *pvVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 local_44;
  undefined4 local_38;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a919a;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (param_2 == '\0') {
    if (*(int *)(param_1 + 0x6c) != 0) {
      (**(code **)(**(int **)(param_1 + 0x6c) + 0x70))(DAT_00781870 ^ (uint)&stack0xfffffffc);
      FUN_005f5d50(0);
      if (*(undefined4 **)(param_1 + 0x6c) != (undefined4 *)0x0) {
        (**(code **)**(undefined4 **)(param_1 + 0x6c))(1);
      }
      *(undefined4 *)(param_1 + 0x6c) = 0;
    }
    FUN_005da480();
    FUN_005f2ba0(0x1399);
  }
  else {
    if (param_3 == -1) {
      FUN_005e9f20("p != -1","..\\Casino\\casinoroom.cpp",0x1cb);
    }
    if (*(int *)(param_1 + 0x6c) == 0) {
      pvVar2 = operator_new(0x184);
      local_8 = 0;
      if (pvVar2 == (void *)0x0) {
        local_38 = 0;
      }
      else {
        local_38 = FUN_005f5bf0();
      }
      local_8 = 0xffffffff;
      *(undefined4 *)(param_1 + 0x6c) = local_38;
    }
    piVar3 = (int *)FUN_00646f80();
    piVar4 = (int *)FUN_00646f80();
    uVar8 = 0xffffffff;
    uVar7 = 1000;
    iVar5 = (**(code **)(*piVar3 + 0x54))(1000,0xffffffff);
    iVar5 = iVar5 + -0x31;
    iVar6 = (**(code **)(*piVar4 + 0x4c))(iVar5);
    FUN_005eae80(0x417,iVar6 + -0x1e,iVar5,uVar7,uVar8);
    (**(code **)(**(int **)(param_1 + 0x6c) + 0x74))();
    *(undefined4 *)(*(int *)(param_1 + 0x6c) + 0x178) = 6;
    pvVar2 = operator_new(0x1c);
    local_8 = 1;
    if (pvVar2 == (void *)0x0) {
      local_44 = 0;
    }
    else {
      local_44 = FUN_00600a70(0);
    }
    local_8 = 0xffffffff;
    FUN_005f5d50(local_44);
    if (param_4 == '\0') {
      FUN_005da480();
      FUN_005f2ba0(0x1399);
    }
    else {
      FUN_005da460();
      cVar1 = FUN_005da830();
      if (cVar1 == '\0') {
        FUN_005f2b20(0x1399,1);
      }
    }
  }
  ExceptionList = local_10;
  return;
}

