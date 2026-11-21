// FUN_005fcd30  005fcd30

void __fastcall FUN_005fcd30(int *param_1)

{
  char cVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  uVar3 = FUN_006026d0();
  uVar3 = FUN_005f5400(uVar3);
  cVar1 = (**(code **)(*DAT_015e55e4 + 0x50))(uVar3);
  cVar2 = FUN_006026d0();
  if (cVar1 != cVar2) {
    if (cVar1 == '\0') {
      (**(code **)(*param_1 + 0xd0))();
    }
    else {
      (**(code **)(*param_1 + 0xcc))();
    }
  }
  FUN_00602500();
  iVar4 = FUN_005f5400();
  if (iVar4 == -2) {
    FUN_00603190(0,0,0);
  }
  else {
    if (param_1[0x7e] != 0) {
      uVar3 = (**(code **)(*param_1 + 0x54))();
      uVar3 = (**(code **)(*param_1 + 0x4c))(uVar3);
      (**(code **)(*(int *)param_1[0x7e] + 0x44))(uVar3);
      (**(code **)(*(int *)param_1[0x7e] + 0x74))();
    }
    if (param_1[0x7d] != 0) {
      iVar4 = (**(code **)(*param_1 + 0x54))();
      iVar4 = (**(code **)(*param_1 + 0x4c))(iVar4 + -1);
      iVar5 = FUN_005f5550();
      iVar6 = FUN_005f5550();
      (**(code **)(*(int *)param_1[0x7d] + 0x44))(((iVar4 + iVar5) - iVar6) + -10);
      (**(code **)(*(int *)param_1[0x7d] + 0x74))();
    }
    if (param_1[0x80] != 0) {
      iVar4 = (**(code **)(*param_1 + 0x54))();
      iVar4 = (**(code **)(*param_1 + 0x4c))(iVar4 + -1);
      iVar5 = FUN_005f5550();
      iVar6 = FUN_005f5550();
      (**(code **)(*(int *)param_1[0x80] + 0x44))(((iVar4 + iVar5) - iVar6) + -10);
      FUN_005ecd00(*(undefined4 *)(param_1[100] + 0x60),0xffffffff,
                   CONCAT12(DAT_0075ee1e,DAT_0075ee1c));
      (**(code **)(*(int *)param_1[0x80] + 0x74))();
    }
  }
  return;
}

