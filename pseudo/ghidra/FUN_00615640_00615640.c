// FUN_00615640  00615640

void __thiscall FUN_00615640(int *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int local_18;
  int local_14;
  int local_c;
  int local_8;
  
  cVar1 = FUN_00615160();
  if (cVar1 == '\0') {
    local_c = *(int *)(param_2 + 0xc);
    local_8 = (**(code **)(*(int *)param_1[0x16] + 0x54))();
  }
  else {
    local_c = *(int *)(param_2 + 8);
    local_8 = (**(code **)(*(int *)param_1[0x16] + 0x4c))();
  }
  if (local_c < local_8) {
    iVar2 = (**(code **)(*param_1 + 0xbc))();
    if (iVar2 < 2) {
      local_14 = 1;
    }
    else {
      local_14 = (**(code **)(*param_1 + 0xbc))();
      local_14 = local_14 + -1;
    }
    (**(code **)(*param_1 + 0xdc))(1,local_14);
  }
  else {
    iVar2 = (**(code **)(*param_1 + 0xbc))();
    if (iVar2 < 2) {
      local_18 = 1;
    }
    else {
      local_18 = (**(code **)(*param_1 + 0xbc))();
      local_18 = local_18 + -1;
    }
    (**(code **)(*param_1 + 0xdc))(0,local_18);
  }
  return;
}

