// FUN_0066f1a0  0066f1a0

void __fastcall FUN_0066f1a0(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  FUN_005eb570();
  uVar1 = (**(code **)(*param_1 + 0x54))();
  uVar1 = (**(code **)(*param_1 + 0x4c))(uVar1);
  (**(code **)(*(int *)param_1[0x7e] + 0x44))(uVar1);
  (**(code **)(*(int *)param_1[0x7e] + 0x74))();
  iVar2 = (**(code **)(*param_1 + 0x54))();
  uVar1 = (**(code **)(*param_1 + 0x4c))(iVar2 + 0xb);
  (**(code **)(*(int *)param_1[0x7f] + 0x44))(uVar1);
  (**(code **)(*(int *)param_1[0x7f] + 0x74))();
  if (param_1[0x80] == 0) {
    if (param_1[0x82] != 0) {
      iVar2 = (**(code **)(*param_1 + 0x54))();
      uVar1 = (**(code **)(*param_1 + 0x4c))(iVar2 + 0x2e);
      (**(code **)(*(int *)param_1[0x82] + 0x44))(uVar1);
      (**(code **)(*(int *)param_1[0x82] + 0x74))();
    }
  }
  else {
    iVar2 = (**(code **)(*param_1 + 0x54))();
    uVar1 = (**(code **)(*param_1 + 0x4c))(iVar2 + 0x2e);
    (**(code **)(*(int *)param_1[0x80] + 0x44))(uVar1);
    (**(code **)(*(int *)param_1[0x80] + 0x74))();
  }
  iVar2 = (**(code **)(*param_1 + 0x54))();
  iVar2 = (**(code **)(*param_1 + 0x4c))(iVar2 + 0x17c);
  (**(code **)(*(int *)param_1[0x81] + 0x44))(iVar2 + 0x186);
  (**(code **)(*(int *)param_1[0x81] + 0x74))();
  return;
}

