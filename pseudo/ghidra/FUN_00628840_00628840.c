// FUN_00628840  00628840

void __fastcall FUN_00628840(int *param_1)

{
  int iVar1;
  int iVar2;
  
  FUN_00614f40();
  iVar1 = (**(code **)(*param_1 + 0xb8))();
  iVar2 = (**(code **)(*param_1 + 0xbc))();
  if (iVar1 <= iVar2) {
    (**(code **)(*(int *)param_1[0x16] + 0x70))();
  }
  (**(code **)(*param_1 + 0xd0))();
  return;
}

