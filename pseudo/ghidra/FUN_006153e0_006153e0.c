// FUN_006153e0  006153e0

void __fastcall FUN_006153e0(int *param_1)

{
  int iVar1;
  int iVar2;
  int local_c;
  int local_8;
  
  local_8 = 0;
  iVar1 = (**(code **)(*param_1 + 0xbc))();
  if (iVar1 != 0) {
    iVar1 = (**(code **)(*param_1 + 0xb8))();
    iVar2 = (**(code **)(*param_1 + 0xbc))();
    if (iVar2 < iVar1) {
      (**(code **)(*(int *)param_1[0x14] + 0xcc))();
      (**(code **)(*(int *)param_1[0x15] + 0xcc))();
      (**(code **)(*(int *)param_1[0x16] + 0x74))();
    }
    else {
      (**(code **)(*(int *)param_1[0x14] + 0xd0))();
      (**(code **)(*(int *)param_1[0x15] + 0xd0))();
      (**(code **)(*(int *)param_1[0x16] + 0x70))();
    }
    for (local_c = param_1[0x1b]; iVar1 = (**(code **)(*param_1 + 0xbc))(),
        local_c < iVar1 + param_1[0x1b]; local_c = local_c + 1) {
      iVar1 = (**(code **)(*param_1 + 0xb8))();
      if (local_c < iVar1) {
        (**(code **)(*param_1 + 0xd4))(local_c,local_8);
      }
      else {
        (**(code **)(*param_1 + 0xd8))(local_8);
      }
      local_8 = local_8 + 1;
    }
  }
  return;
}

