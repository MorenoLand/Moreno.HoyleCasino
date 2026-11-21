// FUN_00674270  00674270

void __fastcall FUN_00674270(int *param_1)

{
  char cVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  piVar2 = (int *)FUN_005fb720(0);
  (**(code **)(*piVar2 + 0xc4))();
  piVar2 = (int *)FUN_005fb720(0);
  uVar3 = (**(code **)(*param_1 + 0xb8))(1);
  cVar1 = (**(code **)(*piVar2 + 0xf0))(uVar3);
  if (cVar1 == '\0') {
    FUN_005fb5a0(0,&PTR_006b27f8);
    FUN_005fb5a0(1,&PTR_006b27f8);
    FUN_005fb5a0(4,&PTR_006b27f8);
  }
  else {
    uVar4 = 1;
    uVar3 = (**(code **)(*param_1 + 0xb8))(1);
    FUN_005fb720(0);
    FUN_00628f40(uVar3,uVar4);
  }
  uVar3 = (**(code **)(*param_1 + 0xb8))();
  FUN_005ee710(uVar3);
  return;
}

